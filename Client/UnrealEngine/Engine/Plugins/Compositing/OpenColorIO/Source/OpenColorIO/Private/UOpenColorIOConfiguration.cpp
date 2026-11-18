// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenColorIO
// Functions: 38

// StaticClass @ 14d764ce0

UClass * __cdecl UOpenColorIOConfiguration::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOpenColorIOConfiguration.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OpenColorIO",L"OpenColorIOConfiguration",
               &Z_Registration_Info_UClass_UOpenColorIOConfiguration.InnerSingleton,
               StaticRegisterNativesUOpenColorIOConfiguration,0xf8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UOpenColorIOConfiguration>,
               InternalVTableHelperCtorCaller<UOpenColorIOConfiguration>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOpenColorIOConfiguration.InnerSingleton;
}

// UOpenColorIOConfiguration @ 14d769420

UOpenColorIOConfiguration * __thiscall
UOpenColorIOConfiguration::UOpenColorIOConfiguration
          (UOpenColorIOConfiguration *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UOpenColorIOConfiguration__6B_;
  (this->ConfigurationFile).FilePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConfigurationFile).FilePath.Data.ArrayNum = 0;
  (this->ConfigurationFile).FilePath.Data.ArrayMax = 0;
  (this->DesiredColorSpaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DesiredColorSpaces).ArrayNum = 0;
  (this->DesiredColorSpaces).ArrayMax = 0;
  (this->DesiredDisplayViews).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DesiredDisplayViews).ArrayNum = 0;
  (this->DesiredDisplayViews).ArrayMax = 0;
  *(undefined8 *)&this->Context = 0;
  *(undefined8 *)&(this->Context).field_0x8 = 0;
  *(undefined8 *)&(this->Context).field_0x20 = 0;
  *(undefined4 *)&(this->Context).field_0x28 = 0;
  *(undefined4 *)&(this->Context).field_0x2c = 0x80;
  *(undefined4 *)&(this->Context).field_0x34 = 0;
  *(undefined4 *)&(this->Context).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Context).field_0x40 = 0;
  *(undefined4 *)&(this->Context).field_0x48 = 0;
  (this->ColorTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ColorTransforms).ArrayNum = 0;
  (this->ColorTransforms).ArrayMax = 0;
  (this->WatchedDirectoryInfo).DirectoryWatcherHandle.ID = 0;
  (this->WatchedDirectoryInfo).FolderPath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->WatchedDirectoryInfo).FolderPath.Data.ArrayNum = 0;
  (this->WatchedDirectoryInfo).FolderPath.Data.ArrayMax = 0;
  (this->WatchedDirectoryInfo).RawConfigChangedToast.Object = (SNotificationItem *)0x0;
  (this->WatchedDirectoryInfo).RawConfigChangedToast.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Config).Ptr = (FOpenColorIOWrapperConfig *)0x0;
  (this->ConfigHash).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConfigHash).Data.ArrayNum = 0;
  (this->ConfigHash).Data.ArrayMax = 0;
  return this;
}

// UOpenColorIOConfiguration @ 14d7694e0

UOpenColorIOConfiguration * __thiscall
UOpenColorIOConfiguration::UOpenColorIOConfiguration
          (UOpenColorIOConfiguration *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UOpenColorIOConfiguration__6B_;
  (this->ConfigurationFile).FilePath.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConfigurationFile).FilePath.Data.ArrayNum = 0;
  (this->ConfigurationFile).FilePath.Data.ArrayMax = 0;
  (this->DesiredColorSpaces).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DesiredColorSpaces).ArrayNum = 0;
  (this->DesiredColorSpaces).ArrayMax = 0;
  (this->DesiredDisplayViews).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->DesiredDisplayViews).ArrayNum = 0;
  (this->DesiredDisplayViews).ArrayMax = 0;
  *(undefined8 *)&this->Context = 0;
  *(undefined8 *)&(this->Context).field_0x8 = 0;
  *(undefined8 *)&(this->Context).field_0x20 = 0;
  *(undefined4 *)&(this->Context).field_0x28 = 0;
  *(undefined4 *)&(this->Context).field_0x2c = 0x80;
  *(undefined4 *)&(this->Context).field_0x34 = 0;
  *(undefined4 *)&(this->Context).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->Context).field_0x40 = 0;
  *(undefined4 *)&(this->Context).field_0x48 = 0;
  (this->ColorTransforms).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ColorTransforms).ArrayNum = 0;
  (this->ColorTransforms).ArrayMax = 0;
  (this->WatchedDirectoryInfo).DirectoryWatcherHandle.ID = 0;
  (this->WatchedDirectoryInfo).FolderPath.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->WatchedDirectoryInfo).FolderPath.Data.ArrayNum = 0;
  (this->WatchedDirectoryInfo).FolderPath.Data.ArrayMax = 0;
  (this->WatchedDirectoryInfo).RawConfigChangedToast.Object = (SNotificationItem *)0x0;
  (this->WatchedDirectoryInfo).RawConfigChangedToast.WeakReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->Config).Ptr = (FOpenColorIOWrapperConfig *)0x0;
  (this->ConfigHash).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConfigHash).Data.ArrayNum = 0;
  (this->ConfigHash).Data.ArrayMax = 0;
  return this;
}

// ~UOpenColorIOConfiguration @ 14d769dd0

void __thiscall
UOpenColorIOConfiguration::~UOpenColorIOConfiguration(UOpenColorIOConfiguration *this)

{
  atomic<int> *paVar1;
  atomic<int> aVar2;
  FScriptContainerElement *pFVar3;
  FOpenColorIOWrapperConfig *pFVar4;
  TReferenceControllerBase<1> *pTVar5;
  void *pvVar6;
  
  this->_padding_ = (longlong)&___7UOpenColorIOConfiguration__6B_;
  pFVar3 = (this->ConfigHash).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar4 = (this->Config).Ptr;
  if (pFVar4 != (FOpenColorIOWrapperConfig *)0x0) {
    (*(code *)pFVar4[-1]._padding_)(pFVar4 + -1);
  }
  pTVar5 = (this->WatchedDirectoryInfo).RawConfigChangedToast.WeakReferenceCount.ReferenceController
  ;
  if (pTVar5 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    paVar1 = &pTVar5->WeakReferenceCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<int>)0x1) {
      (**(code **)(pTVar5->_padding_ + 8))(pTVar5,1);
    }
  }
  pFVar3 = (this->WatchedDirectoryInfo).FolderPath.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ColorTransforms).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  *(undefined4 *)&(this->Context).field_0x48 = 0;
  pvVar6 = *(void **)&(this->Context).field_0x40;
  if (pvVar6 != (void *)0x0) {
    FMemory::Free(pvVar6);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Context);
  DestructItems<FOpenColorIODisplayView,int>
            ((FOpenColorIODisplayView *)(this->DesiredDisplayViews).AllocatorInstance.Data,
             (this->DesiredDisplayViews).ArrayNum);
  pFVar3 = (this->DesiredDisplayViews).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FOpenColorIOColorSpace,int>
            ((FOpenColorIOColorSpace *)(this->DesiredColorSpaces).AllocatorInstance.Data,
             (this->DesiredColorSpaces).ArrayNum);
  pFVar3 = (this->DesiredColorSpaces).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->ConfigurationFile).FilePath.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 14d76a500

bool __thiscall
`UOpenColorIOConfiguration::CleanupTransforms'::__l2::<lambda_1>::operator()
          (void *this,TObjectPtr<UOpenColorIOColorTransform> *param_1)

{
  int iVar1;
  longlong lVar2;
  UOpenColorIOColorTransform *pUVar3;
  TObjectPtr<UOpenColorIOColorTransform>_u_0 TVar4;
  int iVar5;
  FOpenColorIODisplayView *pFVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  FOpenColorIODisplayView *pFVar9;
  bool bVar10;
  TObjectPtr<UOpenColorIOColorTransform>_u_0 local_res8;
  
  lVar2 = *(longlong *)this;
  pUVar3 = (param_1->field0_0x0).DebugPtr;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar3 != (UOpenColorIOColorTransform *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar3);
  }
  puVar8 = *(undefined8 **)(lVar2 + 0x38);
  puVar7 = puVar8 + (longlong)*(int *)(lVar2 + 0x40) * 6;
  while( true ) {
    if (puVar8 == puVar7) {
      return false;
    }
    iVar5 = *(int *)(puVar8 + 1);
    iVar1 = (pUVar3->SourceColorSpace).Data.ArrayNum;
    if (iVar5 == iVar1) break;
    bVar10 = iVar5 + iVar1 == 1;
LAB_14d76a574:
    if (bVar10) goto LAB_14d76a59a;
    puVar8 = puVar8 + 6;
  }
  if (1 < iVar5) {
    iVar5 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)*puVar8,
                       (wchar_t *)(pUVar3->SourceColorSpace).Data.AllocatorInstance.Data);
    bVar10 = iVar5 == 0;
    goto LAB_14d76a574;
  }
LAB_14d76a59a:
  TVar4.ObjectPtr.field0_0x0 = (FObjectPtr)(param_1->field0_0x0).DebugPtr;
  lVar2 = *(longlong *)this;
  if ((TVar4.DebugPtr)->bIsDisplayViewType == false) {
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar4.DebugPtr != (UOpenColorIOColorTransform *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
    }
    pFVar6 = *(FOpenColorIODisplayView **)(lVar2 + 0x38);
    pFVar9 = pFVar6 + *(int *)(lVar2 + 0x40);
    for (; pFVar6 != pFVar9; pFVar6 = pFVar6 + 1) {
      iVar5 = (pFVar6->Display).Data.ArrayNum;
      iVar1 = ((TVar4.DebugPtr)->DestinationColorSpace).Data.ArrayNum;
      if (iVar5 == iVar1) {
        if (iVar5 < 2) goto LAB_14d76a668;
        iVar5 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(pFVar6->Display).Data.AllocatorInstance.Data,
                           (wchar_t *)
                           ((TVar4.DebugPtr)->DestinationColorSpace).Data.AllocatorInstance.Data);
        bVar10 = iVar5 == 0;
      }
      else {
        bVar10 = iVar5 + iVar1 == 1;
      }
      if (bVar10) goto LAB_14d76a668;
    }
  }
  else {
    local_res8.ObjectPtr.field0_0x0 = TVar4.ObjectPtr.field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (TVar4.DebugPtr != (UOpenColorIOColorTransform *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar4.DebugPtr);
    }
    pFVar6 = *(FOpenColorIODisplayView **)(lVar2 + 0x48);
    pFVar9 = pFVar6 + *(int *)(lVar2 + 0x50);
    if (pFVar6 != pFVar9) {
      while (bVar10 = ``UOpenColorIOConfiguration::CleanupTransforms'::__l2::<lambda_1>::operator()'
                      ::__l8::<lambda_2>::operator()(&local_res8,pFVar6), !bVar10) {
        pFVar6 = pFVar6 + 1;
        if (pFVar6 == pFVar9) {
          return false;
        }
      }
      goto LAB_14d76a668;
    }
  }
  pFVar6 = (FOpenColorIODisplayView *)0x0;
LAB_14d76a668:
  return pFVar6 != (FOpenColorIODisplayView *)0x0;
}

// operator() @ 14d76a680

bool __thiscall
`UOpenColorIOConfiguration::FindTransform'::__l2::<lambda_1>::operator()
          (void *this,UOpenColorIOColorTransform *param_1)

{
  EOpenColorIOViewTransformDirection EVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  
  iVar3 = (param_1->SourceColorSpace).Data.ArrayNum;
  if (param_1->bIsDisplayViewType == false) {
    iVar2 = *(int *)(*(longlong *)this + 0x10);
    if (iVar3 == iVar2) {
      if (iVar3 < 2) goto LAB_14d76a78f;
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_1->SourceColorSpace).Data.AllocatorInstance.Data,
                         *(wchar_t **)(*(longlong *)this + 8));
      bVar4 = iVar3 == 0;
    }
    else {
      bVar4 = iVar3 + iVar2 == 1;
    }
    if (!bVar4) {
      return false;
    }
LAB_14d76a78f:
    iVar3 = (param_1->DestinationColorSpace).Data.ArrayNum;
    iVar2 = *(int *)(*(longlong *)this + 0x40);
    if (iVar3 == iVar2) {
      if (iVar3 < 2) {
        return true;
      }
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_1->DestinationColorSpace).Data.AllocatorInstance.Data,
                         *(wchar_t **)(*(longlong *)this + 0x38));
      bVar4 = iVar3 == 0;
    }
    else {
      bVar4 = iVar3 + iVar2 == 1;
    }
    if (bVar4) {
      return true;
    }
    return false;
  }
  EVar1 = param_1->DisplayViewDirection;
  iVar2 = *(int *)(*(longlong *)this + 0x10);
  if (iVar3 == iVar2) {
    if (1 < iVar3) {
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_1->SourceColorSpace).Data.AllocatorInstance.Data,
                         *(wchar_t **)(*(longlong *)this + 8));
      bVar4 = iVar3 == 0;
      goto LAB_14d76a6cb;
    }
  }
  else {
    bVar4 = iVar3 + iVar2 == 1;
LAB_14d76a6cb:
    if (!bVar4) {
      return false;
    }
  }
  iVar3 = (param_1->Display).Data.ArrayNum;
  iVar2 = *(int *)(*(longlong *)this + 0x70);
  if (iVar3 == iVar2) {
    if (1 < iVar3) {
      iVar3 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_1->Display).Data.AllocatorInstance.Data,
                         *(wchar_t **)(*(longlong *)this + 0x68));
      bVar4 = iVar3 == 0;
      goto LAB_14d76a6fa;
    }
  }
  else {
    bVar4 = iVar3 + iVar2 == 1;
LAB_14d76a6fa:
    if (!bVar4) {
      return false;
    }
  }
  iVar3 = (param_1->View).Data.ArrayNum;
  iVar2 = *(int *)(*(longlong *)this + 0x80);
  if (iVar3 == iVar2) {
    if (iVar3 < 2) goto LAB_14d76a733;
    iVar3 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_1->View).Data.AllocatorInstance.Data,
                       *(wchar_t **)(*(longlong *)this + 0x78));
    bVar4 = iVar3 == 0;
  }
  else {
    bVar4 = iVar3 + iVar2 == 1;
  }
  if (!bVar4) {
    return false;
  }
LAB_14d76a733:
  if (*(EOpenColorIOViewTransformDirection *)(*(longlong *)this + 0x98) != EVar1) {
    return false;
  }
  return true;
}

// operator() @ 14d76a7e0

bool __thiscall
`UOpenColorIOConfiguration::HasTransform'::__l2::<lambda_1>::operator()
          (void *this,UOpenColorIOColorTransform *param_1)

{
  EOpenColorIOViewTransformDirection EVar1;
  int iVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  int iVar5;
  bool bVar6;
  
  puVar3 = *(undefined8 **)((longlong)this + 0x10);
  puVar4 = *(undefined8 **)((longlong)this + 8);
  EVar1 = **(EOpenColorIOViewTransformDirection **)((longlong)this + 0x18);
  if (param_1->bIsDisplayViewType == false) {
    return false;
  }
  iVar5 = (param_1->SourceColorSpace).Data.ArrayNum;
  iVar2 = *(int *)(*(undefined8 **)this + 1);
  if (iVar5 == iVar2) {
    if (1 < iVar5) {
      iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_1->SourceColorSpace).Data.AllocatorInstance.Data,
                         (wchar_t *)**(undefined8 **)this);
      bVar6 = iVar5 == 0;
      goto LAB_14d76a837;
    }
  }
  else {
    bVar6 = iVar5 + iVar2 == 1;
LAB_14d76a837:
    if (!bVar6) {
      return false;
    }
  }
  iVar5 = (param_1->Display).Data.ArrayNum;
  iVar2 = *(int *)(puVar4 + 1);
  if (iVar5 == iVar2) {
    if (1 < iVar5) {
      iVar5 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(param_1->Display).Data.AllocatorInstance.Data,
                         (wchar_t *)*puVar4);
      bVar6 = iVar5 == 0;
      goto LAB_14d76a862;
    }
  }
  else {
    bVar6 = iVar5 + iVar2 == 1;
LAB_14d76a862:
    if (!bVar6) {
      return false;
    }
  }
  iVar5 = (param_1->View).Data.ArrayNum;
  iVar2 = *(int *)(puVar3 + 1);
  if (iVar5 == iVar2) {
    if (iVar5 < 2) goto LAB_14d76a894;
    iVar5 = FGenericPlatformStricmp::Stricmp
                      ((wchar_t *)(param_1->View).Data.AllocatorInstance.Data,(wchar_t *)*puVar3);
    bVar6 = iVar5 == 0;
  }
  else {
    bVar6 = iVar5 + iVar2 == 1;
  }
  if (!bVar6) {
    return false;
  }
LAB_14d76a894:
  if (param_1->DisplayViewDirection != EVar1) {
    return false;
  }
  return true;
}

// BeginDestroy @ 14d76cd10

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UOpenColorIOConfiguration::BeginDestroy(UOpenColorIOConfiguration *this)

{
  ForElementType<UObject_*> FVar1;
  void *_Dst;
  int iVar2;
  ForElementType<UObject_*> FVar3;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar4;
  TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *pTVar5;
  FName aFStackX_8 [4];
  FString FStack_18;
  
  if (((uint)this->_padding_ >> 0xf & 1) == 0) {
    aFStackX_8[0] = (FName)this->_padding_;
    ::FName::ToString(aFStackX_8,&FStack_18);
    UE::Logging::Private::BasicFatalLog(&::LOG_Static,(FLogCategoryBase *)&LogObj);
    if (FStack_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_18.Data.AllocatorInstance.Data);
    }
  }
  UObject::SetLinker((UObject *)this,(FLinkerLoad *)0x0,-1,true,false);
  aFStackX_8[0].ComparisonIndex.Value = 0;
  aFStackX_8[0].Number = 0;
  UObjectBase::LowLevelRename((UObjectBase *)this,(FName)0x0,(UObject *)0x0);
  UObjectBase::SetExternalPackage((UObjectBase *)this,(UPackage *)0x0);
  pTVar5 = &DebugBeginDestroyed;
  pTVar4 = &DebugBeginDestroyed;
  if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
    pTVar4 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
             DebugBeginDestroyed.AllocatorInstance.SecondaryData;
  }
  FVar1 = (ForElementType<UObject_*>)((longlong)pTVar4 + (longlong)DebugBeginDestroyed.ArrayNum * 8)
  ;
  FVar3 = (ForElementType<UObject_*>)pTVar4;
  if ((ForElementType<UObject_*>)pTVar4 != FVar1) {
    while (*(UOpenColorIOConfiguration **)FVar3 != this) {
      FVar3 = (ForElementType<UObject_*>)((longlong)FVar3 + 8);
      if (FVar3 == FVar1) {
        return;
      }
    }
    iVar2 = (int)((longlong)FVar3 - (longlong)pTVar4 >> 3);
    if (iVar2 != -1) {
      if (DebugBeginDestroyed.AllocatorInstance.SecondaryData != (ForElementType<UObject_*>)0x0) {
        pTVar5 = (TArray<UObject_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)
                 DebugBeginDestroyed.AllocatorInstance.SecondaryData;
      }
      _Dst = (void *)((longlong)pTVar5 + (longlong)iVar2 * 8);
      memmove(_Dst,(void *)((longlong)_Dst + 8),
              (longlong)((DebugBeginDestroyed.ArrayNum - iVar2) + -1) << 3);
      DebugBeginDestroyed.ArrayNum = DebugBeginDestroyed.ArrayNum + -1;
    }
  }
  return;
}

// CleanupTransforms @ 14d76dfb0

void __thiscall UOpenColorIOConfiguration::CleanupTransforms(UOpenColorIOConfiguration *this)

{
  TArray<TObjectPtr<UOpenColorIOColorTransform>,TSizedDefaultAllocator<32>_> *pTVar1;
  TObjectPtr<UOpenColorIOColorTransform>_u_0 *pTVar2;
  TObjectPtr<UOpenColorIOColorTransform> TVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  int iVar7;
  TObjectPtr<UOpenColorIOColorTransform>_u_0 *pTVar8;
  UOpenColorIOConfiguration *local_res8;
  ForAnyElementType local_28;
  undefined8 local_20;
  
  pTVar1 = &this->ColorTransforms;
  pTVar8 = (TObjectPtr<UOpenColorIOColorTransform>_u_0 *)(pTVar1->AllocatorInstance).Data;
  local_28.Data = (FScriptContainerElement *)0x0;
  local_20 = 0;
  pTVar2 = pTVar8 + (this->ColorTransforms).ArrayNum;
  local_res8 = this;
  do {
    if (pTVar8 == pTVar2) {
      if (pTVar1 != (TArray<TObjectPtr<UOpenColorIOColorTransform>,TSizedDefaultAllocator<32>_> *)
                    &local_28) {
        pFVar4 = (pTVar1->AllocatorInstance).Data;
        if (pFVar4 != (FScriptContainerElement *)0x0) {
          FMemory::Free(pFVar4);
        }
        (pTVar1->AllocatorInstance).Data = local_28.Data;
        (this->ColorTransforms).ArrayNum = (int)local_20;
        local_28.Data = (FScriptContainerElement *)0x0;
        (this->ColorTransforms).ArrayMax = local_20._4_4_;
        local_20 = 0;
      }
      if (local_28.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data);
      }
      return;
    }
    bVar6 = `UOpenColorIOConfiguration::CleanupTransforms'::__l2::<lambda_1>::operator()
                      (&local_res8,(TObjectPtr<UOpenColorIOColorTransform> *)&pTVar8->ObjectPtr);
    if (bVar6) {
      if (((local_28.Data <= pTVar8) && (pTVar8 < local_28.Data + (longlong)local_20._4_4_ * 8)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      iVar7 = (int)local_20;
      if ((int)local_20 == local_20._4_4_) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&local_28,(int *)((longlong)&local_20 + 4));
      }
      local_20 = CONCAT44(local_20._4_4_,iVar7 + 1);
      TVar3.field0_0x0 = (TObjectPtr<UOpenColorIOColorTransform>_u_0)pTVar8->DebugPtr;
      ((TObjectPtr<UOpenColorIOColorTransform>_u_0 *)(local_28.Data + (longlong)iVar7 * 8))->
      DebugPtr = (UOpenColorIOColorTransform *)TVar3.field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar3.field0_0x0 != (UOpenColorIOColorTransform *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar3.field0_0x0);
      }
    }
    pTVar8 = pTVar8 + 1;
  } while( true );
}

// ConfigPathChangedEvent @ 14d76e240

void __thiscall
UOpenColorIOConfiguration::ConfigPathChangedEvent
          (UOpenColorIOConfiguration *this,
          TArray<FFileChangeData,TSizedDefaultAllocator<32>_> *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  FLowLevelMemTracker *this_00;
  
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 == (FScriptContainerElement *)0x0) {
    return;
  }
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pFVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pFVar1);
  }
  return;
}

// CreateColorTransform @ 14d76e4c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UOpenColorIOConfiguration::CreateColorTransform
          (UOpenColorIOConfiguration *this,FString *param_1,FString *param_2,FString *param_3,
          EOpenColorIOViewTransformDirection param_4)

{
  int *piVar1;
  TArray<TObjectPtr<UOpenColorIOColorTransform>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UOpenColorIOColorTransform *this_00;
  UOpenColorIOColorTransform *local_28 [2];
  
  if (((1 < (param_1->Data).ArrayNum) && (1 < (param_2->Data).ArrayNum)) &&
     (1 < (param_3->Data).ArrayNum)) {
    bVar5 = HasTransform(this,param_1,param_2,param_3,param_4);
    if (bVar5) {
      if (4 < (byte)LogOpenColorIO._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOpenColorIO);
      }
    }
    else {
      this_00 = NewObject<UOpenColorIOColorTransform>
                          ((UObject *)this,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                           (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      if ((((param_1->Data).ArrayNum < 2) || ((param_2->Data).ArrayNum < 2)) ||
         ((param_3->Data).ArrayNum < 2)) {
        if (2 < (byte)LogOpenColorIO._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOpenColorIO);
        }
      }
      else {
        ::FString::operator=(&this_00->SourceColorSpace,param_1);
        ::FString::Empty(&this_00->DestinationColorSpace);
        ::FString::operator=(&this_00->Display,param_2);
        ::FString::operator=(&this_00->View,param_3);
        this_00->bIsDisplayViewType = true;
        this_00->DisplayViewDirection = param_4;
        UOpenColorIOColorTransform::FlushResourceShaderMaps(this_00);
        UOpenColorIOColorTransform::CacheResourceShadersForRendering(this_00,false);
        pTVar2 = &this->ColorTransforms;
        local_28[0] = this_00;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        pFVar3 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)local_28) &&
            ((FScriptContainerElement *)local_28 <
             pFVar3 + (longlong)(this->ColorTransforms).ArrayMax * 8)) &&
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
        iVar6 = (this->ColorTransforms).ArrayNum;
        piVar1 = &(this->ColorTransforms).ArrayMax;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->ColorTransforms).ArrayNum = iVar6 + 1;
        *(UOpenColorIOColorTransform **)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) =
             local_28[0];
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_28[0] != (UOpenColorIOColorTransform *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_28[0]);
        }
      }
    }
  }
  return;
}

// CreateColorTransform @ 14d76e750

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UOpenColorIOConfiguration::CreateColorTransform
          (UOpenColorIOConfiguration *this,FString *param_1,FString *param_2)

{
  int *piVar1;
  TArray<TObjectPtr<UOpenColorIOColorTransform>,TSizedDefaultAllocator<32>_> *pTVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  bool bVar5;
  int iVar6;
  UOpenColorIOColorTransform *this_00;
  UOpenColorIOColorTransform *local_18 [2];
  
  if ((1 < (param_1->Data).ArrayNum) && (1 < (param_2->Data).ArrayNum)) {
    bVar5 = HasTransform(this,param_1,param_2);
    if (bVar5) {
      if (4 < (byte)LogOpenColorIO._0_1_) {
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogOpenColorIO);
        return;
      }
    }
    else {
      this_00 = NewObject<UOpenColorIOColorTransform>
                          ((UObject *)this,(FName)0x0,RF_NoFlags,(UObject *)0x0,false,
                           (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
      if (((param_1->Data).ArrayNum < 2) || ((param_2->Data).ArrayNum < 2)) {
        if (2 < (byte)LogOpenColorIO._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOpenColorIO);
        }
      }
      else {
        ::FString::operator=(&this_00->SourceColorSpace,param_1);
        ::FString::operator=(&this_00->DestinationColorSpace,param_2);
        this_00->bIsDisplayViewType = false;
        UOpenColorIOColorTransform::FlushResourceShaderMaps(this_00);
        UOpenColorIOColorTransform::CacheResourceShadersForRendering(this_00,false);
        pTVar2 = &this->ColorTransforms;
        local_18[0] = this_00;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_00);
        }
        pFVar3 = (pTVar2->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)local_18) &&
            ((FScriptContainerElement *)local_18 <
             pFVar3 + (longlong)(this->ColorTransforms).ArrayMax * 8)) &&
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
        iVar6 = (this->ColorTransforms).ArrayNum;
        piVar1 = &(this->ColorTransforms).ArrayMax;
        if (iVar6 == *piVar1) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&pTVar2->AllocatorInstance,piVar1);
        }
        (this->ColorTransforms).ArrayNum = iVar6 + 1;
        *(UOpenColorIOColorTransform **)((pTVar2->AllocatorInstance).Data + (longlong)iVar6 * 8) =
             local_18[0];
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_18[0] != (UOpenColorIOColorTransform *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_18[0]);
        }
      }
    }
  }
  return;
}

// FindTransform @ 14d76ff80

TObjectPtr<UOpenColorIOColorTransform_const_> __thiscall
UOpenColorIOConfiguration::FindTransform
          (UOpenColorIOConfiguration *this,FOpenColorIOColorConversionSettings *param_1)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  UOpenColorIOConfiguration *pUVar4;
  undefined1 local_res8 [8];
  
  pFVar3 = (this->ColorTransforms).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)(this->ColorTransforms).ArrayNum * 8;
  do {
    if (pFVar3 == pFVar1) {
      pUVar4 = (UOpenColorIOConfiguration *)0x0;
LAB_14d76ffcc:
      (param_1->ConfigurationSource).field0_0x0.DebugPtr = pUVar4;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar4 != (UOpenColorIOConfiguration *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      return (TObjectPtr<UOpenColorIOColorTransform_const_>)
             (TObjectPtr<UOpenColorIOColorTransform_const_>_u_0)param_1;
    }
    bVar2 = `UOpenColorIOConfiguration::FindTransform'::__l2::<lambda_1>::operator()
                      (local_res8,*(UOpenColorIOColorTransform **)pFVar3);
    if (bVar2) {
      pUVar4 = *(UOpenColorIOConfiguration **)pFVar3;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar4 != (UOpenColorIOConfiguration *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar4);
      }
      goto LAB_14d76ffcc;
    }
    pFVar3 = pFVar3 + 8;
  } while( true );
}

// GetAssetRegistryTags @ 14d7708f0

void __thiscall
UOpenColorIOConfiguration::GetAssetRegistryTags
          (UOpenColorIOConfiguration *this,FAssetRegistryTagsContext param_1)

{
  FOpenColorIOWrapperConfig *this_00;
  undefined1 _Src [8];
  bool bVar1;
  FAssetRegistryTagsContext FVar2;
  FName *pFVar3;
  wchar_t *pwVar4;
  longlong lVar5;
  FName local_res8;
  undefined1 local_48 [8];
  FScriptContainerElement *local_40;
  FAssetRegistryTag local_38;
  
  FVar2.Data = (FAssetRegistryTagsContextData *)
               FAssetRegistryTagsContext::FAssetRegistryTagsContext
                         ((FAssetRegistryTagsContext *)&local_res8,param_1.Data);
  UObject::GetAssetRegistryTags((UObject *)this,FVar2);
  local_48._0_4_ = 0;
  local_48._4_4_ = 0;
  local_40 = (FScriptContainerElement *)0x0;
  if ((this->ConfigurationFile).FilePath.Data.ArrayNum < 2) {
    pwVar4 = L"No configuration selected.";
  }
  else {
    this_00 = (this->Config).Ptr;
    if (this_00 != (FOpenColorIOWrapperConfig *)0x0) {
      bVar1 = FOpenColorIOWrapperConfig::IsValid(this_00);
      if (bVar1) {
        ::FString::ConcatCF((FString *)&local_38,L"Configuration: ",
                            &(this->ConfigurationFile).FilePath);
        if ((FName)local_48 != (FName)0x0) {
          FMemory::Free((void *)local_48);
        }
        local_48._0_4_ = local_38.Name.ComparisonIndex.Value;
        local_48._4_4_ = local_38.Name.Number;
        local_40 = local_38.Value.Data.AllocatorInstance.Data;
        goto LAB_14d770996;
      }
    }
    pwVar4 = L"Warning: Configuration is invalid. Verify the selected configuration file.";
  }
  ::FString::operator=((FString *)local_48,pwVar4);
LAB_14d770996:
  pFVar3 = ::FName::FName(&local_res8,L"ConfigurationFile");
  _Src = local_48;
  lVar5 = (longlong)(int)local_40;
  local_38.Name = *pFVar3;
  local_38.Value.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Value.Data.ArrayNum = (int)local_40;
  if ((int)local_40 == 0) {
    local_38.Value.Data.ArrayMax = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_40,0,(ForAnyElementType *)&local_38.Value,(int)local_40,
               &local_38.Value.Data.ArrayMax);
    memcpy(local_38.Value.Data.AllocatorInstance.Data,(void *)_Src,lVar5 * 2);
  }
  local_38.Type = TT_Hidden;
  local_38.DisplayFlags = 0;
  FAssetRegistryTagsContext::AddTag((FAssetRegistryTagsContext *)param_1.Data,&local_38);
  if ((FName)local_48 != (FName)0x0) {
    FMemory::Free((void *)local_48);
  }
  return;
}

// GetConfigWrapper @ 14d770a80

FOpenColorIOWrapperConfig * __thiscall
UOpenColorIOConfiguration::GetConfigWrapper(UOpenColorIOConfiguration *this)

{
  return (this->Config).Ptr;
}

// GetHash @ 14d770fd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UOpenColorIOConfiguration::GetHash(UOpenColorIOConfiguration *this,FString *param_1)

{
  undefined1 *puVar1;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_> *pTVar2
  ;
  undefined8 *puVar3;
  ulonglong uVar4;
  uint uVar5;
  FOpenColorIOWrapperConfig *this_00;
  void *pvVar6;
  ulonglong uVar7;
  code *pcVar8;
  ForAnyElementType FVar9;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *pTVar10;
  bool bVar11;
  undefined1 uVar12;
  UOpenColorIOSettings *pUVar13;
  FColorSpace *this_01;
  FXxHash128 *pFVar14;
  longlong lVar15;
  int iVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  undefined1 *puVar21;
  uint *puVar22;
  undefined1 auStack_3f8 [56];
  byte local_3c0;
  undefined1 local_3bf [3];
  uint local_3bc;
  TStringBuilderBase<wchar_t> local_3b8;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_398;
  int iStack_390;
  uint uStack_38c;
  undefined1 *local_388;
  undefined4 uStack_380;
  int iStack_37c;
  int local_378;
  int iStack_374;
  int iStack_370;
  undefined4 uStack_36c;
  int local_368;
  FString local_360;
  TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
  *local_350;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_348;
  undefined8 uStack_328;
  ulonglong *local_320;
  undefined4 uStack_318;
  undefined4 uStack_314;
  TArrayView<unsigned_char_const_,int> local_310;
  FXxHash128 local_300 [4];
  FXxHash128Builder local_2c0;
  ulonglong local_80;
  ulonglong local_78;
  ulonglong local_70;
  
  local_70 = __security_cookie.value ^ (ulonglong)auStack_3f8;
  this_00 = (this->Config).Ptr;
  if ((this_00 == (FOpenColorIOWrapperConfig *)0x0) ||
     (bVar11 = FOpenColorIOWrapperConfig::IsValid(this_00), !bVar11)) {
    bVar11 = false;
  }
  else {
    FOpenColorIOWrapperConfig::GetCacheID((this->Config).Ptr,&local_360);
    FVar9.Data = local_360.Data.AllocatorInstance.Data;
    if (local_360.Data.ArrayNum < 2) {
      if (2 < (byte)LogOpenColorIO._0_1_) {
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogOpenColorIO);
      }
      bVar11 = false;
    }
    else {
      iVar20 = 0;
      iVar16 = local_360.Data.ArrayNum + -1;
      if (local_360.Data.ArrayNum == 0) {
        iVar16 = 0;
      }
      local_3bc = OpenColorIOWrapper::GetVersionHex();
      pUVar13 = GetDefault<UOpenColorIOSettings>();
      local_3c0 = pUVar13->bSupportInverseViewTransforms;
      FXxHash128Builder::Reset(&local_2c0);
      FXxHash128Builder::Update(&local_2c0,FVar9.Data,(longlong)iVar16 * 2);
      FXxHash128Builder::Update(&local_2c0,&local_3bc,4);
      FXxHash128Builder::Update(&local_2c0,&local_3c0,1);
      this_01 = UE::Color::FColorSpace::GetWorking();
      bVar11 = UE::Color::FColorSpace::IsSRGB(this_01);
      if (!bVar11) {
        FXxHash128Builder::Update(&local_2c0,this_01,0x10);
        FXxHash128Builder::Update(&local_2c0,(this_01->Chromaticities).Elements + 1,0x10);
        FXxHash128Builder::Update(&local_2c0,(this_01->Chromaticities).Elements + 2,0x10);
        FXxHash128Builder::Update(&local_2c0,(this_01->Chromaticities).Elements + 3,0x10);
      }
      puVar1 = &(this->Context).field_0x10;
      iVar16 = *(int *)&(this->Context).field_0x28;
      pTVar2 = &this->Context;
      uStack_38c = 1;
      iStack_37c = 0;
      local_378 = iVar20;
      if (iVar16 != 0) {
        puVar22 = *(uint **)&(this->Context).field_0x20;
        if (puVar22 == (uint *)0x0) {
          puVar22 = (uint *)puVar1;
        }
        uVar19 = *puVar22;
        iVar20 = 0;
        local_378 = 0;
        while (uVar19 == 0) {
          lVar15 = (longlong)iVar20;
          local_378 = local_378 + 0x20;
          iVar20 = iVar20 + 1;
          iStack_37c = iVar16;
          if ((int)(iVar16 + -1 + (iVar16 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar20) goto LAB_14d7711bd;
          uVar19 = puVar22[lVar15 + 1];
        }
        uStack_38c = -uVar19 & uVar19;
        uVar4 = (ulonglong)uStack_38c * 2 + 1;
        lVar15 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        local_368 = (int)lVar15;
        iStack_37c = local_378 + -1 + local_368;
        if (iVar16 < iStack_37c) {
          iStack_37c = iVar16;
        }
      }
LAB_14d7711bd:
      iStack_370 = *(int *)&(this->Context).field_0x8 - *(int *)&(this->Context).field_0x34;
      uVar19 = *(uint *)&(this->Context).field_0x28;
      uStack_380 = 0xffffffff;
      uVar18 = uVar19 & 0xffffffe0;
      TStack_348._padding_ = CONCAT44(uStack_38c,iVar20);
      TStack_348.CurrentBitIndex = iStack_37c;
      TStack_348.UnvisitedBitMask = 0xffffffff;
      iVar17 = (int)uVar19 >> 5;
      TStack_348._28_4_ = iStack_37c;
      TStack_348.BaseBitIndex = local_378;
      uStack_328 = CONCAT44(uStack_36c,iStack_370);
      local_398 = pTVar2;
      iStack_390 = iVar20;
      local_388 = puVar1;
      iStack_374 = iStack_37c;
      local_350 = pTVar2;
      TStack_348.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
      if ((((int)uVar19 < 0) || (iVar16 < (int)uVar19)) &&
         (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                             ("StartIndex >= 0 && StartIndex <= Array.Num()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                              ,0x7af,L""), bVar11)) {
        pcVar8 = (code *)swi(3);
        uVar12 = (*pcVar8)();
        return (bool)uVar12;
      }
      uVar5 = *(uint *)&(this->Context).field_0x28;
      if (uVar19 != uVar5) {
        puVar21 = *(undefined1 **)&(this->Context).field_0x20;
        if (puVar21 == (undefined1 *)0x0) {
          puVar21 = puVar1;
        }
        uVar19 = -1 << ((byte)uVar19 & 0x1f) & *(uint *)(puVar21 + (longlong)iVar17 * 4);
        while (uVar19 == 0) {
          lVar15 = (longlong)iVar17;
          uVar18 = uVar18 + 0x20;
          iVar17 = iVar17 + 1;
          uVar19 = uVar5;
          if ((int)((uVar5 - 1) + ((int)(uVar5 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar17)
          goto LAB_14d7712c0;
          uVar19 = *(uint *)(puVar21 + lVar15 * 4 + 4);
        }
        uVar4 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
        lVar15 = 0x3f;
        if (uVar4 != 0) {
          for (; uVar4 >> lVar15 == 0; lVar15 = lVar15 + -1) {
          }
        }
        uVar19 = (int)lVar15 + -1 + uVar18;
        if ((int)uVar5 < (int)uVar19) {
          uVar19 = uVar5;
        }
      }
LAB_14d7712c0:
      while( true ) {
        pTVar10 = local_350;
        if (*(int *)&local_350->field_0x8 - *(int *)&local_350->field_0x34 != (int)uStack_328) {
          `TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_3bf);
        }
        if (((TStack_348.CurrentBitIndex == uVar19) &&
            (TStack_348.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) &&
           (pTVar10 == pTVar2)) break;
        lVar15 = *(longlong *)pTVar10;
        iVar20 = *(int *)(lVar15 + 0x18 + (longlong)TStack_348.CurrentBitIndex * 0x28);
        puVar3 = (undefined8 *)(lVar15 + (longlong)TStack_348.CurrentBitIndex * 0x28);
        if (1 < iVar20) {
          pvVar6 = (void *)puVar3[2];
          iVar16 = *(int *)(puVar3 + 1) + -1;
          if (*(int *)(puVar3 + 1) == 0) {
            iVar16 = 0;
          }
          FXxHash128Builder::Update(&local_2c0,(void *)*puVar3,(longlong)iVar16 * 2);
          FXxHash128Builder::Update(&local_2c0,pvVar6,(longlong)(iVar20 + -1) * 2);
        }
        TStack_348.UnvisitedBitMask = TStack_348.UnvisitedBitMask & ~TStack_348._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_348);
      }
      local_3b8.End = (wchar_t *)0x0;
      local_3b8.bIsDynamic = false;
      local_3b8.bIsExternal = false;
      local_3b8.Base = (wchar_t *)0x0;
      local_3b8.CurPos = (wchar_t *)0x0;
      pFVar14 = FXxHash128Builder::Finalize(&local_2c0,local_300);
      uStack_318 = 0x10;
      uVar4 = pFVar14->HashHigh;
      uVar7 = pFVar14->HashLow;
      local_78 = uVar7 >> 0x38 | (uVar7 & 0xff000000000000) >> 0x28 |
                 (uVar7 & 0xff0000000000) >> 0x18 | (uVar7 & 0xff00000000) >> 8 |
                 (uVar7 & 0xff000000) << 8 | (uVar7 & 0xff0000) << 0x18 | (uVar7 & 0xff00) << 0x28 |
                 uVar7 << 0x38;
      local_80 = uVar4 >> 0x38 | (uVar4 & 0xff000000000000) >> 0x28 |
                 (uVar4 & 0xff0000000000) >> 0x18 | (uVar4 & 0xff00000000) >> 8 |
                 (uVar4 & 0xff000000) << 8 | (uVar4 & 0xff0000) << 0x18 | (uVar4 & 0xff00) << 0x28 |
                 uVar4 << 0x38;
      local_320 = &local_80;
      local_310._12_4_ = uStack_314;
      local_310.ArrayNum = 0x10;
      local_310.DataPtr = (uchar *)local_320;
      UE::String::BytesToHexLower(&local_310,&local_3b8);
      if (local_3b8.End < local_3b8.CurPos + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_3b8,1);
      }
      *local_3b8.CurPos = L'\0';
      ::FString::operator=(param_1,local_3b8.Base);
      bVar11 = true;
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_3b8);
    }
    if (local_360.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_360.Data.AllocatorInstance.Data);
    }
  }
  return bVar11;
}

// GetOrCreateConfigWrapper @ 14d7715f0

FOpenColorIOWrapperConfig * __thiscall
UOpenColorIOConfiguration::GetOrCreateConfigWrapper(UOpenColorIOConfiguration *this)

{
  if ((this->Config).Ptr == (FOpenColorIOWrapperConfig *)0x0) {
    LoadConfiguration(this);
    return (this->Config).Ptr;
  }
  return (this->Config).Ptr;
}

// GetPrivateStaticClass @ 14d7717b0

UClass * __cdecl UOpenColorIOConfiguration::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOpenColorIOConfiguration.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OpenColorIO",L"OpenColorIOConfiguration",
               &Z_Registration_Info_UClass_UOpenColorIOConfiguration.InnerSingleton,
               StaticRegisterNativesUOpenColorIOConfiguration,0xf8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UOpenColorIOConfiguration>,
               InternalVTableHelperCtorCaller<UOpenColorIOConfiguration>,local_res8,
               UObject::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOpenColorIOConfiguration.InnerSingleton;
}

// GetRenderResources @ 14d771f70

bool __thiscall
UOpenColorIOConfiguration::GetRenderResources
          (UOpenColorIOConfiguration *this,Type param_1,FOpenColorIOColorConversionSettings *param_2
          ,FOpenColorIOTransformResource **param_3,
          TArray<TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSizedDefaultAllocator<32>_> *param_4)

{
  FScriptContainerElement *pFVar1;
  UOpenColorIOColorTransform *this_00;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  FOpenColorIOColorConversionSettings *local_res8;
  
  pFVar3 = (this->ColorTransforms).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)(this->ColorTransforms).ArrayNum * 8;
  local_res8 = param_2;
  while( true ) {
    if (pFVar3 == pFVar1) {
      return false;
    }
    bVar2 = `UOpenColorIOConfiguration::FindTransform'::__l2::<lambda_1>::operator()
                      (&local_res8,*(UOpenColorIOColorTransform **)pFVar3);
    if (bVar2) break;
    pFVar3 = pFVar3 + 8;
  }
  this_00 = *(UOpenColorIOColorTransform **)pFVar3;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (this_00 == (UOpenColorIOColorTransform *)0x0) {
      return false;
    }
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  if (this_00 == (UOpenColorIOColorTransform *)0x0) {
    return false;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  if (((uint)this_00->_padding_ >> 0x1e & 1) != 0) {
    return false;
  }
  bVar2 = UOpenColorIOColorTransform::GetRenderResources(this_00,param_1,param_3,param_4);
  return bVar2;
}

// GetRenderResources @ 14d772040

bool __thiscall
UOpenColorIOConfiguration::GetRenderResources
          (UOpenColorIOConfiguration *this,Type param_1,FOpenColorIOColorConversionSettings *param_2
          ,FOpenColorIOTransformResource **param_3,
          TSortedMap<int,TWeakObjectPtr<UTexture,FWeakObjectPtr>,TSizedDefaultAllocator<32>,TLess<int_const_>_>
          *param_4)

{
  FScriptContainerElement *pFVar1;
  UOpenColorIOColorTransform *this_00;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  FOpenColorIOColorConversionSettings *local_res8;
  
  pFVar3 = (this->ColorTransforms).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)(this->ColorTransforms).ArrayNum * 8;
  local_res8 = param_2;
  while( true ) {
    if (pFVar3 == pFVar1) {
      return false;
    }
    bVar2 = `UOpenColorIOConfiguration::FindTransform'::__l2::<lambda_1>::operator()
                      (&local_res8,*(UOpenColorIOColorTransform **)pFVar3);
    if (bVar2) break;
    pFVar3 = pFVar3 + 8;
  }
  this_00 = *(UOpenColorIOColorTransform **)pFVar3;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (this_00 == (UOpenColorIOColorTransform *)0x0) {
      return false;
    }
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  if (this_00 == (UOpenColorIOColorTransform *)0x0) {
    return false;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  if (((uint)this_00->_padding_ >> 0x1e & 1) != 0) {
    return false;
  }
  bVar2 = UOpenColorIOColorTransform::GetRenderResources(this_00,param_1,param_3,param_4);
  return bVar2;
}

// HasDesiredColorSpace @ 14d772dc0

bool __thiscall
UOpenColorIOConfiguration::HasDesiredColorSpace
          (UOpenColorIOConfiguration *this,FOpenColorIOColorSpace *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  
  if ((param_1->ColorSpaceName).Data.ArrayNum < 2) {
    return false;
  }
  iVar3 = (this->DesiredColorSpaces).ArrayNum;
  pFVar1 = (this->DesiredColorSpaces).AllocatorInstance.Data;
  pFVar4 = pFVar1;
  do {
    if (pFVar4 == pFVar1 + (longlong)iVar3 * 0x30) {
      iVar3 = -1;
LAB_14d772e38:
      return iVar3 != -1;
    }
    iVar2 = (param_1->ColorSpaceName).Data.ArrayNum;
    if (iVar2 == *(int *)(pFVar4 + 8)) {
      if (1 < iVar2) {
        iVar2 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(param_1->ColorSpaceName).Data.AllocatorInstance.Data,
                           *(wchar_t **)pFVar4);
        bVar5 = iVar2 == 0;
        goto LAB_14d772e23;
      }
LAB_14d772e53:
      iVar3 = (int)(((longlong)pFVar4 - (longlong)pFVar1) / 0x30);
      goto LAB_14d772e38;
    }
    bVar5 = iVar2 + *(int *)(pFVar4 + 8) == 1;
LAB_14d772e23:
    if (bVar5) goto LAB_14d772e53;
    pFVar4 = pFVar4 + 0x30;
  } while( true );
}

// HasDesiredDisplayView @ 14d772e90

bool __thiscall
UOpenColorIOConfiguration::HasDesiredDisplayView
          (UOpenColorIOConfiguration *this,FOpenColorIODisplayView *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  bool bVar5;
  
  if (((param_1->Display).Data.ArrayNum < 2) || ((param_1->View).Data.ArrayNum < 2)) {
    return false;
  }
  iVar3 = (this->DesiredDisplayViews).ArrayNum;
  pFVar1 = (this->DesiredDisplayViews).AllocatorInstance.Data;
  pFVar4 = pFVar1;
  do {
    if (pFVar4 == pFVar1 + (longlong)iVar3 * 0x30) {
      iVar3 = -1;
LAB_14d772f44:
      return iVar3 != -1;
    }
    iVar2 = (param_1->Display).Data.ArrayNum;
    if (iVar2 == *(int *)(pFVar4 + 8)) {
      if (1 < iVar2) {
        iVar2 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)(param_1->Display).Data.AllocatorInstance.Data,
                           *(wchar_t **)pFVar4);
        bVar5 = iVar2 == 0;
        goto LAB_14d772f03;
      }
LAB_14d772f0a:
      iVar2 = (param_1->View).Data.ArrayNum;
      if (iVar2 == *(int *)(pFVar4 + 0x18)) {
        if (1 < iVar2) {
          iVar2 = FGenericPlatformStricmp::Stricmp
                            ((wchar_t *)(param_1->View).Data.AllocatorInstance.Data,
                             *(wchar_t **)(pFVar4 + 0x10));
          bVar5 = iVar2 == 0;
          goto LAB_14d772f2f;
        }
      }
      else {
        bVar5 = iVar2 + *(int *)(pFVar4 + 0x18) == 1;
LAB_14d772f2f:
        if (!bVar5) goto LAB_14d772f36;
      }
      iVar3 = (int)(((longlong)pFVar4 - (longlong)pFVar1) / 0x30);
      goto LAB_14d772f44;
    }
    bVar5 = iVar2 + *(int *)(pFVar4 + 8) == 1;
LAB_14d772f03:
    if (bVar5) goto LAB_14d772f0a;
LAB_14d772f36:
    pFVar4 = pFVar4 + 0x30;
  } while( true );
}

// HasTransform @ 14d772fa0

bool __thiscall
UOpenColorIOConfiguration::HasTransform
          (UOpenColorIOConfiguration *this,FString *param_1,FString *param_2,FString *param_3,
          EOpenColorIOViewTransformDirection param_4)

{
  FScriptContainerElement *pFVar1;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  FString *local_28;
  FString *local_20;
  FString *local_18;
  EOpenColorIOViewTransformDirection *local_10;
  
  pFVar3 = (this->ColorTransforms).AllocatorInstance.Data;
  local_10 = &param_4;
  pFVar1 = pFVar3 + (longlong)(this->ColorTransforms).ArrayNum * 8;
  local_28 = param_1;
  local_20 = param_2;
  local_18 = param_3;
  for (; pFVar3 != pFVar1; pFVar3 = pFVar3 + 8) {
    bVar2 = `UOpenColorIOConfiguration::HasTransform'::__l2::<lambda_1>::operator()
                      (&local_28,*(UOpenColorIOColorTransform **)pFVar3);
    if (bVar2) goto LAB_14d772ffc;
  }
  pFVar3 = (FScriptContainerElement *)0x0;
LAB_14d772ffc:
  return pFVar3 != (FScriptContainerElement *)0x0;
}

// HasTransform @ 14d773020

bool __thiscall
UOpenColorIOConfiguration::HasTransform
          (UOpenColorIOConfiguration *this,FString *param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  FScriptContainerElement *pFVar5;
  bool bVar6;
  
  pFVar5 = (this->ColorTransforms).AllocatorInstance.Data;
  pFVar1 = pFVar5 + (longlong)(this->ColorTransforms).ArrayNum * 8;
  for (; pFVar5 != pFVar1; pFVar5 = pFVar5 + 8) {
    lVar3 = *(longlong *)pFVar5;
    if (*(char *)(lVar3 + 0x28) == '\0') {
      iVar4 = *(int *)(lVar3 + 0x38);
      iVar2 = (param_1->Data).ArrayNum;
      if (iVar4 == iVar2) {
        if (1 < iVar4) {
          iVar4 = FGenericPlatformStricmp::Stricmp
                            (*(wchar_t **)(lVar3 + 0x30),
                             (wchar_t *)(param_1->Data).AllocatorInstance.Data);
          bVar6 = iVar4 == 0;
          goto LAB_14d773085;
        }
      }
      else {
        bVar6 = iVar4 + iVar2 == 1;
LAB_14d773085:
        if (!bVar6) goto LAB_14d7730b8;
      }
      iVar4 = *(int *)(lVar3 + 0x48);
      iVar2 = (param_2->Data).ArrayNum;
      if (iVar4 == iVar2) {
        if (iVar4 < 2) goto LAB_14d7730c3;
        iVar4 = FGenericPlatformStricmp::Stricmp
                          (*(wchar_t **)(lVar3 + 0x40),
                           (wchar_t *)(param_2->Data).AllocatorInstance.Data);
        bVar6 = iVar4 == 0;
      }
      else {
        bVar6 = iVar4 + iVar2 == 1;
      }
      if (bVar6) goto LAB_14d7730c3;
    }
LAB_14d7730b8:
  }
  pFVar5 = (FScriptContainerElement *)0x0;
LAB_14d7730c3:
  return pFVar5 != (FScriptContainerElement *)0x0;
}

// IsTransformReady @ 14d773940

bool __thiscall
UOpenColorIOConfiguration::IsTransformReady
          (UOpenColorIOConfiguration *this,FOpenColorIOColorConversionSettings *param_1)

{
  FScriptContainerElement *pFVar1;
  UOpenColorIOColorTransform *this_00;
  bool bVar2;
  FScriptContainerElement *pFVar3;
  FOpenColorIOColorConversionSettings *local_res8;
  
  pFVar3 = (this->ColorTransforms).AllocatorInstance.Data;
  pFVar1 = pFVar3 + (longlong)(this->ColorTransforms).ArrayNum * 8;
  local_res8 = param_1;
  while( true ) {
    if (pFVar3 == pFVar1) {
      return false;
    }
    bVar2 = `UOpenColorIOConfiguration::FindTransform'::__l2::<lambda_1>::operator()
                      (&local_res8,*(UOpenColorIOColorTransform **)pFVar3);
    if (bVar2) break;
    pFVar3 = pFVar3 + 8;
  }
  this_00 = *(UOpenColorIOColorTransform **)pFVar3;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (this_00 == (UOpenColorIOColorTransform *)0x0) {
      return false;
    }
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  if (this_00 == (UOpenColorIOColorTransform *)0x0) {
    return false;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  if (((uint)this_00->_padding_ >> 0x1e & 1) != 0) {
    return false;
  }
  bVar2 = UOpenColorIOColorTransform::AreRenderResourcesReady(this_00);
  return bVar2;
}

// LoadConfiguration @ 14d773aa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UOpenColorIOConfiguration::LoadConfiguration(UOpenColorIOConfiguration *this)

{
  TPimplPtr<FOpenColorIOWrapperConfig,0> *pTVar1;
  FScriptContainerElement *_Src;
  bool bVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  FOpenColorIOWrapperConfig *pFVar6;
  code *pcVar7;
  ForAnyElementType FVar8;
  FOpenColorIOWrapperConfig *pFVar9;
  FFilePath *this_00;
  wchar_t *pwVar10;
  longlong lVar11;
  bool bVar12;
  longlong local_98;
  FString local_90;
  FString local_80;
  FString local_68;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  FScriptContainerElement *local_38;
  int local_30;
  
  pFVar9 = (FOpenColorIOWrapperConfig *)0x0;
  pTVar1 = &this->Config;
  pFVar6 = pTVar1->Ptr;
  if (pFVar6 != (FOpenColorIOWrapperConfig *)0x0) {
    pTVar1->Ptr = (FOpenColorIOWrapperConfig *)0x0;
    (*(code *)pFVar6[-1]._padding_)();
  }
  local_90.Data.ArrayNum = (this->ConfigurationFile).FilePath.Data.ArrayNum;
  lVar11 = (longlong)local_90.Data.ArrayNum;
  this_00 = &this->ConfigurationFile;
  if (local_90.Data.ArrayNum < 2) {
    return;
  }
  _Src = (this_00->FilePath).Data.AllocatorInstance.Data;
  local_90.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,local_90.Data.ArrayNum,0,(ForAnyElementType *)&local_90,local_90.Data.ArrayNum,
             &local_90.Data.ArrayMax);
  memcpy(local_90.Data.AllocatorInstance.Data,_Src,lVar11 * 2);
  bVar3 = ::FString::StartsWith(&this_00->FilePath,L"ocio://",7,IgnoreCase);
  if (!bVar3) {
    ::FString::FString(&local_68,L"$OCIO");
    iVar4 = (this->ConfigurationFile).FilePath.Data.ArrayNum;
    if (iVar4 == local_68.Data.ArrayNum) {
      if (1 < iVar4) {
        iVar4 = wcscmp((wchar_t *)(this_00->FilePath).Data.AllocatorInstance.Data,
                       (wchar_t *)local_68.Data.AllocatorInstance.Data);
        bVar3 = iVar4 == 0;
        goto LAB_14d773ba0;
      }
LAB_14d773c01:
      bVar3 = false;
      FVar8.Data = local_80.Data.AllocatorInstance.Data;
LAB_14d773c05:
      bVar12 = true;
      bVar2 = true;
      if (bVar3) goto LAB_14d773c0c;
    }
    else {
      bVar3 = iVar4 + local_68.Data.ArrayNum == 1;
LAB_14d773ba0:
      if (bVar3) goto LAB_14d773c01;
      ::FString::FString(&local_80,L"%OCIO%");
      FVar8.Data = local_80.Data.AllocatorInstance.Data;
      iVar4 = (this->ConfigurationFile).FilePath.Data.ArrayNum;
      if (iVar4 == local_80.Data.ArrayNum) {
        if (1 < iVar4) {
          iVar4 = wcscmp((wchar_t *)(this_00->FilePath).Data.AllocatorInstance.Data,
                         (wchar_t *)local_80.Data.AllocatorInstance.Data);
          bVar12 = iVar4 == 0;
          goto LAB_14d773be4;
        }
        bVar3 = true;
        goto LAB_14d773c05;
      }
      bVar12 = iVar4 + local_80.Data.ArrayNum == 1;
LAB_14d773be4:
      bVar3 = true;
      if (bVar12) goto LAB_14d773c05;
      bVar2 = false;
LAB_14d773c0c:
      bVar12 = bVar2;
      if (FVar8.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(FVar8.Data);
      }
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (bVar12) {
      pFVar5 = FWindowsPlatformMisc::GetEnvironmentVariable(&local_68,L"OCIO");
      FVar8.Data = local_68.Data.AllocatorInstance.Data;
      if (&local_90 != pFVar5) {
        if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_90.Data.AllocatorInstance.Data);
        }
        local_90.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
        (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_90.Data.ArrayNum = (pFVar5->Data).ArrayNum;
        local_90.Data.ArrayMax = (pFVar5->Data).ArrayMax;
        (pFVar5->Data).ArrayNum = 0;
        (pFVar5->Data).ArrayMax = 0;
        FVar8.Data = local_68.Data.AllocatorInstance.Data;
      }
    }
    else {
      iVar4 = ::FString::Find(&this_00->FilePath,L"{Engine}",8,IgnoreCase,FromStart,-1);
      if (iVar4 == -1) {
        bVar3 = FPaths::IsRelative(&this_00->FilePath);
        if (!bVar3) goto LAB_14d773e28;
        pFVar5 = FPaths::ProjectDir((FString *)&local_58);
        FPaths::ConvertRelativePathToFull(&local_68,pFVar5);
        if ((FScriptContainerElement *)local_58.DataPtr != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.DataPtr);
        }
        local_48.DataPtr = (wchar_t *)local_68.Data.AllocatorInstance.Data;
        local_38 = (this_00->FilePath).Data.AllocatorInstance.Data;
        local_48.Size = local_68.Data.ArrayNum + -1;
        if (local_68.Data.ArrayNum == 0) {
          local_48.Size = 0;
        }
        iVar4 = (this->ConfigurationFile).FilePath.Data.ArrayNum;
        local_30 = iVar4 + -1;
        if (iVar4 == 0) {
          local_30 = 0;
        }
        FPaths::CombineInternal(&local_80,&local_48,2);
        pFVar5 = FPaths::ConvertRelativePathToFull((FString *)&local_58,&local_80);
        if (&local_90 != pFVar5) {
          if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_90.Data.AllocatorInstance.Data);
          }
          local_90.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
          (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_90.Data.ArrayNum = (pFVar5->Data).ArrayNum;
          local_90.Data.ArrayMax = (pFVar5->Data).ArrayMax;
          (pFVar5->Data).ArrayNum = 0;
          (pFVar5->Data).ArrayMax = 0;
        }
        if ((FScriptContainerElement *)local_58.DataPtr != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_58.DataPtr);
        }
        FVar8.Data = local_68.Data.AllocatorInstance.Data;
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
          FVar8.Data = local_68.Data.AllocatorInstance.Data;
        }
      }
      else {
        pFVar5 = FPaths::EngineDir((FString *)&local_58);
        if ((pFVar5->Data).ArrayNum == 0) {
          pwVar10 = L"";
        }
        else {
          pwVar10 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
        }
        pFVar5 = ::FString::Replace(&this_00->FilePath,&local_80,L"{Engine}",pwVar10,IgnoreCase);
        pFVar5 = FPaths::ConvertRelativePathToFull(&local_68,pFVar5);
        if (&local_90 != pFVar5) {
          if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_90.Data.AllocatorInstance.Data);
          }
          local_90.Data.AllocatorInstance.Data = (pFVar5->Data).AllocatorInstance.Data;
          (pFVar5->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_90.Data.ArrayNum = (pFVar5->Data).ArrayNum;
          local_90.Data.ArrayMax = (pFVar5->Data).ArrayMax;
          (pFVar5->Data).ArrayNum = 0;
          (pFVar5->Data).ArrayMax = 0;
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        FVar8.Data = (FScriptContainerElement *)local_58.DataPtr;
        if (local_80.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.Data.AllocatorInstance.Data);
          FVar8.Data = (FScriptContainerElement *)local_58.DataPtr;
        }
      }
    }
    if (FVar8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar8.Data);
    }
  }
LAB_14d773e28:
  pFVar6 = ::operator_new(0x20);
  if (pFVar6 != (FOpenColorIOWrapperConfig *)0x0) {
    pFVar6->Pimpl = (TPimplPtr<FOpenColorIOConfigPimpl,1>)0x0;
    pFVar6->_padding_ =
         (longlong)UE::Core::Private::PimplPtr::DeleterFunc<FOpenColorIOWrapperConfig>;
    local_68.Data.AllocatorInstance.Data = local_90.Data.AllocatorInstance.Data;
    local_68.Data.ArrayNum = local_90.Data.ArrayNum + -1;
    if (local_90.Data.ArrayNum == 0) {
      local_68.Data.ArrayNum = 0;
    }
    local_58._12_4_ = local_68.Data.ArrayMax;
    local_58.Size = local_68.Data.ArrayNum;
    local_58.DataPtr = (wchar_t *)local_90.Data.AllocatorInstance.Data;
    FOpenColorIOWrapperConfig::FOpenColorIOWrapperConfig
              (pFVar6 + 1,&local_58,WCS_AsInterchangeSpace);
    pFVar9 = pFVar6;
  }
  if ((TPimplPtr<FOpenColorIOWrapperConfig,0> *)&local_98 == pTVar1) {
    if (pFVar9 + 1 == (FOpenColorIOWrapperConfig *)0x0) goto LAB_14d773eaf;
    pcVar7 = (code *)pFVar9->_padding_;
  }
  else {
    pFVar6 = pTVar1->Ptr;
    pTVar1->Ptr = pFVar9 + 1;
    if (pFVar6 == (FOpenColorIOWrapperConfig *)0x0) goto LAB_14d773eaf;
    pcVar7 = (code *)pFVar6[-1]._padding_;
    pFVar9 = pFVar6 + -1;
  }
  (*pcVar7)(pFVar9);
LAB_14d773eaf:
  bVar3 = FOpenColorIOWrapperConfig::IsValid(pTVar1->Ptr);
  if (bVar3) {
    if (5 < (byte)LogOpenColorIO._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOpenColorIO);
    }
  }
  else if (1 < (byte)LogOpenColorIO._0_1_) {
    UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogOpenColorIO);
  }
  if (local_90.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_90.Data.AllocatorInstance.Data);
  }
  return;
}

// PostInitProperties @ 14d773f70

void __thiscall UOpenColorIOConfiguration::PostInitProperties(UOpenColorIOConfiguration *this)

{
  FTlsAutoCleanup FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  UOpenColorIOConfiguration *pUStack_28;
  code *pcStack_20;
  undefined1 *puStack_18;
  
  puVar5 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_18 = auStackX_8;
  pcStack_20 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_20,puVar5);
  FVar1 = (FTlsAutoCleanup)(pFVar6 + 0xb);
  FVar7 = pFVar6[0x1b];
  if (pFVar6[0x1b] == (FTlsAutoCleanup)0x0) {
    FVar7 = FVar1;
  }
  pUStack_28 = this;
  if (((ulonglong)FVar7 <= &pUStack_28) &&
     (&pUStack_28 <
      (UOpenColorIOConfiguration **)
      ((longlong)FVar7 + (longlong)*(int *)&pFVar6[0x1c].field_0x4 * 8))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = *(int *)(pFVar6 + 0x1c);
  if (iVar4 == *(int *)&pFVar6[0x1c].field_0x4) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_*>_>
                      (0x808,(ForElementType<UObject_*> *)FVar1,(int *)&pFVar6[0x1c].field_0x4);
  }
  *(int *)(pFVar6 + 0x1c) = iVar4 + 1;
  FVar7 = pFVar6[0x1b];
  if (pFVar6[0x1b] == (FTlsAutoCleanup)0x0) {
    FVar7 = FVar1;
  }
  *(UOpenColorIOConfiguration **)((longlong)FVar7 + (longlong)iVar4 * 8) = pUStack_28;
  (**(code **)(*(longlong *)this->_padding_ + 0x3a8))((longlong *)this->_padding_,this,1,0,0);
  if (FOverridableManager::OverridableManager != (FOverridableManager *)0x0) {
    FOverridableManager::ClearOverrides
              (FOverridableManager::OverridableManager,(TNotNull<UObject_*>)this);
  }
  return;
}

// PostLoad @ 14d774290

void __thiscall UOpenColorIOConfiguration::PostLoad(UOpenColorIOConfiguration *this)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  undefined1 local_res8 [8];
  
  UObject::PostLoad((UObject *)this);
  pFVar3 = (this->ColorTransforms).AllocatorInstance.Data;
  iVar2 = (this->ColorTransforms).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 8;
  while( true ) {
    if ((this->ColorTransforms).ArrayNum != iVar2) {
      `TCheckedPointerIterator<TObjectPtr<UOpenColorIOColorTransform>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (pFVar3 == pFVar1) break;
    UObject::ConditionalPostLoad(*(UObject **)pFVar3);
    pFVar3 = pFVar3 + 8;
  }
  return;
}

// PreSave @ 14d774600

void __thiscall
UOpenColorIOConfiguration::PreSave(UOpenColorIOConfiguration *this,FObjectPreSaveContext param_1)

{
  FScriptContainerElement *local_res8 [4];
  FString local_18;
  
  local_res8[0] = ((param_1.Data)->TargetFilename).Data.AllocatorInstance.Data;
  *(int *)(local_res8[0] + 0x9c) = *(int *)(local_res8[0] + 0x9c) + 1;
  UObject::PreSave((UObject *)this,(FObjectSaveContextData *)local_res8);
  ::FString::FString(&local_18,L"Usage.OpenColorIO.ConfigAssetSaved");
  OpenColorIOConfiguration::SendAnalytics(&local_18,&this->DesiredColorSpaces);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// ReloadExistingColorspaces @ 14d7750c0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UOpenColorIOConfiguration::ReloadExistingColorspaces(UOpenColorIOConfiguration *this,bool param_1)

{
  int *piVar1;
  FOpenColorIOWrapperConfig *this_00;
  FOpenColorIODisplayView *pFVar2;
  code *pcVar3;
  ForAnyElementType FVar4;
  UObject *pUVar5;
  bool bVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  FString *pFVar11;
  UClass *this_01;
  ulonglong uVar12;
  ulonglong uVar13;
  ForAnyElementType FVar14;
  FOpenColorIOColorSpace *pFVar15;
  FScriptContainerElement *pFVar16;
  FScriptContainerElement *pFVar17;
  FScriptContainerElement *pFVar18;
  uint uVar19;
  wchar_t *pwVar20;
  wchar_t *pwVar21;
  TArray<FOpenColorIOColorSpace,TSizedDefaultAllocator<32>_> *pTVar22;
  TArray<wchar_t,TSizedDefaultAllocator<32>_> *pTVar23;
  FScriptContainerElement *pFVar24;
  int *piVar25;
  longlong lVar26;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  uint local_158;
  ForAnyElementType local_150;
  uint local_148;
  int local_144;
  ForAnyElementType local_140;
  uint local_138;
  int local_134;
  FOpenColorIOColorSpace local_130;
  ForAnyElementType local_100;
  undefined8 local_f8;
  FOpenColorIOColorSpace *local_f0;
  FString local_e8;
  UObject *local_d8;
  FString local_d0;
  int *local_c0;
  FString local_b8;
  FString local_a8;
  FString local_98;
  FString local_88;
  FString local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  LoadConfiguration(this);
  this_00 = (this->Config).Ptr;
  if ((this_00 == (FOpenColorIOWrapperConfig *)0x0) ||
     (bVar6 = FOpenColorIOWrapperConfig::IsValid(this_00), !bVar6)) {
    piVar25 = &(this->DesiredColorSpaces).ArrayMax;
    pFVar15 = (FOpenColorIOColorSpace *)(this->DesiredColorSpaces).AllocatorInstance.Data;
    iVar8 = (this->DesiredColorSpaces).ArrayNum;
    if ((this->DesiredColorSpaces).ArrayMax < 0) {
      DestructItems<FOpenColorIOColorSpace,int>(pFVar15,iVar8);
      (this->DesiredColorSpaces).ArrayNum = 0;
      if (*piVar25 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,0,&(this->DesiredColorSpaces).AllocatorInstance,0,piVar25);
      }
    }
    else {
      DestructItems<FOpenColorIOColorSpace,int>(pFVar15,iVar8);
      (this->DesiredColorSpaces).ArrayNum = 0;
    }
    piVar25 = &(this->DesiredDisplayViews).ArrayMax;
    pFVar2 = (FOpenColorIODisplayView *)(this->DesiredDisplayViews).AllocatorInstance.Data;
    iVar8 = (this->DesiredDisplayViews).ArrayNum;
    if ((this->DesiredDisplayViews).ArrayMax < 0) {
      DestructItems<FOpenColorIODisplayView,int>(pFVar2,iVar8);
      (this->DesiredDisplayViews).ArrayNum = 0;
      if (*piVar25 != 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x30,8,0,&(this->DesiredDisplayViews).AllocatorInstance,0,piVar25);
      }
    }
    else {
      DestructItems<FOpenColorIODisplayView,int>(pFVar2,iVar8);
      (this->DesiredDisplayViews).ArrayNum = 0;
    }
    (this->ColorTransforms).ArrayNum = 0;
    if ((this->ColorTransforms).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->ColorTransforms).AllocatorInstance,0,
                 &(this->ColorTransforms).ArrayMax);
    }
    ::FString::Empty(&this->ConfigHash);
    goto LAB_14d775d32;
  }
  local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.Data.ArrayNum = 0;
  local_e8.Data.ArrayMax = 0;
  bVar7 = GetHash(this,&local_e8);
  iVar8 = (this->ConfigHash).Data.ArrayNum;
  bVar6 = true;
  if (bVar7) {
    bVar6 = param_1;
  }
  if (iVar8 == local_e8.Data.ArrayNum) {
    iVar9 = local_e8.Data.ArrayNum;
    if (1 < iVar8) {
      iVar8 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)(this->ConfigHash).Data.AllocatorInstance.Data,
                         (wchar_t *)local_e8.Data.AllocatorInstance.Data);
      bVar7 = iVar8 == 0;
      goto LAB_14d77515f;
    }
  }
  else {
    bVar7 = iVar8 + local_e8.Data.ArrayNum == 1;
LAB_14d77515f:
    iVar9 = local_e8.Data.ArrayNum;
    if (!bVar7) goto LAB_14d77518f;
  }
  if (bVar6 == false) {
    if (5 < (byte)LogOpenColorIO._0_1_) {
      UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogOpenColorIO);
    }
LAB_14d775c45:
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
LAB_14d775d32:
    bVar6 = UObjectBaseUtility::MarkPackageDirty((UObjectBaseUtility *)this);
    if ((!bVar6) && (3 < (byte)LogOpenColorIO._0_1_)) {
      UObjectBaseUtility::GetPathName((UObjectBaseUtility *)this,&local_48,(UObject *)0x0);
      UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOpenColorIO);
      if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.Data.AllocatorInstance.Data);
      }
    }
    return;
  }
LAB_14d77518f:
  iVar8 = iVar9 + -1;
  if (iVar9 == 0) {
    iVar8 = 0;
  }
  ::FString::AssignRange(&this->ConfigHash,(wchar_t *)local_e8.Data.AllocatorInstance.Data,iVar8);
  uVar19 = (this->DesiredColorSpaces).ArrayNum;
  pTVar22 = &this->DesiredColorSpaces;
  pFVar15 = (FOpenColorIOColorSpace *)(pTVar22->AllocatorInstance).Data;
  local_140.Data = (FScriptContainerElement *)0x0;
  local_138 = uVar19;
  if (uVar19 == 0) {
    local_134 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,uVar19,0,&local_140,uVar19,&local_134);
    ConstructItems<FOpenColorIOColorSpace,FOpenColorIOColorSpace,int>(local_140.Data,pFVar15,uVar19)
    ;
  }
  uVar19 = (this->DesiredDisplayViews).ArrayNum;
  pFVar2 = (FOpenColorIODisplayView *)(this->DesiredDisplayViews).AllocatorInstance.Data;
  local_150.Data = (FScriptContainerElement *)0x0;
  local_148 = uVar19;
  if (uVar19 == 0) {
    local_144 = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x30,8,uVar19,0,&local_150,uVar19,&local_144);
    ConstructItems<FOpenColorIODisplayView,FOpenColorIODisplayView,int>
              (local_150.Data,pFVar2,uVar19);
  }
  piVar25 = &(this->DesiredColorSpaces).ArrayMax;
  pFVar15 = (FOpenColorIOColorSpace *)(pTVar22->AllocatorInstance).Data;
  iVar8 = (this->DesiredColorSpaces).ArrayNum;
  local_c0 = piVar25;
  if (*piVar25 < 0) {
    DestructItems<FOpenColorIOColorSpace,int>(pFVar15,iVar8);
    (this->DesiredColorSpaces).ArrayNum = 0;
    if (*piVar25 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&pTVar22->AllocatorInstance,0,piVar25);
    }
  }
  else {
    DestructItems<FOpenColorIOColorSpace,int>(pFVar15,iVar8);
    (this->DesiredColorSpaces).ArrayNum = 0;
  }
  piVar1 = &(this->DesiredDisplayViews).ArrayMax;
  pFVar2 = (FOpenColorIODisplayView *)(this->DesiredDisplayViews).AllocatorInstance.Data;
  iVar8 = (this->DesiredDisplayViews).ArrayNum;
  local_d8 = (UObject *)piVar1;
  if (*piVar1 < 0) {
    DestructItems<FOpenColorIODisplayView,int>(pFVar2,iVar8);
    (this->DesiredDisplayViews).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x30,8,0,&(this->DesiredDisplayViews).AllocatorInstance,0,piVar1);
    }
  }
  else {
    DestructItems<FOpenColorIODisplayView,int>(pFVar2,iVar8);
    (this->DesiredDisplayViews).ArrayNum = 0;
  }
  (this->ColorTransforms).ArrayNum = 0;
  if ((this->ColorTransforms).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,0,&(this->ColorTransforms).AllocatorInstance,0,&(this->ColorTransforms).ArrayMax)
    ;
  }
  uVar19 = local_138;
  uVar12 = (ulonglong)(int)local_138;
  local_f0 = (FOpenColorIOColorSpace *)(local_140.Data + uVar12 * 0x30);
  uVar13 = uVar12;
  pFVar15 = local_f0;
  FVar14.Data = local_140.Data;
  while( true ) {
    pTVar22 = &this->DesiredColorSpaces;
    if ((int)uVar12 != (int)uVar13) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<FOpenColorIOColorSpace,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    uVar10 = local_148;
    if ((FOpenColorIOColorSpace *)FVar14.Data == pFVar15) break;
    if ((((FOpenColorIOColorSpace *)FVar14.Data)->ColorSpaceName).Data.ArrayNum == 0) {
      pwVar20 = L"";
    }
    else {
      pwVar20 = (wchar_t *)
                (((FOpenColorIOColorSpace *)FVar14.Data)->ColorSpaceName).Data.AllocatorInstance.
                Data;
    }
    iVar8 = FOpenColorIOWrapperConfig::GetColorSpaceIndex((this->Config).Ptr,pwVar20);
    if (iVar8 < 0) {
      if (3 < (byte)LogOpenColorIO._0_1_) {
        iVar8 = (((FOpenColorIOColorSpace *)FVar14.Data)->ColorSpaceName).Data.ArrayNum;
        local_100.Data = (FScriptContainerElement *)0x0;
        if (iVar8 < 2) {
          local_f8 = 0;
        }
        else {
          pFVar16 = (((FOpenColorIOColorSpace *)FVar14.Data)->ColorSpaceName).Data.AllocatorInstance
                    .Data;
          local_f8 = CONCAT44(local_f8._4_4_,iVar8);
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar8,0,&local_100,iVar8,(int *)((longlong)&local_f8 + 4));
          memcpy(local_100.Data,pFVar16,(longlong)iVar8 * 2);
        }
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOpenColorIO);
        if (local_100.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_100.Data);
        }
        piVar25 = &(this->DesiredColorSpaces).ArrayMax;
        pFVar15 = local_f0;
      }
      uVar12 = (ulonglong)local_138;
      FVar14.Data = FVar14.Data + 0x30;
      uVar13 = (ulonglong)uVar19;
    }
    else {
      local_130.ColorSpaceName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_130.ColorSpaceName.Data.ArrayNum = 0;
      local_130.ColorSpaceName.Data.ArrayMax = 0;
      local_130.FamilyName.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_130.FamilyName.Data.ArrayNum = 0;
      local_130.FamilyName.Data.ArrayMax = 0;
      local_130.Description.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_130.Description.Data.ArrayNum = 0;
      local_130.Description.Data.ArrayMax = 0;
      if (&local_130 != (FOpenColorIOColorSpace *)FVar14.Data) {
        uVar10 = (((FOpenColorIOColorSpace *)FVar14.Data)->ColorSpaceName).Data.ArrayNum;
        pFVar16 = (((FOpenColorIOColorSpace *)FVar14.Data)->ColorSpaceName).Data.AllocatorInstance.
                  Data;
        local_130.ColorSpaceName.Data.ArrayMax = 0;
        local_130.ColorSpaceName.Data.ArrayNum = uVar10;
        if (uVar10 != 0) {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,uVar10,0,(ForAnyElementType *)&local_130,uVar10,
                     &local_130.ColorSpaceName.Data.ArrayMax);
          memcpy(local_130.ColorSpaceName.Data.AllocatorInstance.Data,pFVar16,
                 (longlong)(int)uVar10 * 2);
        }
        piVar25 = &(this->DesiredColorSpaces).ArrayMax;
      }
      if ((((FOpenColorIOColorSpace *)FVar14.Data)->ColorSpaceName).Data.ArrayNum == 0) {
        pwVar20 = L"";
      }
      else {
        pwVar20 = (wchar_t *)
                  (((FOpenColorIOColorSpace *)FVar14.Data)->ColorSpaceName).Data.AllocatorInstance.
                  Data;
      }
      pFVar11 = FOpenColorIOWrapperConfig::GetColorSpaceFamilyName
                          ((this->Config).Ptr,&local_78,pwVar20);
      if (&local_130.FamilyName != pFVar11) {
        if (local_130.FamilyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.FamilyName.Data.AllocatorInstance.Data);
        }
        local_130.FamilyName.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
        (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_130.FamilyName.Data.ArrayNum = (pFVar11->Data).ArrayNum;
        local_130.FamilyName.Data.ArrayMax = (pFVar11->Data).ArrayMax;
        (pFVar11->Data).ArrayNum = 0;
        (pFVar11->Data).ArrayMax = 0;
      }
      if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if ((((FOpenColorIOColorSpace *)FVar14.Data)->ColorSpaceName).Data.ArrayNum == 0) {
        pwVar20 = L"";
      }
      else {
        pwVar20 = (wchar_t *)
                  (((FOpenColorIOColorSpace *)FVar14.Data)->ColorSpaceName).Data.AllocatorInstance.
                  Data;
      }
      pFVar11 = FOpenColorIOWrapperConfig::GetColorSpaceDescription
                          ((this->Config).Ptr,&local_68,pwVar20);
      if (&local_130.Description != pFVar11) {
        if (local_130.Description.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_130.Description.Data.AllocatorInstance.Data);
        }
        local_130.Description.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
        (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_130.Description.Data.ArrayNum = (pFVar11->Data).ArrayNum;
        local_130.Description.Data.ArrayMax = (pFVar11->Data).ArrayMax;
        (pFVar11->Data).ArrayNum = 0;
        (pFVar11->Data).ArrayMax = 0;
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      pFVar15 = (FOpenColorIOColorSpace *)(pTVar22->AllocatorInstance).Data;
      if (((pFVar15 <= &local_130) && (&local_130 < pFVar15 + *piVar25)) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      iVar8 = (this->DesiredColorSpaces).ArrayNum;
      if (iVar8 == *piVar25) {
        iVar8 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x830,&pTVar22->AllocatorInstance,piVar25);
      }
      FVar4.Data = local_130.ColorSpaceName.Data.AllocatorInstance.Data;
      (this->DesiredColorSpaces).ArrayNum = iVar8 + 1;
      pFVar16 = (pTVar22->AllocatorInstance).Data + (longlong)iVar8 * 0x30;
      *(undefined8 *)&pFVar16->field_0x0 = 0;
      lVar26 = (longlong)local_130.ColorSpaceName.Data.ArrayNum;
      *(int *)&pFVar16[8].field_0x0 = local_130.ColorSpaceName.Data.ArrayNum;
      if (local_130.ColorSpaceName.Data.ArrayNum == 0) {
        *(int *)(pFVar16 + 0xc) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_130.ColorSpaceName.Data.ArrayNum,0,(ForAnyElementType *)pFVar16,
                   local_130.ColorSpaceName.Data.ArrayNum,(int *)(pFVar16 + 0xc));
        memcpy(*(void **)&pFVar16->field_0x0,FVar4.Data,lVar26 * 2);
      }
      FVar4.Data = local_130.FamilyName.Data.AllocatorInstance.Data;
      *(undefined8 *)&pFVar16[0x10].field_0x0 = 0;
      lVar26 = (longlong)local_130.FamilyName.Data.ArrayNum;
      *(int *)&pFVar16[0x18].field_0x0 = local_130.FamilyName.Data.ArrayNum;
      if (local_130.FamilyName.Data.ArrayNum == 0) {
        *(int *)(pFVar16 + 0x1c) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_130.FamilyName.Data.ArrayNum,0,(ForAnyElementType *)(pFVar16 + 0x10),
                   local_130.FamilyName.Data.ArrayNum,(int *)(pFVar16 + 0x1c));
        memcpy(*(FScriptContainerElement **)&pFVar16[0x10].field_0x0,FVar4.Data,lVar26 * 2);
      }
      FVar4.Data = local_130.Description.Data.AllocatorInstance.Data;
      pFVar17 = pFVar16 + 0x20;
      *(FScriptContainerElement **)&pFVar17->field_0x0 = (FScriptContainerElement *)0x0;
      lVar26 = (longlong)local_130.Description.Data.ArrayNum;
      *(int *)&pFVar16[0x28].field_0x0 = local_130.Description.Data.ArrayNum;
      if (local_130.Description.Data.ArrayNum == 0) {
        *(int *)(pFVar16 + 0x2c) = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_130.Description.Data.ArrayNum,0,(ForAnyElementType *)pFVar17,
                   local_130.Description.Data.ArrayNum,(int *)(pFVar16 + 0x2c));
        memcpy(*(FScriptContainerElement **)&pFVar17->field_0x0,FVar4.Data,lVar26 * 2);
      }
      if (local_130.Description.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.Description.Data.AllocatorInstance.Data);
      }
      if (local_130.FamilyName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.FamilyName.Data.AllocatorInstance.Data);
      }
      if (local_130.ColorSpaceName.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_130.ColorSpaceName.Data.AllocatorInstance.Data);
      }
      uVar12 = (ulonglong)local_138;
      FVar14.Data = FVar14.Data + 0x30;
      uVar13 = (ulonglong)uVar19;
      pFVar15 = local_f0;
      piVar25 = local_c0;
    }
  }
  uVar13 = (ulonglong)(int)local_148;
  pFVar16 = local_150.Data + 8;
  pTVar23 = (TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(local_150.Data + uVar13 * 0x30);
LAB_14d775790:
  if ((uint)uVar13 != uVar10) {
    local_res18[0] = 0;
    `TCheckedPointerIterator<FOpenColorIODisplayView,int,0>::operator!='::__l2::<lambda_1>::
    operator()(local_res18);
  }
  iVar8 = 0;
  if ((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(pFVar16 + -8) != pTVar23) {
    do {
      if (*(int *)pFVar16 == 0) {
        pwVar20 = L"";
      }
      else {
        pwVar20 = (wchar_t *)
                  (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(pFVar16 + -8))->
                  AllocatorInstance).Data;
      }
      iVar9 = FOpenColorIOWrapperConfig::GetNumViews((this->Config).Ptr,pwVar20);
      if (iVar9 <= iVar8) {
        if ((byte)LogOpenColorIO._0_1_ < 4) goto LAB_14d775a3f;
        if ((*(int *)pFVar16 < 2) || (*(int *)(pFVar16 + 0x10) < 2)) {
          local_d0.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_d0.Data.ArrayNum = 0;
          local_d0.Data.ArrayMax = 0;
        }
        else {
          ::FString::PrintfImpl(&local_d0,L"%s - %s");
        }
        UE::Logging::Private::BasicLog<4>(&::LOG_Static,(FLogCategoryBase *)&LogOpenColorIO);
        FVar14.Data = local_d0.Data.AllocatorInstance.Data;
        goto LAB_14d775a35;
      }
      if (*(int *)pFVar16 == 0) {
        pwVar20 = L"";
      }
      else {
        pwVar20 = (wchar_t *)
                  (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(pFVar16 + -8))->
                  AllocatorInstance).Data;
      }
      FOpenColorIOWrapperConfig::GetViewName((this->Config).Ptr,&local_88,pwVar20,iVar8);
      iVar9 = local_88.Data.ArrayNum;
      if (iVar9 == *(int *)(pFVar16 + 0x10)) {
        if (iVar9 < 2) goto LAB_14d775845;
        iVar9 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)local_88.Data.AllocatorInstance.Data,
                           *(wchar_t **)(pFVar16 + 8));
        bVar6 = iVar9 == 0;
      }
      else {
        bVar6 = iVar9 + *(int *)(pFVar16 + 0x10) == 1;
      }
      if (bVar6) goto LAB_14d775845;
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
      iVar8 = iVar8 + 1;
    } while( true );
  }
  this_01 = UOpenColorIOSettings::StaticClass();
  if ((this_01->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
    UClass::InternalCreateDefaultObjectWrapper(this_01);
  }
  local_d8 = (this_01->ClassDefaultObject).field0_0x0.DebugPtr;
  local_158 = 0;
  if (0 < (this->DesiredColorSpaces).ArrayNum) {
    do {
      uVar19 = 0;
      if ((int)local_158 < (this->DesiredColorSpaces).ArrayNum) {
        uVar19 = ~local_158 >> 0x1f;
      }
      if ((uVar19 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      uVar19 = local_158 + 1;
      pFVar16 = (this->DesiredColorSpaces).AllocatorInstance.Data + (longlong)(int)local_158 * 0x30;
      if ((int)uVar19 < (this->DesiredColorSpaces).ArrayNum) {
        do {
          uVar10 = 0;
          if ((int)uVar19 < (this->DesiredColorSpaces).ArrayNum) {
            uVar10 = ~uVar19 >> 0x1f;
          }
          if ((uVar10 == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar6)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          pFVar17 = (this->DesiredColorSpaces).AllocatorInstance.Data + (longlong)(int)uVar19 * 0x30
          ;
          CreateColorTransform(this,(FString *)pFVar16,(FString *)pFVar17);
          CreateColorTransform(this,(FString *)pFVar17,(FString *)pFVar16);
          uVar19 = uVar19 + 1;
        } while ((int)uVar19 < (this->DesiredColorSpaces).ArrayNum);
      }
      pUVar5 = local_d8;
      iVar8 = (this->DesiredDisplayViews).ArrayNum;
      pFVar18 = (this->DesiredDisplayViews).AllocatorInstance.Data;
      pFVar17 = pFVar18 + 0x10;
      pFVar24 = pFVar18 + (longlong)iVar8 * 0x30;
      while( true ) {
        if ((this->DesiredDisplayViews).ArrayNum != iVar8) {
          local_res20[0] = 0;
          `TCheckedPointerIterator<FOpenColorIODisplayView,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res20);
        }
        if (pFVar18 == pFVar24) break;
        CreateColorTransform(this,(FString *)pFVar16,(FString *)pFVar18,(FString *)pFVar17,Forward);
        if ((pUVar5[1].field_0x10 & 4) != 0) {
          CreateColorTransform
                    (this,(FString *)pFVar16,(FString *)pFVar18,(FString *)pFVar17,Inverse);
        }
        pFVar18 = pFVar18 + 0x30;
        pFVar17 = pFVar17 + 0x30;
      }
      local_158 = local_158 + 1;
    } while ((int)local_158 < (this->DesiredColorSpaces).ArrayNum);
  }
  DestructItems<FOpenColorIODisplayView,int>((FOpenColorIODisplayView *)local_150.Data,local_148);
  if ((FOpenColorIODisplayView *)local_150.Data != (FOpenColorIODisplayView *)0x0) {
    FMemory::Free(local_150.Data);
  }
  DestructItems<FOpenColorIOColorSpace,int>((FOpenColorIOColorSpace *)local_140.Data,local_138);
  if ((FOpenColorIOColorSpace *)local_140.Data != (FOpenColorIOColorSpace *)0x0) {
    FMemory::Free(local_140.Data);
  }
  goto LAB_14d775c45;
LAB_14d775845:
  ::FString::FString(&local_b8,(FString *)(pFVar16 + -8));
  ::FString::FString(&local_a8,(FString *)(pFVar16 + 8));
  ::FString::FString(&local_98,(FString *)(pFVar16 + 0x18));
  if (*(int *)(pFVar16 + 0x10) == 0) {
    pwVar20 = L"";
  }
  else {
    pwVar20 = *(wchar_t **)(pFVar16 + 8);
  }
  if (*(int *)pFVar16 == 0) {
    pwVar21 = L"";
  }
  else {
    pwVar21 = (wchar_t *)
              (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)(pFVar16 + -8))->AllocatorInstance).
              Data;
  }
  pFVar11 = FOpenColorIOWrapperConfig::GetDisplayViewTransformDescription
                      ((this->Config).Ptr,&local_58,pwVar21,pwVar20);
  if (&local_98 != pFVar11) {
    if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_98.Data.AllocatorInstance.Data);
    }
    local_98.Data.AllocatorInstance.Data = (pFVar11->Data).AllocatorInstance.Data;
    (pFVar11->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_98.Data.ArrayNum = (pFVar11->Data).ArrayNum;
    local_98.Data.ArrayMax = (pFVar11->Data).ArrayMax;
    (pFVar11->Data).ArrayNum = 0;
    (pFVar11->Data).ArrayMax = 0;
  }
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pFVar17 = (this->DesiredDisplayViews).AllocatorInstance.Data;
  if (((pFVar17 <= (FScriptContainerElement *)&local_b8) &&
      ((FScriptContainerElement *)&local_b8 <
       pFVar17 + (longlong)(this->DesiredDisplayViews).ArrayMax * 0x30)) &&
     (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar6)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar8 = (this->DesiredDisplayViews).ArrayNum;
  if (iVar8 == (this->DesiredDisplayViews).ArrayMax) {
    iVar8 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x830,&(this->DesiredDisplayViews).AllocatorInstance,(int *)local_d8);
  }
  (this->DesiredDisplayViews).ArrayNum = iVar8 + 1;
  pFVar17 = (this->DesiredDisplayViews).AllocatorInstance.Data + (longlong)iVar8 * 0x30;
  ::FString::FString((FString *)pFVar17,&local_b8);
  ::FString::FString((FString *)(pFVar17 + 0x10),&local_a8);
  ::FString::FString((FString *)(pFVar17 + 0x20),&local_98);
  if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_98.Data.AllocatorInstance.Data);
  }
  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
  }
  FVar14.Data = local_88.Data.AllocatorInstance.Data;
  if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_b8.Data.AllocatorInstance.Data);
    FVar14.Data = local_88.Data.AllocatorInstance.Data;
  }
LAB_14d775a35:
  if (FVar14.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar14.Data);
  }
LAB_14d775a3f:
  uVar13 = (ulonglong)local_148;
  pFVar16 = pFVar16 + 0x30;
  goto LAB_14d775790;
}

// StartDirectoryWatch @ 14d777930

void __thiscall
UOpenColorIOConfiguration::StartDirectoryWatch(UOpenColorIOConfiguration *this,FString *param_1)

{
  return;
}

// StaticRegisterNativesUOpenColorIOConfiguration @ 14d778490

void __cdecl UOpenColorIOConfiguration::StaticRegisterNativesUOpenColorIOConfiguration(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UOpenColorIOConfiguration_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StopDirectoryWatch @ 14d778520

void __thiscall UOpenColorIOConfiguration::StopDirectoryWatch(UOpenColorIOConfiguration *this)

{
  return;
}

// TransformColor @ 14d778e20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UOpenColorIOConfiguration::TransformColor
          (UOpenColorIOConfiguration *this,FOpenColorIOColorConversionSettings *param_1,
          FLinearColor *param_2)

{
  FScriptContainerElement *pFVar1;
  UOpenColorIOColorTransform *this_00;
  int iVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  undefined1 auStackY_b8 [32];
  FOpenColorIOWrapperProcessor local_88 [2];
  undefined1 local_78 [24];
  undefined8 uStack_60;
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  void *local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  pFVar4 = (this->ColorTransforms).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)(this->ColorTransforms).ArrayNum * 8;
  local_88[0].Pimpl = (TPimplPtr<FOpenColorIOProcessorPimpl,1>)param_1;
  while( true ) {
    if (pFVar4 == pFVar1) {
      return false;
    }
    bVar3 = `UOpenColorIOConfiguration::FindTransform'::__l2::<lambda_1>::operator()
                      (local_88,*(UOpenColorIOColorTransform **)pFVar4);
    if (bVar3) break;
    pFVar4 = pFVar4 + 8;
  }
  this_00 = *(UOpenColorIOColorTransform **)pFVar4;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (this_00 == (UOpenColorIOColorTransform *)0x0) {
      return false;
    }
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  if (this_00 == (UOpenColorIOColorTransform *)0x0) {
    return false;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  if (((uint)this_00->_padding_ >> 0x1e & 1) != 0) {
    return false;
  }
  FOpenColorIOWrapperProcessor::FOpenColorIOWrapperProcessor(local_88);
  local_4c = 0x80;
  local_40 = 0;
  local_78._16_8_ = 0;
  uStack_60 = 0;
  local_30 = 0;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (void *)0x0;
  bVar3 = UOpenColorIOColorTransform::GetTransformProcessor
                    (this_00,local_88,
                     (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                      *)local_78);
  local_30 = local_30 & 0xffffffff00000000;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_78,0,local_78._8_4_);
  iVar2 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  if (!bVar3) {
    if (local_88[0].Pimpl != (TPimplPtr<FOpenColorIOProcessorPimpl,1>)0x0) {
      (**(code **)((longlong)local_88[0].Pimpl + -0x10))
                ((int *)((longlong)local_88[0].Pimpl + -0x10));
    }
    return false;
  }
  bVar3 = FOpenColorIOWrapperProcessor::TransformColor(local_88,param_2);
  if (local_88[0].Pimpl != (TPimplPtr<FOpenColorIOProcessorPimpl,1>)0x0) {
    (**(code **)((longlong)local_88[0].Pimpl + -0x10))((int *)((longlong)local_88[0].Pimpl + -0x10))
    ;
    return bVar3;
  }
  return bVar3;
}

// TransformImage @ 14d7792e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UOpenColorIOConfiguration::TransformImage
          (UOpenColorIOConfiguration *this,FOpenColorIOColorConversionSettings *param_1,
          FImageView *param_2,FImageView *param_3)

{
  FScriptContainerElement *pFVar1;
  UOpenColorIOColorTransform *this_00;
  int iVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  undefined1 auStackY_c8 [32];
  FOpenColorIOWrapperProcessor local_98 [2];
  undefined1 local_88 [24];
  undefined8 uStack_70;
  void *local_68;
  undefined4 local_60;
  uint local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined8 local_50;
  void *local_48;
  ulonglong local_40;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_c8;
  pFVar4 = (this->ColorTransforms).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)(this->ColorTransforms).ArrayNum * 8;
  local_98[0].Pimpl = (TPimplPtr<FOpenColorIOProcessorPimpl,1>)param_1;
  while( true ) {
    if (pFVar4 == pFVar1) {
      return false;
    }
    bVar3 = `UOpenColorIOConfiguration::FindTransform'::__l2::<lambda_1>::operator()
                      (local_98,*(UOpenColorIOColorTransform **)pFVar4);
    if (bVar3) break;
    pFVar4 = pFVar4 + 8;
  }
  this_00 = *(UOpenColorIOColorTransform **)pFVar4;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (this_00 == (UOpenColorIOColorTransform *)0x0) {
      return false;
    }
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  if (this_00 == (UOpenColorIOColorTransform *)0x0) {
    return false;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  if (((uint)this_00->_padding_ >> 0x1e & 1) != 0) {
    return false;
  }
  FOpenColorIOWrapperProcessor::FOpenColorIOWrapperProcessor(local_98);
  local_5c = 0x80;
  local_50 = 0;
  local_88._16_8_ = 0;
  uStack_70 = 0;
  local_40 = 0;
  local_88._0_8_ = (FScriptContainerElement *)0x0;
  local_88._8_8_ = 0;
  local_68 = (void *)0x0;
  local_60 = 0;
  local_58 = 0xffffffff;
  local_54 = 0;
  local_48 = (void *)0x0;
  bVar3 = UOpenColorIOColorTransform::GetTransformProcessor
                    (this_00,local_98,
                     (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                      *)local_88);
  local_40 = local_40 & 0xffffffff00000000;
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_88,0,local_88._8_4_);
  iVar2 = SUB84(local_88._8_8_,4);
  local_88._8_8_ = local_88._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_88,0,(int *)(local_88 + 0xc));
  }
  local_58 = 0xffffffff;
  local_54 = 0;
  local_60 = 0;
  if (0x80 < local_5c) {
    local_5c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_88 + 0x10),0);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  if ((FScriptContainerElement *)local_88._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_88._0_8_);
  }
  if (!bVar3) {
    if (local_98[0].Pimpl != (TPimplPtr<FOpenColorIOProcessorPimpl,1>)0x0) {
      (**(code **)((longlong)local_98[0].Pimpl + -0x10))
                ((int *)((longlong)local_98[0].Pimpl + -0x10));
    }
    return false;
  }
  bVar3 = FOpenColorIOWrapperProcessor::TransformImage(local_98,param_2,param_3);
  if (local_98[0].Pimpl != (TPimplPtr<FOpenColorIOProcessorPimpl,1>)0x0) {
    (**(code **)((longlong)local_98[0].Pimpl + -0x10))((int *)((longlong)local_98[0].Pimpl + -0x10))
    ;
    return bVar3;
  }
  return bVar3;
}

// TransformImage @ 14d7794d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */

bool __thiscall
UOpenColorIOConfiguration::TransformImage
          (UOpenColorIOConfiguration *this,FOpenColorIOColorConversionSettings *param_1,
          FImageView *param_2)

{
  FScriptContainerElement *pFVar1;
  UOpenColorIOColorTransform *this_00;
  int iVar2;
  bool bVar3;
  FScriptContainerElement *pFVar4;
  undefined1 auStackY_b8 [32];
  FOpenColorIOWrapperProcessor local_88 [2];
  undefined1 local_78 [24];
  undefined8 uStack_60;
  void *local_58;
  undefined4 local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  void *local_38;
  ulonglong local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  pFVar4 = (this->ColorTransforms).AllocatorInstance.Data;
  pFVar1 = pFVar4 + (longlong)(this->ColorTransforms).ArrayNum * 8;
  local_88[0].Pimpl = (TPimplPtr<FOpenColorIOProcessorPimpl,1>)param_1;
  while( true ) {
    if (pFVar4 == pFVar1) {
      return false;
    }
    bVar3 = `UOpenColorIOConfiguration::FindTransform'::__l2::<lambda_1>::operator()
                      (local_88,*(UOpenColorIOColorTransform **)pFVar4);
    if (bVar3) break;
    pFVar4 = pFVar4 + 8;
  }
  this_00 = *(UOpenColorIOColorTransform **)pFVar4;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (this_00 == (UOpenColorIOColorTransform *)0x0) {
      return false;
    }
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  if (this_00 == (UOpenColorIOColorTransform *)0x0) {
    return false;
  }
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  if (((uint)this_00->_padding_ >> 0x1e & 1) != 0) {
    return false;
  }
  FOpenColorIOWrapperProcessor::FOpenColorIOWrapperProcessor(local_88);
  local_4c = 0x80;
  local_40 = 0;
  local_78._16_8_ = 0;
  uStack_60 = 0;
  local_30 = 0;
  local_78._0_8_ = (FScriptContainerElement *)0x0;
  local_78._8_8_ = 0;
  local_58 = (void *)0x0;
  local_50 = 0;
  local_48 = 0xffffffff;
  local_44 = 0;
  local_38 = (void *)0x0;
  bVar3 = UOpenColorIOColorTransform::GetTransformProcessor
                    (this_00,local_88,
                     (TMap<FString,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FString,0>_>
                      *)local_78);
  local_30 = local_30 & 0xffffffff00000000;
  if (local_38 != (void *)0x0) {
    FMemory::Free(local_38);
  }
  TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::DestroyElements((TSparseArray<TSparseSetElement<TTuple<FString,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                     *)local_78,0,local_78._8_4_);
  iVar2 = SUB84(local_78._8_8_,4);
  local_78._8_8_ = local_78._8_8_ & 0xffffffff00000000;
  if (iVar2 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,(ForAnyElementType *)local_78,0,(int *)(local_78 + 0xc));
  }
  local_48 = 0xffffffff;
  local_44 = 0;
  local_50 = 0;
  if (0x80 < local_4c) {
    local_4c = 0x80;
    TBitArray<FDefaultBitArrayAllocator>::Realloc
              ((TBitArray<FDefaultBitArrayAllocator> *)(local_78 + 0x10),0);
  }
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if ((FScriptContainerElement *)local_78._0_8_ != (FScriptContainerElement *)0x0) {
    FMemory::Free((void *)local_78._0_8_);
  }
  if (!bVar3) {
    if (local_88[0].Pimpl != (TPimplPtr<FOpenColorIOProcessorPimpl,1>)0x0) {
      (**(code **)((longlong)local_88[0].Pimpl + -0x10))
                ((int *)((longlong)local_88[0].Pimpl + -0x10));
    }
    return false;
  }
  bVar3 = FOpenColorIOWrapperProcessor::TransformImage(local_88,param_2);
  if (local_88[0].Pimpl != (TPimplPtr<FOpenColorIOProcessorPimpl,1>)0x0) {
    (**(code **)((longlong)local_88[0].Pimpl + -0x10))((int *)((longlong)local_88[0].Pimpl + -0x10))
    ;
    return bVar3;
  }
  return bVar3;
}

// Validate @ 14d779850

bool __thiscall UOpenColorIOConfiguration::Validate(UOpenColorIOConfiguration *this)

{
  FOpenColorIOWrapperConfig *pFVar1;
  
  if ((1 < (this->ConfigurationFile).FilePath.Data.ArrayNum) &&
     (pFVar1 = (this->Config).Ptr, pFVar1 != (FOpenColorIOWrapperConfig *)0x0)) {
    return *(longlong *)pFVar1->Pimpl != 0;
  }
  return false;
}

// execReloadExistingColorspaces @ 14d77a620

void __cdecl
UOpenColorIOConfiguration::execReloadExistingColorspaces
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  int local_res10 [2];
  
  local_res10[0] = 0;
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
  ReloadExistingColorspaces((UOpenColorIOConfiguration *)param_1,local_res10[0] != 0);
  return;
}

