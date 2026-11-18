// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: WN_ISKM
// Functions: 22

// StaticClass @ 14a836f20

UClass * __cdecl UWN_ISKM_Profile::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_ISKM_Profile.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_ISKM",L"WN_ISKM_Profile",
               &Z_Registration_Info_UClass_UWN_ISKM_Profile.InnerSingleton,
               StaticRegisterNativesUWN_ISKM_Profile,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UWN_ISKM_Profile>,
               InternalVTableHelperCtorCaller<UWN_ISKM_Profile>,local_res8,UDataAsset::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_ISKM_Profile.InnerSingleton;
}

// UWN_ISKM_Profile @ 14a83f420

UWN_ISKM_Profile * __thiscall
UWN_ISKM_Profile::UWN_ISKM_Profile(UWN_ISKM_Profile *this,FVTableHelper *param_1)

{
  undefined1 *this_00;
  
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this_00 = &(this->SkeletonInfo).Skeleton.SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UWN_ISKM_Profile__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->SkeletonInfo).Skeleton.SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->SkeletonInfo).Skeleton.SoftObjectPtr = 0;
  *(undefined8 *)&(this->SkeletonInfo).Skeleton.SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SkeletonInfo).Skeleton.SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->SkeletonInfo).NumBonesAndSockets = 0;
  (this->SkeletonInfo).NumBones = 0;
  (this->SkeletonInfo).NumSockets = 0;
  (this->SkeletonInfo).SocketInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkeletonInfo).SocketInfos.ArrayNum = 0;
  (this->SkeletonInfo).SocketInfos.ArrayMax = 0;
  this->NumAnimFrames = 0;
  this->MaxAnimRadius = 100;
  (this->AnimationInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimationInfos).ArrayNum = 0;
  (this->AnimationInfos).ArrayMax = 0;
  (this->SkeletalMeshInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkeletalMeshInfos).ArrayNum = 0;
  (this->SkeletalMeshInfos).ArrayMax = 0;
  (this->GlobalFrameBoneTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GlobalFrameBoneTransforms).ArrayNum = 0;
  (this->GlobalFrameBoneTransforms).ArrayMax = 0;
  (this->BoneTransformBufferPtr).Object = (FWN_ISKM_BoneTransformBuffer *)0x0;
  (this->BoneTransformBufferPtr).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->MeshRenderDataPtrs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshRenderDataPtrs).ArrayNum = 0;
  (this->MeshRenderDataPtrs).ArrayMax = 0;
  FRenderCommandFence::FRenderCommandFence(&this->ReleaseResourcesFence);
  return this;
}

// UWN_ISKM_Profile @ 14a83f4e0

UWN_ISKM_Profile * __thiscall
UWN_ISKM_Profile::UWN_ISKM_Profile(UWN_ISKM_Profile *this,FObjectInitializer *param_1)

{
  undefined1 *this_00;
  
  UDataAsset::UDataAsset((UDataAsset *)this,param_1);
  this_00 = &(this->SkeletonInfo).Skeleton.SoftObjectPtr.field_0x18;
  this->_padding_ = (longlong)&___7UWN_ISKM_Profile__6B_;
  *(undefined8 *)this_00 = 0;
  *(undefined8 *)&(this->SkeletonInfo).Skeleton.SoftObjectPtr.field_0x20 = 0;
  *(undefined8 *)&(this->SkeletonInfo).Skeleton.SoftObjectPtr = 0;
  *(undefined8 *)&(this->SkeletonInfo).Skeleton.SoftObjectPtr.field_0x10 = 0;
  *(undefined8 *)&(this->SkeletonInfo).Skeleton.SoftObjectPtr.field_0x8 = 0;
  FUtf8String::Reset((FUtf8String *)this_00,0);
  (this->SkeletonInfo).NumBonesAndSockets = 0;
  (this->SkeletonInfo).NumBones = 0;
  (this->SkeletonInfo).NumSockets = 0;
  (this->SkeletonInfo).SocketInfos.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkeletonInfo).SocketInfos.ArrayNum = 0;
  (this->SkeletonInfo).SocketInfos.ArrayMax = 0;
  this->NumAnimFrames = 0;
  this->MaxAnimRadius = 100;
  (this->AnimationInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AnimationInfos).ArrayNum = 0;
  (this->AnimationInfos).ArrayMax = 0;
  (this->SkeletalMeshInfos).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SkeletalMeshInfos).ArrayNum = 0;
  (this->SkeletalMeshInfos).ArrayMax = 0;
  (this->GlobalFrameBoneTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->GlobalFrameBoneTransforms).ArrayNum = 0;
  (this->GlobalFrameBoneTransforms).ArrayMax = 0;
  (this->BoneTransformBufferPtr).Object = (FWN_ISKM_BoneTransformBuffer *)0x0;
  (this->BoneTransformBufferPtr).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->MeshRenderDataPtrs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->MeshRenderDataPtrs).ArrayNum = 0;
  (this->MeshRenderDataPtrs).ArrayMax = 0;
  FRenderCommandFence::FRenderCommandFence(&this->ReleaseResourcesFence);
  return this;
}

// ~UWN_ISKM_Profile @ 14a8400a0

void __thiscall UWN_ISKM_Profile::~UWN_ISKM_Profile(UWN_ISKM_Profile *this)

{
  FScriptContainerElement *pFVar1;
  void *pvVar2;
  
  this->_padding_ = (longlong)&___7UWN_ISKM_Profile__6B_;
  FRenderCommandFence::~FRenderCommandFence(&this->ReleaseResourcesFence);
  DestructItems<TSharedPtr<FWN_ISKM_MeshRenderData,1>,int>
            ((TSharedPtr<FWN_ISKM_MeshRenderData,1> *)
             (this->MeshRenderDataPtrs).AllocatorInstance.Data,(this->MeshRenderDataPtrs).ArrayNum);
  pFVar1 = (this->MeshRenderDataPtrs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->BoneTransformBufferPtr).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->GlobalFrameBoneTransforms).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FWN_ISKM_SkeletalMeshInfo,int>
            ((FWN_ISKM_SkeletalMeshInfo *)(this->SkeletalMeshInfos).AllocatorInstance.Data,
             (this->SkeletalMeshInfos).ArrayNum);
  pFVar1 = (this->SkeletalMeshInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FWN_ISKM_AnimationInfo,int>
            ((FWN_ISKM_AnimationInfo *)(this->AnimationInfos).AllocatorInstance.Data,
             (this->AnimationInfos).ArrayNum);
  pFVar1 = (this->AnimationInfos).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  DestructItems<FWN_ISKM_SocketInfo,int>
            ((FWN_ISKM_SocketInfo *)(this->SkeletonInfo).SocketInfos.AllocatorInstance.Data,
             (this->SkeletonInfo).SocketInfos.ArrayNum);
  pFVar1 = (this->SkeletonInfo).SocketInfos.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pvVar2 = *(void **)&(this->SkeletonInfo).Skeleton.SoftObjectPtr.field_0x18;
  if (pvVar2 != (void *)0x0) {
    FMemory::Free(pvVar2);
  }
  UDataAsset::~UDataAsset((UDataAsset *)this);
  return;
}

// operator() @ 14a8405f0

bool __thiscall
`UWN_ISKM_Profile::FindAnimationInfo'::__l2::<lambda_1>::operator()
          (void *this,FWN_ISKM_AnimationInfo *param_1)

{
  bool bVar1;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  FString local_28;
  TStringView<wchar_t> local_18;
  
  FSoftObjectPath::GetAssetName
            ((FSoftObjectPath *)&(param_1->Animation).SoftObjectPtr.field_0x8,&local_28);
  local_30 = local_28.Data.ArrayNum;
  local_38.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_2c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,&local_38,local_28.Data.ArrayNum,&local_2c);
    memcpy(local_38.Data,local_28.Data.AllocatorInstance.Data,(longlong)local_28.Data.ArrayNum * 2);
  }
  local_18.Size = local_30 + -1;
  if (local_30 == 0) {
    local_18.Size = 0;
  }
  local_18.DataPtr = (wchar_t *)local_38.Data;
  bVar1 = ::FName::Equals(*(FName *)this,&local_18);
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// operator() @ 14a8406e0

bool __thiscall
`UWN_ISKM_Profile::FindSkeletalMeshInfo'::__l2::<lambda_1>::operator()
          (void *this,FWN_ISKM_SkeletalMeshInfo *param_1)

{
  bool bVar1;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  FString local_28;
  TStringView<wchar_t> local_18;
  
  FSoftObjectPath::GetAssetName
            ((FSoftObjectPath *)&(param_1->SkeletalMesh).SoftObjectPtr.field_0x8,&local_28);
  local_30 = local_28.Data.ArrayNum;
  local_38.Data = (FScriptContainerElement *)0x0;
  if (local_28.Data.ArrayNum == 0) {
    local_2c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,local_28.Data.ArrayNum,0,&local_38,local_28.Data.ArrayNum,&local_2c);
    memcpy(local_38.Data,local_28.Data.AllocatorInstance.Data,(longlong)local_28.Data.ArrayNum * 2);
  }
  local_18.Size = local_30 + -1;
  if (local_30 == 0) {
    local_18.Size = 0;
  }
  local_18.DataPtr = (wchar_t *)local_38.Data;
  bVar1 = ::FName::Equals(*(FName *)this,&local_18);
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// BeginDestroy @ 14a843d50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UWN_ISKM_Profile::BeginDestroy(UWN_ISKM_Profile *this)

{
  code *pcVar1;
  bool bVar2;
  FRenderCommandList *this_00;
  FCommandList *this_01;
  FRenderCommandTag *pFVar3;
  wchar_t *pwVar4;
  undefined ***pppuVar5;
  ulonglong uVar6;
  undefined1 auStack_a8 [32];
  code *local_88 [2];
  undefined **local_78;
  UWN_ISKM_Profile *pUStack_70;
  undefined8 local_68;
  undefined ***local_60;
  undefined1 local_58 [16];
  undefined **local_48;
  UWN_ISKM_Profile *pUStack_40;
  undefined8 local_38;
  undefined ***local_30;
  byte local_28;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  UObject::BeginDestroy((UObject *)this);
  bVar2 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar2) {
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                0x9d4c) <
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
       ) {
      _Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                           _thread_safe_static_guard_0__);
      if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
          _thread_safe_static_guard_0__ == -1) {
        pwVar4 = FCommandLine::Get();
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
             FParse::Param(pwVar4,L"nullrhi");
        _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                             _thread_safe_static_guard_0__);
      }
    }
    if (((PRIVATE_GIsRunningCommandlet == false) || (PRIVATE_GAllowCommandletRendering != false)) &&
       (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline ==
        false)) {
      local_60 = (undefined ***)0x0;
      local_78 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UWN_ISKM_Profile::BeginDestroy'::`8'::<lambda_1>,1,0>::
                  _vftable_;
      local_88[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UWN_ISKM_Profile::BeginDestroy'::__l8::<lambda_1>,void,FRHICommandListImmediate_&>
                    ::Call;
      pUStack_70 = this;
      this_00 = FRenderCommandList::GetInstanceTLS();
      if (this_00 == (FRenderCommandList *)0x0) {
        FRenderThreadCommandPipe::
        Enqueue<TRenderCommandTag<_UWN_ISKM_Profile::BeginDestroy_::__l8::TSTR_ReleaseResoruces246>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                  ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_88);
      }
      else {
        this_01 = FRenderCommandList::GetRenderThread(this_00);
        local_58._0_8_ = local_88[0];
        local_30 = local_60;
        local_48 = local_78;
        pUStack_40 = pUStack_70;
        local_38 = local_68;
        local_88[0] = (code *)0x0;
        local_28 = 2;
        pFVar3 = (FRenderCommandTag *)
                 TRenderCommandTag<`UWN_ISKM_Profile::BeginDestroy'::__l8::TSTR_ReleaseResoruces246>
                 ::Get();
        UE::RenderCommandPipe::FCommandList::Enqueue
                  (this_01,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                            *)local_58,pFVar3);
        uVar6 = (ulonglong)local_28;
        if (2 < uVar6) {
          bVar2 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L"");
          if (bVar2) {
            pcVar1 = (code *)swi(3);
            (*pcVar1)();
            return;
          }
        }
        if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar6] ==
            UE::Core::Private::
            TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct)
        {
          if ((code *)local_58._0_8_ != (code *)0x0) {
            pppuVar5 = (undefined ***)(local_58 + 0x10);
            if (local_30 != (undefined ***)0x0) {
              pppuVar5 = local_30;
            }
            (*(code *)(*pppuVar5)[2])();
          }
        }
        else {
          (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                      ::__l2::Destructors)[uVar6])(local_58);
        }
      }
      if (local_88[0] != (code *)0x0) {
        pppuVar5 = &local_78;
        if (local_60 != (undefined ***)0x0) {
          pppuVar5 = local_60;
        }
        (*(code *)(*pppuVar5)[2])();
      }
      FRenderCommandFence::BeginFence(&this->ReleaseResourcesFence,RenderThread);
    }
  }
  return;
}

// FindAnimationInfo @ 14a848720

FWN_ISKM_AnimationInfo * __thiscall
UWN_ISKM_Profile::FindAnimationInfo(UWN_ISKM_Profile *this,UAnimSequenceBase *param_1)

{
  FWN_ISKM_AnimationInfo *pFVar1;
  
  pFVar1 = TArray<FWN_ISKM_AnimationInfo,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_UWN_ISKM_Profile::FindAnimationInfo_::__l2::<lambda_1>_>
                     (&this->AnimationInfos,(<lambda_1>)param_1);
  return pFVar1;
}

// FindAnimationInfo @ 14a848730

FWN_ISKM_AnimationInfo * __thiscall
UWN_ISKM_Profile::FindAnimationInfo(UWN_ISKM_Profile *this,FName param_1)

{
  bool bVar1;
  FWN_ISKM_AnimationInfo *pFVar2;
  FWN_ISKM_AnimationInfo *pFVar3;
  FName local_res8;
  
  pFVar2 = (FWN_ISKM_AnimationInfo *)(this->AnimationInfos).AllocatorInstance.Data;
  pFVar3 = pFVar2 + (this->AnimationInfos).ArrayNum;
  local_res8 = param_1;
  while( true ) {
    if (pFVar2 == pFVar3) {
      return (FWN_ISKM_AnimationInfo *)0x0;
    }
    bVar1 = `UWN_ISKM_Profile::FindAnimationInfo'::__l2::<lambda_1>::operator()(&local_res8,pFVar2);
    if (bVar1) break;
    pFVar2 = pFVar2 + 1;
  }
  return pFVar2;
}

// FindISKMMeshRenderDataPtr @ 14a8487a0

TSharedPtr<FWN_ISKM_MeshRenderData,1> * __thiscall
UWN_ISKM_Profile::FindISKMMeshRenderDataPtr
          (UWN_ISKM_Profile *this,TSharedPtr<FWN_ISKM_MeshRenderData,1> *__return_storage_ptr__,
          USkeletalMesh *param_1)

{
  FScriptContainerElement *pFVar1;
  FWN_ISKM_MeshRenderData *pFVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  TSharedPtr<FWN_ISKM_MeshRenderData,1> *pTVar6;
  TReferenceControllerBase<1> *pTVar7;
  uint uVar8;
  
  pTVar7 = (TReferenceControllerBase<1> *)0x0;
  uVar5 = TArray<FWN_ISKM_SkeletalMeshInfo,TSizedDefaultAllocator<32>_>::
          FindLastByPredicate<_UWN_ISKM_Profile::FindISKMMeshRenderDataPtr_::__l2::<lambda_1>_>
                    (&this->SkeletalMeshInfos,(<lambda_1>)param_1,(this->SkeletalMeshInfos).ArrayNum
                    );
  if (uVar5 == 0xffffffff) {
    __return_storage_ptr__->Object = (FWN_ISKM_MeshRenderData *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  else {
    uVar8 = 0;
    if ((int)uVar5 < (this->MeshRenderDataPtrs).ArrayNum) {
      uVar8 = ~uVar5 >> 0x1f;
    }
    if (uVar8 == 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pTVar6 = (TSharedPtr<FWN_ISKM_MeshRenderData,1> *)(*pcVar3)();
        return pTVar6;
      }
    }
    pFVar1 = (this->MeshRenderDataPtrs).AllocatorInstance.Data;
    pFVar2 = *(FWN_ISKM_MeshRenderData **)(pFVar1 + (longlong)(int)uVar5 * 0x10);
    pTVar7 = *(TReferenceControllerBase<1> **)(pFVar1 + (longlong)(int)uVar5 * 0x10 + 8);
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
    __return_storage_ptr__->Object = pFVar2;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar7;
    if (pTVar7 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
      UNLOCK();
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar7);
  return __return_storage_ptr__;
}

// FindSkeletalMeshInfo @ 14a848880

FWN_ISKM_SkeletalMeshInfo * __thiscall
UWN_ISKM_Profile::FindSkeletalMeshInfo(UWN_ISKM_Profile *this,USkeletalMesh *param_1)

{
  FWN_ISKM_SkeletalMeshInfo *pFVar1;
  
  pFVar1 = TArray<FWN_ISKM_SkeletalMeshInfo,TSizedDefaultAllocator<32>_>::
           FindByPredicate<_UWN_ISKM_Profile::FindSkeletalMeshInfo_::__l2::<lambda_1>_>
                     (&this->SkeletalMeshInfos,(<lambda_1>)param_1);
  return pFVar1;
}

// FindSkeletalMeshInfo @ 14a8488a0

FWN_ISKM_SkeletalMeshInfo * __thiscall
UWN_ISKM_Profile::FindSkeletalMeshInfo(UWN_ISKM_Profile *this,FName param_1)

{
  FWN_ISKM_SkeletalMeshInfo *pFVar1;
  bool bVar2;
  FWN_ISKM_SkeletalMeshInfo *pFVar3;
  FName local_res8;
  
  pFVar3 = (FWN_ISKM_SkeletalMeshInfo *)(this->SkeletalMeshInfos).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (this->SkeletalMeshInfos).ArrayNum;
  local_res8 = param_1;
  while( true ) {
    if (pFVar3 == pFVar1) {
      return (FWN_ISKM_SkeletalMeshInfo *)0x0;
    }
    bVar2 = `UWN_ISKM_Profile::FindSkeletalMeshInfo'::__l2::<lambda_1>::operator()
                      (&local_res8,pFVar3);
    if (bVar2) break;
    pFVar3 = pFVar3 + 1;
  }
  return pFVar3;
}

// FinishDestroy @ 14a848910

void __thiscall UWN_ISKM_Profile::FinishDestroy(UWN_ISKM_Profile *this)

{
  int *piVar1;
  TSharedPtr<FWN_ISKM_BoneTransformBuffer,1> *pTVar2;
  TArray<TSharedPtr<FWN_ISKM_MeshRenderData,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  int iVar4;
  FWN_ISKM_BoneTransformBuffer *pFVar5;
  FStaticMeshVertexDataInterface *pFVar6;
  FScriptContainerElement *pFVar7;
  FScriptContainerElement *pFVar8;
  undefined1 local_res8 [8];
  longlong local_38;
  FSharedReferencer<1> FStack_30;
  undefined8 local_28;
  FSharedReferencer<1> FStack_20;
  
  UObject::FinishDestroy((UObject *)this);
  pTVar2 = &this->BoneTransformBufferPtr;
  pFVar5 = pTVar2->Object;
  if (pFVar5 != (FWN_ISKM_BoneTransformBuffer *)0x0) {
    pFVar6 = pFVar5->DataInterface;
    if (pFVar6 != (FStaticMeshVertexDataInterface *)0x0) {
      (**(code **)*pFVar6)(pFVar6,1);
      pFVar5->DataInterface = (FStaticMeshVertexDataInterface *)0x0;
    }
    local_38 = 0;
    FStack_30.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    if (pTVar2 != (TSharedPtr<FWN_ISKM_BoneTransformBuffer,1> *)&local_38) {
      pTVar2->Object = (FWN_ISKM_BoneTransformBuffer *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->BoneTransformBufferPtr).SharedReferenceCount,&FStack_30);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FStack_30.ReferenceController);
  }
  pTVar3 = &this->MeshRenderDataPtrs;
  iVar4 = (this->MeshRenderDataPtrs).ArrayNum;
  pFVar7 = (pTVar3->AllocatorInstance).Data;
  pFVar8 = pFVar7 + (longlong)iVar4 * 0x10;
  while( true ) {
    if ((this->MeshRenderDataPtrs).ArrayNum != iVar4) {
      `TCheckedPointerIterator<TSharedPtr<FWN_ISKM_MeshRenderData,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar7 == pFVar8) break;
    if (*(FWN_ISKM_MeshRenderData **)pFVar7 != (FWN_ISKM_MeshRenderData *)0x0) {
      FWN_ISKM_MeshRenderData::DeinitBoneWeightBuffer(*(FWN_ISKM_MeshRenderData **)pFVar7);
      local_28 = 0;
      FStack_20.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pFVar7 != (FScriptContainerElement *)&local_28) {
        *(undefined8 *)pFVar7 = 0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  ((FSharedReferencer<1> *)(pFVar7 + 8),&FStack_20);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_20.ReferenceController);
    }
    pFVar7 = pFVar7 + 0x10;
  }
  DestructItems<TSharedPtr<FWN_ISKM_MeshRenderData,1>,int>
            ((TSharedPtr<FWN_ISKM_MeshRenderData,1> *)(pTVar3->AllocatorInstance).Data,
             (this->MeshRenderDataPtrs).ArrayNum);
  piVar1 = &(this->MeshRenderDataPtrs).ArrayMax;
  (this->MeshRenderDataPtrs).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,&pTVar3->AllocatorInstance,0,piVar1);
  }
  return;
}

// GetPrivateStaticClass @ 14a84b380

UClass * __cdecl UWN_ISKM_Profile::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UWN_ISKM_Profile.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/WN_ISKM",L"WN_ISKM_Profile",
               &Z_Registration_Info_UClass_UWN_ISKM_Profile.InnerSingleton,
               StaticRegisterNativesUWN_ISKM_Profile,0xd8,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UWN_ISKM_Profile>,
               InternalVTableHelperCtorCaller<UWN_ISKM_Profile>,local_res8,UDataAsset::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UWN_ISKM_Profile.InnerSingleton;
}

// InitRenderResources @ 14a84f8d0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetLoadAction": Some values do not have unique names */
/* WARNING: Enum "ERenderTargetStoreAction": Some values do not have unique names */

void __thiscall
UWN_ISKM_Profile::InitRenderResources(UWN_ISKM_Profile *this,FRHICommandListBase *param_1)

{
  longlong *plVar1;
  int iVar2;
  FWN_ISKM_BoneTransformBuffer *pFVar3;
  FScriptContainerElement *pFVar4;
  FWN_ISKM_MeshRenderData *this_00;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  UObject *pUVar8;
  UClass *pUVar9;
  FSkeletalMeshRenderData *pFVar10;
  longlong *plVar11;
  FScriptContainerElement *pFVar12;
  longlong *plVar13;
  longlong lVar14;
  uint uVar15;
  undefined1 local_res8 [8];
  longlong local_res18;
  
  bVar6 = IsInRenderingThread();
  if ((!bVar6) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsInRenderingThread()",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_Profile.cpp"
                         ,0xa5,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (((this->BoneTransformBufferPtr).Object == (FWN_ISKM_BoneTransformBuffer *)0x0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  pFVar3 = (this->BoneTransformBufferPtr).Object;
  (**(code **)(pFVar3->_padding_ + 0x18))(pFVar3,param_1);
  iVar2 = (this->SkeletalMeshInfos).ArrayNum;
  local_res18 = (longlong)iVar2;
  if ((iVar2 != (this->MeshRenderDataPtrs).ArrayNum) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("numSKMs == MeshRenderDataPtrs.Num()",
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_Profile.cpp"
                         ,0xaa,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar15 = 0;
  if (0 < iVar2) {
    lVar14 = 0;
    do {
      uVar7 = 0;
      if ((int)uVar15 < (this->SkeletalMeshInfos).ArrayNum) {
        uVar7 = ~uVar15 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar4 = (this->SkeletalMeshInfos).AllocatorInstance.Data;
      uVar7 = 0;
      if ((int)uVar15 < (this->MeshRenderDataPtrs).ArrayNum) {
        uVar7 = ~uVar15 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      pFVar12 = (this->MeshRenderDataPtrs).AllocatorInstance.Data + lVar14;
      if (*(longlong *)pFVar12 != 0) {
        this_00 = *(FWN_ISKM_MeshRenderData **)pFVar12;
        pUVar8 = TPersistentObjectPtr<FSoftObjectPath>::Get
                           ((TPersistentObjectPtr<FSoftObjectPath> *)
                            (pFVar4 + (longlong)(int)uVar15 * 0x48));
        if (pUVar8 == (UObject *)0x0) {
LAB_14a84faa1:
          pUVar8 = (UObject *)0x0;
        }
        else {
          pUVar9 = Z_Construct_UClass_USkeletalMesh_NoRegister();
          iVar2 = (int)pUVar9->_padding_;
          if ((*(int *)(*(longlong *)&pUVar8->field_0x10 + 0x38) < iVar2) ||
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)&pUVar8->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
              &pUVar9->_padding_)) goto LAB_14a84faa1;
        }
        pFVar10 = (FSkeletalMeshRenderData *)(**(code **)(*(longlong *)pUVar8 + 0x398))(pUVar8);
        FWN_ISKM_MeshRenderData::FillVertexFactory(this_00,param_1,pFVar10);
        if ((*(longlong *)pFVar12 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        plVar11 = *(longlong **)pFVar12;
        bVar6 = IsInRenderingThread();
        if ((!bVar6) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsInRenderingThread()",
                               "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_RenderResources.cpp"
                               ,0x23a,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        plVar1 = plVar11 + 0x178;
        iVar2 = (int)*plVar1;
        plVar13 = plVar11 + (longlong)iVar2 * 0x2f;
        while( true ) {
          if ((int)*plVar1 != iVar2) {
            local_res8[0] = 0;
            `TCheckedPointerIterator<FWN_ISKM_MeshRenderData::FWN_ISKM_MeshLODData,int,0>::
            operator!='::__l2::<lambda_1>::operator()(local_res8);
          }
          if (plVar11 == plVar13) break;
          (**(code **)(*plVar11 + 0x18))(plVar11,param_1);
          (**(code **)(plVar11[6] + 0x18))(plVar11 + 6,param_1);
          plVar11 = plVar11 + 0x2f;
        }
      }
      uVar15 = uVar15 + 1;
      lVar14 = lVar14 + 0x10;
      local_res18 = local_res18 + -1;
    } while (local_res18 != 0);
  }
  return;
}

// IsReadyForFinishDestroy @ 14a850120

bool __thiscall UWN_ISKM_Profile::IsReadyForFinishDestroy(UWN_ISKM_Profile *this)

{
  bool bVar1;
  
  bVar1 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar1) {
    bVar1 = FRenderCommandFence::IsFenceComplete(&this->ReleaseResourcesFence);
    if (!bVar1) {
      return false;
    }
  }
  return true;
}

// PostLoad @ 14a8509e0

void __thiscall UWN_ISKM_Profile::PostLoad(UWN_ISKM_Profile *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  uint uVar7;
  longlong lVar8;
  longlong lVar9;
  TPersistentObjectPtr<FSoftObjectPath> *this_00;
  ForAnyElementType local_18;
  undefined8 local_10;
  
  UObject::PostLoad((UObject *)this);
  pUVar5 = TPersistentObjectPtr<FSoftObjectPath>::Get
                     ((TPersistentObjectPtr<FSoftObjectPath> *)&this->SkeletonInfo);
  if (pUVar5 == (UObject *)0x0) {
    if (*(longlong *)&(this->SkeletonInfo).Skeleton.SoftObjectPtr.field_0x8 == 0) {
      return;
    }
    FSoftObjectPath::TryLoad
              ((FSoftObjectPath *)&(this->SkeletonInfo).Skeleton.SoftObjectPtr.field_0x8,
               (FUObjectSerializeContext *)0x0);
    pUVar5 = TPersistentObjectPtr<FSoftObjectPath>::Get
                       ((TPersistentObjectPtr<FSoftObjectPath> *)&this->SkeletonInfo);
  }
  if (pUVar5 != (UObject *)0x0) {
    pUVar6 = Z_Construct_UClass_USkeleton_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if (((iVar1 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
        ((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar6->_padding_)) &&
       (bVar3 = UObjectBaseUtility::IsTemplate
                          ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject),
       !bVar3)) {
      uVar4 = (this->SkeletalMeshInfos).ArrayNum;
      lVar9 = (longlong)(int)uVar4;
      local_18.Data = (FScriptContainerElement *)0x0;
      local_10 = 0;
      if ((int)uVar4 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar4);
      }
      if (0 < (int)uVar4) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar4,&local_18,0,(int *)((longlong)&local_10 + 4));
      }
      uVar7 = 0;
      if (0 < (int)uVar4) {
        lVar8 = 0;
        do {
          uVar4 = 0;
          if ((int)uVar7 < (this->SkeletalMeshInfos).ArrayNum) {
            uVar4 = ~uVar7 >> 0x1f;
          }
          if ((uVar4 == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            (*pcVar2)();
            return;
          }
          this_00 = (TPersistentObjectPtr<FSoftObjectPath> *)
                    ((this->SkeletalMeshInfos).AllocatorInstance.Data + lVar8);
          pUVar5 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
          if (pUVar5 == (UObject *)0x0) {
            if ((this_00->ObjectID).AssetPath.PackageName != (FName)0x0) {
              FSoftObjectPath::TryLoad(&this_00->ObjectID,(FUObjectSerializeContext *)0x0);
              pUVar5 = TPersistentObjectPtr<FSoftObjectPath>::Get(this_00);
              if (pUVar5 != (UObject *)0x0) goto LAB_14a850b61;
            }
          }
          else {
LAB_14a850b61:
            Z_Construct_UClass_USkeletalMesh_NoRegister();
          }
          uVar7 = uVar7 + 1;
          lVar8 = lVar8 + 0x48;
          lVar9 = lVar9 + -1;
        } while (lVar9 != 0);
      }
      if (local_18.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data);
      }
    }
  }
  return;
}

// ReleaseRenderResources @ 14a8527b0

void __thiscall UWN_ISKM_Profile::ReleaseRenderResources(UWN_ISKM_Profile *this)

{
  longlong *plVar1;
  int iVar2;
  int iVar3;
  FWN_ISKM_BoneTransformBuffer *pFVar4;
  code *pcVar5;
  bool bVar6;
  longlong *plVar7;
  longlong *plVar8;
  FScriptContainerElement *pFVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  bVar6 = IsInRenderingThread();
  if (!bVar6) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInRenderingThread()",
                       "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_Profile.cpp"
                       ,0xbb,L"");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
  pFVar4 = (this->BoneTransformBufferPtr).Object;
  if (pFVar4 != (FWN_ISKM_BoneTransformBuffer *)0x0) {
    (**(code **)(pFVar4->_padding_ + 0x20))();
  }
  iVar2 = (this->MeshRenderDataPtrs).ArrayNum;
  pFVar10 = (this->MeshRenderDataPtrs).AllocatorInstance.Data;
  pFVar9 = pFVar10 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((this->MeshRenderDataPtrs).ArrayNum != iVar2) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TSharedPtr<FWN_ISKM_MeshRenderData,1>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar10 == pFVar9) break;
    plVar7 = *(longlong **)pFVar10;
    if (plVar7 != (longlong *)0x0) {
      bVar6 = IsInRenderingThread();
      if (!bVar6) {
        bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsInRenderingThread()",
                           "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_RenderResources.cpp"
                           ,0x243,L"");
        if (bVar6) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
      }
      plVar1 = plVar7 + 0x178;
      iVar3 = (int)*plVar1;
      plVar8 = plVar7 + (longlong)iVar3 * 0x2f;
      while( true ) {
        if ((int)*plVar1 != iVar3) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<FWN_ISKM_MeshRenderData::FWN_ISKM_MeshLODData,int,0>::operator!='
          ::__l2::<lambda_1>::operator()(local_res10);
        }
        if (plVar7 == plVar8) break;
        (**(code **)(plVar7[6] + 0x20))(plVar7 + 6);
        (**(code **)(*plVar7 + 0x20))(plVar7);
        plVar7 = plVar7 + 0x2f;
      }
    }
    pFVar10 = pFVar10 + 0x10;
  }
  return;
}

// Serialize @ 14a853bb0

void __thiscall UWN_ISKM_Profile::Serialize(UWN_ISKM_Profile *this,FArchive *param_1)

{
  bool bVar1;
  FGuid local_18;
  
  UObject::Serialize((UObject *)this,param_1);
  bVar1 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar1) {
    if ((param_1->field_0x28 & 1) != 0) {
      local_18 = FWN_ISKM_ProfileVersion::GUID;
      UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_18);
    }
    (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FWN_ISKM_ProfileVersion::GUID);
    TArrayPrivateFriend::Serialize<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>
              (param_1,&this->GlobalFrameBoneTransforms);
  }
  return;
}

// Serialize @ 14a853c30

void __thiscall UWN_ISKM_Profile::Serialize(UWN_ISKM_Profile *this,FStructuredArchiveRecord param_1)

{
  bool bVar1;
  FArchive *pFVar2;
  FSlotBase local_res10 [3];
  FGuid local_18;
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar2 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UObject::Serialize((UObject *)this,pFVar2);
  bVar1 = UObjectBaseUtility::IsTemplate
                    ((UObjectBaseUtility *)this,RF_ArchetypeObject|RF_ClassDefaultObject);
  if (!bVar1) {
    if ((pFVar2->field_0x28 & 1) != 0) {
      local_18 = FWN_ISKM_ProfileVersion::GUID;
      UObjectBaseUtility::GetLinkerCustomVersion((UObjectBaseUtility *)this,&local_18);
    }
    (**(code **)(*(longlong *)pFVar2 + 0x230))(pFVar2,&FWN_ISKM_ProfileVersion::GUID);
    TArrayPrivateFriend::Serialize<UE::Math::TTransform<float>,TSizedDefaultAllocator<32>_>
              (pFVar2,&this->GlobalFrameBoneTransforms);
  }
  return;
}

// StaticRegisterNativesUWN_ISKM_Profile @ 14a855f40

void __cdecl UWN_ISKM_Profile::StaticRegisterNativesUWN_ISKM_Profile(void)

{
  return;
}

// __InitRenderDatas @ 14a8597f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall UWN_ISKM_Profile::__InitRenderDatas(UWN_ISKM_Profile *this)

{
  int *piVar1;
  TSharedPtr<FWN_ISKM_BoneTransformBuffer,1> *pTVar2;
  TArray<TSharedPtr<FWN_ISKM_MeshRenderData,1>,TSizedDefaultAllocator<32>_> *pTVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  uint uVar7;
  FRenderCommandList *pFVar8;
  FCommandList *pFVar9;
  FRenderCommandTag *pFVar10;
  TReferenceControllerBase<1> *pTVar11;
  USkeletalMesh *pUVar12;
  UClass *pUVar13;
  longlong lVar14;
  TReferenceControllerBase<1> *pTVar15;
  wchar_t *pwVar16;
  undefined ***pppuVar17;
  int iVar18;
  ulonglong uVar19;
  FScriptContainerElement *pFVar20;
  uint uVar21;
  FScriptContainerElement *pFVar22;
  FWN_ISKM_BoneTransformBuffer *pFVar23;
  UWN_ISKM_Profile *pUVar24;
  undefined1 auStackY_1e8 [32];
  undefined1 local_1a8 [8];
  UWN_ISKM_Profile *local_1a0;
  FWN_ISKM_BoneTransformBuffer *local_198;
  FSharedReferencer<1> FStack_190;
  longlong local_188;
  longlong local_180;
  int *local_178;
  TArray<TSharedPtr<FWN_ISKM_MeshRenderData,1>,TSizedDefaultAllocator<32>_> *local_170;
  longlong local_168;
  FSharedReferencer<1> FStack_160;
  undefined8 local_158;
  FSharedReferencer<1> FStack_150;
  undefined8 local_148;
  TReferenceControllerBase<1> *pTStack_140;
  TTransform<float> *local_138;
  int iStack_130;
  undefined4 uStack_12c;
  TArrayView<UE::Math::TTransform<float>,int> local_128;
  code *local_118 [2];
  undefined **local_108;
  UWN_ISKM_Profile *pUStack_100;
  undefined8 local_f8;
  undefined ***local_f0;
  code *local_e8 [2];
  undefined **local_d8;
  UWN_ISKM_Profile *pUStack_d0;
  undefined8 local_c8;
  undefined ***local_c0;
  undefined1 local_b8 [16];
  undefined **local_a8;
  UWN_ISKM_Profile *pUStack_a0;
  undefined8 local_98;
  undefined ***local_90;
  byte local_88;
  undefined1 local_78 [16];
  undefined **local_68;
  UWN_ISKM_Profile *pUStack_60;
  undefined8 local_58;
  undefined ***local_50;
  byte local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  local_1a0 = this;
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__)
     && (_Init_thread_header(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                              _thread_safe_static_guard_0__),
        `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::_thread_safe_static_guard_0__
        == -1)) {
    pwVar16 = FCommandLine::Get();
    `public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline =
         FParse::Param(pwVar16,L"nullrhi");
    _Init_thread_footer(&`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::
                         _thread_safe_static_guard_0__);
  }
  if ((PRIVATE_GIsRunningCommandlet != false) && (PRIVATE_GAllowCommandletRendering == false)) {
    return;
  }
  if (`public:_static_bool___cdecl_FApp::CanEverRender(void)'::__l2::bHasNullRHIOnCommandline !=
      false) {
    return;
  }
  if ((this->MeshRenderDataPtrs).ArrayNum != 0) {
    return;
  }
  pTVar2 = &this->BoneTransformBufferPtr;
  pTVar15 = (TReferenceControllerBase<1> *)0x0;
  pUVar24 = this;
  if (pTVar2->Object != (FWN_ISKM_BoneTransformBuffer *)0x0) {
    local_f0 = (undefined ***)0x0;
    local_108 = &UE::Core::Private::Function::
                 TFunction_OwnedObject<`UWN_ISKM_Profile::__InitRenderDatas'::`11'::<lambda_1>,1,0>
                 ::_vftable_;
    local_118[0] = UE::Core::Private::Function::
                   TFunctionRefCaller<`UWN_ISKM_Profile::__InitRenderDatas'::__l11::<lambda_1>,void,FRHICommandListImmediate_&>
                   ::Call;
    pUStack_100 = this;
    pFVar8 = FRenderCommandList::GetInstanceTLS();
    if (pFVar8 == (FRenderCommandList *)0x0) {
      FRenderThreadCommandPipe::
      Enqueue<TRenderCommandTag<_UWN_ISKM_Profile::__InitRenderDatas_::__l11::TSTR_ReleaseResoruces108>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_118);
    }
    else {
      pFVar9 = FRenderCommandList::GetRenderThread(pFVar8);
      local_b8._0_8_ = local_118[0];
      local_118[0] = (code *)0x0;
      local_90 = local_f0;
      local_a8 = local_108;
      pUStack_a0 = pUStack_100;
      local_98 = local_f8;
      local_88 = 2;
      pFVar10 = (FRenderCommandTag *)
                TRenderCommandTag<`UWN_ISKM_Profile::__InitRenderDatas'::__l11::TSTR_ReleaseResoruces108>
                ::Get();
      UE::RenderCommandPipe::FCommandList::Enqueue
                (pFVar9,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                         *)local_b8,pFVar10);
      uVar19 = (ulonglong)local_88;
      if ((2 < uVar19) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                             ,0xd4,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar19] ==
          UE::Core::Private::
          TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
        if ((code *)local_b8._0_8_ != (code *)0x0) {
          pppuVar17 = (undefined ***)(local_b8 + 0x10);
          if (local_90 != (undefined ***)0x0) {
            pppuVar17 = local_90;
          }
          (*(code *)(*pppuVar17)[2])();
        }
      }
      else {
        (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                    ::__l2::Destructors)[uVar19])(local_b8);
      }
    }
    if (local_118[0] != (code *)0x0) {
      pppuVar17 = &local_108;
      if (local_f0 != (undefined ***)0x0) {
        pppuVar17 = local_f0;
      }
      (*(code *)(*pppuVar17)[2])();
    }
    FlushRenderingCommands();
    if (pTVar2->Object != (FWN_ISKM_BoneTransformBuffer *)0x0) {
      FWN_ISKM_BoneTransformBuffer::DeallocBuffer(pTVar2->Object);
      local_168 = 0;
      FStack_160.ReferenceController = (TReferenceControllerBase<1> *)0x0;
      if (pTVar2 != (TSharedPtr<FWN_ISKM_BoneTransformBuffer,1> *)&local_168) {
        pTVar2->Object = (FWN_ISKM_BoneTransformBuffer *)0x0;
        SharedPointerInternals::FSharedReferencer<1>::operator=
                  (&(this->BoneTransformBufferPtr).SharedReferenceCount,&FStack_160);
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (FStack_160.ReferenceController);
    }
    pTVar3 = &this->MeshRenderDataPtrs;
    iVar18 = (this->MeshRenderDataPtrs).ArrayNum;
    pFVar20 = (pTVar3->AllocatorInstance).Data;
    pFVar22 = pFVar20 + (longlong)iVar18 * 0x10;
    while( true ) {
      if ((this->MeshRenderDataPtrs).ArrayNum != iVar18) {
        local_1a8[0] = 0;
        `TCheckedPointerIterator<TSharedPtr<FWN_ISKM_MeshRenderData,1>,int,0>::operator!='::__l2::
        <lambda_1>::operator()(local_1a8);
      }
      if (pFVar20 == pFVar22) break;
      if (*(longlong *)pFVar20 != 0) {
        FWN_ISKM_MeshRenderData::DeinitBoneWeightBuffer(*(FWN_ISKM_MeshRenderData **)pFVar20);
        local_158 = 0;
        FStack_150.ReferenceController = (TReferenceControllerBase<1> *)0x0;
        if (pFVar20 != (FScriptContainerElement *)&local_158) {
          *(longlong *)pFVar20 = 0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    ((FSharedReferencer<1> *)(pFVar20 + 8),&FStack_150);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_150.ReferenceController);
      }
      pFVar20 = pFVar20 + 0x10;
    }
    DestructItems<TSharedPtr<FWN_ISKM_MeshRenderData,1>,int>
              ((TSharedPtr<FWN_ISKM_MeshRenderData,1> *)(pTVar3->AllocatorInstance).Data,
               (this->MeshRenderDataPtrs).ArrayNum);
    piVar1 = &(this->MeshRenderDataPtrs).ArrayMax;
    (this->MeshRenderDataPtrs).ArrayNum = 0;
    pUVar24 = local_1a0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,0,&pTVar3->AllocatorInstance,0,piVar1);
      pUVar24 = local_1a0;
    }
  }
  if ((pUVar24->GlobalFrameBoneTransforms).ArrayNum == 0) {
    return;
  }
  pTVar11 = ::operator_new(0x48);
  if (pTVar11 == (TReferenceControllerBase<1> *)0x0) {
    local_198 = ___xmm_00000000000000000000000000000010;
    pFVar23 = (FWN_ISKM_BoneTransformBuffer *)&DAT_00000010;
    FStack_190.ReferenceController = _UNK_150651568;
    pTVar11 = pTVar15;
  }
  else {
    pTVar11->SharedReferenceCount = (atomic<int>)0x1;
    pTVar11->WeakReferenceCount = (atomic<int>)0x1;
    pTVar11->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_VFWN_ISKM_BoneTransformBuffer___00_SharedPointerInternals__6B_
    ;
    pTVar11[1]._padding_ = 0;
    pTVar11[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar11[2]._padding_ = 0;
    pTVar11[2].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[2].WeakReferenceCount = (atomic<int>)0x0;
    pTVar11[3]._padding_ = 0;
    pTVar11[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar11[4]._padding_ = 0;
    FRenderResource::FRenderResource((FRenderResource *)(pTVar11 + 1));
    pTVar11[3]._padding_ = 0;
    pTVar11[1]._padding_ = (longlong)&___7FWN_ISKM_BoneTransformBuffer__6B_;
    pFVar23 = (FWN_ISKM_BoneTransformBuffer *)(pTVar11 + 1);
    pTVar11[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar11[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar11[4]._padding_ = 0;
    if ((pFVar23 == (FWN_ISKM_BoneTransformBuffer *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("InObject != nullptr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x246,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    LOCK();
    pTVar11->SharedReferenceCount = (atomic<int>)((int)pTVar11->SharedReferenceCount + 1);
    UNLOCK();
    FStack_190.ReferenceController = pTVar11;
    local_198 = pFVar23;
  }
  if (pTVar2 != (TSharedPtr<FWN_ISKM_BoneTransformBuffer,1> *)&local_198) {
    pTVar2->Object = pFVar23;
    local_198 = (FWN_ISKM_BoneTransformBuffer *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->BoneTransformBufferPtr).SharedReferenceCount,&FStack_190);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_190.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar11);
  if ((pTVar2->Object == (FWN_ISKM_BoneTransformBuffer *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_138 = (TTransform<float> *)(pUVar24->GlobalFrameBoneTransforms).AllocatorInstance.Data;
  iVar18 = (pUVar24->GlobalFrameBoneTransforms).ArrayNum;
  pFVar23 = pTVar2->Object;
  if ((iVar18 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  local_128._12_4_ = uStack_12c;
  local_128.ArrayNum = iVar18;
  local_128.DataPtr = local_138;
  iStack_130 = iVar18;
  FWN_ISKM_BoneTransformBuffer::InitBuffer(pFVar23,&local_128);
  piVar1 = &(pUVar24->GlobalFrameBoneTransforms).ArrayMax;
  (pUVar24->GlobalFrameBoneTransforms).ArrayNum = 0;
  if (*piVar1 < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,0x10,0,&(pUVar24->GlobalFrameBoneTransforms).AllocatorInstance,0,piVar1);
  }
  uVar7 = (pUVar24->SkeletalMeshInfos).ArrayNum;
  pTVar3 = &pUVar24->MeshRenderDataPtrs;
  iVar18 = (pUVar24->MeshRenderDataPtrs).ArrayNum;
  piVar1 = &(pUVar24->MeshRenderDataPtrs).ArrayNum;
  local_178 = piVar1;
  local_170 = pTVar3;
  if (iVar18 < (int)uVar7) {
    iVar6 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x10,8,uVar7 - iVar18,&pTVar3->AllocatorInstance,piVar1,
                       &(pUVar24->MeshRenderDataPtrs).ArrayMax);
    memset((pTVar3->AllocatorInstance).Data + (longlong)iVar6 * 0x10,0,
           (longlong)(int)(uVar7 - iVar18) << 4);
  }
  else {
    if ((int)uVar7 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar7);
    }
    if ((int)uVar7 < iVar18) {
      iVar18 = iVar18 - uVar7;
      if (iVar18 < 0) {
        bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x458,
                           L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                          );
        if (bVar5) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
      }
      else if (iVar18 == 0) goto LAB_14a859d44;
      TArray<TSharedPtr<FWN_ISKM_MeshRenderData,1>,TSizedDefaultAllocator<32>_>::RemoveAtImpl
                (pTVar3,uVar7,iVar18);
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,8,&pTVar3->AllocatorInstance,*piVar1,&(pUVar24->MeshRenderDataPtrs).ArrayMax);
    }
  }
LAB_14a859d44:
  pUStack_d0 = pUVar24;
  local_180 = (longlong)(int)uVar7;
  if (0 < (int)uVar7) {
    local_188 = 0;
    do {
      uVar21 = (uint)pTVar15;
      uVar7 = 0;
      if ((int)uVar21 < (pUVar24->SkeletalMeshInfos).ArrayNum) {
        uVar7 = ~uVar21 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pUVar12 = (USkeletalMesh *)
                TPersistentObjectPtr<FSoftObjectPath>::Get
                          ((TPersistentObjectPtr<FSoftObjectPath> *)
                           ((pUVar24->SkeletalMeshInfos).AllocatorInstance.Data +
                           (longlong)(int)uVar21 * 0x48));
      if (pUVar12 == (USkeletalMesh *)0x0) {
LAB_14a859e0e:
        pUVar12 = (USkeletalMesh *)0x0;
      }
      else {
        pUVar13 = Z_Construct_UClass_USkeletalMesh_NoRegister();
        iVar18 = (int)pUVar13->_padding_;
        if ((*(int *)(pUVar12->_padding_ + 0x38) < iVar18) ||
           ((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar12->_padding_ + 0x30) + (longlong)iVar18 * 8) !=
            &pUVar13->_padding_)) goto LAB_14a859e0e;
      }
      lVar14 = (**(code **)(pUVar12->_padding_ + 0x398))(pUVar12);
      if ((lVar14 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("skm->GetResourceForRendering() != nullptr",
                             "C:\\Workspace\\ProjectDS\\Client\\Plugins\\WN_ISKM\\Source\\WN_ISKM\\Private\\WN_ISKM_Profile.cpp"
                             ,0x97,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar15 = ::operator_new(0xbd8);
      if (pTVar15 == (TReferenceControllerBase<1> *)0x0) {
        pTVar15 = (TReferenceControllerBase<1> *)0x0;
        pTVar11 = (TReferenceControllerBase<1> *)&DAT_00000010;
      }
      else {
        pTVar15->SharedReferenceCount = (atomic<int>)0x1;
        pTVar15->WeakReferenceCount = (atomic<int>)0x1;
        pTVar15->_padding_ =
             (longlong)
             &
             ___7__TIntrusiveReferenceController_VFWN_ISKM_MeshRenderData___00_SharedPointerInternals__6B_
        ;
        memset(pTVar15 + 1,0,0xbc0);
        pTVar11 = pTVar15 + 1;
        *(undefined4 *)&pTVar15[0xbd]._padding_ = 0;
        *(undefined4 *)((longlong)&pTVar15[0xbd]._padding_ + 4) = 8;
        if ((pTVar11 == (TReferenceControllerBase<1> *)0x0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("InObject != nullptr",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x246,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        LOCK();
        pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
      uVar7 = 0;
      if ((int)uVar21 < *local_178) {
        uVar7 = ~uVar21 >> 0x1f;
      }
      if ((uVar7 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      lVar14 = local_188;
      pFVar20 = (local_170->AllocatorInstance).Data;
      if (pTVar15 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar15->SharedReferenceCount = (atomic<int>)((int)pTVar15->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar22 = pFVar20 + local_188;
      local_148 = *(undefined8 *)pFVar22;
      pTStack_140 = *(TReferenceControllerBase<1> **)(pFVar22 + 8);
      pFVar20 = pFVar20 + local_188;
      *(TReferenceControllerBase<1> **)pFVar20 = pTVar11;
      *(TReferenceControllerBase<1> **)(pFVar20 + 8) = pTVar15;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_140);
      if ((pTVar11 == (TReferenceControllerBase<1> *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      FWN_ISKM_MeshRenderData::InitBoneWeightBuffer((FWN_ISKM_MeshRenderData *)pTVar11,pUVar12);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar15);
      local_188 = lVar14 + 0x10;
      pTVar15 = (TReferenceControllerBase<1> *)(ulonglong)(uVar21 + 1);
      local_180 = local_180 + -1;
      pUStack_d0 = local_1a0;
      pUVar24 = local_1a0;
    } while (local_180 != 0);
  }
  local_c0 = (undefined ***)0x0;
  local_d8 = &UE::Core::Private::Function::
              TFunction_OwnedObject<`UWN_ISKM_Profile::__InitRenderDatas'::`2'::<lambda_2>,1,0>::
              _vftable_;
  local_e8[0] = UE::Core::Private::Function::
                TFunctionRefCaller<`UWN_ISKM_Profile::__InitRenderDatas'::__l2::<lambda_2>,void,FRHICommandListImmediate_&>
                ::Call;
  pFVar8 = FRenderCommandList::GetInstanceTLS();
  if (pFVar8 == (FRenderCommandList *)0x0) {
    FRenderThreadCommandPipe::
    Enqueue<TRenderCommandTag<_UWN_ISKM_Profile::__InitRenderDatas_::__l2::TSTR_InitRenderResources157>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
              ((TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)> *)local_e8);
  }
  else {
    pFVar9 = FRenderCommandList::GetRenderThread(pFVar8);
    local_78._0_8_ = local_e8[0];
    local_e8[0] = (code *)0x0;
    local_50 = local_c0;
    local_68 = local_d8;
    pUStack_60 = pUStack_d0;
    local_58 = local_c8;
    local_48 = 2;
    pFVar10 = (FRenderCommandTag *)
              TRenderCommandTag<`UWN_ISKM_Profile::__InitRenderDatas'::__l2::TSTR_InitRenderResources157>
              ::Get();
    UE::RenderCommandPipe::FCommandList::Enqueue
              (pFVar9,(TVariant<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList_&)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>
                       *)local_78,pFVar10);
    uVar19 = (ulonglong)local_48;
    if ((2 < uVar19) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                           ,0xd4,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    if ((code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar19] ==
        UE::Core::Private::
        TDestructorCaller<TUniqueFunction<void___cdecl(FRHICommandListImmediate_&)>_>::Destruct) {
      if ((code *)local_78._0_8_ != (code *)0x0) {
        pppuVar17 = (undefined ***)(local_78 + 0x10);
        if (local_50 != (undefined ***)0x0) {
          pppuVar17 = local_50;
        }
        (*(code *)(*pppuVar17)[2])();
      }
    }
    else {
      (*(code *)(&`public:_static_void___cdecl_UE::Core::Private::TDestructorLookup<TUniqueFunction<void___cdecl(void)>,TUniqueFunction<void___cdecl(FRHICommandList&___ptr64)>,TUniqueFunction<void___cdecl(FRHICommandListImmediate&___ptr64)>_>::Destruct(unsigned___int64,void*___ptr64)'
                  ::__l2::Destructors)[uVar19])(local_78);
    }
  }
  if (local_e8[0] != (code *)0x0) {
    pppuVar17 = &local_d8;
    if (local_c0 != (undefined ***)0x0) {
      pppuVar17 = local_c0;
    }
    (*(code *)(*pppuVar17)[2])();
  }
  return;
}

