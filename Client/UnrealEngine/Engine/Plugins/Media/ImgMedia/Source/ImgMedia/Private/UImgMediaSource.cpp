// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ImgMedia
// Functions: 31

// StaticClass @ 14ea308d0

UClass * __cdecl UImgMediaSource::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UImgMediaSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ImgMedia",L"ImgMediaSource",
               &Z_Registration_Info_UClass_UImgMediaSource.InnerSingleton,
               StaticRegisterNativesUImgMediaSource,0x148,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UImgMediaSource>,InternalVTableHelperCtorCaller<UImgMediaSource>
               ,local_res8,UBaseMediaSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UImgMediaSource.InnerSingleton;
}

// UImgMediaSource @ 14ea395c0

UImgMediaSource * __thiscall
UImgMediaSource::UImgMediaSource(UImgMediaSource *this,FVTableHelper *param_1)

{
  TVector2<double> TVar1;
  
  UBaseMediaSource::UBaseMediaSource((UBaseMediaSource *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMediaOptions__;
  (this->ProxyOverride).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProxyOverride).Data.ArrayNum = 0;
  (this->ProxyOverride).Data.ArrayMax = 0;
  (this->StartTimecode).Hours = 0;
  (this->StartTimecode).Minutes = 0;
  (this->StartTimecode).Seconds = 0;
  (this->StartTimecode).Frames = 0;
  (this->StartTimecode).Subframe = 0.0;
  (this->StartTimecode).bDropFrameFormat = false;
  (this->FrameRateOverride).Numerator = 60000;
  (this->FrameRateOverride).Denominator = 1;
  (this->SourceColorSettings).EncodingOverride = MSE_None;
  (this->SourceColorSettings).ColorSpaceOverride = TCS_None;
  (this->SourceColorSettings).RedChromaticityCoordinate.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->SourceColorSettings).GreenChromaticityCoordinate.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->SourceColorSettings).BlueChromaticityCoordinate.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar1 = UE::Math::TVector2<double>::ZeroVector;
  (this->SourceColorSettings).ChromaticAdaptationMethod = TCAM_Bradford;
  (this->SourceColorSettings).WhiteChromaticityCoordinate.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)TVar1.field0_0x0;
  (this->SequencePath).Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SequencePath).Path.Data.ArrayNum = 0;
  (this->SequencePath).Path.Data.ArrayMax = 0;
  (this->MipMapInfo).Object = (FImgMediaMipMapInfo *)0x0;
  (this->MipMapInfo).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  (this->NativeSourceColorSettings).Object = (FNativeMediaSourceColorSettings *)0x0;
  (this->NativeSourceColorSettings).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return this;
}

// UImgMediaSource @ 14ea396a0

UImgMediaSource * __thiscall UImgMediaSource::UImgMediaSource(UImgMediaSource *this)

{
  int *piVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  TVector2<double> TVar5;
  bool bVar6;
  FObjectInitializer *pFVar7;
  TReferenceControllerBase<1> *pTVar8;
  UImgMediaSource *pUVar9;
  TReferenceControllerBase<1> *pTVar10;
  FNativeMediaSourceColorSettings *pFVar11;
  FImgMediaMipMapInfo *pFVar12;
  
  pFVar7 = FObjectInitializer::Get();
  UBaseMediaSource::UBaseMediaSource((UBaseMediaSource *)this,pFVar7);
  this->IsPathRelativeToProjectRoot_DEPRECATED = false;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->FrameRateOverride).Numerator = 0;
  (this->FrameRateOverride).Denominator = 0;
  this->_padding_ = (longlong)&_vftable__for__IMediaOptions__;
  (this->ProxyOverride).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ProxyOverride).Data.ArrayNum = 0;
  (this->ProxyOverride).Data.ArrayMax = 0;
  this->bFillGapsInSequence = true;
  (this->StartTimecode).Hours = 0;
  (this->StartTimecode).Minutes = 0;
  (this->StartTimecode).Seconds = 0;
  (this->StartTimecode).Frames = 0;
  (this->StartTimecode).Subframe = 0.0;
  (this->StartTimecode).bDropFrameFormat = false;
  (this->SourceColorSettings).EncodingOverride = MSE_None;
  (this->SourceColorSettings).ColorSpaceOverride = TCS_None;
  (this->SourceColorSettings).RedChromaticityCoordinate.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->SourceColorSettings).GreenChromaticityCoordinate.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  (this->SourceColorSettings).BlueChromaticityCoordinate.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)UE::Math::TVector2<double>::ZeroVector.field0_0x0;
  TVar5 = UE::Math::TVector2<double>::ZeroVector;
  (this->SourceColorSettings).ChromaticAdaptationMethod = TCAM_Bradford;
  (this->SourceColorSettings).WhiteChromaticityCoordinate.field0_0x0._s_0 =
       (TVector2<double>_u_0_s_0)TVar5.field0_0x0;
  (this->SequencePath).Path.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->SequencePath).Path.Data.ArrayNum = 0;
  (this->SequencePath).Path.Data.ArrayMax = 0;
  pTVar8 = ::operator_new(0x140);
  pFVar11 = (FNativeMediaSourceColorSettings *)&DAT_00000010;
  if (pTVar8 == (TReferenceControllerBase<1> *)0x0) {
    pFVar12 = (FImgMediaMipMapInfo *)&DAT_00000010;
    pTVar8 = (TReferenceControllerBase<1> *)0x0;
LAB_14ea398f1:
    if (((pFVar12->_padding_ == 0) || (pFVar12->_padding_ == 0)) ||
       (*(int *)(pFVar12->_padding_ + 8) < 1)) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar12->_padding_ = (longlong)pFVar12;
      if (pTVar8 != (TReferenceControllerBase<1> *)pFVar12->_padding_) {
        if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
          LOCK();
          pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
          UNLOCK();
        }
        plVar3 = (longlong *)pFVar12->_padding_;
        if (plVar3 != (longlong *)0x0) {
          LOCK();
          piVar1 = (int *)((longlong)plVar3 + 0xc);
          iVar2 = *piVar1;
          *piVar1 = *piVar1 + -1;
          UNLOCK();
          if (iVar2 == 1) {
            (**(code **)(*plVar3 + 8))(plVar3,1);
          }
        }
        pFVar12->_padding_ = (longlong)pTVar8;
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
    }
  }
  else {
    pTVar8->SharedReferenceCount = (atomic<int>)0x1;
    pTVar8->WeakReferenceCount = (atomic<int>)0x1;
    pTVar8[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8->_padding_ =
         (longlong)
         &___7__TIntrusiveReferenceController_VFImgMediaMipMapInfo___00_SharedPointerInternals__6B_;
    pTVar8[2]._padding_ = 0;
    pTVar8[1]._padding_ = (longlong)&___7FDataContainer_IMediaOptions__6B_;
    FTickableGameObject::FTickableGameObject
              ((FTickableGameObject *)&pTVar8[2].SharedReferenceCount,Never);
    pTVar8[1]._padding_ =
         (longlong)&FImgMediaMipMapInfo::_vftable__for__IMediaOptions__FDataContainer__;
    pTVar8[3]._padding_ = 0;
    *(undefined ***)&pTVar8[2].SharedReferenceCount =
         &FImgMediaMipMapInfo::_vftable__for__FTickableGameObject__;
    pTVar8[3].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[3].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[4]._padding_ = 0;
    pTVar8[4].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[4].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[5]._padding_ = 0;
    pTVar8[5].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[5].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[6]._padding_ = 0;
    *(TIntPoint<int>_u_0 *)&pTVar8[6].SharedReferenceCount =
         (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
    *(undefined4 *)&pTVar8[7]._padding_ = 0;
    ((TIntPoint<int>_u_0 *)((longlong)&pTVar8[7]._padding_ + 4))->_s_0 =
         (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
    *(TIntPoint<int>_u_0 *)&pTVar8[7].WeakReferenceCount =
         (TIntPoint<int>_u_0_s_0)UE::Math::TIntPoint<int>::ZeroValue.field0_0x0;
    *(undefined4 *)((longlong)&pTVar8[8]._padding_ + 4) = 0;
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&pTVar8[8].SharedReferenceCount,4000);
    InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)(pTVar8 + 0xb),4000);
    pTVar8[0xd].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[0xd].WeakReferenceCount = (atomic<int>)0x0;
    pFVar12 = (FImgMediaMipMapInfo *)(pTVar8 + 1);
    pTVar8[0xe]._padding_ = 0;
    pTVar8[0xf].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[0xf].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar8[0x10]._padding_ = 0;
    *(undefined4 *)((longlong)&pTVar8[0x10]._padding_ + 4) = 0x80;
    pTVar8[0x10].SharedReferenceCount = (atomic<int>)0xffffffff;
    pTVar8[0x10].WeakReferenceCount = (atomic<int>)0x0;
    pTVar8[0x11].SharedReferenceCount = (atomic<int>)0x0;
    pTVar8[0x11].WeakReferenceCount = (atomic<int>)0x0;
    *(undefined4 *)&pTVar8[0x12]._padding_ = 0;
    *(undefined1 *)&pTVar8[0x12].SharedReferenceCount = 0;
    pTVar8[0x13]._padding_ = 0;
    *(undefined1 *)&pTVar8[0x13].SharedReferenceCount = 0;
    if (pFVar12 != (FImgMediaMipMapInfo *)0x0) goto LAB_14ea398f1;
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("InObject != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x246,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pUVar9 = (UImgMediaSource *)(*pcVar4)();
      return pUVar9;
    }
  }
  (this->MipMapInfo).Object = pFVar12;
  (this->MipMapInfo).SharedReferenceCount.ReferenceController = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  pTVar10 = ::operator_new(0x1c0);
  pTVar8 = (TReferenceControllerBase<1> *)0x0;
  if (pTVar10 != (TReferenceControllerBase<1> *)0x0) {
    pTVar10->SharedReferenceCount = (atomic<int>)0x1;
    pTVar10->WeakReferenceCount = (atomic<int>)0x1;
    pTVar10[1].SharedReferenceCount = (atomic<int>)0x0;
    pTVar10[1].WeakReferenceCount = (atomic<int>)0x0;
    pTVar10->_padding_ =
         (longlong)
         &
         ___7__TIntrusiveReferenceController_UFNativeMediaSourceColorSettings___00_SharedPointerInternals__6B_
    ;
    pTVar10[1]._padding_ = (longlong)&___7FNativeMediaSourceColorSettings__6B_;
    pTVar10[2]._padding_ = 0;
    *(undefined1 *)&pTVar10[2].SharedReferenceCount = 0;
    *(undefined1 *)&pTVar10[0x18]._padding_ = 0;
    *(undefined1 *)&pTVar10[0x19]._padding_ = 1;
    InitializeCriticalSectionAndSpinCount
              ((LPCRITICAL_SECTION)&pTVar10[0x19].SharedReferenceCount,4000);
    pFVar11 = (FNativeMediaSourceColorSettings *)(pTVar10 + 1);
    pTVar8 = pTVar10;
    if (pFVar11 == (FNativeMediaSourceColorSettings *)0x0) {
      bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("InObject != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x246,L"");
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pUVar9 = (UImgMediaSource *)(*pcVar4)();
        return pUVar9;
      }
      goto LAB_14ea39a7d;
    }
  }
  if (((pFVar11->_padding_ == 0) || (pFVar11->_padding_ == 0)) ||
     (*(int *)(pFVar11->_padding_ + 8) < 1)) {
    if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
      UNLOCK();
    }
    pFVar11->_padding_ = (longlong)pFVar11;
    if (pTVar8 != (TReferenceControllerBase<1> *)pFVar11->_padding_) {
      if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar8->WeakReferenceCount = (atomic<int>)((int)pTVar8->WeakReferenceCount + 1);
        UNLOCK();
      }
      plVar3 = (longlong *)pFVar11->_padding_;
      if (plVar3 != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)((longlong)plVar3 + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if (iVar2 == 1) {
          (**(code **)(*plVar3 + 8))(plVar3,1);
        }
      }
      pFVar11->_padding_ = (longlong)pTVar8;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  }
LAB_14ea39a7d:
  (this->NativeSourceColorSettings).Object = pFVar11;
  (this->NativeSourceColorSettings).SharedReferenceCount.ReferenceController = pTVar8;
  if (pTVar8 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar8->SharedReferenceCount = (atomic<int>)((int)pTVar8->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar8);
  return this;
}

// ~UImgMediaSource @ 14ea3b610

void __thiscall UImgMediaSource::~UImgMediaSource(UImgMediaSource *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IMediaOptions__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NativeSourceColorSettings).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->MipMapInfo).SharedReferenceCount.ReferenceController);
  pFVar1 = (this->SequencePath).Path.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ProxyOverride).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UBaseMediaSource::~UBaseMediaSource((UBaseMediaSource *)this);
  return;
}

// AddTargetObject @ 14ea419e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UImgMediaSource::AddTargetObject(UImgMediaSource *this,AActor *param_1)

{
  code *pcVar1;
  bool bVar2;
  TWeakPtr<FMediaTextureTrackerObject,1> local_18;
  
  if ((this->MipMapInfo).Object == (FImgMediaMipMapInfo *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  local_18.Object = (FMediaTextureTrackerObject *)0x0;
  local_18.WeakReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  FImgMediaMipMapInfo::AddObject((this->MipMapInfo).Object,param_1,&local_18);
  return;
}

// ExpandSequencePathTokens @ 14ea484c0

FString * __cdecl
UImgMediaSource::ExpandSequencePathTokens(FString *__return_storage_ptr__,FString *param_1)

{
  FString *pFVar1;
  FString *pFVar2;
  wchar_t *pwVar3;
  wchar_t *pwVar4;
  FString local_58;
  FString local_48;
  FString local_38;
  FString local_28;
  FString local_18;
  
  pFVar1 = FPaths::EngineDir(&local_18);
  pFVar1 = FPaths::ConvertRelativePathToFull(&local_28,pFVar1);
  pwVar3 = L"";
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar4 = L"";
  }
  else {
    pwVar4 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
  pFVar1 = ::FString::Replace(param_1,&local_38,L"{engine_dir}",pwVar4,IgnoreCase);
  pFVar2 = FPaths::ProjectDir(&local_48);
  pFVar2 = FPaths::ConvertRelativePathToFull(&local_58,pFVar2);
  if ((pFVar2->Data).ArrayNum != 0) {
    pwVar3 = (wchar_t *)(pFVar2->Data).AllocatorInstance.Data;
  }
  ::FString::Replace(pFVar1,__return_storage_ptr__,L"{project_dir}",pwVar3,IgnoreCase);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetFullPath @ 14ea4c320

FString * __thiscall
UImgMediaSource::GetFullPath(UImgMediaSource *this,FString *__return_storage_ptr__)

{
  int *piVar1;
  ForAnyElementType FVar2;
  bool bVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar4;
  FString *pFVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  FScriptContainerElement *pFVar9;
  undefined1 local_res8 [8];
  FString local_78;
  FString local_68;
  FString local_58;
  TStringView<wchar_t> local_48;
  FScriptContainerElement *local_38;
  int local_30;
  
  ExpandSequencePathTokens(&local_78,&(this->SequencePath).Path);
  bVar3 = FPaths::IsRelative(&local_78);
  FVar2.Data = local_78.Data.AllocatorInstance.Data;
  if (!bVar3) {
    piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
    (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar7 = local_78.Data.ArrayNum;
    (__return_storage_ptr__->Data).ArrayNum = iVar7;
    if (iVar7 == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,iVar7,0,(ForAnyElementType *)__return_storage_ptr__,iVar7,piVar1);
      memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,FVar2.Data,(longlong)iVar7 * 2);
    }
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    return __return_storage_ptr__;
  }
  pTVar4 = UE::ImgMediaSource::Private::GetPossibleBasePaths();
  iVar7 = pTVar4->ArrayNum;
  pFVar8 = (pTVar4->AllocatorInstance).Data;
  pFVar9 = pFVar8 + (longlong)iVar7 * 0x10;
  while( true ) {
    if (pTVar4->ArrayNum != iVar7) {
      `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    iVar6 = 0;
    if (pFVar8 == pFVar9) {
      pFVar5 = FPaths::ProjectDir(&local_68);
      local_48.DataPtr = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
      iVar7 = (pFVar5->Data).ArrayNum;
      local_48.Size = iVar7 + -1;
      if (iVar7 == 0) {
        local_48.Size = iVar6;
      }
      local_38 = local_78.Data.AllocatorInstance.Data;
      local_30 = local_78.Data.ArrayNum + -1;
      if (local_78.Data.ArrayNum == 0) {
        local_30 = iVar6;
      }
      FPaths::CombineInternal(&local_58,&local_48,2);
      FPaths::ConvertRelativePathToFull(__return_storage_ptr__,&local_58);
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      if (local_68.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0)
      goto LAB_14ea4c4e1;
      goto LAB_14ea4c4dc;
    }
    local_48.DataPtr = *(wchar_t **)pFVar8;
    local_48.Size = *(int *)(pFVar8 + 8) + -1;
    if (*(int *)(pFVar8 + 8) == 0) {
      local_48.Size = 0;
    }
    local_38 = local_78.Data.AllocatorInstance.Data;
    local_30 = local_78.Data.ArrayNum + -1;
    if (local_78.Data.ArrayNum == 0) {
      local_30 = iVar6;
    }
    FPaths::CombineInternal(&local_58,&local_48,2);
    FPaths::ConvertRelativePathToFull(&local_68,&local_58);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    bVar3 = FPaths::DirectoryExists(&local_68);
    FVar2.Data = local_68.Data.AllocatorInstance.Data;
    if (bVar3) break;
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    pFVar8 = pFVar8 + 0x10;
  }
  piVar1 = &(__return_storage_ptr__->Data).ArrayMax;
  (__return_storage_ptr__->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  iVar7 = local_68.Data.ArrayNum;
  (__return_storage_ptr__->Data).ArrayNum = iVar7;
  if (iVar7 == 0) {
    *piVar1 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,iVar7,0,(ForAnyElementType *)__return_storage_ptr__,iVar7,piVar1);
    memcpy((__return_storage_ptr__->Data).AllocatorInstance.Data,FVar2.Data,(longlong)iVar7 * 2);
  }
  if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
LAB_14ea4c4dc:
    FMemory::Free(local_68.Data.AllocatorInstance.Data);
  }
LAB_14ea4c4e1:
  if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetMediaOption @ 14ea4d1a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

TSharedPtr<IMediaOptions::FDataContainer,1> * __thiscall
UImgMediaSource::GetMediaOption
          (UImgMediaSource *this,TSharedPtr<IMediaOptions::FDataContainer,1> *__return_storage_ptr__
          ,FName *param_1,TSharedPtr<IMediaOptions::FDataContainer,1> *param_2)

{
  LPCRITICAL_SECTION lpCriticalSection;
  EColorSpace EVar1;
  TReferenceControllerBase<1> *pTVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  bool bVar6;
  TSharedPtr<IMediaOptions::FDataContainer,1> *pTVar7;
  FColorSpace *pFVar8;
  FColorSpace *pFVar9;
  FColorSpace *pFVar10;
  FColorSpace *pFVar11;
  longlong lVar12;
  undefined1 auStackY_308 [32];
  FColorSpace local_2d8;
  FColorSpace local_188;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_308;
  if (*param_1 == ImgMedia::MipMapInfoOption) {
    __return_storage_ptr__->Object =
         (FDataContainer *)(this->SourceColorSettings).WhiteChromaticityCoordinate.field0_0x0._s_0.X
    ;
    pTVar2 = (TReferenceControllerBase<1> *)
             (this->SourceColorSettings).WhiteChromaticityCoordinate.field0_0x0._s_0.Y;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
    if (pTVar2 == (TReferenceControllerBase<1> *)0x0) {
      return __return_storage_ptr__;
    }
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
    return __return_storage_ptr__;
  }
  if (*param_1 != ImgMedia::SourceColorSettingsOption) {
    UMediaSource::GetMediaOption((UMediaSource *)this,__return_storage_ptr__,param_1,param_2);
    return __return_storage_ptr__;
  }
  if ((*(longlong *)&(this->SourceColorSettings).ChromaticAdaptationMethod == 0) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar6)) {
    pcVar4 = (code *)swi(3);
    pTVar7 = (TSharedPtr<IMediaOptions::FDataContainer,1> *)(*pcVar4)();
    return pTVar7;
  }
  lVar3 = *(longlong *)&(this->SourceColorSettings).ChromaticAdaptationMethod;
  lpCriticalSection = (LPCRITICAL_SECTION)(lVar3 + 0x188);
  if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection(lpCriticalSection);
  EVar1 = *(EColorSpace *)((longlong)&(this->ProxyOverride).Data.ArrayNum + 1);
  pFVar10 = (FColorSpace *)(lVar3 + 0x20);
  if (EVar1 == 99) {
    pFVar8 = UE::Color::FColorSpace::FColorSpace
                       (&local_2d8,(TVector2<double> *)&this->bFillGapsInSequence,
                        (TVector2<double> *)&(this->StartTimecode).Frames,
                        (TVector2<double> *)&this->SourceColorSettings,
                        (TVector2<double> *)
                        ((longlong)&(this->SourceColorSettings).RedChromaticityCoordinate.field0_0x0
                        + 8));
    if (pFVar8 == pFVar10) goto LAB_14ea4d3c2;
    lVar12 = 2;
    do {
      pFVar11 = (FColorSpace *)((pFVar10->RgbToXYZ).M + 2);
      dVar5 = (pFVar8->Chromaticities).Elements[0].field0_0x0._s_0.Y;
      pFVar9 = (FColorSpace *)((pFVar8->RgbToXYZ).M + 2);
      (pFVar10->Chromaticities).Elements[0].field0_0x0._s_0.X =
           (pFVar8->Chromaticities).Elements[0].field0_0x0._s_0.X;
      (pFVar10->Chromaticities).Elements[0].field0_0x0._s_0.Y = dVar5;
      dVar5 = (pFVar8->Chromaticities).Elements[1].field0_0x0._s_0.Y;
      (pFVar10->Chromaticities).Elements[1].field0_0x0._s_0.X =
           (pFVar8->Chromaticities).Elements[1].field0_0x0._s_0.X;
      (pFVar10->Chromaticities).Elements[1].field0_0x0._s_0.Y = dVar5;
      dVar5 = (pFVar8->Chromaticities).Elements[2].field0_0x0._s_0.Y;
      (pFVar10->Chromaticities).Elements[2].field0_0x0._s_0.X =
           (pFVar8->Chromaticities).Elements[2].field0_0x0._s_0.X;
      (pFVar10->Chromaticities).Elements[2].field0_0x0._s_0.Y = dVar5;
      dVar5 = (pFVar8->Chromaticities).Elements[3].field0_0x0._s_0.Y;
      (pFVar10->Chromaticities).Elements[3].field0_0x0._s_0.X =
           (pFVar8->Chromaticities).Elements[3].field0_0x0._s_0.X;
      (pFVar10->Chromaticities).Elements[3].field0_0x0._s_0.Y = dVar5;
      dVar5 = (pFVar8->RgbToXYZ).M[0][1];
      (pFVar10->RgbToXYZ).M[0][0] = (pFVar8->RgbToXYZ).M[0][0];
      (pFVar10->RgbToXYZ).M[0][1] = dVar5;
      dVar5 = (pFVar8->RgbToXYZ).M[0][3];
      (pFVar10->RgbToXYZ).M[0][2] = (pFVar8->RgbToXYZ).M[0][2];
      (pFVar10->RgbToXYZ).M[0][3] = dVar5;
      dVar5 = (pFVar8->RgbToXYZ).M[1][1];
      (pFVar10->RgbToXYZ).M[1][0] = (pFVar8->RgbToXYZ).M[1][0];
      (pFVar10->RgbToXYZ).M[1][1] = dVar5;
      dVar5 = (pFVar8->RgbToXYZ).M[1][3];
      (pFVar10->RgbToXYZ).M[1][2] = (pFVar8->RgbToXYZ).M[1][2];
      (pFVar10->RgbToXYZ).M[1][3] = dVar5;
      lVar12 = lVar12 + -1;
      pFVar8 = pFVar9;
      pFVar10 = pFVar11;
    } while (lVar12 != 0);
  }
  else {
    if (EVar1 == None) {
      if (*(char *)(lVar3 + 0x170) != '\0') {
        *(undefined1 *)(lVar3 + 0x170) = 0;
      }
      goto LAB_14ea4d3c2;
    }
    pFVar8 = UE::Color::FColorSpace::FColorSpace(&local_188,EVar1);
    if (pFVar8 == pFVar10) goto LAB_14ea4d3c2;
    lVar12 = 2;
    do {
      pFVar11 = (FColorSpace *)((pFVar10->RgbToXYZ).M + 2);
      dVar5 = (pFVar8->Chromaticities).Elements[0].field0_0x0._s_0.Y;
      pFVar9 = (FColorSpace *)((pFVar8->RgbToXYZ).M + 2);
      (pFVar10->Chromaticities).Elements[0].field0_0x0._s_0.X =
           (pFVar8->Chromaticities).Elements[0].field0_0x0._s_0.X;
      (pFVar10->Chromaticities).Elements[0].field0_0x0._s_0.Y = dVar5;
      dVar5 = (pFVar8->Chromaticities).Elements[1].field0_0x0._s_0.Y;
      (pFVar10->Chromaticities).Elements[1].field0_0x0._s_0.X =
           (pFVar8->Chromaticities).Elements[1].field0_0x0._s_0.X;
      (pFVar10->Chromaticities).Elements[1].field0_0x0._s_0.Y = dVar5;
      dVar5 = (pFVar8->Chromaticities).Elements[2].field0_0x0._s_0.Y;
      (pFVar10->Chromaticities).Elements[2].field0_0x0._s_0.X =
           (pFVar8->Chromaticities).Elements[2].field0_0x0._s_0.X;
      (pFVar10->Chromaticities).Elements[2].field0_0x0._s_0.Y = dVar5;
      dVar5 = (pFVar8->Chromaticities).Elements[3].field0_0x0._s_0.Y;
      (pFVar10->Chromaticities).Elements[3].field0_0x0._s_0.X =
           (pFVar8->Chromaticities).Elements[3].field0_0x0._s_0.X;
      (pFVar10->Chromaticities).Elements[3].field0_0x0._s_0.Y = dVar5;
      dVar5 = (pFVar8->RgbToXYZ).M[0][1];
      (pFVar10->RgbToXYZ).M[0][0] = (pFVar8->RgbToXYZ).M[0][0];
      (pFVar10->RgbToXYZ).M[0][1] = dVar5;
      dVar5 = (pFVar8->RgbToXYZ).M[0][3];
      (pFVar10->RgbToXYZ).M[0][2] = (pFVar8->RgbToXYZ).M[0][2];
      (pFVar10->RgbToXYZ).M[0][3] = dVar5;
      dVar5 = (pFVar8->RgbToXYZ).M[1][1];
      (pFVar10->RgbToXYZ).M[1][0] = (pFVar8->RgbToXYZ).M[1][0];
      (pFVar10->RgbToXYZ).M[1][1] = dVar5;
      dVar5 = (pFVar8->RgbToXYZ).M[1][3];
      (pFVar10->RgbToXYZ).M[1][2] = (pFVar8->RgbToXYZ).M[1][2];
      (pFVar10->RgbToXYZ).M[1][3] = dVar5;
      lVar12 = lVar12 + -1;
      pFVar8 = pFVar9;
      pFVar10 = pFVar11;
    } while (lVar12 != 0);
  }
  dVar5 = (pFVar9->Chromaticities).Elements[0].field0_0x0._s_0.Y;
  (pFVar11->Chromaticities).Elements[0].field0_0x0._s_0.X =
       (pFVar9->Chromaticities).Elements[0].field0_0x0._s_0.X;
  (pFVar11->Chromaticities).Elements[0].field0_0x0._s_0.Y = dVar5;
  dVar5 = (pFVar9->Chromaticities).Elements[1].field0_0x0._s_0.Y;
  (pFVar11->Chromaticities).Elements[1].field0_0x0._s_0.X =
       (pFVar9->Chromaticities).Elements[1].field0_0x0._s_0.X;
  (pFVar11->Chromaticities).Elements[1].field0_0x0._s_0.Y = dVar5;
  dVar5 = (pFVar9->Chromaticities).Elements[2].field0_0x0._s_0.Y;
  (pFVar11->Chromaticities).Elements[2].field0_0x0._s_0.X =
       (pFVar9->Chromaticities).Elements[2].field0_0x0._s_0.X;
  (pFVar11->Chromaticities).Elements[2].field0_0x0._s_0.Y = dVar5;
  dVar5 = (pFVar9->Chromaticities).Elements[3].field0_0x0._s_0.Y;
  (pFVar11->Chromaticities).Elements[3].field0_0x0._s_0.X =
       (pFVar9->Chromaticities).Elements[3].field0_0x0._s_0.X;
  (pFVar11->Chromaticities).Elements[3].field0_0x0._s_0.Y = dVar5;
  dVar5 = (pFVar9->RgbToXYZ).M[0][1];
  (pFVar11->RgbToXYZ).M[0][0] = (pFVar9->RgbToXYZ).M[0][0];
  (pFVar11->RgbToXYZ).M[0][1] = dVar5;
  *(undefined1 *)(lVar3 + 0x170) = 1;
LAB_14ea4d3c2:
  LeaveCriticalSection(lpCriticalSection);
  LOCK();
  *(char *)(lVar3 + 0x18) = (char)(this->ProxyOverride).Data.ArrayNum;
  UNLOCK();
  LOCK();
  *(undefined1 *)(lVar3 + 0x180) =
       *(undefined1 *)
        ((longlong)&(this->SourceColorSettings).GreenChromaticityCoordinate.field0_0x0 + 8);
  UNLOCK();
  __return_storage_ptr__->Object =
       *(FDataContainer **)&(this->SourceColorSettings).ChromaticAdaptationMethod;
  pTVar2 = (TReferenceControllerBase<1> *)(this->SequencePath).Path.Data.AllocatorInstance.Data;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar2;
  if (pTVar2 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar2->SharedReferenceCount = (atomic<int>)((int)pTVar2->SharedReferenceCount + 1);
    UNLOCK();
  }
  return __return_storage_ptr__;
}

// GetMediaOption @ 14ea4d440

FString * __thiscall
UImgMediaSource::GetMediaOption
          (UImgMediaSource *this,FString *__return_storage_ptr__,FName *param_1,FString *param_2)

{
  FName FVar1;
  
  if (*param_1 == ImgMedia::ProxyOverrideOption) {
    ::FString::FString(__return_storage_ptr__,(FString *)&this->_padding_);
  }
  else {
    FVar1 = FLazyName::Resolve(&UMediaPlayer::MediaInfoNameStartTimecodeValue);
    if (*param_1 == *(FName *)FVar1) {
      FTimecode::ToString((FTimecode *)((longlong)&this->_padding_ + 4),__return_storage_ptr__,false
                          ,false);
    }
    else {
      UMediaSource::GetMediaOption((UMediaSource *)this,__return_storage_ptr__,param_1,param_2);
    }
  }
  return __return_storage_ptr__;
}

// GetMediaOption @ 14ea4d4e0

long64 __thiscall
UImgMediaSource::GetMediaOption(UImgMediaSource *this,FName *param_1,long64 param_2)

{
  long64 lVar1;
  
  if (*param_1 == ImgMedia::FrameRateOverrideDenonimatorOption) {
    return (longlong)(int)this->_padding_;
  }
  if (*param_1 == ImgMedia::FrameRateOverrideNumeratorOption) {
    return (longlong)*(int *)((longlong)&this->_padding_ + 4);
  }
  lVar1 = UMediaSource::GetMediaOption((UMediaSource *)this,param_1,param_2);
  return lVar1;
}

// GetMediaOption @ 14ea4d510

bool __thiscall UImgMediaSource::GetMediaOption(UImgMediaSource *this,FName *param_1,bool param_2)

{
  bool bVar1;
  
  if (*param_1 == ImgMedia::FillGapsInSequenceOption) {
    return (bool)(char)this->_padding_;
  }
  bVar1 = UMediaSource::GetMediaOption((UMediaSource *)this,param_1,param_2);
  return bVar1;
}

// GetPrivateStaticClass @ 14ea4e0d0

UClass * __cdecl UImgMediaSource::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UImgMediaSource.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ImgMedia",L"ImgMediaSource",
               &Z_Registration_Info_UClass_UImgMediaSource.InnerSingleton,
               StaticRegisterNativesUImgMediaSource,0x148,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine"
               ,InternalConstructor<UImgMediaSource>,InternalVTableHelperCtorCaller<UImgMediaSource>
               ,local_res8,UBaseMediaSource::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UImgMediaSource.InnerSingleton;
}

// GetProxies @ 14ea4e190

void __thiscall
UImgMediaSource::GetProxies
          (UImgMediaSource *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  code *pcVar2;
  IFileManager *pIVar3;
  FString *pFVar4;
  ForAnyElementType FVar5;
  FString local_48;
  FString local_38;
  TStringView<wchar_t> local_28;
  wchar_t *local_18;
  undefined4 local_10;
  
  pIVar3 = IFileManager::Get();
  pcVar2 = *(code **)((longlong)*pIVar3 + 0x80);
  pFVar4 = GetFullPath(this,&local_38);
  local_10 = 1;
  local_28.DataPtr = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  iVar1 = (pFVar4->Data).ArrayNum;
  local_28.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_28.Size = 0;
  }
  local_18 = L"*";
  FPaths::CombineInternal(&local_48,&local_28,2);
  FVar5.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar5.Data = local_48.Data.AllocatorInstance.Data;
  }
  (*pcVar2)(pIVar3,param_1,FVar5.Data,0,1);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return;
}

// GetSequencePath @ 14ea4e8f0

FString * __thiscall
UImgMediaSource::GetSequencePath(UImgMediaSource *this,FString *__return_storage_ptr__)

{
  ExpandSequencePathTokens(__return_storage_ptr__,&(this->SequencePath).Path);
  return __return_storage_ptr__;
}

// GetUrl @ 14ea4f030

FString * __thiscall UImgMediaSource::GetUrl(UImgMediaSource *this,FString *__return_storage_ptr__)

{
  FString *pFVar1;
  FString *pFVar2;
  FString local_28;
  FString local_18;
  
  pFVar1 = GetFullPath(this,&local_18);
  pFVar2 = ::FString::FString(&local_28,L"img://");
  ::FString::ConcatFF(__return_storage_ptr__,pFVar2,pFVar1);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// HasMediaOption @ 14ea50840

bool __thiscall UImgMediaSource::HasMediaOption(UImgMediaSource *this,FName *param_1)

{
  FName FVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  
  FVar1 = *param_1;
  if ((((FVar1 == ImgMedia::FillGapsInSequenceOption) ||
       (FVar1 == ImgMedia::FrameRateOverrideDenonimatorOption)) ||
      (FVar1 == ImgMedia::FrameRateOverrideNumeratorOption)) ||
     (((FVar1 == ImgMedia::ProxyOverrideOption || (FVar1 == ImgMedia::MipMapInfoOption)) ||
      (FVar1 == ImgMedia::SourceColorSettingsOption)))) {
    return true;
  }
  FVar1 = *param_1;
  uVar2 = ::GetTypeHash(FVar1.ComparisonIndex.Value);
  if ((int)this->_padding_ != *(int *)((longlong)&this->_padding_ + 4)) {
    plVar4 = (longlong *)this->_padding_;
    if ((longlong *)this->_padding_ == (longlong *)0x0) {
      plVar4 = &this->_padding_;
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)((int)this->_padding_ - 1U & FVar1.Number + uVar2) * 4);
    if (iVar3 != -1) {
      do {
        if (*(FName *)(this->_padding_ + (longlong)iVar3 * 0x28) == FVar1) goto LAB_146c2ee7c;
        iVar3 = *(int *)(this->_padding_ + 0x20 + (longlong)iVar3 * 0x28);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_146c2ee7c:
  return iVar3 != -1;
}

// IsPathUnderBasePath @ 14ea51c90

bool __cdecl
UImgMediaSource::IsPathUnderBasePath(FString *param_1,FString *param_2,FString *param_3)

{
  bool bVar1;
  wchar_t *pwVar2;
  
  ::FString::operator=(param_3,param_1);
  if ((param_2->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  bVar1 = FPaths::MakePathRelativeTo(param_3,pwVar2);
  if (bVar1) {
    bVar1 = ::FString::StartsWith(param_3,L"..",2,IgnoreCase);
    if (!bVar1) {
      return true;
    }
  }
  return false;
}

// RemoveTargetObject @ 14ea5acd0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UImgMediaSource::RemoveTargetObject(UImgMediaSource *this,AActor *param_1)

{
  code *pcVar1;
  bool bVar2;
  
  if ((this->MipMapInfo).Object == (FImgMediaMipMapInfo *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  FImgMediaMipMapInfo::RemoveObject((this->MipMapInfo).Object,param_1);
  return;
}

// SanitizeTokenizedSequencePath @ 14ea5b2e0

FString * __cdecl
UImgMediaSource::SanitizeTokenizedSequencePath(FString *__return_storage_ptr__,FString *param_1)

{
  code *pcVar1;
  bool bVar2;
  FString *pFVar3;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar4;
  int iVar5;
  ForAnyElementType FVar6;
  longlong lVar7;
  FScriptContainerElement *pFVar8;
  int iVar9;
  FScriptContainerElement *pFVar10;
  undefined1 local_res8 [8];
  FString local_108;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  FString local_c8;
  FString local_b8;
  TStringView<wchar_t> local_a8;
  FScriptContainerElement *local_98;
  int local_90;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  FString local_38;
  
  pFVar3 = ::FString::TrimStartAndEnd(param_1,&local_88);
  ::FString::Replace(pFVar3,__return_storage_ptr__,L"\"",L"",IgnoreCase);
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  FPaths::NormalizeDirectoryName(__return_storage_ptr__);
  if ((__return_storage_ptr__->Data).ArrayNum < 2) {
    return __return_storage_ptr__;
  }
  ExpandSequencePathTokens(&local_f8,__return_storage_ptr__);
  local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_108.Data.ArrayNum = 0;
  local_108.Data.ArrayMax = 0;
  bVar2 = FPaths::IsRelative(&local_f8);
  if (bVar2) {
    FPaths::ConvertRelativePathToFull(&local_d8,&local_f8);
    bVar2 = FPaths::DirectoryExists(&local_d8);
    if ((bVar2) || (bVar2 = FPaths::FileExists(&local_d8), bVar2)) {
      iVar9 = local_d8.Data.ArrayNum + -1;
      if (local_d8.Data.ArrayNum == 0) {
        iVar9 = 0;
      }
      ::FString::AssignRange(&local_f8,(wchar_t *)local_d8.Data.AllocatorInstance.Data,iVar9);
      pFVar3 = UE::ImgMediaSource::Private::FindFullBasePath(&local_68,&local_d8);
      if (&local_108 != pFVar3) {
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        local_108.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
        (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_108.Data.ArrayNum = (pFVar3->Data).ArrayNum;
        local_108.Data.ArrayMax = (pFVar3->Data).ArrayMax;
        (pFVar3->Data).ArrayNum = 0;
        (pFVar3->Data).ArrayMax = 0;
      }
      FVar6.Data = local_d8.Data.AllocatorInstance.Data;
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
        FVar6.Data = local_d8.Data.AllocatorInstance.Data;
      }
    }
    else {
      pTVar4 = UE::ImgMediaSource::Private::GetPossibleBasePaths();
      iVar9 = pTVar4->ArrayNum;
      pFVar8 = (pTVar4->AllocatorInstance).Data;
      pFVar10 = pFVar8 + (longlong)iVar9 * 0x10;
      while( true ) {
        if (pTVar4->ArrayNum != iVar9) {
          local_res8[0] = 0;
          `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res8);
        }
        FVar6.Data = local_d8.Data.AllocatorInstance.Data;
        if (pFVar8 == pFVar10) goto LAB_14ea5b600;
        FPaths::ConvertRelativePathToFull(&local_c8,(FString *)pFVar8);
        pFVar3 = FPaths::ConvertRelativePathToFull(&local_78,&local_c8,&local_f8);
        if (&local_d8 != pFVar3) {
          if (local_d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_d8.Data.AllocatorInstance.Data);
          }
          local_d8.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
          (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_d8.Data.ArrayNum = (pFVar3->Data).ArrayNum;
          local_d8.Data.ArrayMax = (pFVar3->Data).ArrayMax;
          (pFVar3->Data).ArrayNum = 0;
          (pFVar3->Data).ArrayMax = 0;
        }
        if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        bVar2 = FPaths::DirectoryExists(&local_d8);
        if (bVar2) break;
        bVar2 = FPaths::FileExists(&local_d8);
        if (bVar2) break;
        if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        }
        pFVar8 = pFVar8 + 0x10;
      }
      iVar9 = local_d8.Data.ArrayNum + -1;
      if (local_d8.Data.ArrayNum == 0) {
        iVar9 = 0;
      }
      ::FString::AssignRange(&local_f8,(wchar_t *)local_d8.Data.AllocatorInstance.Data,iVar9);
      FVar6.Data = local_c8.Data.AllocatorInstance.Data;
      local_108.Data.ArrayNum = local_c8.Data.ArrayNum;
      if (((local_c8.Data.ArrayNum != 0) || (local_108.Data.ArrayMax != 0)) &&
         (UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,local_c8.Data.ArrayNum,local_108.Data.ArrayMax,
                     (ForAnyElementType *)&local_108,local_c8.Data.ArrayNum,&local_108.Data.ArrayMax
                    ), local_c8.Data.ArrayNum != 0)) {
        memcpy(local_108.Data.AllocatorInstance.Data,FVar6.Data,(longlong)local_c8.Data.ArrayNum * 2
              );
      }
      FVar6.Data = local_d8.Data.AllocatorInstance.Data;
      if (local_c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_c8.Data.AllocatorInstance.Data);
        FVar6.Data = local_d8.Data.AllocatorInstance.Data;
      }
    }
  }
  else {
    pFVar3 = UE::ImgMediaSource::Private::FindFullBasePath(&local_58,&local_f8);
    FVar6.Data = local_58.Data.AllocatorInstance.Data;
    if (&local_108 != pFVar3) {
      if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Data.AllocatorInstance.Data);
      }
      local_108.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_108.Data.ArrayNum = (pFVar3->Data).ArrayNum;
      local_108.Data.ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
      FVar6.Data = local_58.Data.AllocatorInstance.Data;
    }
  }
LAB_14ea5b600:
  if (FVar6.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar6.Data);
  }
  bVar2 = FPaths::FileExists(&local_f8);
  if (bVar2) {
    pFVar3 = FPaths::GetPath(&local_48,&local_f8);
    if (&local_f8 != pFVar3) {
      if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.Data.AllocatorInstance.Data);
      }
      local_f8.Data.AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_f8.Data.ArrayNum = (pFVar3->Data).ArrayNum;
      local_f8.Data.ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    pFVar3 = FPaths::GetPath(&local_38,__return_storage_ptr__);
    if (__return_storage_ptr__ != pFVar3) {
      pFVar8 = (__return_storage_ptr__->Data).AllocatorInstance.Data;
      if (pFVar8 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar8);
      }
      (__return_storage_ptr__->Data).AllocatorInstance.Data = (pFVar3->Data).AllocatorInstance.Data;
      (pFVar3->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->Data).ArrayNum = (pFVar3->Data).ArrayNum;
      (__return_storage_ptr__->Data).ArrayMax = (pFVar3->Data).ArrayMax;
      (pFVar3->Data).ArrayNum = 0;
      (pFVar3->Data).ArrayMax = 0;
    }
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  iVar9 = (param_1->Data).ArrayNum;
  iVar5 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar5 = 0;
  }
  if (iVar5 != 0) {
    if ((iVar5 < 1) &&
       (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                           ,0x113,
                           L"String index out of bounds: Index %i from a string with a length of %i"
                          ), bVar2)) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FString *)(*pcVar1)();
      return pFVar3;
    }
    if (*(short *)(param_1->Data).AllocatorInstance.Data == 0x7b) goto LAB_14ea5b88b;
  }
  FVar6.Data = local_f8.Data.AllocatorInstance.Data;
  iVar9 = 0;
  if (local_108.Data.ArrayNum < 2) {
    iVar5 = local_f8.Data.ArrayNum + -1;
    if (local_f8.Data.ArrayNum == 0) {
      iVar5 = iVar9;
    }
    ::FString::AssignRange
              (__return_storage_ptr__,(wchar_t *)local_f8.Data.AllocatorInstance.Data,iVar5);
  }
  else {
    lVar7 = (longlong)local_f8.Data.ArrayNum;
    local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_e8.Data.ArrayMax = 0;
    local_e8.Data.ArrayNum = local_f8.Data.ArrayNum;
    if (local_f8.Data.ArrayNum != 0) {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_f8.Data.ArrayNum,0,(ForAnyElementType *)&local_e8,local_f8.Data.ArrayNum,
                 &local_e8.Data.ArrayMax);
      memcpy(local_e8.Data.AllocatorInstance.Data,FVar6.Data,lVar7 * 2);
    }
    FVar6.Data = (FScriptContainerElement *)L"";
    if (local_108.Data.ArrayNum != 0) {
      FVar6.Data = local_108.Data.AllocatorInstance.Data;
    }
    bVar2 = FPaths::MakePathRelativeTo(&local_e8,(wchar_t *)FVar6.Data);
    if ((bVar2) && (bVar2 = ::FString::StartsWith(&local_e8,L"..",2,IgnoreCase), !bVar2)) {
      bVar2 = ::FString::StartsWith(&local_e8,L"./",2,IgnoreCase);
      if (!bVar2) {
        local_a8.Size = 1;
        local_a8.DataPtr = L".";
        local_98 = local_e8.Data.AllocatorInstance.Data;
        local_90 = local_e8.Data.ArrayNum + -1;
        if (local_e8.Data.ArrayNum == 0) {
          local_90 = iVar9;
        }
        FPaths::CombineInternal(&local_b8,&local_a8,2);
        if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_e8.Data.AllocatorInstance.Data);
        }
        local_e8.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
        local_e8.Data.ArrayNum = local_b8.Data.ArrayNum;
        local_e8.Data.ArrayMax = local_b8.Data.ArrayMax;
      }
      iVar5 = local_e8.Data.ArrayNum + -1;
      if (local_e8.Data.ArrayNum == 0) {
        iVar5 = iVar9;
      }
      ::FString::AssignRange
                (__return_storage_ptr__,(wchar_t *)local_e8.Data.AllocatorInstance.Data,iVar5);
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
  }
LAB_14ea5b88b:
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// Serialize @ 14ea5bbd0

void __thiscall UImgMediaSource::Serialize(UImgMediaSource *this,FArchive *param_1)

{
  int iVar1;
  FString FStack_18;
  
  UObject::Serialize((UObject *)this,param_1);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FSequencerObjectVersion::GUID);
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FMediaFrameworkObjectVersion::GUID);
  FArchiveState::CustomVer((FArchiveState *)param_1,&FMediaFrameworkObjectVersion::GUID);
  iVar1 = FArchiveState::CustomVer((FArchiveState *)param_1,&FSequencerObjectVersion::GUID);
  if (((param_1->field_0x28 & 1) == 0) || (0 < iVar1)) {
    (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&this->_padding_);
  }
  else {
    FStack_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    FStack_18.Data.ArrayNum = 0;
    FStack_18.Data.ArrayMax = 0;
    ::operator<<(param_1,&FStack_18);
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
      return;
    }
  }
  return;
}

// Serialize @ 14ea5bbe0

void __thiscall UImgMediaSource::Serialize(UImgMediaSource *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  UBaseMediaSource::Serialize((UBaseMediaSource *)this,pFVar1);
  return;
}

// SetSequencePath @ 14ea5be50

void __thiscall UImgMediaSource::SetSequencePath(UImgMediaSource *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FDirectoryPath *pFVar3;
  FString local_18;
  
  pFVar2 = SanitizeTokenizedSequencePath(&local_18,param_1);
  pFVar3 = &this->SequencePath;
  if (&pFVar3->Path != pFVar2) {
    pFVar1 = (pFVar3->Path).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar3->Path).Data.AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->SequencePath).Path.Data.ArrayNum = (pFVar2->Data).ArrayNum;
    (this->SequencePath).Path.Data.ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetTokenizedSequencePath @ 14ea5bf10

void __thiscall UImgMediaSource::SetTokenizedSequencePath(UImgMediaSource *this,FString *param_1)

{
  FScriptContainerElement *pFVar1;
  FString *pFVar2;
  FDirectoryPath *pFVar3;
  FString local_18;
  
  pFVar2 = SanitizeTokenizedSequencePath(&local_18,param_1);
  pFVar3 = &this->SequencePath;
  if (&pFVar3->Path != pFVar2) {
    pFVar1 = (pFVar3->Path).Data.AllocatorInstance.Data;
    if (pFVar1 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar1);
    }
    (pFVar3->Path).Data.AllocatorInstance.Data = (pFVar2->Data).AllocatorInstance.Data;
    (pFVar2->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (this->SequencePath).Path.Data.ArrayNum = (pFVar2->Data).ArrayNum;
    (this->SequencePath).Path.Data.ArrayMax = (pFVar2->Data).ArrayMax;
    (pFVar2->Data).ArrayNum = 0;
    (pFVar2->Data).ArrayMax = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// StaticRegisterNativesUImgMediaSource @ 14ea5c2c0

void __cdecl UImgMediaSource::StaticRegisterNativesUImgMediaSource(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_UImgMediaSource_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// Validate @ 14ea601f0

bool __thiscall UImgMediaSource::Validate(UImgMediaSource *this)

{
  bool bVar1;
  FString *pFVar2;
  FString local_18;
  
  pFVar2 = GetFullPath(this,&local_18);
  bVar1 = FPaths::DirectoryExists(pFVar2);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// execAddTargetObject @ 14ea60420

void __cdecl UImgMediaSource::execAddTargetObject(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined8 local_res8;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (*(longlong *)&param_1[7].field_0x10 == 0) {
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
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((TReferenceControllerBase<1> *)0x0);
  return;
}

// execGetProxies @ 14ea604e0

void __cdecl UImgMediaSource::execGetProxies(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  code *pcVar3;
  IFileManager *pIVar4;
  FString *pFVar5;
  FString **ppFVar6;
  ForAnyElementType FVar7;
  FString *local_58;
  undefined8 local_50;
  FString local_48;
  FString local_38;
  TStringView<wchar_t> local_28;
  wchar_t *local_18;
  undefined4 local_10;
  
  local_58 = (FString *)0x0;
  local_50 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  ppFVar6 = &local_58;
  if ((FString **)param_2->MostRecentPropertyAddress != (FString **)0x0) {
    ppFVar6 = (FString **)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pIVar4 = IFileManager::Get();
  pcVar3 = *(code **)((longlong)*pIVar4 + 0x80);
  pFVar5 = GetFullPath((UImgMediaSource *)param_1,&local_38);
  local_10 = 1;
  local_28.DataPtr = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  iVar1 = (pFVar5->Data).ArrayNum;
  local_18 = L"*";
  local_28.Size = iVar1 + -1;
  if (iVar1 == 0) {
    local_28.Size = 0;
  }
  FPaths::CombineInternal(&local_48,&local_28,2);
  FVar7.Data = (FScriptContainerElement *)L"";
  if (local_48.Data.ArrayNum != 0) {
    FVar7.Data = local_48.Data.AllocatorInstance.Data;
  }
  (*pcVar3)(pIVar4,ppFVar6,FVar7.Data,0,1);
  if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.Data.AllocatorInstance.Data);
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  DestructItems<FString,int>(local_58,(int)local_50);
  if (local_58 != (FString *)0x0) {
    FMemory::Free(local_58);
  }
  return;
}

// execGetSequencePath @ 14ea60650

void __cdecl UImgMediaSource::execGetSequencePath(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FString local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ExpandSequencePathTokens(&local_18,(FString *)(param_1 + 7));
  iVar1 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar1 = 0;
  }
  ::FString::AssignRange(param_3,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// execRemoveTargetObject @ 14ea606c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UImgMediaSource::execRemoveTargetObject(UObject *param_1,FFrame *param_2,void *param_3)

{
  LPCRITICAL_SECTION lpCriticalSection;
  FProperty *pFVar1;
  longlong lVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UObject *pUVar7;
  uint uVar8;
  longlong lVar9;
  uint uVar10;
  longlong local_res8;
  longlong local_res10;
  FName local_res20;
  FName local_68;
  undefined8 *local_60;
  FString local_58;
  FString local_48;
  
  local_res8 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  lVar9 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res10 = local_res8;
  if ((*(longlong *)&param_1[7].field_0x10 == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  lVar2 = *(longlong *)&param_1[7].field_0x10;
  if (lVar9 != 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)(lVar2 + 0xa0);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::ReportNotNullPtr();
    }
    EnterCriticalSection(lpCriticalSection);
    uVar8 = 0;
    if (0 < *(int *)(lVar2 + 0x28)) {
      lVar9 = 0;
      do {
        uVar10 = ~uVar8 >> 0x1f;
        uVar5 = 0;
        if ((int)uVar8 < *(int *)(lVar2 + 0x28)) {
          uVar5 = uVar10;
        }
        if ((uVar5 == 0) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
        local_60 = *(undefined8 **)(lVar9 + *(longlong *)(lVar2 + 0x20));
        pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)(local_60 + 1),true);
        if ((pUVar7 != (UObject *)0x0) && (local_res10 == *(longlong *)&pUVar7->field_0x20)) {
          if (5 < (byte)LogImgMedia._0_1_) {
            local_res20 = *(FName *)(local_res10 + 0x18);
            ::FName::ToString(&local_res20,&local_48);
            local_68.ComparisonIndex.Value = *(uint *)&pUVar7->field_0x18;
            local_68.Number = *(uint *)&pUVar7->field_0x1c;
            ::FName::ToString(&local_68,&local_58);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogImgMedia);
            if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_58.Data.AllocatorInstance.Data);
            }
            if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_48.Data.AllocatorInstance.Data);
            }
          }
          uVar5 = 0;
          if ((int)uVar8 < *(int *)(lVar2 + 0x28)) {
            uVar5 = uVar10;
          }
          if ((uVar5 == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          iVar6 = *(int *)(lVar2 + 0x28) + ~uVar8;
          if (1 < iVar6) {
            iVar6 = 1;
          }
          if (iVar6 != 0) {
            memmove((void *)(*(longlong *)(lVar2 + 0x20) + (longlong)(int)uVar8 * 8),
                    (void *)(*(longlong *)(lVar2 + 0x20) +
                            (longlong)(*(int *)(lVar2 + 0x28) - iVar6) * 8),(longlong)iVar6 << 3);
          }
          *(int *)(lVar2 + 0x28) = *(int *)(lVar2 + 0x28) + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (8,8,(ForAnyElementType *)(lVar2 + 0x20),*(int *)(lVar2 + 0x28),
                     (int *)(lVar2 + 0x2c));
          if (local_60 != (undefined8 *)0x0) {
            (**(code **)*local_60)(local_60,1);
          }
          if ((*(int *)(lVar2 + 0x28) == 0) && (*(longlong *)(lVar2 + 0x120) != 0)) {
            TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>::Remove
                      ((TMulticastDelegateRegistration<void___cdecl(void),FDefaultDelegateUserPolicy>
                        *)&FCoreDelegates::OnEndFrame,(FDelegateHandle)*(ulong64 *)(lVar2 + 0x120));
            *(undefined8 *)(lVar2 + 0x120) = 0;
            *(undefined1 *)(lVar2 + 0x118) = 0;
          }
          break;
        }
        uVar8 = uVar8 + 1;
        lVar9 = lVar9 + 8;
      } while ((int)uVar8 < *(int *)(lVar2 + 0x28));
    }
    LeaveCriticalSection(lpCriticalSection);
  }
  return;
}

// execSetSequencePath @ 14ea60a30

void __cdecl UImgMediaSource::execSetSequencePath(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  FString local_28;
  FString local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = (UObject *)SanitizeTokenizedSequencePath(&local_18,&local_28);
  pUVar3 = param_1 + 7;
  if (pUVar3 != pUVar2) {
    if (*(void **)pUVar3 != (void *)0x0) {
      FMemory::Free(*(void **)pUVar3);
    }
    *(undefined8 *)pUVar3 = *(undefined8 *)pUVar2;
    *(undefined8 *)pUVar2 = 0;
    *(int *)&param_1[7].field_0x8 = *(int *)&pUVar2->field_0x8;
    *(int *)&param_1[7].field_0xc = *(int *)&pUVar2->field_0xc;
    *(undefined8 *)&pUVar2->field_0x8 = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

// execSetTokenizedSequencePath @ 14ea60b20

void __cdecl
UImgMediaSource::execSetTokenizedSequencePath(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *pUVar3;
  FString local_28;
  FString local_18;
  
  local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.Data.ArrayNum = 0;
  local_28.Data.ArrayMax = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar2 = (UObject *)SanitizeTokenizedSequencePath(&local_18,&local_28);
  pUVar3 = param_1 + 7;
  if (pUVar3 != pUVar2) {
    if (*(void **)pUVar3 != (void *)0x0) {
      FMemory::Free(*(void **)pUVar3);
    }
    *(undefined8 *)pUVar3 = *(undefined8 *)pUVar2;
    *(undefined8 *)pUVar2 = 0;
    *(int *)&param_1[7].field_0x8 = *(int *)&pUVar2->field_0x8;
    *(int *)&param_1[7].field_0xc = *(int *)&pUVar2->field_0xc;
    *(undefined8 *)&pUVar2->field_0x8 = 0;
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  return;
}

