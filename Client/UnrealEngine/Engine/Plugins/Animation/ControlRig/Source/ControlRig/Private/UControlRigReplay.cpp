// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ControlRig
// Functions: 47

// StaticClass @ 14a1fc320

UClass * __cdecl UControlRigReplay::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlRigReplay.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigReplay",
               &Z_Registration_Info_UClass_UControlRigReplay.InnerSingleton,
               StaticRegisterNativesUControlRigReplay,1000,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UControlRigReplay>,
               InternalVTableHelperCtorCaller<UControlRigReplay>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlRigReplay.InnerSingleton;
}

// UControlRigReplay @ 14a222ab0

UControlRigReplay * __thiscall
UControlRigReplay::UControlRigReplay(UControlRigReplay *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UControlRigReplay__6B_;
  FText::FText(&this->Description);
  (this->ControlRigObjectPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->ControlRigObjectPath).AssetPath.PackageName.Number = 0;
  (this->ControlRigObjectPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->ControlRigObjectPath).AssetPath.AssetName.Number = 0;
  (this->ControlRigObjectPath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ControlRigObjectPath).SubPathString.Data.ArrayNum = 0;
  (this->ControlRigObjectPath).SubPathString.Data.ArrayMax = 0;
  (this->PreviewSkeletalMeshObjectPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->PreviewSkeletalMeshObjectPath).AssetPath.PackageName.Number = 0;
  (this->PreviewSkeletalMeshObjectPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->PreviewSkeletalMeshObjectPath).AssetPath.AssetName.Number = 0;
  (this->PreviewSkeletalMeshObjectPath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PreviewSkeletalMeshObjectPath).SubPathString.Data.ArrayNum = 0;
  (this->PreviewSkeletalMeshObjectPath).SubPathString.Data.ArrayMax = 0;
  FControlRigReplayTracks::FControlRigReplayTracks(&this->InputTracks);
  FControlRigReplayTracks::FControlRigReplayTracks(&this->OutputTracks);
  (this->FramesToSkip).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FramesToSkip).ArrayNum = 0;
  (this->FramesToSkip).ArrayMax = 0;
  (this->ReplayControlRig).WeakPtr = (FWeakObjectPtr)0x0;
  (this->RecordControlRig).WeakPtr = (FWeakObjectPtr)0x0;
  (this->PreConstructionHandle).ID = 0;
  (this->PreEventHandle).ID = 0;
  (this->PostEventHandle).ID = 0;
  this->bStoreVariablesDuringPreEvent = false;
  this->bReplayPaused = false;
  this->PlaybackMode = Live;
  (this->LastValidationWarningsAndErrors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastValidationWarningsAndErrors).ArrayNum = 0;
  (this->LastValidationWarningsAndErrors).ArrayMax = 0;
  return this;
}

// UControlRigReplay @ 14a222b70

UControlRigReplay * __thiscall UControlRigReplay::UControlRigReplay(UControlRigReplay *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UControlRigReplay__6B_;
  FText::FText(&this->Description);
  (this->ControlRigObjectPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->ControlRigObjectPath).AssetPath.PackageName.Number = 0;
  (this->ControlRigObjectPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->ControlRigObjectPath).AssetPath.AssetName.Number = 0;
  (this->ControlRigObjectPath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->ControlRigObjectPath).SubPathString.Data.ArrayNum = 0;
  (this->ControlRigObjectPath).SubPathString.Data.ArrayMax = 0;
  (this->PreviewSkeletalMeshObjectPath).AssetPath.PackageName.ComparisonIndex = 0;
  (this->PreviewSkeletalMeshObjectPath).AssetPath.PackageName.Number = 0;
  (this->PreviewSkeletalMeshObjectPath).AssetPath.AssetName.ComparisonIndex = 0;
  (this->PreviewSkeletalMeshObjectPath).AssetPath.AssetName.Number = 0;
  (this->PreviewSkeletalMeshObjectPath).SubPathString.Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (this->PreviewSkeletalMeshObjectPath).SubPathString.Data.ArrayNum = 0;
  (this->PreviewSkeletalMeshObjectPath).SubPathString.Data.ArrayMax = 0;
  FControlRigReplayTracks::FControlRigReplayTracks(&this->InputTracks);
  FControlRigReplayTracks::FControlRigReplayTracks(&this->OutputTracks);
  this->bValidateHierarchyTopology = true;
  this->bValidatePose = true;
  this->bValidateMetadata = true;
  this->bValidateVariables = true;
  this->Tolerance = 0.001;
  this->DesiredRecordingDuration = -1.0;
  (this->FramesToSkip).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->FramesToSkip).ArrayNum = 0;
  (this->FramesToSkip).ArrayMax = 0;
  this->EnableTest = true;
  (this->ReplayControlRig).WeakPtr = (FWeakObjectPtr)0x0;
  (this->RecordControlRig).WeakPtr = (FWeakObjectPtr)0x0;
  (this->PreConstructionHandle).ID = 0;
  (this->PreEventHandle).ID = 0;
  (this->PostEventHandle).ID = 0;
  this->TimeAtStartOfRecording = 0.0;
  this->TimeOfLastFrame = 0.0;
  this->bStoreVariablesDuringPreEvent = false;
  this->bReplayPaused = false;
  this->PlaybackMode = Live;
  (this->LastValidationWarningsAndErrors).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->LastValidationWarningsAndErrors).ArrayNum = 0;
  (this->LastValidationWarningsAndErrors).ArrayMax = 0;
  (this->InputTracks).bIsInput = true;
  (this->OutputTracks).bIsInput = false;
  return this;
}

// ~UControlRigReplay @ 14a226c50

void __thiscall UControlRigReplay::~UControlRigReplay(UControlRigReplay *this)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  
  this->_padding_ = (longlong)&___7UControlRigReplay__6B_;
  DestructItems<FString,int>
            ((FString *)(this->LastValidationWarningsAndErrors).AllocatorInstance.Data,
             (this->LastValidationWarningsAndErrors).ArrayNum);
  pFVar1 = (this->LastValidationWarningsAndErrors).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->FramesToSkip).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  FControlRigReplayTracks::~FControlRigReplayTracks(&this->OutputTracks);
  FControlRigReplayTracks::~FControlRigReplayTracks(&this->InputTracks);
  pFVar1 = (this->PreviewSkeletalMeshObjectPath).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ControlRigObjectPath).SubPathString.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pIVar2 = (this->Description).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  UObject::~UObject((UObject *)this);
  return;
}

// operator() @ 14a22b6e0

void __thiscall
`UControlRigReplay::PerformTest'::__l2::<lambda_1>::operator()
          (void *this,Type param_1,FName *param_2,FString *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  Type local_res10 [2];
  FString local_38;
  FString local_28;
  
  if (*(longlong *)((longlong)this + 0x10) != 0) {
    if (*param_2 == (FName)0x0) {
      UE::Core::Private::Function::
      TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(enum_EMessageSeverity::Type,FString_const_&)>
      ::operator()((void *)((longlong)this + 0x10),param_1,param_3);
    }
    else {
      ::FName::ToString(param_2,&local_28);
      ::FString::PrintfImpl(&local_38,L"%s: %s");
      local_res10[0] = param_1;
      UE::Core::Private::Function::CheckCallable(*(void **)((longlong)this + 0x10));
      pcVar1 = *(code **)((longlong)this + 0x10);
      plVar3 = (longlong *)((longlong)this + 0x20);
      if (*(longlong **)((longlong)this + 0x38) != (longlong *)0x0) {
        plVar3 = *(longlong **)((longlong)this + 0x38);
      }
      uVar2 = (**(code **)(*plVar3 + 8))();
      (*pcVar1)(uVar2,local_res10,&local_38);
      if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data.AllocatorInstance.Data);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
  }
  if (param_1 == Error) {
    **(undefined1 **)this = 0;
  }
  return;
}

// operator() @ 14a22ca30

void __thiscall
`UControlRigReplay::ValidateExpectedResults'::__l2::<lambda_1>::operator()
          (void *this,Type param_1,FString *param_2)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  int iVar4;
  undefined8 uVar5;
  longlong *plVar6;
  ForAnyElementType *pFVar7;
  Type local_res10 [2];
  
  if (*(void **)this != (void *)0x0) {
    local_res10[0] = param_1;
    UE::Core::Private::Function::CheckCallable(*(void **)this);
    pcVar1 = *(code **)this;
    plVar6 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar6 = *(longlong **)((longlong)this + 0x28);
    }
    uVar5 = (**(code **)(*plVar6 + 8))();
    (*pcVar1)(uVar5,local_res10,param_2);
  }
  if ((param_1 - Error & 0xfffffffd) == 0) {
    lVar2 = *(longlong *)((longlong)this + 0x30);
    pFVar7 = (ForAnyElementType *)(lVar2 + 0x3d8);
    if ((pFVar7->Data <= param_2) &&
       (param_2 < pFVar7->Data + (longlong)*(int *)(lVar2 + 0x3e4) * 0x10)) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        );
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    iVar4 = *(int *)(lVar2 + 0x3e0);
    if (iVar4 == *(int *)(lVar2 + 0x3e4)) {
      iVar4 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,pFVar7,(int *)(lVar2 + 0x3e4));
    }
    *(int *)(lVar2 + 0x3e0) = iVar4 + 1;
    ::FString::FString((FString *)(pFVar7->Data + (longlong)iVar4 * 0x10),param_2);
  }
  return;
}

// operator() @ 14a22f640

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`UControlRigReplay::StartRecording'::__l2::<lambda_2>::operator()
          (void *this,URigVMHost *param_1,FName *param_2)

{
  int *piVar1;
  int iVar2;
  byte bVar3;
  TReferenceControllerBase<1> *pTVar4;
  FSampleTrackBase *pFVar5;
  longlong lVar6;
  code *pcVar7;
  undefined4 uVar8;
  char cVar9;
  bool bVar10;
  UClass *pUVar11;
  FSampleTrackContainer *pFVar12;
  TSharedPtr<FSampleTrackBase,1> *pTVar13;
  uint local_res10 [2];
  FName local_res20;
  FName local_168;
  FName local_160;
  FName local_158;
  FName local_150;
  TSharedPtr<FSampleTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>,1> local_148;
  TSharedPtr<FSampleTrack<unsigned_int>,1> local_138;
  TArrayView<FRigElementKey,int> local_128;
  TSharedPtr<FSampleTrackBase,1> local_118;
  FSampleTrackBase local_108;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined4 local_48;
  
  if (param_1 != (URigVMHost *)0x0) {
    pUVar11 = UControlRig::StaticClass();
    iVar2 = (int)pUVar11->_padding_;
    if ((((iVar2 <= *(int *)(param_1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar11->_padding_)) &&
        (FLazyName::Resolve(&FRigUnit_PrepareForExecution::EventName), *param_2 != local_res20)) &&
       ((FLazyName::Resolve(&FRigUnit_PostPrepareForExecution::EventName), *param_2 != local_168 &&
        (cVar9 = (**(code **)(param_1->_padding_ + 0x308))(param_1,param_2), cVar9 != '\0')))) {
      if (*(char *)(*(longlong *)this + 0x3d0) != '\0') {
        FSampleTrackHost::AddTimeSample
                  ((FSampleTrackHost *)(*(longlong *)this + 0x78),param_1->AbsoluteTime,
                   param_1->DeltaTime);
        FControlRigReplayTracks::StoreVariables
                  ((FControlRigReplayTracks *)(*(longlong *)this + 0x78),param_1);
      }
      pFVar12 = FSampleTrackHost::GetContainer((FSampleTrackHost *)(*(longlong *)this + 0x78));
      FLazyName::Resolve(&FControlRigReplayTracks::RigVMEventName);
      memset(&local_108,0,200);
      FSampleTrackBase::FSampleTrackBase(&local_108);
      local_108._padding_ = (longlong)&___7FSampleTrackBase__6B_;
      local_60 = 0;
      local_58 = 0;
      local_50 = 0;
      local_48 = 0;
      if (local_108.AtlasStorage.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.AtlasStorage.AllocatorInstance.Data);
      }
      if (local_108.TimeIndicesStorage.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.TimeIndicesStorage.AllocatorInstance.Data);
      }
      if (local_108.Names.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_108.Names.AllocatorInstance.Data);
      }
      if ((longlong *)local_108._padding_ != (longlong *)0x0) {
        LOCK();
        piVar1 = (int *)(local_108._padding_ + 0xc);
        iVar2 = *piVar1;
        *piVar1 = *piVar1 + -1;
        UNLOCK();
        if ((iVar2 == 1) && ((longlong *)local_108._padding_ != (longlong *)0x0)) {
          (**(code **)(*(longlong *)local_108._padding_ + 8))(local_108._padding_,1);
        }
      }
      pTVar13 = FSampleTrackContainer::FindOrAddTrack
                          (pFVar12,&local_118,&local_160,ETrackType_Name,(UScriptStruct *)0x0);
      pTVar4 = (pTVar13->SharedReferenceCount).ReferenceController;
      pFVar5 = pTVar13->Object;
      if (pTVar4 != (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        pTVar4->SharedReferenceCount = (atomic<int>)((int)pTVar4->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_118.SharedReferenceCount.ReferenceController);
      if ((pFVar5 == (FSampleTrackBase *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      uVar8 = __real_38d1b717;
      (**(code **)(pFVar5->_padding_ + 0xd8))(pFVar5,param_2,__real_38d1b717);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar4);
      lVar6 = *(longlong *)this;
      bVar3 = param_1[3].UserDefinedTypesInUse.Elements.field_0x18;
      pFVar12 = FSampleTrackHost::GetContainer((FSampleTrackHost *)(lVar6 + 0x78));
      FLazyName::Resolve(&FControlRigReplayTracks::InteractionTypeName);
      FSampleTrackContainer::FindOrAddTrack<unsigned_int>
                (pFVar12,&local_138,&local_158,ETrackType_Uint32,(UScriptStruct *)0x0);
      pFVar12 = FSampleTrackHost::GetContainer((FSampleTrackHost *)(lVar6 + 0x78));
      FLazyName::Resolve(&FControlRigReplayTracks::ElementsBeingInteractedName);
      FSampleTrackContainer::FindOrAddTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>
                (pFVar12,&local_148,&local_150,ETrackType_ElementKeyArray,(UScriptStruct *)0x0);
      if ((local_138.Object == (FSampleTrack<unsigned_int> *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      local_res10[0] = (uint)bVar3;
      (**(code **)(*(longlong *)local_138.Object + 0xd8))(local_138.Object,local_res10,uVar8);
      if ((local_148.Object ==
           (FSampleTrack<TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_> *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar10)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      (**(code **)(*(longlong *)local_148.Object + 0xd8))
                (local_148.Object,&param_1[3].UserDefinedTypesInUse.Elements.field_0x20,uVar8);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_148.SharedReferenceCount.ReferenceController);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_138.SharedReferenceCount.ReferenceController);
      local_128.DataPtr = (FRigElementKey *)0x0;
      local_128.ArrayNum = 0;
      FControlRigReplayTracks::StoreHierarchy
                ((FControlRigReplayTracks *)(*(longlong *)this + 0x78),
                 *(URigHierarchy **)&param_1[1].UserDefinedStructGuidToPathName.field_0x48,
                 &local_128,true,true,true);
      *(undefined1 *)(*(longlong *)this + 0x3d0) = 1;
    }
  }
  return;
}

// operator() @ 14a22fbf0

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`UControlRigReplay::StartReplay'::__l2::<lambda_2>::operator()
          (void *this,URigVMHost *param_1,FName *param_2)

{
  longlong *plVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  UClass *pUVar5;
  int iVar6;
  float fVar7;
  float fVar8;
  FName local_res10;
  TArrayView<FRigElementKey,int> local_88;
  undefined1 local_78 [8];
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_70;
  TFunction<void___cdecl(EMessageSeverity::Type,FName_const_&,FString_const_&)> local_58;
  
  if (param_1 != (URigVMHost *)0x0) {
    pUVar5 = UControlRig::StaticClass();
    iVar6 = (int)pUVar5->_padding_;
    if ((((iVar6 <= *(int *)(param_1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar6 * 8) ==
          &pUVar5->_padding_)) &&
        (FLazyName::Resolve(&FRigUnit_PrepareForExecution::EventName), *param_2 != local_res10)) &&
       (FLazyName::Resolve(&FRigUnit_PostPrepareForExecution::EventName), *param_2 != local_res10))
    {
      plVar1 = *(longlong **)this;
      iVar6 = *(int *)&param_1[4].PreExecutedEvent.field_0x8;
      cVar3 = (**(code **)(*plVar1 + 0x2e0))(plVar1);
      if ((cVar3 != '\0') && (*(char *)((longlong)plVar1 + 0x3d2) == '\x01')) {
        iVar4 = FSampleTrackHost::GetNumTimes((FSampleTrackHost *)(*(longlong *)this + 0x78));
        iVar2 = iVar4 + -1;
        if (iVar6 < iVar4 + -1) {
          iVar2 = iVar6;
        }
        iVar6 = 0;
        if (0 < iVar2) {
          iVar6 = iVar2;
        }
        FControlRigReplayTracks::GetRigVMEvent
                  ((FControlRigReplayTracks *)(*(longlong *)this + 0x78),(int)&local_res10);
        if (*param_2 != local_res10) {
          return;
        }
        FControlRigReplayTracks::GetInteraction
                  ((FControlRigReplayTracks *)(*(longlong *)this + 0x78),
                   (TTuple<unsigned_char,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_> *)
                   local_78,iVar6);
        param_1[3].UserDefinedTypesInUse.Elements.field_0x18 = local_78[0];
        TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::operator=
                  ((TArray<FRigElementKey,TSizedDefaultAllocator<32>_> *)
                   &param_1[3].UserDefinedTypesInUse.Elements.field_0x20,&local_70);
        fVar7 = FSampleTrackHost::GetDeltaTime((FSampleTrackHost *)(*(longlong *)this + 0x78),iVar6)
        ;
        fVar8 = FSampleTrackHost::GetAbsoluteTime
                          ((FSampleTrackHost *)(*(longlong *)this + 0x78),iVar6);
        URigVMHost::SetAbsoluteAndDeltaTime(param_1,fVar8,fVar7);
        if (*(char *)(*(longlong *)this + 0x3d0) != '\0') {
          local_58._0_8_ = 0;
          local_58._40_8_ = 0;
          FControlRigReplayTracks::RestoreVariables
                    ((FControlRigReplayTracks *)(*(longlong *)this + 0x78),iVar6,param_1,&local_58);
        }
        local_58._0_8_ = 0;
        local_58._40_8_ = 0;
        local_88.DataPtr = (FRigElementKey *)0x0;
        local_88.ArrayNum = 0;
        FControlRigReplayTracks::RestoreHierarchy
                  ((FControlRigReplayTracks *)(*(longlong *)this + 0x78),iVar6,
                   *(URigHierarchy **)&param_1[1].UserDefinedStructGuidToPathName.field_0x48,
                   &local_88,&local_58,true,true,true);
        if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_70.AllocatorInstance.Data);
        }
      }
      *(undefined1 *)(*(longlong *)this + 0x3d0) = 1;
    }
  }
  return;
}

// operator() @ 14a230190

void __thiscall
`UControlRigReplay::ValidateExpectedResults'::__l92::<lambda_2>::operator()
          (void *this,Type param_1,FName *param_2,FString *param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  longlong *plVar3;
  Type local_res10 [2];
  FString local_28;
  FString local_18;
  
  ::FName::ToString(param_2,&local_18);
  ::FString::PrintfImpl(&local_28,L"%s: %s");
  local_res10[0] = param_1;
  UE::Core::Private::Function::CheckCallable(*(void **)this);
  pcVar1 = *(code **)this;
  plVar3 = (longlong *)((longlong)this + 0x10);
  if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
    plVar3 = *(longlong **)((longlong)this + 0x28);
  }
  uVar2 = (**(code **)(*plVar3 + 8))();
  (*pcVar1)(uVar2,local_res10,&local_28);
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// operator() @ 14a230260

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`UControlRigReplay::StartRecording'::__l2::<lambda_3>::operator()
          (void *this,URigVMHost *param_1,FName *param_2)

{
  double dVar1;
  int iVar2;
  longlong lVar3;
  UClass *pUVar4;
  float fVar5;
  float fVar6;
  LARGE_INTEGER local_res10;
  TArrayView<FRigElementKey,int> local_28 [2];
  
  if (param_1 != (URigVMHost *)0x0) {
    pUVar4 = UControlRig::StaticClass();
    iVar2 = (int)pUVar4->_padding_;
    if ((((iVar2 <= *(int *)(param_1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar4->_padding_)) &&
        (FLazyName::Resolve(&FRigUnit_PrepareForExecution::EventName),
        *param_2 != (FName)local_res10.QuadPart)) &&
       (FLazyName::Resolve(&FRigUnit_PostPrepareForExecution::EventName),
       *param_2 != (FName)local_res10.QuadPart)) {
      QueryPerformanceCounter(&local_res10);
      *(double *)(*(longlong *)this + 0x3c0) =
           (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle +
           __real_4170000000000000;
      lVar3 = *(longlong *)this;
      fVar5 = FSampleTrackHost::GetLastDeltaTime((FSampleTrackHost *)(lVar3 + 0x78));
      fVar6 = FSampleTrackHost::GetLastAbsoluteTime((FSampleTrackHost *)(*(longlong *)this + 0x78));
      FSampleTrackHost::AddTimeSample((FSampleTrackHost *)(lVar3 + 0x1f0),fVar6,fVar5);
      FControlRigReplayTracks::StoreVariables
                ((FControlRigReplayTracks *)(*(longlong *)this + 0x1f0),param_1);
      local_28[0].DataPtr = (FRigElementKey *)0x0;
      local_28[0].ArrayNum = 0;
      FControlRigReplayTracks::StoreHierarchy
                ((FControlRigReplayTracks *)(*(longlong *)this + 0x1f0),
                 *(URigHierarchy **)&param_1[1].UserDefinedStructGuidToPathName.field_0x48,local_28,
                 true,true,true);
      fVar5 = FSampleTrackHost::GetLastAbsoluteTime((FSampleTrackHost *)(*(longlong *)this + 0x1f0))
      ;
      dVar1 = (double)(*(longlong **)this)[0x79];
      if ((__real_bf1a36e2e0000000 <= dVar1) && (dVar1 <= (double)fVar5)) {
        (**(code **)(**(longlong **)this + 0x2c0))();
      }
    }
  }
  return;
}

// operator() @ 14a230650

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
`UControlRigReplay::StartReplay'::__l2::<lambda_3>::operator()
          (void *this,URigVMHost *param_1,FName *param_2)

{
  longlong *plVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  UClass *pUVar5;
  FSampleTrackHost *this_00;
  int iVar6;
  float fVar7;
  float fVar8;
  FName local_res10;
  TArrayView<FRigElementKey,int> local_68;
  undefined1 local_58 [24];
  URigVMHost *local_40;
  undefined8 local_30;
  
  if (param_1 != (URigVMHost *)0x0) {
    pUVar5 = UControlRig::StaticClass();
    iVar6 = (int)pUVar5->_padding_;
    if ((((iVar6 <= *(int *)(param_1->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar6 * 8) ==
          &pUVar5->_padding_)) &&
        (FLazyName::Resolve(&FRigUnit_PrepareForExecution::EventName), *param_2 != local_res10)) &&
       (FLazyName::Resolve(&FRigUnit_PostPrepareForExecution::EventName), *param_2 != local_res10))
    {
      iVar6 = *(int *)&param_1[4].PreExecutedEvent.field_0x8;
      plVar1 = *(longlong **)this;
      cVar2 = (**(code **)(*plVar1 + 0x2e0))(plVar1);
      if ((cVar2 == '\0') || (*(char *)((longlong)plVar1 + 0x3d2) != '\x01')) {
        iVar3 = FSampleTrackHost::GetNumTimes((FSampleTrackHost *)(*(longlong *)this + 0x1f0));
        iVar4 = iVar3 + -1;
        if (iVar6 < iVar3 + -1) {
          iVar4 = iVar6;
        }
        iVar6 = 0;
        if (0 < iVar4) {
          iVar6 = iVar4;
        }
        fVar7 = FSampleTrackHost::GetDeltaTime
                          ((FSampleTrackHost *)(*(longlong *)this + 0x1f0),iVar6);
        fVar8 = FSampleTrackHost::GetAbsoluteTime
                          ((FSampleTrackHost *)(*(longlong *)this + 0x1f0),iVar6);
        URigVMHost::SetAbsoluteAndDeltaTime(param_1,fVar8,fVar7);
        local_58._0_8_ = 0;
        local_30 = 0;
        FControlRigReplayTracks::RestoreVariables
                  ((FControlRigReplayTracks *)(*(longlong *)this + 0x1f0),iVar6,param_1,
                   (TFunction<void___cdecl(EMessageSeverity::Type,FName_const_&,FString_const_&)> *)
                   local_58);
        local_58._0_8_ = (code *)0x0;
        local_30 = 0;
        local_68.DataPtr = (FRigElementKey *)0x0;
        local_68.ArrayNum = 0;
        FControlRigReplayTracks::RestoreHierarchy
                  ((FControlRigReplayTracks *)(*(longlong *)this + 0x1f0),iVar6,
                   *(URigHierarchy **)&param_1[1].UserDefinedStructGuidToPathName.field_0x48,
                   &local_68,
                   (TFunction<void___cdecl(EMessageSeverity::Type,FName_const_&,FString_const_&)> *)
                   local_58,true,true,true);
        if (*(char *)(*(longlong *)this + 0x3d1) != '\0') {
          return;
        }
        this_00 = (FSampleTrackHost *)(*(longlong *)this + 0x1f0);
      }
      else {
        iVar3 = FSampleTrackHost::GetNumTimes((FSampleTrackHost *)(*(longlong *)this + 0x78));
        iVar4 = iVar3 + -1;
        if (iVar6 < iVar3 + -1) {
          iVar4 = iVar6;
        }
        iVar6 = 0;
        if (0 < iVar4) {
          iVar6 = iVar4;
        }
        fVar7 = FSampleTrackHost::GetDeltaTime((FSampleTrackHost *)(*(longlong *)this + 0x78),iVar6)
        ;
        fVar8 = FSampleTrackHost::GetAbsoluteTime
                          ((FSampleTrackHost *)(*(longlong *)this + 0x78),iVar6);
        URigVMHost::SetAbsoluteAndDeltaTime(param_1,fVar8,fVar7);
        FControlRigReplayTracks::GetRigVMEvent
                  ((FControlRigReplayTracks *)(*(longlong *)this + 0x78),(int)&local_res10);
        if (*param_2 == local_res10) {
          plVar1 = *(longlong **)this;
          local_58._16_8_ =
               &UE::Core::Private::Function::
                TFunction_OwnedObject<``UControlRigReplay::StartReplay'::`2'::<lambda_3>::operator()'::`11'::<lambda_1>,0,0>
                ::_vftable_;
          local_58._0_8_ =
               UE::Core::Private::Function::
               TFunctionRefCaller<``UControlRigReplay::StartReplay'::__l2::<lambda_3>::operator()'::__l11::<lambda_1>,void,enum_EMessageSeverity::Type,FString_const_&>
               ::Call;
          local_30 = 0;
          local_40 = param_1;
          (**(code **)(*plVar1 + 0x318))(plVar1,iVar6,plVar1 + 0x68,param_1,local_58);
        }
        if (*(char *)(*(longlong *)this + 0x3d1) != '\0') {
          return;
        }
        this_00 = (FSampleTrackHost *)(*(longlong *)this + 0x78);
      }
      iVar4 = FSampleTrackHost::GetNumTimes(this_00);
      if (iVar6 < iVar4 + -1) {
        *(int *)&param_1[4].PreExecutedEvent.field_0x8 = iVar6 + 1;
      }
      else {
        *(undefined4 *)&param_1[4].PreExecutedEvent.field_0x8 = 0;
      }
    }
  }
  return;
}

// BeginDestroy @ 14a2415f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UControlRigReplay::BeginDestroy(UControlRigReplay *this)

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
    while (*(UControlRigReplay **)FVar3 != this) {
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

// ClearDelegates @ 14a246080

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall UControlRigReplay::ClearDelegates(UControlRigReplay *this,UControlRig *param_1)

{
  FDelegateHandle FVar1;
  
  if (param_1 != (UControlRig *)0x0) {
    FVar1.ID = (this->PreConstructionHandle).ID;
    if (FVar1.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &param_1->PreConstructionEvent,FVar1);
      (this->PreConstructionHandle).ID = 0;
    }
    FVar1.ID = (this->PreEventHandle).ID;
    if (FVar1.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&param_1->_padding_,FVar1);
      (this->PreEventHandle).ID = 0;
    }
    FVar1.ID = (this->PostEventHandle).ID;
    if (FVar1.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&param_1->_padding_,FVar1);
      (this->PostEventHandle).ID = 0;
    }
  }
  return;
}

// CreateNewAsset @ 14a24d530

UControlRigReplay * __cdecl
UControlRigReplay::CreateNewAsset(FString *param_1,FString *param_2,UClass *param_3)

{
  FScriptContainerElement *pFVar1;
  
  pFVar1 = (param_1->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return (UControlRigReplay *)0x0;
}

// GetPlaybackMode @ 14a267030

EControlRigReplayPlaybackMode __thiscall UControlRigReplay::GetPlaybackMode(UControlRigReplay *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x2e0))();
  if (cVar1 != '\0') {
    return this->PlaybackMode;
  }
  return Live;
}

// GetPrivateStaticClass @ 14a267e00

UClass * __cdecl UControlRigReplay::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UControlRigReplay.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ControlRig",L"ControlRigReplay",
               &Z_Registration_Info_UClass_UControlRigReplay.InnerSingleton,
               StaticRegisterNativesUControlRigReplay,1000,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UControlRigReplay>,
               InternalVTableHelperCtorCaller<UControlRigReplay>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UControlRigReplay.InnerSingleton;
}

// GetTimeRange @ 14a26bc90

TVector2<double> * __thiscall
UControlRigReplay::GetTimeRange(UControlRigReplay *this,TVector2<double> *__return_storage_ptr__)

{
  float fVar1;
  FSampleTrackContainer *this_00;
  TVector2<float> TVar2;
  
  this_00 = FSampleTrackHost::GetContainer((FSampleTrackHost *)&this->OutputTracks);
  TVar2 = FSampleTrackContainer::GetTimeRange(this_00);
  fVar1 = *(float *)((longlong)TVar2.field0_0x0 + 4);
  (__return_storage_ptr__->field0_0x0)._s_0.X = (double)*(float *)TVar2.field0_0x0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)fVar1;
  return __return_storage_ptr__;
}

// GetValidationErrors @ 14a26d800

TArray<FString,TSizedDefaultAllocator<32>_> * __thiscall
UControlRigReplay::GetValidationErrors(UControlRigReplay *this)

{
  return &this->LastValidationWarningsAndErrors;
}

// HandlePreconstructionForTest @ 14a26eba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

void __thiscall
UControlRigReplay::HandlePreconstructionForTest
          (UControlRigReplay *this,UControlRig *param_1,FName *param_2)

{
  longlong *plVar1;
  int iVar2;
  URigHierarchy *pUVar3;
  longlong lVar4;
  code *pcVar5;
  UControlRigReplay *pUVar6;
  UControlRig *pUVar7;
  FSampleTrackBase *pFVar8;
  bool bVar9;
  int iVar10;
  int iVar11;
  FRigModuleSettings *pFVar12;
  UObject *pUVar13;
  UClass *pUVar14;
  USkeletalMesh *pUVar15;
  URigHierarchyController *this_00;
  FName *this_01;
  FString *pFVar16;
  FSampleTrackContainer *this_02;
  TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *pTVar17;
  FRigElementKeyRedirector *pFVar18;
  ulonglong uVar19;
  ForAnyElementType FVar20;
  FRigElementKey *pFVar21;
  FSharedReferencer<1> FVar22;
  ForAnyElementType FVar23;
  longlong *plVar24;
  ForElementType<FRigElementKey> FVar25;
  undefined1 auStackY_2b8 [32];
  undefined1 local_268;
  undefined1 local_267 [7];
  ForAnyElementType local_260;
  undefined8 local_258;
  ForAnyElementType local_250;
  int local_248 [2];
  longlong *local_240;
  ulonglong local_238;
  TArray<FRigSocketState,TSizedDefaultAllocator<32>_> local_230;
  TArray<FRigSocketState,TSizedDefaultAllocator<32>_> local_220;
  UControlRigReplay *local_210;
  FName local_208;
  UControlRig *local_200;
  FString local_1f8;
  TSharedPtr<FSampleTrackBase_const_,1> local_1e8;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_1d8;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_1c8;
  FString local_1b8;
  void *local_1a8 [2];
  code *local_198 [2];
  undefined **local_188;
  ForAnyElementType *local_180;
  longlong **local_178;
  undefined8 local_170;
  FRigElementKeyRedirector local_168;
  TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> local_c0;
  TMapBase<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
  local_98;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2b8;
  local_210 = this;
  local_200 = param_1;
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&param_1->PreConstructionEvent,
             this);
  pFVar12 = UControlRig::GetRigModuleSettings(param_1);
  if ((1 < (pFVar12->Identifier).Name.Data.ArrayNum) &&
     (pUVar13 = FSoftObjectPath::TryLoad
                          (&this->PreviewSkeletalMeshObjectPath,(FUObjectSerializeContext *)0x0),
     pUVar13 != (UObject *)0x0)) {
    pUVar14 = Z_Construct_UClass_USkeletalMesh_NoRegister();
    iVar2 = (int)pUVar14->_padding_;
    if ((iVar2 <= *(int *)(*(longlong *)&pUVar13->field_0x10 + 0x38)) &&
       (((longlong *)
         *(undefined1 **)
          (*(longlong *)(*(longlong *)&pUVar13->field_0x10 + 0x30) + (longlong)iVar2 * 8) ==
         &pUVar14->_padding_ &&
        (pUVar15 = (USkeletalMesh *)
                   FSoftObjectPath::TryLoad
                             (&this->PreviewSkeletalMeshObjectPath,(FUObjectSerializeContext *)0x0),
        pUVar15 != (USkeletalMesh *)0x0)))) {
      pUVar14 = Z_Construct_UClass_USkeletalMesh_NoRegister();
      iVar2 = (int)pUVar14->_padding_;
      if ((iVar2 <= *(int *)(pUVar15->_padding_ + 0x38)) &&
         ((((longlong *)
            *(undefined1 **)(*(longlong *)(pUVar15->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
            &pUVar14->_padding_ &&
           (pUVar3 = (param_1->DynamicHierarchy).field0_0x0.DebugPtr, pUVar3 != (URigHierarchy *)0x0
           )) && (this_00 = URigHierarchy::GetController(pUVar3,true),
                 this_00 != (URigHierarchyController *)0x0)))) {
        URigHierarchy::GetSocketStates((param_1->DynamicHierarchy).field0_0x0.DebugPtr,&local_220);
        URigHierarchyController::ImportPreviewSkeletalMesh
                  (this_00,&local_1d8,pUVar15,false,false,false,false);
        if (local_1d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1d8.AllocatorInstance.Data);
        }
        iVar2 = local_220.ArrayNum;
        FVar23.Data = local_220.AllocatorInstance.Data;
        pUVar3 = (param_1->DynamicHierarchy).field0_0x0.DebugPtr;
        local_230.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_230.ArrayNum = local_220.ArrayNum;
        if (local_220.ArrayNum == 0) {
          local_230.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0xa0,0x10,local_220.ArrayNum,0,&local_230.AllocatorInstance,local_220.ArrayNum,
                     &local_230.ArrayMax);
          ConstructItems<FRigSocketState,FRigSocketState,int>
                    (local_230.AllocatorInstance.Data,(FRigSocketState *)FVar23.Data,iVar2);
        }
        URigHierarchy::RestoreSocketsFromStates(pUVar3,&local_1c8,&local_230,false);
        if (local_1c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_1c8.AllocatorInstance.Data);
        }
        DestructItems<FRigSocketState,int>
                  ((FRigSocketState *)local_220.AllocatorInstance.Data,local_220.ArrayNum);
        if ((FRigSocketState *)local_220.AllocatorInstance.Data != (FRigSocketState *)0x0) {
          FMemory::Free(local_220.AllocatorInstance.Data);
        }
      }
    }
  }
  pUVar3 = (param_1->DynamicHierarchy).field0_0x0.DebugPtr;
  local_260.Data = (FScriptContainerElement *)0x0;
  local_258 = 0;
  iVar2 = (pUVar3->Elements).ArrayNum;
  local_240 = (longlong *)0x0;
  local_238 = 0;
  local_250.Data = (FScriptContainerElement *)0x0;
  local_248[0] = 0;
  local_248[1] = 0;
  iVar10 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                     (1,1,iVar2,&local_250,local_248,local_248 + 1);
  memset(local_250.Data + iVar10,0,(longlong)iVar2);
  local_170 = 0;
  local_188 = &
              ___7__TFunction_OwnedObject_V<lambda_1>__4____GetElementsOfType_UFRigConnectorElement___URigHierarchy__QEBA_AV__TArray_PEAUFRigConnectorElement__V__TSizedDefaultAllocator__0CA______N_Z__0A__0A__Function_Private_Core_UE__6B_
  ;
  local_180 = &local_250;
  local_178 = &local_240;
  local_198[0] = UE::Core::Private::Function::
                 TFunctionRefCaller<`URigHierarchy::GetElementsOfType<FRigConnectorElement>'::__l5::<lambda_1>,void,FRigBaseElement_*,bool_&>
                 ::Call;
  URigHierarchy::Traverse
            (pUVar3,(TFunction<void___cdecl(FRigBaseElement_*,bool_&)> *)local_198,true);
  if (local_250.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_250.Data);
  }
  iVar2 = (int)local_238;
  uVar19 = (ulonglong)(int)local_238;
  plVar1 = local_240 + uVar19;
  plVar24 = local_240;
  while( true ) {
    if ((int)uVar19 != iVar2) {
      local_268 = 0;
      `TCheckedPointerIterator<FRigConnectorElement_*,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_268);
    }
    if (plVar24 == plVar1) break;
    lVar4 = *plVar24;
    pFVar21 = (FRigElementKey *)(lVar4 + 0x10);
    if (((local_260.Data <= pFVar21) &&
        (pFVar21 < (FRigElementKey *)(local_260.Data + (longlong)local_258._4_4_ * 0xc))) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar9)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar10 = (int)local_258;
    if ((int)local_258 == local_258._4_4_) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x40c,&local_260,(int *)((longlong)&local_258 + 4));
    }
    plVar24 = plVar24 + 1;
    local_258 = CONCAT44(local_258._4_4_,iVar10 + 1);
    *(undefined8 *)(local_260.Data + (longlong)iVar10 * 0xc) = *(undefined8 *)pFVar21;
    *(undefined4 *)(local_260.Data + (longlong)iVar10 * 0xc + 8) = *(undefined4 *)(lVar4 + 0x18);
    uVar19 = local_238 & 0xffffffff;
  }
  if (local_240 != (longlong *)0x0) {
    FMemory::Free(local_240);
  }
  pUVar6 = local_210;
  iVar2 = (int)local_258;
  uVar19 = (ulonglong)(int)local_258;
  local_98.Pairs.Elements._0_8_ = 0;
  local_98.Pairs.Elements._8_8_ = 0;
  local_98.Pairs.Elements._32_8_ = 0;
  pFVar21 = (FRigElementKey *)(local_260.Data + uVar19 * 0xc);
  local_98.Pairs.Elements._40_4_ = 0;
  local_98.Pairs.Elements._52_4_ = 0;
  local_98.Pairs.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_98.Pairs.HashSize = 0;
  local_98.Pairs.Elements._44_4_ = 0x80;
  local_98.Pairs.Elements._48_4_ = 0xffffffff;
  FVar23.Data = local_260.Data;
  while( true ) {
    if ((int)uVar19 != iVar2) {
      local_267[0] = 0;
      `TCheckedPointerIterator<FRigElementKey_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_267);
    }
    pUVar7 = local_200;
    if ((FRigElementKey *)FVar23.Data == pFVar21) break;
    this_01 = FControlRigReplayTracks::GetTrackName
                        (&pUVar6->InputTracks,(FRigElementKey *)FVar23.Data);
    pFVar16 = ::FName::ToString(this_01,&local_1b8);
    ::FString::ConcatFC(&local_1f8,pFVar16,L"ConnectorTargets");
    FVar20.Data = (FScriptContainerElement *)L"";
    if (local_1f8.Data.ArrayNum != 0) {
      FVar20.Data = local_1f8.Data.AllocatorInstance.Data;
    }
    ::FName::FName(&local_208,(wchar_t *)FVar20.Data);
    if (local_1f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1f8.Data.AllocatorInstance.Data);
    }
    if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
    }
    this_02 = FSampleTrackHost::GetContainer((FSampleTrackHost *)&pUVar6->InputTracks);
    iVar10 = FSampleTrackContainer::GetTrackIndex(this_02,&local_208);
    if ((iVar10 < 0) || ((this_02->Tracks).ArrayNum <= iVar10)) {
      FVar22.ReferenceController = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      FSampleTrackContainer::GetTrack(this_02,&local_1e8,iVar10);
      FVar22.ReferenceController = local_1e8.SharedReferenceCount.ReferenceController;
      pFVar8 = local_1e8.Object;
      if (local_1e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_1e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_1e8.SharedReferenceCount.ReferenceController);
      if (pFVar8 != (FSampleTrackBase *)0x0) {
        local_c0.ArrayMax = 1;
        local_c0.AllocatorInstance.SecondaryData = (ForElementType<FRigElementKey>)0x0;
        local_c0.ArrayNum = 0;
        pTVar17 = (TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_> *
                  )(**(code **)(pFVar8->_padding_ + 200))
                             (pFVar8,local_1a8,0,&(pUVar6->InputTracks).SampleTrackIndex);
        if ((&local_c0 == pTVar17) &&
           (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                              ("(void*)this != (void*)&Source",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x986,L""), bVar9)) {
          pcVar5 = (code *)swi(3);
          (*pcVar5)();
          return;
        }
        iVar10 = *(int *)((pTVar17->AllocatorInstance).InlineData + 8);
        if (iVar10 != 0) {
          iVar11 = UE::Core::Private::
                   ReallocGrow<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FRigElementKey>_>
                             (0xc,4,iVar10,&local_c0.AllocatorInstance,&local_c0.ArrayNum,
                              &local_c0.ArrayMax);
          FVar25 = (ForElementType<FRigElementKey>)&local_c0;
          if (local_c0.AllocatorInstance.SecondaryData != (ForElementType<FRigElementKey>)0x0) {
            FVar25 = local_c0.AllocatorInstance.SecondaryData;
          }
          memmove((void *)((longlong)FVar25 + (longlong)iVar11 * 0xc),
                  *(void **)(pTVar17->AllocatorInstance).InlineData,(longlong)iVar10 * 0xc);
          (pTVar17->AllocatorInstance).InlineData[8] = '\0';
          (pTVar17->AllocatorInstance).InlineData[9] = '\0';
          (pTVar17->AllocatorInstance).InlineData[10] = '\0';
          (pTVar17->AllocatorInstance).InlineData[0xb] = '\0';
        }
        if (local_1a8[0] != (void *)0x0) {
          FMemory::Free(local_1a8[0]);
        }
        TMapBase<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
        ::
        Emplace<FRigElementKey_const_&,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_const_&>
                  (&local_98,(FRigElementKey *)FVar23.Data,&local_c0);
        if (local_c0.AllocatorInstance.SecondaryData != (ForElementType<FRigElementKey>)0x0) {
          FMemory::Free((void *)local_c0.AllocatorInstance.SecondaryData);
        }
      }
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (FVar22.ReferenceController);
    uVar19 = local_258 & 0xffffffff;
    FVar23.Data = FVar23.Data + 0xc;
  }
  if (local_98.Pairs.Elements._8_4_ != local_98.Pairs.Elements._52_4_) {
    pcVar5 = *(code **)(local_200->_padding_ + 0x3a0);
    pFVar18 = FRigElementKeyRedirector::FRigElementKeyRedirector
                        (&local_168,
                         (TMap<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>,0>_>
                          *)&local_98,(local_200->DynamicHierarchy).field0_0x0.DebugPtr);
    (*pcVar5)(pUVar7,pFVar18);
    pFVar18 = (FRigElementKeyRedirector *)(**(code **)(pUVar7->_padding_ + 0x398))(pUVar7);
    ((pUVar7->DynamicHierarchy).field0_0x0.DebugPtr)->ElementKeyRedirector = pFVar18;
  }
  local_98.Pairs.HashSize = 0;
  if (local_98.Pairs.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_98.Pairs.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FRigElementKey,TArray<FRigElementKey,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&local_98);
  if ((FRigElementKey *)local_260.Data != (FRigElementKey *)0x0) {
    FMemory::Free(local_260.Data);
  }
  return;
}

// HasValidationErrors @ 14a26ff20

bool __thiscall UControlRigReplay::HasValidationErrors(UControlRigReplay *this)

{
  return (this->LastValidationWarningsAndErrors).ArrayNum != 0;
}

// IsPaused @ 14a275180

bool __thiscall UControlRigReplay::IsPaused(UControlRigReplay *this)

{
  return this->bReplayPaused;
}

// IsRecording @ 14a275190

bool __thiscall UControlRigReplay::IsRecording(UControlRigReplay *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->RecordControlRig).WeakPtr);
  return bVar1;
}

// IsReplaying @ 14a2751d0

bool __thiscall UControlRigReplay::IsReplaying(UControlRigReplay *this)

{
  bool bVar1;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->ReplayControlRig).WeakPtr);
  return bVar1;
}

// IsValidForTesting @ 14a2757e0

bool __thiscall UControlRigReplay::IsValidForTesting(UControlRigReplay *this)

{
  int iVar1;
  int iVar2;
  FSampleTrackContainer *pFVar3;
  
  pFVar3 = FSampleTrackHost::GetContainer((FSampleTrackHost *)&this->InputTracks);
  iVar1 = FSampleTrackContainer::GetNumTimes(pFVar3);
  if (iVar1 != 0) {
    pFVar3 = FSampleTrackHost::GetContainer((FSampleTrackHost *)&this->InputTracks);
    if ((pFVar3->Tracks).ArrayNum != 0) {
      pFVar3 = FSampleTrackHost::GetContainer((FSampleTrackHost *)&this->OutputTracks);
      iVar1 = FSampleTrackContainer::GetNumTimes(pFVar3);
      if (iVar1 != 0) {
        pFVar3 = FSampleTrackHost::GetContainer((FSampleTrackHost *)&this->OutputTracks);
        if ((pFVar3->Tracks).ArrayNum != 0) {
          iVar1 = FSampleTrackHost::GetNumTimes((FSampleTrackHost *)&this->OutputTracks);
          iVar2 = FSampleTrackHost::GetNumTimes((FSampleTrackHost *)&this->InputTracks);
          if ((iVar2 == iVar1) && ((this->ControlRigObjectPath).AssetPath.PackageName != (FName)0x0)
             ) {
            return true;
          }
        }
      }
    }
  }
  return false;
}

// PauseReplay @ 14a27ac40

bool __thiscall UControlRigReplay::PauseReplay(UControlRigReplay *this)

{
  char cVar1;
  
  cVar1 = (**(code **)(this->_padding_ + 0x2e0))();
  if (cVar1 != '\0') {
    this->bReplayPaused = true;
  }
  return false;
}

// PerformTest @ 14a27ac70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UControlRigReplay::PerformTest
          (UControlRigReplay *this,UControlRig *param_1,
          TFunction<void___cdecl(EMessageSeverity::Type,FString_const_&)> *param_2)

{
  code *pcVar1;
  FScriptContainerElement FVar2;
  char cVar3;
  int iVar4;
  FSampleTrackContainer *pFVar5;
  TFunction<void___cdecl(EMessageSeverity::Type,FName_const_&,FString_const_&)> *pTVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  longlong *plVar10;
  int iVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  undefined1 auStackY_178 [32];
  FScriptContainerElement local_138 [8];
  undefined1 local_130 [16];
  undefined4 local_120;
  undefined1 local_118 [40];
  FName local_f0;
  TObjectPtr<URigHierarchy>_u_0 local_e8;
  undefined1 local_e0 [8];
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_d8;
  undefined1 local_c8 [56];
  longlong *local_90;
  FSampleTrackIndex local_88;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_178;
  pFVar5 = FSampleTrackHost::GetContainer((FSampleTrackHost *)&this->InputTracks);
  iVar4 = FSampleTrackContainer::GetNumTimes(pFVar5);
  if ((iVar4 != 0) &&
     (pFVar5 = FSampleTrackHost::GetContainer((FSampleTrackHost *)&this->InputTracks),
     (pFVar5->Tracks).ArrayNum != 0)) {
    pFVar5 = FSampleTrackHost::GetContainer((FSampleTrackHost *)&this->OutputTracks);
    iVar4 = FSampleTrackContainer::GetNumTimes(pFVar5);
    if ((iVar4 != 0) &&
       (pFVar5 = FSampleTrackHost::GetContainer((FSampleTrackHost *)&this->OutputTracks),
       (pFVar5->Tracks).ArrayNum != 0)) {
      fVar12 = FSampleTrackHost::GetAbsoluteTime((FSampleTrackHost *)&this->OutputTracks,0);
      fVar13 = FSampleTrackHost::GetAbsoluteTime((FSampleTrackHost *)&this->InputTracks,0);
      fVar14 = __real_322bcc77;
      if ((float)((uint)(fVar13 - fVar12) & __xmm_7fffffff7fffffff7fffffff7fffffff) <=
          __real_322bcc77) {
        fVar12 = FSampleTrackHost::GetLastAbsoluteTime((FSampleTrackHost *)&this->OutputTracks);
        fVar13 = FSampleTrackHost::GetLastAbsoluteTime((FSampleTrackHost *)&this->InputTracks);
        fVar12 = (float)((uint)(fVar13 - fVar12) & __xmm_7fffffff7fffffff7fffffff7fffffff);
        if (fVar12 <= fVar14) {
          local_c8._0_8_ = local_138;
          local_c8._16_8_ = *(undefined8 *)param_2;
          local_138[0] = (FScriptContainerElement)0x1;
          local_90 = (longlong *)0x0;
          if (local_c8._16_8_ != 0) {
            puVar9 = (undefined8 *)&param_2->field_0x10;
            if (*(undefined8 **)&param_2->field_0x28 != (undefined8 *)0x0) {
              puVar9 = *(undefined8 **)&param_2->field_0x28;
            }
            (**(code **)*puVar9)(fVar12,local_c8 + 0x20);
          }
          local_e8 = (param_1->DynamicHierarchy).field0_0x0;
          (**(code **)(param_1->_padding_ + 0x318))(param_1);
          pTVar6 = TFunction<void___cdecl(enum_EMessageSeverity::Type,FName_const_&,FString_const_&)>
                   ::
                   TFunction<void___cdecl(enum_EMessageSeverity::Type,FName_const_&,FString_const_&)><_UControlRigReplay::PerformTest_::__l2::<lambda_1>_&>
                             (local_118,(<lambda_1> *)local_c8);
          FControlRigReplayTracks::RestoreVariables
                    (&this->InputTracks,0,(URigVMHost *)param_1,pTVar6);
          fVar14 = FSampleTrackHost::GetDeltaTime((FSampleTrackHost *)&this->InputTracks,0);
          fVar12 = FSampleTrackHost::GetAbsoluteTime((FSampleTrackHost *)&this->InputTracks,0);
          URigVMHost::SetAbsoluteAndDeltaTime((URigVMHost *)param_1,fVar12,fVar14);
          FLazyName::Resolve(&FRigUnit_BeginExecution::EventName);
          TArray<FName,TSizedDefaultAllocator<32>_>::CopyToEmpty<FName,int>
                    ((TArray<FName,TSizedDefaultAllocator<32>_> *)&param_1->_padding_,
                     (FName *)local_130,1,*(int *)((longlong)&param_1->_padding_ + 4));
          TMulticastDelegateRegistration<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
          ::AddUObject<UControlRigReplay>
                    ((TMulticastDelegateRegistration<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
                      *)&param_1->PreConstructionEvent,(UControlRigReplay *)local_130,
                     (pmf_14831c5a)this);
          (**(code **)(param_1->_padding_ + 0x2d0))(param_1);
          pFVar5 = FSampleTrackHost::GetContainer((FSampleTrackHost *)&this->OutputTracks);
          FSampleTrackIndex::FSampleTrackIndex(&local_88,(pFVar5->Tracks).ArrayNum);
          iVar11 = 0;
          iVar4 = FSampleTrackHost::GetNumTimes((FSampleTrackHost *)&this->InputTracks);
          if (0 < iVar4) {
            do {
              FControlRigReplayTracks::GetRigVMEvent(&this->InputTracks,(int)local_130);
              TArray<FName,TSizedDefaultAllocator<32>_>::CopyToEmpty<FName,int>
                        ((TArray<FName,TSizedDefaultAllocator<32>_> *)&param_1->_padding_,
                         (FName *)local_130,1,*(int *)((longlong)&param_1->_padding_ + 4));
              FControlRigReplayTracks::GetInteraction
                        (&this->InputTracks,
                         (TTuple<unsigned_char,TArray<FRigElementKey,TSizedDefaultAllocator<32>_>_>
                          *)local_e0,iVar11);
              param_1->InteractionType = local_e0[0];
              TArray<FRigElementKey,TSizedDefaultAllocator<32>_>::operator=
                        (&param_1->ElementsBeingInteracted,&local_d8);
              if (0 < iVar11) {
                local_118._0_8_ = (code *)0x0;
                local_f0.ComparisonIndex.Value = 0;
                local_f0.Number = 0;
                local_f0 = (FName)FMemory::Malloc(0x50,0x10);
                plVar10 = (longlong *)((longlong)local_f0 + 0x10);
                *(undefined ***)local_f0 =
                     &UE::Core::Private::Function::
                      TFunction_OwnedObject<`UControlRigReplay::PerformTest'::`2'::<lambda_1>,0,1>::
                      _vftable_;
                *plVar10 = local_c8._0_8_;
                *(undefined8 *)((longlong)local_f0 + 0x20) = local_c8._16_8_;
                *(undefined8 *)((longlong)local_f0 + 0x48) = 0;
                if (local_c8._16_8_ != 0) {
                  plVar8 = (longlong *)(local_c8 + 0x20);
                  if (local_90 != (longlong *)0x0) {
                    plVar8 = local_90;
                  }
                  (**(code **)*plVar8)();
                }
                if (plVar10 != (longlong *)0x0) {
                  local_118._0_8_ =
                       UE::Core::Private::Function::
                       TFunctionRefCaller<`UControlRigReplay::PerformTest'::__l2::<lambda_1>,void,enum_EMessageSeverity::Type,FName_const_&,FString_const_&>
                       ::Call;
                }
                FControlRigReplayTracks::RestoreVariables
                          (&this->InputTracks,iVar11,(URigVMHost *)param_1,
                           (TFunction<void___cdecl(EMessageSeverity::Type,FName_const_&,FString_const_&)>
                            *)local_118);
              }
              local_118._0_8_ = (code *)0x0;
              local_f0.ComparisonIndex.Value = 0;
              local_f0.Number = 0;
              local_f0 = (FName)FMemory::Malloc(0x50,0x10);
              plVar10 = (longlong *)((longlong)local_f0 + 0x10);
              *(undefined ***)local_f0 =
                   &UE::Core::Private::Function::
                    TFunction_OwnedObject<`UControlRigReplay::PerformTest'::`2'::<lambda_1>,0,1>::
                    _vftable_;
              *plVar10 = local_c8._0_8_;
              *(undefined8 *)((longlong)local_f0 + 0x20) = local_c8._16_8_;
              *(undefined8 *)((longlong)local_f0 + 0x48) = 0;
              if (local_c8._16_8_ != 0) {
                plVar8 = (longlong *)(local_c8 + 0x20);
                if (local_90 != (longlong *)0x0) {
                  plVar8 = local_90;
                }
                (**(code **)*plVar8)();
              }
              if (plVar10 != (longlong *)0x0) {
                local_118._0_8_ =
                     UE::Core::Private::Function::
                     TFunctionRefCaller<`UControlRigReplay::PerformTest'::__l2::<lambda_1>,void,enum_EMessageSeverity::Type,FName_const_&,FString_const_&>
                     ::Call;
              }
              local_130._8_8_ = (void *)0x0;
              local_120 = 0;
              FControlRigReplayTracks::RestoreHierarchy
                        (&this->InputTracks,iVar11,local_e8.DebugPtr,
                         (TArrayView<FRigElementKey,int> *)(local_130 + 8),
                         (TFunction<void___cdecl(EMessageSeverity::Type,FName_const_&,FString_const_&)>
                          *)local_118,true,true,true);
              fVar14 = FSampleTrackHost::GetDeltaTime((FSampleTrackHost *)&this->InputTracks,iVar11)
              ;
              fVar12 = FSampleTrackHost::GetAbsoluteTime
                                 ((FSampleTrackHost *)&this->InputTracks,iVar11);
              URigVMHost::SetAbsoluteAndDeltaTime((URigVMHost *)param_1,fVar12,fVar14);
              (**(code **)(param_1->_padding_ + 0x2d0))(param_1);
              local_f0.ComparisonIndex.Value = 0;
              local_f0.Number = 0;
              pcVar1 = *(code **)(this->_padding_ + 0x318);
              local_118._0_8_ = *(undefined8 *)param_2;
              if (local_118._0_8_ != 0) {
                puVar9 = *(undefined8 **)&param_2->field_0x28;
                if (*(undefined8 **)&param_2->field_0x28 == (undefined8 *)0x0) {
                  puVar9 = (undefined8 *)&param_2->field_0x10;
                }
                (**(code **)*puVar9)(puVar9,local_118 + 0x10);
              }
              cVar3 = (*pcVar1)(this,iVar11,&local_88,param_1);
              if (cVar3 == '\0') {
                local_138[0] = (FScriptContainerElement)0x0;
              }
              if ((FName)local_d8.AllocatorInstance.Data != (FName)0x0) {
                FMemory::Free(local_d8.AllocatorInstance.Data);
              }
              iVar11 = iVar11 + 1;
              iVar4 = FSampleTrackHost::GetNumTimes((FSampleTrackHost *)&this->InputTracks);
            } while (iVar11 < iVar4);
          }
          FVar2 = local_138[0];
          if (local_88.Samples.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
            FMemory::Free((void *)local_88.Samples.AllocatorInstance.SecondaryData);
          }
          if (local_c8._16_8_ != 0) {
            plVar10 = (longlong *)(local_c8 + 0x20);
            if (local_90 != (longlong *)0x0) {
              plVar10 = local_90;
            }
            (**(code **)(*plVar10 + 0x10))();
          }
          if (*(longlong *)param_2 == 0) {
            return (bool)FVar2;
          }
          plVar10 = (longlong *)&param_2->field_0x10;
          if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
            plVar10 = *(longlong **)&param_2->field_0x28;
          }
          (**(code **)(*plVar10 + 0x10))();
          return (bool)FVar2;
        }
      }
      if (*(longlong *)param_2 != 0) {
        ::FString::FString((FString *)(local_130 + 8),
                           L"Test Replay is corrupt. Input and Output time ranges don\'t match.");
        local_130._0_4_ = 1;
        UE::Core::Private::Function::CheckCallable(*(void **)param_2);
        pcVar1 = *(code **)param_2;
        plVar10 = (longlong *)&param_2->field_0x10;
        if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
          plVar10 = *(longlong **)&param_2->field_0x28;
        }
        uVar7 = (**(code **)(*plVar10 + 8))();
        (*pcVar1)(uVar7,local_130,local_130 + 8);
        if ((void *)local_130._8_8_ != (void *)0x0) {
          FMemory::Free((void *)local_130._8_8_);
        }
        if (*(longlong *)param_2 != 0) {
          plVar10 = (longlong *)&param_2->field_0x10;
          if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
            plVar10 = *(longlong **)&param_2->field_0x28;
          }
          (**(code **)(*plVar10 + 0x10))(plVar10);
        }
      }
      return false;
    }
  }
  if (*(longlong *)param_2 != 0) {
    plVar10 = (longlong *)&param_2->field_0x10;
    if (*(longlong **)&param_2->field_0x28 != (longlong *)0x0) {
      plVar10 = *(longlong **)&param_2->field_0x28;
    }
    (**(code **)(*plVar10 + 0x10))();
  }
  return true;
}

// Serialize @ 14a28ecf0

void __thiscall UControlRigReplay::Serialize(UControlRigReplay *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FControlRigObjectVersion::GUID);
  UObject::Serialize((UObject *)this,param_1);
  return;
}

// Serialize @ 14a28ed30

void __thiscall
UControlRigReplay::Serialize(UControlRigReplay *this,FStructuredArchiveRecord param_1)

{
  FArchive *pFVar1;
  FSlotBase local_res10 [3];
  
  local_res10[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar1 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res10);
  (**(code **)(*(longlong *)pFVar1 + 0x230))(pFVar1,&FControlRigObjectVersion::GUID);
  UObject::Serialize((UObject *)this,pFVar1);
  return;
}

// SetPlaybackMode @ 14a295170

void __thiscall
UControlRigReplay::SetPlaybackMode(UControlRigReplay *this,EControlRigReplayPlaybackMode param_1)

{
  EControlRigReplayPlaybackMode EVar1;
  
  EVar1 = ReplayInputs;
  if (param_1 < Max) {
    EVar1 = param_1;
  }
  if (this->PlaybackMode != EVar1) {
    if (EVar1 == Live) {
                    /* WARNING: Could not recover jumptable at 0x00014a295191. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(this->_padding_ + 0x2d0))();
      return;
    }
    this->PlaybackMode = EVar1;
  }
  return;
}

// StartRecording @ 14a297680

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall UControlRigReplay::StartRecording(UControlRigReplay *this,UControlRig *param_1)

{
  undefined1 auVar1 [16];
  double dVar2;
  FDelegateHandle FVar3;
  FSampleTrackContainer *pFVar4;
  LARGE_INTEGER local_res10;
  <lambda_1> local_res18;
  
  if (param_1 != (UControlRig *)0x0) {
    (**(code **)(this->_padding_ + 0x2c0))();
    (**(code **)(this->_padding_ + 0x2d0))(this);
    (**(code **)((this->InputTracks)._padding_ + 8))(&this->InputTracks);
    (**(code **)((this->OutputTracks)._padding_ + 8))();
    local_res10 = (LARGE_INTEGER)param_1;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    FWeakObjectPtr::operator=(&(this->RecordControlRig).WeakPtr,(FObjectPtr)&local_res10);
    FVar3.ID = (this->PreConstructionHandle).ID;
    if (FVar3.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &param_1->PreConstructionEvent,FVar3);
      (this->PreConstructionHandle).ID = 0;
    }
    FVar3.ID = (this->PreEventHandle).ID;
    if (FVar3.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&param_1->_padding_,FVar3);
      (this->PreEventHandle).ID = 0;
    }
    FVar3.ID = (this->PostEventHandle).ID;
    if (FVar3.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&param_1->_padding_,FVar3);
      (this->PostEventHandle).ID = 0;
    }
    QueryPerformanceCounter(&local_res10);
    dVar2 = (double)local_res10.QuadPart * FGenericPlatformTime::SecondsPerCycle;
    this->bStoreVariablesDuringPreEvent = true;
    dVar2 = dVar2 + __real_4170000000000000;
    auVar1._8_4_ = SUB84(dVar2,0);
    auVar1._0_8_ = dVar2;
    auVar1._12_4_ = (int)((ulonglong)dVar2 >> 0x20);
    this->TimeAtStartOfRecording = dVar2;
    this->TimeOfLastFrame = (double)auVar1._8_8_;
    URigVMHost::SetAbsoluteAndDeltaTime((URigVMHost *)param_1,0.0,*(float *)&param_1->_padding_);
    local_res10 = (LARGE_INTEGER)this;
    FVar3 = TMulticastDelegateRegistration<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
            ::AddLambda<_UControlRigReplay::StartRecording_::__l2::<lambda_1>_>
                      ((TMulticastDelegateRegistration<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
                        *)&param_1->PreConstructionEvent,&local_res18);
                    /* WARNING: Load size is inaccurate */
    (this->PreConstructionHandle).ID = *FVar3.ID;
    local_res10 = (LARGE_INTEGER)this;
    FVar3 = TMulticastDelegateRegistration<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
            ::AddLambda<_UControlRigReplay::StartRecording_::__l2::<lambda_2>_>
                      ((TMulticastDelegateRegistration<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
                        *)&param_1->_padding_,(<lambda_2> *)&local_res18);
                    /* WARNING: Load size is inaccurate */
    (this->PreEventHandle).ID = *FVar3.ID;
    local_res10 = (LARGE_INTEGER)this;
    FVar3 = TMulticastDelegateRegistration<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
            ::AddLambda<_UControlRigReplay::StartRecording_::__l2::<lambda_3>_>
                      ((TMulticastDelegateRegistration<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
                        *)&param_1->_padding_,(<lambda_3> *)&local_res18);
                    /* WARNING: Load size is inaccurate */
    (this->PostEventHandle).ID = *FVar3.ID;
    pFVar4 = FSampleTrackHost::GetContainer((FSampleTrackHost *)&this->InputTracks);
    if ((pFVar4->Tracks).ArrayNum == 0) {
      (**(code **)(param_1->_padding_ + 0x318))(param_1);
    }
    return true;
  }
  return false;
}

// StartReplay @ 14a297a50

/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UControlRigReplay::StartReplay
          (UControlRigReplay *this,UControlRig *param_1,EControlRigReplayPlaybackMode param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  UControlRig *pUVar5;
  FDelegateHandle FVar6;
  EControlRigReplayPlaybackMode EVar7;
  UControlRig *local_res8;
  <lambda_1> local_res20;
  
  cVar1 = (**(code **)(this->_padding_ + 0x2e0))();
  if ((cVar1 != '\0') &&
     (pUVar5 = (UControlRig *)FWeakObjectPtr::Get(&(this->ReplayControlRig).WeakPtr),
     pUVar5 == param_1)) {
    cVar1 = (**(code **)(this->_padding_ + 0x2e0))(this);
    if (cVar1 == '\0') {
      EVar7 = Live;
    }
    else {
      EVar7 = this->PlaybackMode;
    }
    if (param_2 != EVar7) {
      EVar7 = ReplayInputs;
      if (param_2 < Max) {
        EVar7 = param_2;
      }
      if (this->PlaybackMode == EVar7) {
        return true;
      }
      if (EVar7 != Live) {
        this->PlaybackMode = EVar7;
        return true;
      }
      goto LAB_14a297b0b;
    }
    if (this->bReplayPaused != false) {
      this->bReplayPaused = false;
      return true;
    }
  }
  (**(code **)(this->_padding_ + 0x2c0))(this);
  (**(code **)(this->_padding_ + 0x2d0))(this);
  if (param_2 != Live) {
    if (param_1 != (UControlRig *)0x0) {
      iVar3 = FSampleTrackHost::GetNumTimes((FSampleTrackHost *)&this->InputTracks);
      iVar4 = FSampleTrackHost::GetNumTimes((FSampleTrackHost *)&this->OutputTracks);
      if (iVar3 == iVar4) {
        this->bStoreVariablesDuringPreEvent = true;
        bVar2 = FControlRigReplayTracks::IsEmpty(&this->InputTracks);
        if ((!bVar2) && (bVar2 = FControlRigReplayTracks::IsEmpty(&this->OutputTracks), !bVar2)) {
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this);
          }
          (param_1->Replay).field0_0x0.DebugPtr = this;
          local_res8 = (UControlRig *)this;
          FVar6 = TMulticastDelegateRegistration<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
                  ::AddLambda<_UControlRigReplay::StartReplay_::__l2::<lambda_1>_>
                            ((TMulticastDelegateRegistration<void___cdecl(UControlRig_*,FName_const_&),FDefaultDelegateUserPolicy>
                              *)&param_1->PreConstructionEvent,&local_res20);
                    /* WARNING: Load size is inaccurate */
          (this->PreConstructionHandle).ID = *FVar6.ID;
          local_res8 = (UControlRig *)this;
          FVar6 = TMulticastDelegateRegistration<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
                  ::AddLambda<_UControlRigReplay::StartReplay_::__l2::<lambda_2>_>
                            ((TMulticastDelegateRegistration<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
                              *)&param_1->_padding_,(<lambda_2> *)&local_res20);
                    /* WARNING: Load size is inaccurate */
          (this->PreEventHandle).ID = *FVar6.ID;
          local_res8 = (UControlRig *)this;
          FVar6 = TMulticastDelegateRegistration<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
                  ::AddLambda<_UControlRigReplay::StartReplay_::__l2::<lambda_3>_>
                            ((TMulticastDelegateRegistration<void___cdecl(URigVMHost_*,FName_const_&),FDefaultDelegateUserPolicy>
                              *)&param_1->_padding_,(<lambda_3> *)&local_res20);
                    /* WARNING: Load size is inaccurate */
          (this->PostEventHandle).ID = *FVar6.ID;
          (**(code **)(param_1->_padding_ + 0x318))(param_1);
          local_res8 = param_1;
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)param_1);
          }
          FWeakObjectPtr::operator=(&(this->ReplayControlRig).WeakPtr,(FObjectPtr)&local_res8);
          SetPlaybackMode(this,param_2);
          return true;
        }
      }
    }
    return false;
  }
  if (this->PlaybackMode == Live) {
    return true;
  }
LAB_14a297b0b:
  (**(code **)(this->_padding_ + 0x2d0))(this);
  return true;
}

// StaticRegisterNativesUControlRigReplay @ 14a298020

void __cdecl UControlRigReplay::StaticRegisterNativesUControlRigReplay(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xc;
  local_18.DataPtr = Z_Construct_UClass_UControlRigReplay_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// StopRecording @ 14a2981a0

bool __thiscall UControlRigReplay::StopRecording(UControlRigReplay *this)

{
  FDelegateHandle FVar1;
  UObject *pUVar2;
  
  pUVar2 = FWeakObjectPtr::Get(&(this->RecordControlRig).WeakPtr);
  if (pUVar2 != (UObject *)0x0) {
    FVar1.ID = (this->PreConstructionHandle).ID;
    if (FVar1.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[0x28].field_0x20,
                 FVar1);
      (this->PreConstructionHandle).ID = 0;
    }
    FVar1.ID = (this->PreEventHandle).ID;
    if (FVar1.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[0xc].field_0x18,FVar1
                );
      (this->PreEventHandle).ID = 0;
    }
    FVar1.ID = (this->PostEventHandle).ID;
    if (FVar1.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[0xb].field_0x20,FVar1
                );
      (this->PostEventHandle).ID = 0;
    }
    (this->RecordControlRig).WeakPtr = (FWeakObjectPtr)0x0;
    (**(code **)((this->InputTracks)._padding_ + 0x10))(&this->InputTracks);
    (**(code **)((this->OutputTracks)._padding_ + 0x10))();
    this->TimeAtStartOfRecording = -1.0;
    this->DesiredRecordingDuration = -1.0;
    return true;
  }
  return false;
}

// StopReplay @ 14a298370

bool __thiscall UControlRigReplay::StopReplay(UControlRigReplay *this)

{
  FDelegateHandle FVar1;
  UObject *pUVar2;
  
  pUVar2 = FWeakObjectPtr::Get(&(this->ReplayControlRig).WeakPtr);
  if (pUVar2 != (UObject *)0x0) {
    FVar1.ID = (this->PreConstructionHandle).ID;
    if (FVar1.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[0x28].field_0x20,
                 FVar1);
      (this->PreConstructionHandle).ID = 0;
    }
    FVar1.ID = (this->PreEventHandle).ID;
    if (FVar1.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[0xc].field_0x18,FVar1
                );
      (this->PreEventHandle).ID = 0;
    }
    FVar1.ID = (this->PostEventHandle).ID;
    if (FVar1.ID != 0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveDelegateInstance
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[0xb].field_0x20,FVar1
                );
      (this->PostEventHandle).ID = 0;
    }
    *(undefined8 *)&pUVar2[0x4e].field_0x18 = 0;
    pUVar2[0x38].field_0x8 = 0;
    *(undefined4 *)&pUVar2[0x38].field_0x18 = 0;
    if (*(int *)&pUVar2[0x38].field_0x1c < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0xc,4,0,(ForAnyElementType *)&pUVar2[0x38].field_0x10,0,
                 (int *)&pUVar2[0x38].field_0x1c);
    }
    (this->ReplayControlRig).WeakPtr = (FWeakObjectPtr)0x0;
    this->bReplayPaused = false;
    this->PlaybackMode = Live;
    return true;
  }
  return false;
}

// ValidateExpectedResults @ 14a2a6b00

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "ERigElementType": Some values do not have unique names */

bool __thiscall
UControlRigReplay::ValidateExpectedResults
          (UControlRigReplay *this,int param_1,FSampleTrackIndex *param_2,UControlRig *param_3,
          TFunction<void___cdecl(EMessageSeverity::Type,FString_const_&)> *param_4)

{
  int *piVar1;
  double *pdVar2;
  longlong lVar3;
  code *pcVar4;
  double dVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  double dVar8;
  double dVar9;
  double dVar10;
  undefined1 auVar11 [12];
  undefined1 auVar12 [12];
  FProperty *this_00;
  uint uVar13;
  uint uVar14;
  TFunction<void___cdecl(EMessageSeverity::Type,FString_const_&)> *pTVar15;
  UControlRigReplay *pUVar16;
  bool bVar17;
  undefined1 uVar18;
  ETrackType EVar19;
  ERigMetadataType EVar20;
  ETrackType EVar21;
  char cVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  uint uVar26;
  undefined4 extraout_EAX;
  FSampleTrackContainer *pFVar27;
  FRigElementKey *pFVar28;
  FRigBaseElement *pFVar29;
  FName *pFVar30;
  longlong lVar31;
  UScriptStruct *pUVar32;
  FRigCurveElement *pFVar33;
  float *pfVar34;
  FRigBaseMetadata *pFVar35;
  undefined8 *puVar36;
  TRotator<double> *this_01;
  undefined8 uVar37;
  void *pvVar38;
  ForAnyElementType FVar39;
  longlong *plVar40;
  ulonglong uVar41;
  ForAnyElementType FVar42;
  longlong *plVar43;
  ForAnyElementType FVar44;
  ulonglong uVar45;
  uint uVar46;
  FRigElementKey *pFVar47;
  TArray<FString,TSizedDefaultAllocator<32>_> *pTVar48;
  FScriptContainerElement *pFVar49;
  uint uVar50;
  FControlRigReplayTracks *this_02;
  uint uVar51;
  uint uVar52;
  FName *this_03;
  URigHierarchy *pUVar53;
  bool bVar54;
  longlong lVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  double dVar59;
  float fVar67;
  undefined1 auVar61 [16];
  undefined1 auVar62 [16];
  undefined1 auVar63 [16];
  undefined1 auVar64 [16];
  double dVar60;
  undefined1 auVar65 [16];
  undefined1 auVar66 [16];
  float fVar68;
  float fVar69;
  float fVar70;
  uint uVar71;
  uint uVar72;
  float fVar73;
  float fVar74;
  uint uVar75;
  uint uVar76;
  float fVar77;
  float fVar78;
  undefined4 uVar79;
  undefined4 uVar80;
  undefined4 uVar81;
  undefined4 uVar82;
  undefined1 auStackY_14a8 [32];
  bool local_1458;
  undefined1 local_1430;
  undefined1 local_142f;
  undefined1 local_142e;
  undefined1 local_142d;
  undefined1 local_142c;
  char local_142b;
  undefined1 local_142a [2];
  FRigElementKey *local_1428;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_1420;
  TSharedPtr<FSampleTrackBase_const_,1> local_1408;
  TArray<FRigElementKey,TSizedDefaultAllocator<32>_> local_13f8;
  uint local_13e8;
  FName *local_13e0;
  ForAnyElementType local_13d8;
  undefined8 local_13d0;
  FName local_13c8;
  URigHierarchy *local_13c0;
  TFieldIterator<FProperty> local_13b8;
  float local_13a0;
  FControlRigReplayTracks *local_1398;
  void *local_1390;
  uint local_1388;
  ForAnyElementType local_1380;
  undefined8 local_1378;
  TSharedPtr<FSampleTrackBase_const_,1> local_1370;
  TFunction<void___cdecl(EMessageSeverity::Type,FString_const_&)> *local_1360;
  FRigElementKey *local_1358;
  FString local_1350;
  FString local_1340;
  undefined4 local_1330 [2];
  undefined4 local_1328 [2];
  undefined4 local_1320 [2];
  undefined4 local_1318 [2];
  undefined4 local_1310 [2];
  undefined4 local_1308 [2];
  float local_1300;
  undefined4 local_12f8 [2];
  int local_12f0;
  undefined4 local_12e8 [2];
  undefined4 local_12e0 [2];
  undefined4 local_12d8 [2];
  undefined4 local_12d0 [2];
  undefined4 local_12c8 [2];
  undefined4 local_12c0 [2];
  undefined4 local_12b8 [2];
  undefined4 local_12b0 [2];
  undefined4 local_12a8 [2];
  FName *local_12a0;
  undefined4 local_1298 [2];
  undefined4 local_1290 [2];
  undefined4 local_1288 [2];
  undefined4 local_1280 [2];
  undefined4 local_1278 [2];
  undefined4 local_1270 [2];
  uint local_1268;
  void *local_1260;
  uint local_1258;
  void *local_1250;
  uint local_1248;
  void *local_1240;
  uint local_1238;
  void *local_1230;
  uint local_1228;
  void *local_1220;
  uint local_1218;
  void *local_1210;
  uint local_1208;
  void *local_1200;
  uint local_11f8;
  void *local_11f0;
  uint local_11e8;
  FString local_11e0;
  FString local_11d0;
  UControlRig *local_11c0;
  FSampleTrackBase *local_11b8;
  TReferenceControllerBase<1> *pTStack_11b0;
  TArray<FName,TSizedDefaultAllocator<32>_> local_11a8;
  float local_1198;
  float local_1194;
  float local_1190;
  float local_1188;
  float fStack_1184;
  float local_1180;
  undefined8 local_117c;
  float local_1174;
  float local_1170;
  float fStack_116c;
  float local_1168;
  float local_1164;
  float fStack_1160;
  float local_115c;
  float local_1158;
  float fStack_1154;
  float local_1150;
  undefined8 local_114c;
  float local_1144;
  float local_1140;
  float fStack_113c;
  float local_1138;
  undefined8 local_1134;
  float local_112c;
  FString local_1128;
  FString local_1118;
  FString local_1108;
  FName *local_10f8;
  int local_10f0;
  FSampleTrackBase *local_10e8;
  TReferenceControllerBase<1> *pTStack_10e0;
  FSampleTrackBase *local_10d8;
  TReferenceControllerBase<1> *pTStack_10d0;
  float local_10c8;
  float fStack_10c4;
  float fStack_10c0;
  float fStack_10bc;
  FSampleTrackBase *local_10b8;
  TReferenceControllerBase<1> *pTStack_10b0;
  FSampleTrackBase *local_10a8;
  TReferenceControllerBase<1> *pTStack_10a0;
  float local_1098;
  float local_1094;
  float local_1090;
  float local_108c;
  FSampleTrackBase *local_1088;
  TReferenceControllerBase<1> *pTStack_1080;
  FSampleTrackBase *local_1078;
  TReferenceControllerBase<1> *pTStack_1070;
  FSampleTrackBase *local_1068;
  TReferenceControllerBase<1> *pTStack_1060;
  FSampleTrackBase *local_1058;
  TReferenceControllerBase<1> *pTStack_1050;
  FSampleTrackBase *local_1048;
  TReferenceControllerBase<1> *pTStack_1040;
  FSampleTrackBase *local_1038;
  TReferenceControllerBase<1> *pTStack_1030;
  FSampleTrackBase *local_1028;
  TReferenceControllerBase<1> *pTStack_1020;
  FSampleTrackBase *local_1018;
  TReferenceControllerBase<1> *pTStack_1010;
  FSampleTrackBase *local_1008;
  TReferenceControllerBase<1> *pTStack_1000;
  FSampleTrackBase *local_ff8;
  TReferenceControllerBase<1> *pTStack_ff0;
  FSampleTrackBase *local_fe8;
  TReferenceControllerBase<1> *pTStack_fe0;
  FSampleTrackBase *local_fd8;
  TReferenceControllerBase<1> *pTStack_fd0;
  FSampleTrackBase *local_fc8;
  TReferenceControllerBase<1> *pTStack_fc0;
  FSampleTrackBase *local_fb8;
  TReferenceControllerBase<1> *pTStack_fb0;
  FSampleTrackBase *local_fa8;
  TReferenceControllerBase<1> *pTStack_fa0;
  void *local_f98;
  uint local_f90;
  FSampleTrackBase *local_f88;
  TReferenceControllerBase<1> *pTStack_f80;
  float local_f78;
  float fStack_f74;
  float fStack_f70;
  float fStack_f6c;
  undefined4 local_f68;
  FName local_f64;
  longlong local_f58;
  FName local_f50;
  FRigElementKey local_f48;
  float local_f38;
  float local_f34;
  float local_f30;
  float local_f28;
  float local_f24;
  float local_f20;
  char local_f18 [4];
  longlong local_f14;
  FString local_f08;
  FString local_ef8;
  FString local_ee8;
  FString local_ed8;
  FSampleTrackBase *local_ec8;
  TReferenceControllerBase<1> *pTStack_ec0;
  void *local_eb8;
  int local_eb0;
  FSampleTrackBase *local_ea8;
  TReferenceControllerBase<1> *pTStack_ea0;
  FString local_e98;
  FString local_e88;
  FString local_e78;
  FString local_e68;
  FString local_e58;
  FString local_e48;
  FSampleTrackBase *local_e38;
  TReferenceControllerBase<1> *pTStack_e30;
  FString local_e28;
  FString local_e18;
  FString local_e08;
  FString local_df8;
  FString local_de8;
  FString local_dd8;
  FString local_dc8;
  FString local_db8;
  FString local_da8;
  FString local_d98;
  FString local_d88;
  FString local_d78;
  FString local_d68;
  FString local_d58;
  FString local_d48;
  FString local_d38;
  FString local_d28;
  FString local_d18;
  FString local_d08;
  FString local_cf8;
  FString local_ce8;
  FString local_cd8;
  FString local_cc8;
  FString local_cb8;
  FString local_ca8;
  FString local_c98;
  FString local_c88;
  FString local_c78;
  FString local_c68;
  FString local_c58;
  FString local_c48;
  FString local_c38;
  FString local_c28;
  FString local_c18;
  FString local_c08;
  FString local_bf8;
  TSharedPtr<FSampleTrackBase_const_,1> local_be8;
  FString local_bd8;
  FString local_bc8;
  FString local_bb8;
  TSharedPtr<FSampleTrackBase_const_,1> local_ba8;
  FString local_b98;
  FString local_b88;
  FString local_b78;
  TSharedPtr<FSampleTrackBase_const_,1> local_b68;
  FString local_b58;
  TSharedPtr<FSampleTrackBase_const_,1> local_b48;
  FString local_b38;
  FString local_b28;
  FString local_b18;
  FString local_b08;
  FString local_af8;
  FString local_ae8;
  FString local_ad8;
  FString local_ac8;
  FString local_ab8;
  FString local_aa8;
  FString local_a98;
  FString local_a88;
  FString local_a78;
  FString local_a68;
  FString local_a58;
  FString local_a48;
  FString local_a38;
  FString local_a28;
  FString local_a18;
  FString local_a08;
  FString local_9f8;
  FString local_9e8;
  FString local_9d8;
  FString local_9c8;
  FString local_9b8;
  FString local_9a8;
  FString local_998;
  FString local_988;
  FString local_978;
  FString local_968;
  FString local_958;
  FString local_948;
  FString local_938;
  FString local_928;
  FString local_918;
  FString local_908;
  TRotator<float> local_8f8;
  TRotator<float> local_8ec;
  TRotator<float> local_8e0;
  TRotator<double> local_8d0;
  TRotator<float> local_8b8;
  TRotator<double> local_8a8;
  TVector<double>_u_0 local_890;
  FString local_878;
  FString local_868;
  FString local_858;
  FString local_848;
  FString local_838;
  FString local_828;
  FString local_818;
  FString local_808;
  FString local_7f8;
  FString local_7e8;
  FString local_7d8;
  FString local_7c8;
  FString local_7b8;
  FString local_7a8;
  FString local_798;
  FString local_788;
  FString local_778;
  FString local_768;
  FString local_758;
  FString local_748;
  FString local_738;
  FString local_728;
  FString local_718;
  FString local_708;
  FString local_6f8;
  FString local_6e8;
  FString local_6d8;
  FString local_6c8;
  FString local_6b8;
  float local_6a8;
  float fStack_6a4;
  float fStack_6a0;
  float fStack_69c;
  FString local_698;
  FString local_688;
  FString local_678;
  FString local_668;
  TQuat<float> local_658;
  TQuat<float> local_648;
  FString local_638;
  FString local_628;
  FString local_618;
  FString local_608;
  TQuat<float> local_5f8;
  TQuat<float> local_5e8;
  FString local_5d8;
  FString local_5c8;
  FString local_5b8;
  FString local_5a8;
  FString local_598;
  FString local_588;
  FString local_578;
  FString local_568;
  FString local_558;
  FString local_548;
  FString local_538;
  FString local_528;
  FString local_518;
  undefined1 local_508 [16];
  double local_4f8;
  double local_4f0;
  double dStack_4e8;
  double local_4e0;
  undefined1 local_4d8 [16];
  double local_4c8;
  double local_4c0;
  double dStack_4b8;
  double local_4b0;
  TVector<double>_u_0 local_4a8;
  code *local_488 [5];
  undefined8 *local_460;
  float local_458;
  float fStack_454;
  float fStack_450;
  float fStack_44c;
  float local_448;
  float fStack_444;
  float fStack_440;
  float fStack_43c;
  float local_438;
  float fStack_434;
  float fStack_430;
  float fStack_42c;
  undefined1 local_428 [16];
  undefined1 local_418 [16];
  TQuat<double> local_408;
  undefined1 local_3e8 [16];
  undefined1 local_3d8 [16];
  TQuat<double> local_3c8;
  FRigElementKey local_3a8;
  undefined1 local_39c [12];
  undefined1 local_390 [16];
  double local_380;
  double local_378;
  double dStack_370;
  double local_368;
  TRotator<double> local_360;
  TRotator<double> local_348;
  undefined1 local_330 [16];
  double local_320;
  double local_318;
  double dStack_310;
  double local_308;
  TRotator<double> local_300;
  double local_2e8;
  FName FStack_2e0;
  double local_2d8;
  FProperty *pFStack_2d0;
  double local_2c8;
  FName FStack_2c0;
  double local_2b8;
  FProperty *pFStack_2b0;
  double local_2a8;
  FName FStack_2a0;
  double local_298;
  FProperty *pFStack_290;
  double local_288;
  double dStack_280;
  double local_278;
  double dStack_270;
  double local_268;
  double dStack_260;
  double local_258;
  double dStack_250;
  double local_248;
  double dStack_240;
  double local_238;
  double dStack_230;
  TRotator<double> local_228;
  code *local_208 [2];
  longlong local_1f8 [3];
  longlong *local_1e0;
  code *local_1d8 [2];
  longlong local_1c8 [3];
  longlong *local_1b0;
  UControlRigReplay *local_1a8;
  TTransform<double> local_198;
  TQuat<float> local_138;
  float local_128;
  float fStack_124;
  float fStack_120;
  float local_118;
  float fStack_114;
  float fStack_110;
  undefined1 local_108 [48];
  ulonglong local_d8;
  undefined8 uStack_48;
  
  uStack_48 = 0x14a2a6b1f;
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_14a8;
  pUVar53 = (param_3->DynamicHierarchy).field0_0x0.DebugPtr;
  this_02 = &this->OutputTracks;
  local_1360 = param_4;
  local_13c0 = pUVar53;
  local_1398 = this_02;
  local_11c0 = param_3;
  FControlRigReplayTracks::GetElementKeys(this_02,&local_1420);
  TArray<FString,TSizedDefaultAllocator<32>_>::Reset(&this->LastValidationWarningsAndErrors,0);
  TFunction<void___cdecl(enum_EMessageSeverity::Type,FString_const_&)>::
  TFunction<void___cdecl(enum_EMessageSeverity::Type,FString_const_&)>(local_1d8,param_4);
  local_1a8 = this;
  bVar54 = true;
  if ((this->bValidateHierarchyTopology != false) && (param_1 == 0)) {
    URigHierarchy::GetAllKeys(pUVar53,&local_13f8,false,All);
    FControlRigReplayTracks::FilterElementKeys(&local_13f8);
    if (local_1420.ArrayNum != local_13f8.ArrayNum) {
      ::FString::PrintfImpl
                (&local_bd8,
                 L"Number of elements in hierarchy (%d) and number of elements in replay (%d) don\'t match."
                );
      `UControlRigReplay::ValidateExpectedResults'::__l2::<lambda_1>::operator()
                (local_1d8,Error,&local_bd8);
      if (local_bd8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_bd8.Data.AllocatorInstance.Data);
      }
      bVar54 = false;
    }
    iVar23 = local_1420.ArrayNum;
    pFVar47 = (FRigElementKey *)
              (local_1420.AllocatorInstance.Data + (longlong)local_1420.ArrayNum * 0xc);
    FVar39.Data = local_1420.AllocatorInstance.Data;
    while( true ) {
      if (local_1420.ArrayNum != iVar23) {
        local_1430 = 0;
        `TCheckedPointerIterator<FRigElementKey_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_1430);
      }
      iVar25 = local_13f8.ArrayNum;
      if ((FRigElementKey *)FVar39.Data == pFVar47) break;
      if ((FRigElementKey *)local_13f8.AllocatorInstance.Data !=
          (FRigElementKey *)
          (local_13f8.AllocatorInstance.Data + (longlong)local_13f8.ArrayNum * 0xc)) {
        FVar44.Data = local_13f8.AllocatorInstance.Data;
        do {
          if ((((FRigElementKey *)FVar44.Data)->Name == ((FRigElementKey *)FVar39.Data)->Name) &&
             (((FRigElementKey *)FVar44.Data)->Type == ((FRigElementKey *)FVar39.Data)->Type))
          goto LAB_14a2a6cfd;
          FVar44.Data = FVar44.Data + 0xc;
        } while ((FRigElementKey *)FVar44.Data !=
                 (FRigElementKey *)
                 (local_13f8.AllocatorInstance.Data + (longlong)local_13f8.ArrayNum * 0xc));
      }
      FRigElementKey::ToString((FRigElementKey *)FVar39.Data,&local_528);
      ::FString::PrintfImpl(&local_bc8,L"Hierarchy is missing element %s expected by the replay.");
      `UControlRigReplay::ValidateExpectedResults'::__l2::<lambda_1>::operator()
                (local_1d8,Error,&local_bc8);
      if (local_bc8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_bc8.Data.AllocatorInstance.Data);
      }
      if (local_528.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_528.Data.AllocatorInstance.Data);
      }
      bVar54 = false;
LAB_14a2a6cfd:
      FVar39.Data = FVar39.Data + 0xc;
    }
    pFVar47 = (FRigElementKey *)
              (local_13f8.AllocatorInstance.Data + (longlong)local_13f8.ArrayNum * 0xc);
    FVar39.Data = local_13f8.AllocatorInstance.Data;
    while( true ) {
      if (local_13f8.ArrayNum != iVar25) {
        local_142f = 0;
        `TCheckedPointerIterator<FRigElementKey,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (&local_142f);
      }
      if ((FRigElementKey *)FVar39.Data == pFVar47) break;
      if ((FRigElementKey *)local_1420.AllocatorInstance.Data !=
          (FRigElementKey *)
          (local_1420.AllocatorInstance.Data + (longlong)local_1420.ArrayNum * 0xc)) {
        FVar44.Data = local_1420.AllocatorInstance.Data;
        do {
          if ((((FRigElementKey *)FVar44.Data)->Name == ((FRigElementKey *)FVar39.Data)->Name) &&
             (((FRigElementKey *)FVar44.Data)->Type == ((FRigElementKey *)FVar39.Data)->Type))
          goto LAB_14a2a6dd7;
          FVar44.Data = FVar44.Data + 0xc;
        } while ((FRigElementKey *)FVar44.Data !=
                 (FRigElementKey *)
                 (local_1420.AllocatorInstance.Data + (longlong)local_1420.ArrayNum * 0xc));
      }
      FRigElementKey::ToString((FRigElementKey *)FVar39.Data,&local_518);
      ::FString::PrintfImpl
                (&local_bb8,L"Hierarchy contains element %s which is not part of the replay.");
      `UControlRigReplay::ValidateExpectedResults'::__l2::<lambda_1>::operator()
                (local_1d8,Error,&local_bb8);
      if (local_bb8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_bb8.Data.AllocatorInstance.Data);
      }
      if (local_518.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_518.Data.AllocatorInstance.Data);
      }
      bVar54 = false;
LAB_14a2a6dd7:
      FVar39.Data = FVar39.Data + 0xc;
    }
    pFVar27 = FSampleTrackHost::GetContainer((FSampleTrackHost *)&this->OutputTracks);
    FLazyName::Resolve(&FControlRigReplayTracks::ParentIndicesName);
    iVar23 = FSampleTrackContainer::GetTrackIndex(pFVar27,&local_f64);
    if ((iVar23 < 0) || ((pFVar27->Tracks).ArrayNum <= iVar23)) {
      local_11b8 = (FSampleTrackBase *)0x0;
      pTStack_11b0 = (TReferenceControllerBase<1> *)0x0;
    }
    else {
      FSampleTrackContainer::GetTrack(pFVar27,&local_ba8,iVar23);
      local_11b8 = local_ba8.Object;
      pTStack_11b0 = local_ba8.SharedReferenceCount.ReferenceController;
      if (local_ba8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_ba8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_ba8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_ba8.SharedReferenceCount.ReferenceController);
    }
    if ((local_11b8 == (FSampleTrackBase *)0x0) &&
       (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar17)) {
      pcVar4 = (code *)swi(3);
      uVar18 = (*pcVar4)();
      return (bool)uVar18;
    }
    (**(code **)(local_11b8->_padding_ + 200))(local_11b8,&local_eb8,0,param_2);
    local_13e8 = 0;
    this_02 = &this->OutputTracks;
    if (0 < local_13f8.ArrayNum) {
      local_13e0 = (FName *)0x0;
      local_1458 = bVar54;
LAB_14a2a6ef0:
      pFVar30 = local_13e0;
      uVar51 = 0;
      if ((int)local_13e8 < local_13f8.ArrayNum) {
        uVar51 = ~local_13e8 >> 0x1f;
      }
      if ((uVar51 == 0) &&
         (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar17)) {
        pcVar4 = (code *)swi(3);
        uVar18 = (*pcVar4)();
        return (bool)uVar18;
      }
      pFVar47 = (FRigElementKey *)(local_13f8.AllocatorInstance.Data + (longlong)pFVar30);
      if ((FRigElementKey *)local_1420.AllocatorInstance.Data !=
          (FRigElementKey *)
          (local_1420.AllocatorInstance.Data + (longlong)local_1420.ArrayNum * 0xc)) {
        FVar39.Data = local_1420.AllocatorInstance.Data;
        do {
          if ((((FRigElementKey *)FVar39.Data)->Name == pFVar47->Name) &&
             (((FRigElementKey *)FVar39.Data)->Type == pFVar47->Type)) {
            lVar31 = ((longlong)FVar39.Data - (longlong)local_1420.AllocatorInstance.Data) / 6 +
                     ((longlong)FVar39.Data - (longlong)local_1420.AllocatorInstance.Data >> 0x3f);
            uVar51 = (int)(lVar31 >> 1) - (int)(lVar31 >> 0x3f);
            if (uVar51 != 0xffffffff) {
              iVar23 = URigHierarchy::GetIndex(pUVar53,pFVar47,true);
              pFVar29 = URigHierarchy::Get(pUVar53,iVar23);
              if (pFVar29 != (FRigBaseElement *)0x0) {
                lVar31 = (**(code **)(pFVar29->_padding_ + 0x10))(pFVar29);
                pUVar32 = FRigTransformElement::StaticStruct();
                if (pUVar32 != (UScriptStruct *)0x0) {
                  iVar23 = (int)pUVar32->_padding_;
                  if ((*(int *)(lVar31 + 0x38) < iVar23) ||
                     ((longlong *)
                      *(undefined1 **)(*(longlong *)(lVar31 + 0x30) + (longlong)iVar23 * 8) !=
                      &pUVar32->_padding_)) {
                    bVar17 = false;
                  }
                  else {
                    bVar17 = true;
                  }
                  if (bVar17) {
                    if (pFVar47->Type == Connector) goto LAB_14a2a706b;
                    local_f48.Type = pFVar47->Type;
                    local_f48._1_3_ = *(undefined3 *)&pFVar47->field_0x1;
                    local_f48.Name.ComparisonIndex.Value = (pFVar47->Name).ComparisonIndex.Value;
                    local_f48.Name.Number = (pFVar47->Name).Number;
                    pFVar28 = URigHierarchy::GetDefaultParent(pUVar53,&local_3a8,&local_f48);
                    if ((FRigElementKey *)local_13f8.AllocatorInstance.Data ==
                        (FRigElementKey *)
                        (local_13f8.AllocatorInstance.Data + (longlong)local_13f8.ArrayNum * 0xc))
                    goto LAB_14a2a706b;
                    FVar39.Data = local_13f8.AllocatorInstance.Data;
                    goto LAB_14a2a7050;
                  }
                }
              }
            }
            break;
          }
          FVar39.Data = FVar39.Data + 0xc;
        } while ((FRigElementKey *)FVar39.Data !=
                 (FRigElementKey *)
                 (local_1420.AllocatorInstance.Data + (longlong)local_1420.ArrayNum * 0xc));
      }
      goto LAB_14a2a754f;
    }
LAB_14a2a7579:
    if (local_eb8 != (void *)0x0) {
      FMemory::Free(local_eb8);
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (pTStack_11b0);
    if ((FRigElementKey *)local_13f8.AllocatorInstance.Data != (FRigElementKey *)0x0) {
      FMemory::Free(local_13f8.AllocatorInstance.Data);
    }
  }
  iVar23 = local_1420.ArrayNum;
  uVar14 = _UNK_15061cc8c;
  uVar50 = _UNK_15061cc88;
  uVar26 = __xmm_7fffffffffffffff7fffffffffffffff._4_4_;
  uVar52 = (uint)__xmm_7fffffffffffffff7fffffffffffffff;
  uVar13 = _UNK_15061cc7c;
  uVar24 = _UNK_15061cc78;
  uVar46 = _UNK_15061cc74;
  uVar51 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  if (this->bValidatePose != false) {
    pFVar47 = (FRigElementKey *)
              (local_1420.AllocatorInstance.Data + (longlong)local_1420.ArrayNum * 0xc);
    FVar39.Data = local_1420.AllocatorInstance.Data;
LAB_14a2a7611:
    if (local_1420.ArrayNum != iVar23) {
      local_142e = 0;
      `TCheckedPointerIterator<FRigElementKey_const_,int,0>::operator!='::__l2::<lambda_1>::
      operator()(&local_142e);
    }
    if ((FRigElementKey *)FVar39.Data != pFVar47) {
      if (((FRigElementKey *)FVar39.Data)->Type != Connector) {
        iVar25 = URigHierarchy::GetIndex(local_13c0,(FRigElementKey *)FVar39.Data,true);
        pFVar29 = URigHierarchy::Get(local_13c0,iVar25);
        if (pFVar29 == (FRigBaseElement *)0x0) goto LAB_14a2a7fb3;
        pFVar30 = FControlRigReplayTracks::GetTrackName(this_02,(FRigElementKey *)FVar39.Data);
        lVar31 = (**(code **)(pFVar29->_padding_ + 0x10))(pFVar29);
        pUVar32 = FRigCurveElement::StaticStruct();
        if (pUVar32 != (UScriptStruct *)0x0) {
          iVar25 = (int)pUVar32->_padding_;
          if ((*(int *)(lVar31 + 0x38) < iVar25) ||
             ((longlong *)*(undefined1 **)(*(longlong *)(lVar31 + 0x30) + (longlong)iVar25 * 8) !=
              &pUVar32->_padding_)) {
            bVar17 = false;
          }
          else {
            bVar17 = true;
          }
          if (!bVar17) goto LAB_14a2a7882;
          pFVar27 = FSampleTrackHost::GetContainer((FSampleTrackHost *)local_1398);
          iVar25 = FSampleTrackContainer::GetTrackIndex(pFVar27,pFVar30);
          if ((iVar25 < 0) || ((pFVar27->Tracks).ArrayNum <= iVar25)) {
            local_ea8 = (FSampleTrackBase *)0x0;
            pTStack_ea0 = (TReferenceControllerBase<1> *)0x0;
          }
          else {
            FSampleTrackContainer::GetTrack(pFVar27,&local_b68,iVar25);
            local_ea8 = local_b68.Object;
            pTStack_ea0 = local_b68.SharedReferenceCount.ReferenceController;
            if (local_b68.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_b68.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_b68.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_b68.SharedReferenceCount.ReferenceController);
          }
          if (local_ea8 == (FSampleTrackBase *)0x0) {
LAB_14a2a7866:
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_ea0);
            FVar39.Data = FVar39.Data + 0xc;
            this_02 = &this->OutputTracks;
          }
          else {
            local_13a0 = (float)(**(code **)(local_ea8->_padding_ + 200))(local_ea8,param_1);
            pUVar53 = local_13c0;
            iVar25 = pFVar29->Index;
            if (((iVar25 < 0) || ((local_13c0->Elements).ArrayNum <= iVar25)) ||
               (pFVar33 = Cast<FRigCurveElement>
                                    (*(FRigBaseElement **)
                                      ((local_13c0->Elements).AllocatorInstance.Data +
                                      (longlong)iVar25 * 8)), pFVar33 == (FRigCurveElement *)0x0)) {
              fVar56 = 0.0;
            }
            else {
              fVar56 = URigHierarchy::GetCurveValue(pUVar53,pFVar33);
            }
            if ((float)((uint)(local_13a0 - fVar56) & uVar51) <= (float)this->Tolerance)
            goto LAB_14a2a7866;
            FRigElementKey::ToString((FRigElementKey *)FVar39.Data,&local_808);
            ::FString::PrintfImpl
                      (&local_b58,
                       L"Frame [%04d]: Curve %s has value %.03f, expected by the replay: %.03f.");
            `UControlRigReplay::ValidateExpectedResults'::__l2::<lambda_1>::operator()
                      (local_1d8,Error,&local_b58);
            if (local_b58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_b58.Data.AllocatorInstance.Data);
            }
            if (local_808.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_808.Data.AllocatorInstance.Data);
            }
            bVar54 = false;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_ea0);
            FVar39.Data = FVar39.Data + 0xc;
            this_02 = &this->OutputTracks;
          }
          goto LAB_14a2a7611;
        }
LAB_14a2a7882:
        lVar31 = (**(code **)(pFVar29->_padding_ + 0x10))(pFVar29);
        pUVar32 = FRigTransformElement::StaticStruct();
        if (pUVar32 == (UScriptStruct *)0x0) goto LAB_14a2a7fb3;
        iVar25 = (int)pUVar32->_padding_;
        if ((*(int *)(lVar31 + 0x38) < iVar25) ||
           ((longlong *)*(undefined1 **)(*(longlong *)(lVar31 + 0x30) + (longlong)iVar25 * 8) !=
            &pUVar32->_padding_)) {
          bVar17 = false;
        }
        else {
          bVar17 = true;
        }
        if (bVar17) {
          pFVar27 = FSampleTrackHost::GetContainer((FSampleTrackHost *)local_1398);
          iVar25 = FSampleTrackContainer::GetTrackIndex(pFVar27,pFVar30);
          if ((iVar25 < 0) || ((pFVar27->Tracks).ArrayNum <= iVar25)) {
            local_e38 = (FSampleTrackBase *)0x0;
            pTStack_e30 = (TReferenceControllerBase<1> *)0x0;
          }
          else {
            FSampleTrackContainer::GetTrack(pFVar27,&local_b48,iVar25);
            local_e38 = local_b48.Object;
            pTStack_e30 = local_b48.SharedReferenceCount.ReferenceController;
            if (local_b48.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_b48.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_b48.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_b48.SharedReferenceCount.ReferenceController);
          }
          if (local_e38 != (FSampleTrackBase *)0x0) {
            pfVar34 = (float *)(**(code **)(local_e38->_padding_ + 200))
                                         (local_e38,local_108,param_1);
            dVar9 = (double)pfVar34[6];
            fVar56 = *pfVar34;
            fVar57 = pfVar34[2];
            uVar79 = SUB84((double)pfVar34[1],0);
            uVar80 = (undefined4)((ulonglong)(double)pfVar34[1] >> 0x20);
            dVar8 = (double)pfVar34[8];
            uVar75 = SUB84((double)pfVar34[9],0);
            uVar76 = (uint)((ulonglong)(double)pfVar34[9] >> 0x20);
            uVar81 = SUB84((double)pfVar34[3],0);
            uVar82 = (undefined4)((ulonglong)(double)pfVar34[3] >> 0x20);
            dVar10 = (double)pfVar34[10];
            dVar60 = (double)pfVar34[4];
            uVar71 = SUB84((double)pfVar34[5],0);
            uVar72 = (uint)((ulonglong)(double)pfVar34[5] >> 0x20);
            URigHierarchy::GetLocalTransformByIndex(local_13c0,&local_198,pFVar29->Index,false);
            local_508._8_4_ = uVar71;
            local_508._0_8_ = dVar60;
            local_508._12_4_ = uVar72;
            local_4f0 = local_198.Translation.XY.m128d_f64[0];
            dStack_4e8 = local_198.Translation.XY.m128d_f64[1];
            dVar5 = (double)(float)this->Tolerance;
            local_4e0 = local_198.Translation.ZW.m128d_f64[0];
            auVar61._0_8_ =
                 (double)CONCAT44((uint)((ulonglong)(dVar60 - local_198.Translation.XY.m128d_f64[0])
                                        >> 0x20) & uVar26,
                                  SUB84(dVar60 - local_198.Translation.XY.m128d_f64[0],0) & uVar52);
            auVar61._8_4_ = uVar71 & uVar50;
            auVar61._12_4_ = uVar72 & uVar14;
            local_4f8 = dVar9;
            if (((dVar5 < auVar61._0_8_) ||
                (auVar11._4_8_ = auVar61._8_8_, auVar11._0_4_ = (int)((ulonglong)dVar60 >> 0x20),
                auVar62._0_8_ = auVar11._0_8_ << 0x20, auVar62._8_4_ = uVar71,
                auVar62._12_4_ = uVar72,
                dVar59 = auVar62._8_8_ - local_198.Translation.XY.m128d_f64[1],
                dVar5 < (double)CONCAT44((uint)((ulonglong)dVar59 >> 0x20) & uVar26,
                                         SUB84(dVar59,0) & uVar52))) ||
               (dVar5 < (double)CONCAT44((uint)((ulonglong)
                                                (dVar9 - local_198.Translation.ZW.m128d_f64[0]) >>
                                               0x20) & uVar26,
                                         SUB84(dVar9 - local_198.Translation.ZW.m128d_f64[0],0) &
                                         uVar52))) {
              local_390._8_4_ = uVar71;
              local_390._0_8_ = dVar60;
              local_390._12_4_ = uVar72;
              local_380 = dVar9;
              ::FString::PrintfImpl(&local_e88,L"X=%3.3f Y=%3.3f Z=%3.3f");
              local_368 = local_198.Translation.ZW.m128d_f64[0];
              local_378 = local_198.Translation.XY.m128d_f64[0];
              dStack_370 = local_198.Translation.XY.m128d_f64[1];
              ::FString::PrintfImpl(&local_e98,L"X=%3.3f Y=%3.3f Z=%3.3f");
              FRigElementKey::ToString((FRigElementKey *)FVar39.Data,&local_7f8);
              ::FString::PrintfImpl
                        (&local_b38,
                         L"Frame [%04d]: Element %s has position %s, expected %s by the replay.");
              `UControlRigReplay::ValidateExpectedResults'::__l2::<lambda_1>::operator()
                        (local_1d8,Error,&local_b38);
              if (local_b38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b38.Data.AllocatorInstance.Data);
              }
              if (local_7f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_7f8.Data.AllocatorInstance.Data);
              }
              if (local_e98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_e98.Data.AllocatorInstance.Data);
              }
              if (local_e88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_e88.Data.AllocatorInstance.Data);
              }
              bVar54 = false;
            }
            local_428._8_4_ = uVar79;
            local_428._0_8_ = (double)fVar56;
            local_428._12_4_ = uVar80;
            local_418._8_4_ = uVar81;
            local_418._0_8_ = (double)fVar57;
            local_418._12_4_ = uVar82;
            UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_428,&local_348);
            dVar5 = this->Tolerance;
            local_408.X = local_198.Rotation.XY.m128d_f64[0];
            local_408.Y = local_198.Rotation.XY.m128d_f64[1];
            local_408.Z = local_198.Rotation.ZW.m128d_f64[0];
            local_408.W = local_198.Rotation.ZW.m128d_f64[1];
            UE::Math::TQuat<double>::Rotator(&local_408,&local_360);
            bVar17 = UE::Math::TRotator<double>::EqualsOrientation
                               (&local_348,&local_360,(double)(float)dVar5);
            if (!bVar17) {
              local_3e8._8_4_ = uVar79;
              local_3e8._0_8_ = (double)fVar56;
              local_3e8._12_4_ = uVar80;
              local_3d8._8_4_ = uVar81;
              local_3d8._0_8_ = (double)fVar57;
              local_3d8._12_4_ = uVar82;
              UE::Math::TQuat<double>::Rotator((TQuat<double> *)local_3e8,&local_8d0);
              ::FString::PrintfImpl(&local_e68,L"P=%f Y=%f R=%f");
              local_3c8.X = local_198.Rotation.XY.m128d_f64[0];
              local_3c8.Y = local_198.Rotation.XY.m128d_f64[1];
              local_3c8.Z = local_198.Rotation.ZW.m128d_f64[0];
              local_3c8.W = local_198.Rotation.ZW.m128d_f64[1];
              UE::Math::TQuat<double>::Rotator(&local_3c8,&local_8a8);
              ::FString::PrintfImpl(&local_e78,L"P=%f Y=%f R=%f");
              FRigElementKey::ToString((FRigElementKey *)FVar39.Data,&local_7e8);
              ::FString::PrintfImpl
                        (&local_b28,
                         L"Frame [%04d]: Element %s has rotation %s, expected %s by the replay.");
              `UControlRigReplay::ValidateExpectedResults'::__l2::<lambda_1>::operator()
                        (local_1d8,Error,&local_b28);
              if (local_b28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b28.Data.AllocatorInstance.Data);
              }
              if (local_7e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_7e8.Data.AllocatorInstance.Data);
              }
              if (local_e78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_e78.Data.AllocatorInstance.Data);
              }
              if (local_e68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_e68.Data.AllocatorInstance.Data);
              }
              bVar54 = false;
            }
            local_4d8._8_4_ = uVar75;
            local_4d8._0_8_ = dVar8;
            local_4d8._12_4_ = uVar76;
            local_4c0 = local_198.Scale3D.XY.m128d_f64[0];
            dStack_4b8 = local_198.Scale3D.XY.m128d_f64[1];
            dVar5 = (double)(float)this->Tolerance;
            local_4b0 = local_198.Scale3D.ZW.m128d_f64[0];
            auVar63._0_8_ =
                 (double)CONCAT44((uint)((ulonglong)(dVar8 - local_198.Scale3D.XY.m128d_f64[0]) >>
                                        0x20) & uVar26,
                                  SUB84(dVar8 - local_198.Scale3D.XY.m128d_f64[0],0) & uVar52);
            auVar63._8_4_ = uVar75 & uVar50;
            auVar63._12_4_ = uVar76 & uVar14;
            local_4c8 = dVar10;
            if (((dVar5 < auVar63._0_8_) ||
                (auVar12._4_8_ = auVar63._8_8_, auVar12._0_4_ = (int)((ulonglong)dVar8 >> 0x20),
                auVar64._0_8_ = auVar12._0_8_ << 0x20, auVar64._8_4_ = uVar75,
                auVar64._12_4_ = uVar76, dVar60 = auVar64._8_8_ - local_198.Scale3D.XY.m128d_f64[1],
                dVar5 < (double)CONCAT44((uint)((ulonglong)dVar60 >> 0x20) & uVar26,
                                         SUB84(dVar60,0) & uVar52))) ||
               (dVar5 < (double)CONCAT44((uint)((ulonglong)
                                                (dVar10 - local_198.Scale3D.ZW.m128d_f64[0]) >> 0x20
                                               ) & uVar26,
                                         SUB84(dVar10 - local_198.Scale3D.ZW.m128d_f64[0],0) &
                                         uVar52))) {
              local_330._8_4_ = uVar75;
              local_330._0_8_ = dVar8;
              local_330._12_4_ = uVar76;
              local_320 = dVar10;
              ::FString::PrintfImpl(&local_e48,L"X=%3.3f Y=%3.3f Z=%3.3f");
              local_308 = local_198.Scale3D.ZW.m128d_f64[0];
              local_318 = local_198.Scale3D.XY.m128d_f64[0];
              dStack_310 = local_198.Scale3D.XY.m128d_f64[1];
              ::FString::PrintfImpl(&local_e58,L"X=%3.3f Y=%3.3f Z=%3.3f");
              FRigElementKey::ToString((FRigElementKey *)FVar39.Data,&local_7d8);
              ::FString::PrintfImpl
                        (&local_b18,
                         L"Frame [%04d]: Element %s has scale %s, expected %s by the replay.");
              `UControlRigReplay::ValidateExpectedResults'::__l2::<lambda_1>::operator()
                        (local_1d8,Error,&local_b18);
              if (local_b18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b18.Data.AllocatorInstance.Data);
              }
              if (local_7d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_7d8.Data.AllocatorInstance.Data);
              }
              if (local_e58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_e58.Data.AllocatorInstance.Data);
              }
              if (local_e48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_e48.Data.AllocatorInstance.Data);
              }
              bVar54 = false;
              SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                        (pTStack_e30);
              FVar39.Data = FVar39.Data + 0xc;
              this_02 = &this->OutputTracks;
              goto LAB_14a2a7611;
            }
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (pTStack_e30);
          FVar39.Data = FVar39.Data + 0xc;
          this_02 = &this->OutputTracks;
          goto LAB_14a2a7611;
        }
      }
LAB_14a2a7fb3:
      FVar39.Data = FVar39.Data + 0xc;
      this_02 = &this->OutputTracks;
      goto LAB_14a2a7611;
    }
  }
  if (this->bValidateMetadata != false) {
    uVar45 = (ulonglong)local_1420.ArrayNum;
    local_1268 = local_1420.ArrayNum;
    pFVar47 = (FRigElementKey *)(local_1420.AllocatorInstance.Data + uVar45 * 0xc);
    FVar39.Data = local_1420.AllocatorInstance.Data;
    local_1358 = pFVar47;
    while( true ) {
      local_1428 = (FRigElementKey *)FVar39.Data;
      if (local_1420.ArrayNum != (uint)uVar45) {
        local_142d = 0;
        `TCheckedPointerIterator<FRigElementKey_const_,int,0>::operator!='::__l2::<lambda_1>::
        operator()(&local_142d);
      }
      if ((FRigElementKey *)FVar39.Data == pFVar47) break;
      iVar23 = URigHierarchy::GetIndex(local_13c0,(FRigElementKey *)FVar39.Data,true);
      pFVar29 = URigHierarchy::Get(local_13c0,iVar23);
      if (pFVar29 != (FRigBaseElement *)0x0) {
        local_208[0] = *(code **)local_1360;
        local_1e0 = (longlong *)0x0;
        if (local_208[0] != (code *)0x0) {
          puVar36 = *(undefined8 **)&local_1360->field_0x28;
          if (*(undefined8 **)&local_1360->field_0x28 == (undefined8 *)0x0) {
            puVar36 = (undefined8 *)&local_1360->field_0x10;
          }
          (**(code **)*puVar36)(puVar36,local_1f8);
        }
        local_488[0] = (code *)0x0;
        local_460 = (undefined8 *)0x0;
        local_460 = FMemory::Malloc(0x40,0x10);
        *local_460 = &UE::Core::Private::Function::
                      TFunction_OwnedObject<`UControlRigReplay::ValidateExpectedResults'::`92'::<lambda_2>,0,1>
                      ::_vftable_;
        plVar43 = local_460 + 2;
        *plVar43 = (longlong)local_208[0];
        local_460[7] = 0;
        if (*plVar43 != 0) {
          plVar40 = local_1f8;
          if (local_1e0 != (longlong *)0x0) {
            plVar40 = local_1e0;
          }
          (**(code **)*plVar40)();
        }
        if (plVar43 != (longlong *)0x0) {
          local_488[0] = UE::Core::Private::Function::
                         TFunctionRefCaller<`UControlRigReplay::ValidateExpectedResults'::__l92::<lambda_2>,void,enum_EMessageSeverity::Type,FName_const_&,FString_const_&>
                         ::Call;
        }
        FControlRigReplayTracks::GetMetadataNames
                  (&this->OutputTracks,&local_11a8,param_1,param_2,(FRigElementKey *)FVar39.Data,
                   (TFunction<void___cdecl(EMessageSeverity::Type,FName_const_&,FString_const_&)> *)
                   local_488);
        uVar41 = (ulonglong)local_11a8.ArrayNum;
        local_13e8 = local_11a8.ArrayNum;
        local_12a0 = (FName *)(local_11a8.AllocatorInstance.Data + uVar41 * 8);
        uVar45 = uVar41;
        FVar44.Data = local_11a8.AllocatorInstance.Data;
        while( true ) {
          pFVar30 = local_12a0;
          if ((int)uVar41 != (int)uVar45) {
            local_142c = 0;
            `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (&local_142c);
          }
          if ((FName *)FVar44.Data == pFVar30) break;
          pFVar30 = FControlRigReplayTracks::GetTrackName
                              (&this->OutputTracks,(FRigElementKey *)FVar39.Data,
                               (FName *)FVar44.Data);
          local_13e0 = pFVar30;
          pFVar27 = FSampleTrackHost::GetContainer((FSampleTrackHost *)&this->OutputTracks);
          FSampleTrackContainer::FindTrack(pFVar27,&local_1408,pFVar30);
          if (local_1408.Object == (FSampleTrackBase *)0x0) {
            ::FString::FString(&local_ed8,L"Track not found.");
            ::FName::ToString(pFVar30,&local_548);
            ::FString::PrintfImpl(&local_c08,L"%s: %s");
            local_1270[0] = 3;
            UE::Core::Private::Function::CheckCallable(local_208[0]);
            pcVar4 = local_208[0];
            plVar43 = local_1f8;
            if (local_1e0 != (longlong *)0x0) {
              plVar43 = local_1e0;
            }
            uVar37 = (**(code **)(*plVar43 + 8))();
            (*pcVar4)(uVar37,local_1270);
            if (local_c08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c08.Data.AllocatorInstance.Data);
            }
            if (local_548.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_548.Data.AllocatorInstance.Data);
            }
            if (local_ed8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_ed8.Data.AllocatorInstance.Data);
            }
            bVar54 = false;
            goto switchD_14a2a8208_default;
          }
          EVar19 = (**(code **)((local_1408.Object)->_padding_ + 8))();
          EVar20 = FControlRigReplayTracks::GetMetadataTypeFromTrackType(EVar19);
          pFVar35 = FRigBaseElement::GetMetadata(pFVar29,(FName *)FVar44.Data,EVar20);
          if (pFVar35 == (FRigBaseMetadata *)0x0) {
            ::FString::FString(&local_ee8,L"Cannot find metadata on element.");
            ::FName::ToString(pFVar30,&local_558);
            ::FString::PrintfImpl(&local_c18,L"%s: %s");
            local_1278[0] = 3;
            UE::Core::Private::Function::CheckCallable(local_208[0]);
            pcVar4 = local_208[0];
            plVar43 = local_1f8;
            if (local_1e0 != (longlong *)0x0) {
              plVar43 = local_1e0;
            }
            uVar37 = (**(code **)(*plVar43 + 8))();
            (*pcVar4)(uVar37,local_1278);
            if (local_c18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_c18.Data.AllocatorInstance.Data);
            }
            FVar42.Data = local_ee8.Data.AllocatorInstance.Data;
            if (local_558.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_558.Data.AllocatorInstance.Data);
              FVar42.Data = local_ee8.Data.AllocatorInstance.Data;
            }
LAB_14a2a836f:
            if (FVar42.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FVar42.Data);
            }
            bVar54 = false;
            goto switchD_14a2a8208_default;
          }
          switch(EVar20) {
          case Bool:
            local_1058 = local_1408.Object;
            pTStack_1050 = local_1408.SharedReferenceCount.ReferenceController;
            if (local_1408.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_1408.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_1408.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            if ((local_1408.Object == (FSampleTrackBase *)0x0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar17)) {
              pcVar4 = (code *)swi(3);
              uVar18 = (*pcVar4)();
              return (bool)uVar18;
            }
            local_142b = (**(code **)(local_1058->_padding_ + 200))(local_1058,param_1);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_1050);
            if (local_142b != (char)pFVar35[1]._padding_) {
              ::FString::FString(&local_e28,L"Metadata value doesn\'t match.");
              ::FName::ToString(pFVar30,&local_7c8);
              ::FString::PrintfImpl(&local_c28,L"%s: %s");
              local_1310[0] = 1;
              UE::Core::Private::Function::CheckCallable(local_208[0]);
              pcVar4 = local_208[0];
              plVar43 = local_1f8;
              if (local_1e0 != (longlong *)0x0) {
                plVar43 = local_1e0;
              }
              uVar37 = (**(code **)(*plVar43 + 8))();
              (*pcVar4)(uVar37,local_1310);
              if (local_c28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_c28.Data.AllocatorInstance.Data);
              }
              FVar42.Data = local_e28.Data.AllocatorInstance.Data;
              if (local_7c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_7c8.Data.AllocatorInstance.Data);
                FVar42.Data = local_e28.Data.AllocatorInstance.Data;
              }
              goto LAB_14a2a836f;
            }
            break;
          case BoolArray:
            local_1048 = local_1408.Object;
            pTStack_1040 = local_1408.SharedReferenceCount.ReferenceController;
            if (local_1408.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_1408.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_1408.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            if ((local_1408.Object == (FSampleTrackBase *)0x0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar17)) {
              pcVar4 = (code *)swi(3);
              uVar18 = (*pcVar4)();
              return (bool)uVar18;
            }
            (**(code **)(local_1048->_padding_ + 200))(local_1048,&local_1260,param_1,param_2);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_1040);
            if (local_1258 == pFVar35[1].Name.ComparisonIndex.Value) {
              uVar52 = 0;
              lVar31 = 0;
              pvVar38 = local_1260;
              FVar39.Data = (FScriptContainerElement *)local_1428;
              if (0 < (int)local_1258) {
                do {
                  uVar26 = 0;
                  if ((int)uVar52 < (int)local_1258) {
                    uVar26 = ~uVar52 >> 0x1f;
                  }
                  if ((uVar26 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar4 = (code *)swi(3);
                    uVar18 = (*pcVar4)();
                    return (bool)uVar18;
                  }
                  pvVar38 = local_1260;
                  uVar26 = 0;
                  if ((int)uVar52 < (int)pFVar35[1].Name.ComparisonIndex.Value) {
                    uVar26 = ~uVar52 >> 0x1f;
                  }
                  if ((uVar26 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar4 = (code *)swi(3);
                    uVar18 = (*pcVar4)();
                    return (bool)uVar18;
                  }
                  if (*(char *)(lVar31 + (longlong)pvVar38) !=
                      *(char *)(lVar31 + pFVar35[1]._padding_)) {
                    ::FString::FString(&local_e08,L"Metadata array value element doesn\'t match.");
                    ::FName::ToString(pFVar30,&local_7a8);
                    ::FString::PrintfImpl(&local_ae8,L"%s: %s");
                    local_1308[0] = 1;
                    UE::Core::Private::Function::CheckCallable(local_208[0]);
                    pcVar4 = local_208[0];
                    plVar43 = local_1f8;
                    if (local_1e0 != (longlong *)0x0) {
                      plVar43 = local_1e0;
                    }
                    uVar37 = (**(code **)(*plVar43 + 8))();
                    (*pcVar4)(uVar37,local_1308);
                    if (local_ae8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_ae8.Data.AllocatorInstance.Data);
                    }
                    if (local_7a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_7a8.Data.AllocatorInstance.Data);
                    }
                    if (local_e08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_e08.Data.AllocatorInstance.Data);
                    }
                    bVar54 = false;
                  }
                  uVar52 = uVar52 + 1;
                  lVar31 = lVar31 + 1;
                  pvVar38 = local_1260;
                  FVar39.Data = (FScriptContainerElement *)local_1428;
                } while ((int)uVar52 < (int)local_1258);
              }
            }
            else {
              ::FString::FString(&local_e18,L"Metadata array value num doesn\'t match.");
              ::FName::ToString(pFVar30,&local_7b8);
              ::FString::PrintfImpl(&local_af8,L"%s: %s");
              UE::Core::Private::Function::
              TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(enum_EMessageSeverity::Type,FString_const_&)>
              ::operator()(local_208,Error,&local_af8);
              if (local_af8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_af8.Data.AllocatorInstance.Data);
              }
              if (local_7b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_7b8.Data.AllocatorInstance.Data);
              }
              if (local_e18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_e18.Data.AllocatorInstance.Data);
              }
              bVar54 = false;
              pvVar38 = local_1260;
            }
            goto LAB_14a2a8699;
          case Float:
            local_1038 = local_1408.Object;
            pTStack_1030 = local_1408.SharedReferenceCount.ReferenceController;
            if (local_1408.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_1408.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_1408.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            if ((local_1408.Object == (FSampleTrackBase *)0x0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar17)) {
              pcVar4 = (code *)swi(3);
              uVar18 = (*pcVar4)();
              return (bool)uVar18;
            }
            local_1300 = (float)(**(code **)(local_1038->_padding_ + 200))(local_1038,param_1);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_1030);
            if ((float)((uint)(local_1300 - *(float *)&pFVar35[1]._padding_) & uVar51) <=
                (float)this->Tolerance) {
              ::FString::FString(&local_df8,L"Metadata value doesn\'t match.");
              ::FName::ToString(pFVar30,&local_798);
              ::FString::PrintfImpl(&local_ad8,L"%s: %s");
              UE::Core::Private::Function::
              TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(enum_EMessageSeverity::Type,FString_const_&)>
              ::operator()(local_208,Error,&local_ad8);
              if (local_ad8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_ad8.Data.AllocatorInstance.Data);
              }
              FVar42.Data = local_df8.Data.AllocatorInstance.Data;
              if (local_798.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_798.Data.AllocatorInstance.Data);
                FVar42.Data = local_df8.Data.AllocatorInstance.Data;
              }
              goto LAB_14a2a836f;
            }
            break;
          case FloatArray:
            local_1028 = local_1408.Object;
            pTStack_1020 = local_1408.SharedReferenceCount.ReferenceController;
            if (local_1408.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_1408.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_1408.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            if ((local_1408.Object == (FSampleTrackBase *)0x0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar17)) {
              pcVar4 = (code *)swi(3);
              uVar18 = (*pcVar4)();
              return (bool)uVar18;
            }
            (**(code **)(local_1028->_padding_ + 200))(local_1028,&local_1250,param_1,param_2);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_1020);
            if (local_1248 == pFVar35[1].Name.ComparisonIndex.Value) {
              uVar52 = 0;
              pvVar38 = local_1250;
              if (0 < (int)local_1248) {
                lVar31 = 0;
                do {
                  dVar5 = this->Tolerance;
                  uVar26 = 0;
                  if ((int)uVar52 < (int)pFVar35[1].Name.ComparisonIndex.Value) {
                    uVar26 = ~uVar52 >> 0x1f;
                  }
                  if ((uVar26 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar4 = (code *)swi(3);
                    uVar18 = (*pcVar4)();
                    return (bool)uVar18;
                  }
                  fVar56 = *(float *)(lVar31 + pFVar35[1]._padding_);
                  uVar26 = 0;
                  if ((int)uVar52 < (int)local_1248) {
                    uVar26 = ~uVar52 >> 0x1f;
                  }
                  if ((uVar26 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar4 = (code *)swi(3);
                    uVar18 = (*pcVar4)();
                    return (bool)uVar18;
                  }
                  if ((float)((uint)(*(float *)(lVar31 + (longlong)local_1250) - fVar56) & uVar51)
                      <= (float)dVar5) {
                    ::FString::FString(&local_dd8,L"Metadata array value element doesn\'t match.");
                    ::FName::ToString(pFVar30,&local_778);
                    ::FString::PrintfImpl(&local_ab8,L"%s: %s");
                    local_12f8[0] = 1;
                    UE::Core::Private::Function::CheckCallable(local_208[0]);
                    pcVar4 = local_208[0];
                    plVar43 = local_1f8;
                    if (local_1e0 != (longlong *)0x0) {
                      plVar43 = local_1e0;
                    }
                    uVar37 = (**(code **)(*plVar43 + 8))();
                    (*pcVar4)(uVar37,local_12f8);
                    if (local_ab8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_ab8.Data.AllocatorInstance.Data);
                    }
                    if (local_778.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_778.Data.AllocatorInstance.Data);
                    }
                    if (local_dd8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_dd8.Data.AllocatorInstance.Data);
                    }
                    bVar54 = false;
                  }
                  uVar52 = uVar52 + 1;
                  lVar31 = lVar31 + 4;
                  pvVar38 = local_1250;
                  FVar39.Data = (FScriptContainerElement *)local_1428;
                } while ((int)uVar52 < (int)local_1248);
              }
            }
            else {
              ::FString::FString(&local_de8,L"Metadata array value num doesn\'t match.");
              ::FName::ToString(pFVar30,&local_788);
              ::FString::PrintfImpl(&local_ac8,L"%s: %s");
              UE::Core::Private::Function::
              TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(enum_EMessageSeverity::Type,FString_const_&)>
              ::operator()(local_208,Error,&local_ac8);
              if (local_ac8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_ac8.Data.AllocatorInstance.Data);
              }
              if (local_788.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_788.Data.AllocatorInstance.Data);
              }
              if (local_de8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_de8.Data.AllocatorInstance.Data);
              }
              bVar54 = false;
              pvVar38 = local_1250;
            }
            goto LAB_14a2a8699;
          case Int32:
            local_1018 = local_1408.Object;
            pTStack_1010 = local_1408.SharedReferenceCount.ReferenceController;
            if (local_1408.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_1408.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_1408.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            if ((local_1408.Object == (FSampleTrackBase *)0x0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar17)) {
              pcVar4 = (code *)swi(3);
              uVar18 = (*pcVar4)();
              return (bool)uVar18;
            }
            local_12f0 = (**(code **)(local_1018->_padding_ + 200))(local_1018,param_1);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_1010);
            if (local_12f0 != (int)pFVar35[1]._padding_) {
              ::FString::FString(&local_dc8,L"Metadata value doesn\'t match.");
              ::FName::ToString(pFVar30,&local_768);
              ::FString::PrintfImpl(&local_aa8,L"%s: %s");
              local_12e8[0] = 1;
              UE::Core::Private::Function::CheckCallable(local_208[0]);
              pcVar4 = local_208[0];
              plVar43 = local_1f8;
              if (local_1e0 != (longlong *)0x0) {
                plVar43 = local_1e0;
              }
              uVar37 = (**(code **)(*plVar43 + 8))();
              (*pcVar4)(uVar37,local_12e8);
              if (local_aa8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_aa8.Data.AllocatorInstance.Data);
              }
              FVar42.Data = local_dc8.Data.AllocatorInstance.Data;
              if (local_768.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_768.Data.AllocatorInstance.Data);
                FVar42.Data = local_dc8.Data.AllocatorInstance.Data;
              }
              goto LAB_14a2a836f;
            }
            break;
          case Int32Array:
            local_1008 = local_1408.Object;
            pTStack_1000 = local_1408.SharedReferenceCount.ReferenceController;
            if (local_1408.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_1408.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_1408.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            if ((local_1408.Object == (FSampleTrackBase *)0x0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar17)) {
              pcVar4 = (code *)swi(3);
              uVar18 = (*pcVar4)();
              return (bool)uVar18;
            }
            (**(code **)(local_1008->_padding_ + 200))(local_1008,&local_1240,param_1,param_2);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_1000);
            if (local_1238 == pFVar35[1].Name.ComparisonIndex.Value) {
              uVar52 = 0;
              pvVar38 = local_1240;
              if (0 < (int)local_1238) {
                lVar31 = 0;
                do {
                  uVar26 = 0;
                  if ((int)uVar52 < (int)local_1238) {
                    uVar26 = ~uVar52 >> 0x1f;
                  }
                  if ((uVar26 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar4 = (code *)swi(3);
                    uVar18 = (*pcVar4)();
                    return (bool)uVar18;
                  }
                  pvVar38 = local_1240;
                  uVar26 = 0;
                  if ((int)uVar52 < (int)pFVar35[1].Name.ComparisonIndex.Value) {
                    uVar26 = ~uVar52 >> 0x1f;
                  }
                  if ((uVar26 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar4 = (code *)swi(3);
                    uVar18 = (*pcVar4)();
                    return (bool)uVar18;
                  }
                  if (*(int *)(lVar31 + (longlong)pvVar38) !=
                      *(int *)(lVar31 + pFVar35[1]._padding_)) {
                    ::FString::FString(&local_da8,L"Metadata array value element doesn\'t match.");
                    ::FName::ToString(pFVar30,&local_748);
                    ::FString::PrintfImpl(&local_a88,L"%s: %s");
                    local_12e0[0] = 1;
                    UE::Core::Private::Function::CheckCallable(local_208[0]);
                    pcVar4 = local_208[0];
                    plVar43 = local_1f8;
                    if (local_1e0 != (longlong *)0x0) {
                      plVar43 = local_1e0;
                    }
                    uVar37 = (**(code **)(*plVar43 + 8))();
                    (*pcVar4)(uVar37,local_12e0);
                    if (local_a88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_a88.Data.AllocatorInstance.Data);
                    }
                    if (local_748.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_748.Data.AllocatorInstance.Data);
                    }
                    if (local_da8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_da8.Data.AllocatorInstance.Data);
                    }
                    bVar54 = false;
                  }
                  uVar52 = uVar52 + 1;
                  lVar31 = lVar31 + 4;
                  pvVar38 = local_1240;
                  FVar39.Data = (FScriptContainerElement *)local_1428;
                } while ((int)uVar52 < (int)local_1238);
              }
            }
            else {
              ::FString::FString(&local_db8,L"Metadata array value num doesn\'t match.");
              ::FName::ToString(pFVar30,&local_758);
              ::FString::PrintfImpl(&local_a98,L"%s: %s");
              UE::Core::Private::Function::
              TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(enum_EMessageSeverity::Type,FString_const_&)>
              ::operator()(local_208,Error,&local_a98);
              if (local_a98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a98.Data.AllocatorInstance.Data);
              }
              if (local_758.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_758.Data.AllocatorInstance.Data);
              }
              if (local_db8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_db8.Data.AllocatorInstance.Data);
              }
              bVar54 = false;
              pvVar38 = local_1240;
            }
            goto LAB_14a2a8699;
          case Name:
            local_ff8 = local_1408.Object;
            pTStack_ff0 = local_1408.SharedReferenceCount.ReferenceController;
            if (local_1408.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_1408.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_1408.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            if ((local_1408.Object == (FSampleTrackBase *)0x0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar17)) {
              pcVar4 = (code *)swi(3);
              uVar18 = (*pcVar4)();
              return (bool)uVar18;
            }
            (**(code **)(local_ff8->_padding_ + 200))(local_ff8,&local_f58,param_1,param_2);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_ff0);
            if (local_f58 != pFVar35[1]._padding_) {
              ::FString::FString(&local_d98,L"Metadata value doesn\'t match.");
              ::FName::ToString(pFVar30,&local_738);
              ::FString::PrintfImpl(&local_a78,L"%s: %s");
              UE::Core::Private::Function::
              TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(enum_EMessageSeverity::Type,FString_const_&)>
              ::operator()(local_208,Error,&local_a78);
              if (local_a78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a78.Data.AllocatorInstance.Data);
              }
              FVar42.Data = local_d98.Data.AllocatorInstance.Data;
              if (local_738.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_738.Data.AllocatorInstance.Data);
                FVar42.Data = local_d98.Data.AllocatorInstance.Data;
              }
              goto LAB_14a2a836f;
            }
            break;
          case NameArray:
            local_fe8 = local_1408.Object;
            pTStack_fe0 = local_1408.SharedReferenceCount.ReferenceController;
            if (local_1408.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_1408.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_1408.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            if ((local_1408.Object == (FSampleTrackBase *)0x0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar17)) {
              pcVar4 = (code *)swi(3);
              uVar18 = (*pcVar4)();
              return (bool)uVar18;
            }
            (**(code **)(local_fe8->_padding_ + 200))(local_fe8,&local_1230,param_1,param_2);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_fe0);
            if (local_1228 == pFVar35[1].Name.ComparisonIndex.Value) {
              uVar52 = 0;
              pvVar38 = local_1230;
              if (0 < (int)local_1228) {
                lVar31 = 0;
                do {
                  uVar26 = 0;
                  if ((int)uVar52 < (int)pFVar35[1].Name.ComparisonIndex.Value) {
                    uVar26 = ~uVar52 >> 0x1f;
                  }
                  if ((uVar26 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar4 = (code *)swi(3);
                    uVar18 = (*pcVar4)();
                    return (bool)uVar18;
                  }
                  lVar55 = pFVar35[1]._padding_;
                  uVar26 = 0;
                  if ((int)uVar52 < (int)local_1228) {
                    uVar26 = ~uVar52 >> 0x1f;
                  }
                  if ((uVar26 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar4 = (code *)swi(3);
                    uVar18 = (*pcVar4)();
                    return (bool)uVar18;
                  }
                  if (*(longlong *)(lVar31 + (longlong)local_1230) != *(longlong *)(lVar31 + lVar55)
                     ) {
                    ::FString::FString(&local_d78,L"Metadata array value element doesn\'t match.");
                    ::FName::ToString(pFVar30,&local_718);
                    ::FString::PrintfImpl(&local_a58,L"%s: %s");
                    local_12d0[0] = 1;
                    UE::Core::Private::Function::CheckCallable(local_208[0]);
                    pcVar4 = local_208[0];
                    plVar43 = local_1f8;
                    if (local_1e0 != (longlong *)0x0) {
                      plVar43 = local_1e0;
                    }
                    uVar37 = (**(code **)(*plVar43 + 8))();
                    (*pcVar4)(uVar37,local_12d0);
                    if (local_a58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_a58.Data.AllocatorInstance.Data);
                    }
                    if (local_718.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_718.Data.AllocatorInstance.Data);
                    }
                    if (local_d78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_d78.Data.AllocatorInstance.Data);
                    }
                    bVar54 = false;
                  }
                  uVar52 = uVar52 + 1;
                  lVar31 = lVar31 + 8;
                  pvVar38 = local_1230;
                  FVar39.Data = (FScriptContainerElement *)local_1428;
                } while ((int)uVar52 < (int)local_1228);
              }
            }
            else {
              ::FString::FString(&local_d88,L"Metadata array value num doesn\'t match.");
              ::FName::ToString(pFVar30,&local_728);
              ::FString::PrintfImpl(&local_a68,L"%s: %s");
              UE::Core::Private::Function::
              TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(enum_EMessageSeverity::Type,FString_const_&)>
              ::operator()(local_208,Error,&local_a68);
              if (local_a68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a68.Data.AllocatorInstance.Data);
              }
              if (local_728.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_728.Data.AllocatorInstance.Data);
              }
              if (local_d88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_d88.Data.AllocatorInstance.Data);
              }
              bVar54 = false;
              pvVar38 = local_1230;
            }
            goto LAB_14a2a8699;
          case Vector:
            local_fd8 = local_1408.Object;
            pTStack_fd0 = local_1408.SharedReferenceCount.ReferenceController;
            if (local_1408.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_1408.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_1408.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            if ((local_1408.Object == (FSampleTrackBase *)0x0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar17)) {
              pcVar4 = (code *)swi(3);
              uVar18 = (*pcVar4)();
              return (bool)uVar18;
            }
            (**(code **)(local_fd8->_padding_ + 200))(local_fd8,&local_1198,param_1,param_2);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_fd0);
            local_f38 = (float)(double)pFVar35[1]._padding_;
            local_f30 = (float)*(double *)&pFVar35[1].Type;
            local_f34 = (float)(double)pFVar35[1].Name;
            fVar56 = (float)this->Tolerance;
            if (((fVar56 < (float)((uint)(local_1198 - local_f38) & uVar51)) ||
                (fVar56 < (float)((uint)(local_1194 - local_f34) & uVar51))) ||
               (fVar56 < (float)((uint)(local_1190 - local_f30) & uVar51))) {
              ::FString::FString(&local_d68,L"Metadata value doesn\'t match.");
              ::FName::ToString(pFVar30,&local_708);
              ::FString::PrintfImpl(&local_a48,L"%s: %s");
              UE::Core::Private::Function::
              TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(enum_EMessageSeverity::Type,FString_const_&)>
              ::operator()(local_208,Error,&local_a48);
              if (local_a48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a48.Data.AllocatorInstance.Data);
              }
              FVar42.Data = local_d68.Data.AllocatorInstance.Data;
              if (local_708.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_708.Data.AllocatorInstance.Data);
                FVar42.Data = local_d68.Data.AllocatorInstance.Data;
              }
              goto LAB_14a2a836f;
            }
            break;
          case VectorArray:
            local_fc8 = local_1408.Object;
            pTStack_fc0 = local_1408.SharedReferenceCount.ReferenceController;
            if (local_1408.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_1408.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_1408.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            if ((local_1408.Object == (FSampleTrackBase *)0x0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar17)) {
              pcVar4 = (code *)swi(3);
              uVar18 = (*pcVar4)();
              return (bool)uVar18;
            }
            (**(code **)(local_fc8->_padding_ + 200))(local_fc8,&local_1220,param_1,param_2);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_fc0);
            if (local_1218 == pFVar35[1].Name.ComparisonIndex.Value) {
              uVar52 = 0;
              pvVar38 = local_1220;
              if (0 < (int)local_1218) {
                lVar55 = 0;
                lVar31 = 0;
                do {
                  uVar26 = 0;
                  if ((int)uVar52 < (int)local_1218) {
                    uVar26 = ~uVar52 >> 0x1f;
                  }
                  if ((uVar26 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar4 = (code *)swi(3);
                    uVar18 = (*pcVar4)();
                    return (bool)uVar18;
                  }
                  pvVar38 = local_1220;
                  fVar56 = (float)this->Tolerance;
                  uVar26 = 0;
                  if ((int)uVar52 < (int)pFVar35[1].Name.ComparisonIndex.Value) {
                    uVar26 = ~uVar52 >> 0x1f;
                  }
                  if ((uVar26 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar4 = (code *)swi(3);
                    uVar18 = (*pcVar4)();
                    return (bool)uVar18;
                  }
                  lVar3 = pFVar35[1]._padding_;
                  local_f28 = (float)*(double *)(lVar55 + lVar3);
                  local_f20 = (float)*(double *)(lVar55 + 0x10 + lVar3);
                  local_f24 = (float)*(double *)(lVar55 + 8 + lVar3);
                  if (((fVar56 < (float)((uint)(*(float *)(lVar31 + (longlong)pvVar38) - local_f28)
                                        & uVar51)) ||
                      (fVar56 < (float)((uint)(*(float *)(lVar31 + 4 + (longlong)pvVar38) -
                                              local_f24) & uVar51))) ||
                     (fVar56 < (float)((uint)(*(float *)(lVar31 + 8 + (longlong)pvVar38) - local_f20
                                             ) & uVar51))) {
                    ::FString::FString(&local_d48,L"Metadata array value element doesn\'t match.");
                    ::FName::ToString(local_13e0,&local_6e8);
                    ::FString::PrintfImpl(&local_a28,L"%s: %s");
                    local_12c8[0] = 1;
                    UE::Core::Private::Function::CheckCallable(local_208[0]);
                    pcVar4 = local_208[0];
                    plVar43 = local_1f8;
                    if (local_1e0 != (longlong *)0x0) {
                      plVar43 = local_1e0;
                    }
                    uVar37 = (**(code **)(*plVar43 + 8))();
                    (*pcVar4)(uVar37,local_12c8);
                    if (local_a28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_a28.Data.AllocatorInstance.Data);
                    }
                    if (local_6e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_6e8.Data.AllocatorInstance.Data);
                    }
                    if (local_d48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_d48.Data.AllocatorInstance.Data);
                    }
                    bVar54 = false;
                  }
                  uVar52 = uVar52 + 1;
                  lVar31 = lVar31 + 0xc;
                  lVar55 = lVar55 + 0x18;
                  pvVar38 = local_1220;
                  FVar39.Data = (FScriptContainerElement *)local_1428;
                } while ((int)uVar52 < (int)local_1218);
              }
            }
            else {
              ::FString::FString(&local_d58,L"Metadata array value num doesn\'t match.");
              ::FName::ToString(pFVar30,&local_6f8);
              ::FString::PrintfImpl(&local_a38,L"%s: %s");
              UE::Core::Private::Function::
              TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(enum_EMessageSeverity::Type,FString_const_&)>
              ::operator()(local_208,Error,&local_a38);
              if (local_a38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a38.Data.AllocatorInstance.Data);
              }
              if (local_6f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_6f8.Data.AllocatorInstance.Data);
              }
              if (local_d58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_d58.Data.AllocatorInstance.Data);
              }
              bVar54 = false;
              pvVar38 = local_1220;
            }
            goto LAB_14a2a8699;
          case Rotator:
            local_fb8 = local_1408.Object;
            pTStack_fb0 = local_1408.SharedReferenceCount.ReferenceController;
            if (local_1408.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_1408.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_1408.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            if ((local_1408.Object == (FSampleTrackBase *)0x0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar17)) {
              pcVar4 = (code *)swi(3);
              uVar18 = (*pcVar4)();
              return (bool)uVar18;
            }
            puVar36 = (undefined8 *)
                      (**(code **)(local_fb8->_padding_ + 200))(local_fb8,local_39c,param_1,param_2)
            ;
            local_4a8._s_0.X = (double)(float)*puVar36;
            local_4a8._s_0.Y = (double)(float)((ulonglong)*puVar36 >> 0x20);
            local_4a8._s_0.Z = (double)*(float *)(puVar36 + 1);
            UE::Math::TRotator<double>::MakeFromEuler(&local_300,(TVector<double> *)&local_4a8._s_0)
            ;
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_fb0);
            bVar17 = UE::Math::TRotator<double>::EqualsOrientation
                               (&local_300,(TRotator<double> *)(pFVar35 + 1),
                                (double)(float)this->Tolerance);
            if (!bVar17) {
              ::FString::FString(&local_d38,L"Metadata value doesn\'t match.");
              ::FName::ToString(pFVar30,&local_6d8);
              ::FString::PrintfImpl(&local_a18,L"%s: %s");
              UE::Core::Private::Function::
              TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(enum_EMessageSeverity::Type,FString_const_&)>
              ::operator()(local_208,Error,&local_a18);
              if (local_a18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a18.Data.AllocatorInstance.Data);
              }
              FVar42.Data = local_d38.Data.AllocatorInstance.Data;
              if (local_6d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_6d8.Data.AllocatorInstance.Data);
                FVar42.Data = local_d38.Data.AllocatorInstance.Data;
              }
              goto LAB_14a2a836f;
            }
            break;
          case RotatorArray:
            local_fa8 = local_1408.Object;
            pTStack_fa0 = local_1408.SharedReferenceCount.ReferenceController;
            if (local_1408.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_1408.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_1408.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            if ((local_1408.Object == (FSampleTrackBase *)0x0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar17)) {
              pcVar4 = (code *)swi(3);
              uVar18 = (*pcVar4)();
              return (bool)uVar18;
            }
            (**(code **)(local_fa8->_padding_ + 200))(local_fa8,&local_f98,param_1,param_2);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_fa0);
            if (local_f90 == pFVar35[1].Name.ComparisonIndex.Value) {
              uVar52 = 0;
              pvVar38 = local_f98;
              if (0 < (int)local_f90) {
                lVar31 = 0;
                do {
                  uVar26 = 0;
                  if ((int)uVar52 < (int)local_f90) {
                    uVar26 = ~uVar52 >> 0x1f;
                  }
                  if ((uVar26 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar4 = (code *)swi(3);
                    uVar18 = (*pcVar4)();
                    return (bool)uVar18;
                  }
                  local_890._s_0.Z = (double)*(float *)(lVar31 + 8 + (longlong)local_f98);
                  local_890._s_0.Y = (double)*(float *)(lVar31 + 4 + (longlong)local_f98);
                  local_890._s_0.X = (double)*(float *)(lVar31 + (longlong)local_f98);
                  this_01 = UE::Math::TRotator<double>::MakeFromEuler
                                      (&local_228,(TVector<double> *)&local_890._s_0);
                  dVar5 = this->Tolerance;
                  uVar26 = 0;
                  if ((int)uVar52 < (int)pFVar35[1].Name.ComparisonIndex.Value) {
                    uVar26 = ~uVar52 >> 0x1f;
                  }
                  if ((uVar26 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar4 = (code *)swi(3);
                    uVar18 = (*pcVar4)();
                    return (bool)uVar18;
                  }
                  bVar17 = UE::Math::TRotator<double>::EqualsOrientation
                                     (this_01,(TRotator<double> *)
                                              (pFVar35[1]._padding_ + (longlong)(int)uVar52 * 0x18),
                                      (double)(float)dVar5);
                  if (!bVar17) {
                    ::FString::FString(&local_d18,L"Metadata array value element doesn\'t match.");
                    ::FName::ToString(pFVar30,&local_6b8);
                    ::FString::PrintfImpl(&local_9f8,L"%s: %s");
                    local_12b8[0] = 1;
                    UE::Core::Private::Function::CheckCallable(local_208[0]);
                    pcVar4 = local_208[0];
                    plVar43 = local_1f8;
                    if (local_1e0 != (longlong *)0x0) {
                      plVar43 = local_1e0;
                    }
                    uVar37 = (**(code **)(*plVar43 + 8))();
                    (*pcVar4)(uVar37,local_12b8);
                    if (local_9f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_9f8.Data.AllocatorInstance.Data);
                    }
                    if (local_6b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_6b8.Data.AllocatorInstance.Data);
                    }
                    if (local_d18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_d18.Data.AllocatorInstance.Data);
                    }
                    bVar54 = false;
                  }
                  uVar52 = uVar52 + 1;
                  lVar31 = lVar31 + 0xc;
                  pvVar38 = local_f98;
                  FVar39.Data = (FScriptContainerElement *)local_1428;
                } while ((int)uVar52 < (int)local_f90);
              }
            }
            else {
              ::FString::FString(&local_d28,L"Metadata array value num doesn\'t match.");
              ::FName::ToString(pFVar30,&local_6c8);
              ::FString::PrintfImpl(&local_a08,L"%s: %s");
              local_12c0[0] = 1;
              UE::Core::Private::Function::CheckCallable(local_208[0]);
              pcVar4 = local_208[0];
              plVar43 = local_1f8;
              if (local_1e0 != (longlong *)0x0) {
                plVar43 = local_1e0;
              }
              uVar37 = (**(code **)(*plVar43 + 8))();
              (*pcVar4)(uVar37,local_12c0);
              if (local_a08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_a08.Data.AllocatorInstance.Data);
              }
              if (local_6c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_6c8.Data.AllocatorInstance.Data);
              }
              if (local_d28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_d28.Data.AllocatorInstance.Data);
              }
              bVar54 = false;
              pvVar38 = local_f98;
            }
            goto LAB_14a2a8699;
          case Quat:
            local_f88 = local_1408.Object;
            pTStack_f80 = local_1408.SharedReferenceCount.ReferenceController;
            if (local_1408.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_1408.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_1408.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            if ((local_1408.Object == (FSampleTrackBase *)0x0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar17)) {
              pcVar4 = (code *)swi(3);
              uVar18 = (*pcVar4)();
              return (bool)uVar18;
            }
            (**(code **)(local_f88->_padding_ + 200))(local_f88,&local_6a8,param_1,param_2);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_f80);
            fStack_f70 = (float)*(double *)&pFVar35[1].Type;
            fStack_f74 = (float)(double)pFVar35[1].Name;
            local_f78 = (float)(double)pFVar35[1]._padding_;
            fStack_f6c = (float)(double)pFVar35[1].ValueProperty;
            fVar56 = (float)this->Tolerance;
            auVar65._4_4_ = -(uint)(fVar56 < (float)((uint)(fStack_6a4 - fStack_f74) & uVar46));
            auVar65._0_4_ = -(uint)(fVar56 < (float)((uint)(local_6a8 - local_f78) & uVar51));
            auVar65._8_4_ = -(uint)(fVar56 < (float)((uint)(fStack_6a0 - fStack_f70) & uVar24));
            auVar65._12_4_ = -(uint)(fVar56 < (float)((uint)(fStack_69c - fStack_f6c) & uVar13));
            iVar23 = movmskps(extraout_EAX,auVar65);
            if ((iVar23 != 0) &&
               (auVar7._4_4_ = -(uint)(fVar56 < (float)((uint)(fStack_f74 + fStack_6a4) & uVar46)),
               auVar7._0_4_ = -(uint)(fVar56 < (float)((uint)(local_f78 + local_6a8) & uVar51)),
               auVar7._8_4_ = -(uint)(fVar56 < (float)((uint)(fStack_f70 + fStack_6a0) & uVar24)),
               auVar7._12_4_ = -(uint)(fVar56 < (float)((uint)(fStack_f6c + fStack_69c) & uVar13)),
               iVar23 = movmskps(iVar23,auVar7), iVar23 != 0)) {
              ::FString::FString(&local_d08,L"Metadata value doesn\'t match.");
              ::FName::ToString(pFVar30,&local_698);
              ::FString::PrintfImpl(&local_b08,L"%s: %s");
              UE::Core::Private::Function::
              TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(enum_EMessageSeverity::Type,FString_const_&)>
              ::operator()(local_208,Error,&local_b08);
              if (local_b08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b08.Data.AllocatorInstance.Data);
              }
              FVar42.Data = local_d08.Data.AllocatorInstance.Data;
              if (local_698.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_698.Data.AllocatorInstance.Data);
                FVar42.Data = local_d08.Data.AllocatorInstance.Data;
              }
              goto LAB_14a2a836f;
            }
            break;
          case QuatArray:
            local_10b8 = local_1408.Object;
            pTStack_10b0 = local_1408.SharedReferenceCount.ReferenceController;
            if (local_1408.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_1408.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_1408.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            if ((local_1408.Object == (FSampleTrackBase *)0x0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar17)) {
              pcVar4 = (code *)swi(3);
              uVar18 = (*pcVar4)();
              return (bool)uVar18;
            }
            (**(code **)(local_10b8->_padding_ + 200))(local_10b8,&local_1210,param_1,param_2);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_10b0);
            if (local_1208 == pFVar35[1].Name.ComparisonIndex.Value) {
              uVar52 = 0;
              pvVar38 = local_1210;
              if (0 < (int)local_1208) {
                lVar31 = 0;
                lVar55 = 0;
                do {
                  uVar26 = 0;
                  if ((int)uVar52 < (int)local_1208) {
                    uVar26 = ~uVar52 >> 0x1f;
                  }
                  if ((uVar26 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar4 = (code *)swi(3);
                    uVar18 = (*pcVar4)();
                    return (bool)uVar18;
                  }
                  pvVar38 = local_1210;
                  fVar56 = (float)this->Tolerance;
                  uVar26 = 0;
                  if ((int)uVar52 < (int)pFVar35[1].Name.ComparisonIndex.Value) {
                    uVar26 = ~uVar52 >> 0x1f;
                  }
                  if ((uVar26 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar4 = (code *)swi(3);
                    uVar18 = (*pcVar4)();
                    return (bool)uVar18;
                  }
                  lVar3 = pFVar35[1]._padding_;
                  fStack_10c0 = (float)*(double *)(lVar31 + 0x10 + lVar3);
                  fStack_10c4 = (float)*(double *)(lVar31 + 8 + lVar3);
                  local_10c8 = (float)*(double *)(lVar31 + lVar3);
                  fStack_10bc = (float)*(double *)(lVar31 + 0x18 + lVar3);
                  pfVar34 = (float *)(lVar55 + (longlong)pvVar38);
                  auVar66._4_4_ =
                       -(uint)(fVar56 < (float)((uint)(pfVar34[1] - fStack_10c4) & uVar46));
                  auVar66._0_4_ = -(uint)(fVar56 < (float)((uint)(*pfVar34 - local_10c8) & uVar51));
                  auVar66._8_4_ =
                       -(uint)(fVar56 < (float)((uint)(pfVar34[2] - fStack_10c0) & uVar24));
                  auVar66._12_4_ =
                       -(uint)(fVar56 < (float)((uint)(pfVar34[3] - fStack_10bc) & uVar13));
                  iVar23 = movmskps((int)lVar3,auVar66);
                  if ((iVar23 != 0) &&
                     (auVar6._4_4_ = -(uint)(fVar56 < (float)((uint)(pfVar34[1] + fStack_10c4) &
                                                             uVar46)),
                     auVar6._0_4_ = -(uint)(fVar56 < (float)((uint)(*pfVar34 + local_10c8) & uVar51)
                                           ),
                     auVar6._8_4_ = -(uint)(fVar56 < (float)((uint)(pfVar34[2] + fStack_10c0) &
                                                            uVar24)),
                     auVar6._12_4_ =
                          -(uint)(fVar56 < (float)((uint)(pfVar34[3] + fStack_10bc) & uVar13)),
                     iVar23 = movmskps(iVar23,auVar6), iVar23 != 0)) {
                    ::FString::FString(&local_ce8,L"Metadata array value element doesn\'t match.");
                    ::FName::ToString(local_13e0,&local_678);
                    ::FString::PrintfImpl(&local_9d8,L"%s: %s");
                    local_12b0[0] = 1;
                    UE::Core::Private::Function::CheckCallable(local_208[0]);
                    pcVar4 = local_208[0];
                    plVar43 = local_1f8;
                    if (local_1e0 != (longlong *)0x0) {
                      plVar43 = local_1e0;
                    }
                    uVar37 = (**(code **)(*plVar43 + 8))();
                    (*pcVar4)(uVar37,local_12b0);
                    if (local_9d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_9d8.Data.AllocatorInstance.Data);
                    }
                    if (local_678.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_678.Data.AllocatorInstance.Data);
                    }
                    if (local_ce8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_ce8.Data.AllocatorInstance.Data);
                    }
                    bVar54 = false;
                  }
                  uVar52 = uVar52 + 1;
                  lVar55 = lVar55 + 0x10;
                  lVar31 = lVar31 + 0x20;
                  pvVar38 = local_1210;
                  FVar39.Data = (FScriptContainerElement *)local_1428;
                } while ((int)uVar52 < (int)local_1208);
              }
            }
            else {
              ::FString::FString(&local_cf8,L"Metadata array value num doesn\'t match.");
              ::FName::ToString(pFVar30,&local_688);
              ::FString::PrintfImpl(&local_9e8,L"%s: %s");
              UE::Core::Private::Function::
              TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(enum_EMessageSeverity::Type,FString_const_&)>
              ::operator()(local_208,Error,&local_9e8);
              if (local_9e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_9e8.Data.AllocatorInstance.Data);
              }
              if (local_688.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_688.Data.AllocatorInstance.Data);
              }
              if (local_cf8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_cf8.Data.AllocatorInstance.Data);
              }
              bVar54 = false;
              pvVar38 = local_1210;
            }
            goto LAB_14a2a8699;
          case Transform:
            local_10d8 = local_1408.Object;
            pTStack_10d0 = local_1408.SharedReferenceCount.ReferenceController;
            if (local_1408.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_1408.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_1408.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            if ((local_1408.Object == (FSampleTrackBase *)0x0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar17)) {
              pcVar4 = (code *)swi(3);
              uVar18 = (*pcVar4)();
              return (bool)uVar18;
            }
            (**(code **)(local_10d8->_padding_ + 200))(local_10d8,&local_138,param_1,param_2);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_10d0);
            local_2c8 = (double)pFVar35[2]._padding_;
            FStack_2c0 = pFVar35[2].Name;
            local_2b8 = *(double *)&pFVar35[2].Type;
            pFStack_2b0 = pFVar35[2].ValueProperty;
            local_2d8 = *(double *)&pFVar35[3].Type;
            pFStack_2d0 = pFVar35[3].ValueProperty;
            local_2e8 = (double)pFVar35[3]._padding_;
            FStack_2e0 = pFVar35[3].Name;
            local_448 = (float)local_2c8;
            fStack_444 = (float)(double)FStack_2c0;
            local_1174 = (float)local_2b8;
            fStack_43c = (float)(double)pFStack_2b0;
            local_2a8 = (double)pFVar35[1]._padding_;
            FStack_2a0 = pFVar35[1].Name;
            local_298 = *(double *)&pFVar35[1].Type;
            pFStack_290 = pFVar35[1].ValueProperty;
            fStack_450 = (float)local_298;
            fStack_44c = (float)(double)pFStack_290;
            local_458 = (float)local_2a8;
            fStack_454 = (float)(double)FStack_2a0;
            local_438 = (float)local_2e8;
            fStack_434 = (float)(double)FStack_2e0;
            local_1188 = local_128;
            fStack_1184 = fStack_124;
            fStack_430 = (float)local_2d8;
            fStack_42c = (float)(double)pFStack_2d0;
            local_1180 = fStack_120;
            local_117c = CONCAT44(fStack_444,local_448);
            fVar56 = (float)this->Tolerance;
            fStack_440 = local_1174;
            if (((fVar56 < (float)((uint)(local_128 - local_448) & uVar51)) ||
                (fVar56 < (float)((uint)(fStack_124 - fStack_444) & uVar51))) ||
               (fVar56 < (float)((uint)(fStack_120 - local_1174) & uVar51))) {
              ::FString::FString(&local_cd8,L"Metadata location value doesn\'t match.");
              ::FName::ToString(pFVar30,&local_668);
              ::FString::PrintfImpl(&local_9c8,L"%s: %s");
              local_12a8[0] = 1;
              UE::Core::Private::Function::CheckCallable(local_208[0]);
              pcVar4 = local_208[0];
              plVar43 = local_1f8;
              if (local_1e0 != (longlong *)0x0) {
                plVar43 = local_1e0;
              }
              uVar37 = (**(code **)(*plVar43 + 8))();
              (*pcVar4)(uVar37,local_12a8);
              if (local_9c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_9c8.Data.AllocatorInstance.Data);
              }
              if (local_668.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_668.Data.AllocatorInstance.Data);
              }
              if (local_cd8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_cd8.Data.AllocatorInstance.Data);
              }
              bVar54 = false;
            }
            local_658.X = local_138.X;
            local_658.Y = local_138.Y;
            local_658.Z = local_138.Z;
            local_658.W = local_138.W;
            UE::Math::TQuat<float>::Rotator(&local_658,&local_8f8);
            dVar5 = this->Tolerance;
            local_648.Y = fStack_454;
            local_648.X = local_458;
            local_648.W = fStack_44c;
            local_648.Z = fStack_450;
            UE::Math::TQuat<float>::Rotator(&local_648,&local_8b8);
            bVar17 = UE::Math::TRotator<float>::EqualsOrientation
                               (&local_8f8,&local_8b8,(float)dVar5);
            if (!bVar17) {
              ::FString::FString(&local_cc8,L"Metadata rotation value doesn\'t match.");
              ::FName::ToString(pFVar30,&local_638);
              ::FString::PrintfImpl(&local_9b8,L"%s: %s");
              UE::Core::Private::Function::
              TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(enum_EMessageSeverity::Type,FString_const_&)>
              ::operator()(local_208,Error,&local_9b8);
              if (local_9b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_9b8.Data.AllocatorInstance.Data);
              }
              if (local_638.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_638.Data.AllocatorInstance.Data);
              }
              if (local_cc8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_cc8.Data.AllocatorInstance.Data);
              }
              bVar54 = false;
            }
            local_1170 = local_118;
            fStack_116c = fStack_114;
            local_1168 = fStack_110;
            local_1164 = local_438;
            fStack_1160 = fStack_434;
            local_115c = fStack_430;
            fVar56 = (float)this->Tolerance;
            if (((fVar56 < (float)((uint)(local_118 - local_438) & uVar51)) ||
                (fVar56 < (float)((uint)(fStack_114 - fStack_434) & uVar51))) ||
               (fVar56 < (float)((uint)(fStack_110 - fStack_430) & uVar51))) {
              ::FString::FString(&local_cb8,L"Metadata scale value doesn\'t match.");
              ::FName::ToString(pFVar30,&local_628);
              ::FString::PrintfImpl(&local_9a8,L"%s: %s");
              UE::Core::Private::Function::
              TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(enum_EMessageSeverity::Type,FString_const_&)>
              ::operator()(local_208,Error,&local_9a8);
              if (local_9a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_9a8.Data.AllocatorInstance.Data);
              }
              FVar42.Data = local_cb8.Data.AllocatorInstance.Data;
              if (local_628.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_628.Data.AllocatorInstance.Data);
                FVar42.Data = local_cb8.Data.AllocatorInstance.Data;
              }
              goto LAB_14a2a836f;
            }
            break;
          case TransformArray:
            local_10e8 = local_1408.Object;
            pTStack_10e0 = local_1408.SharedReferenceCount.ReferenceController;
            if (local_1408.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_1408.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_1408.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            if ((local_1408.Object == (FSampleTrackBase *)0x0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar17)) {
              pcVar4 = (code *)swi(3);
              uVar18 = (*pcVar4)();
              return (bool)uVar18;
            }
            (**(code **)(local_10e8->_padding_ + 200))(local_10e8,&local_1390,param_1,param_2);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_10e0);
            if (local_1388 == pFVar35[1].Name.ComparisonIndex.Value) {
              uVar52 = 0;
              pvVar38 = local_1390;
              if (0 < (int)local_1388) {
                lVar31 = 0;
                lVar55 = 0;
                do {
                  uVar50 = ~uVar52 >> 0x1f;
                  uVar26 = 0;
                  if ((int)uVar52 < (int)pFVar35[1].Name.ComparisonIndex.Value) {
                    uVar26 = uVar50;
                  }
                  if ((uVar26 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar4 = (code *)swi(3);
                    uVar18 = (*pcVar4)();
                    return (bool)uVar18;
                  }
                  lVar3 = pFVar35[1]._padding_;
                  pdVar2 = (double *)(lVar55 + 0x40 + lVar3);
                  local_288 = *pdVar2;
                  dStack_280 = pdVar2[1];
                  pdVar2 = (double *)(lVar55 + 0x50 + lVar3);
                  local_278 = *pdVar2;
                  dStack_270 = pdVar2[1];
                  fVar56 = (float)local_278;
                  fVar73 = (float)local_288;
                  fVar74 = (float)dStack_280;
                  pdVar2 = (double *)(lVar55 + 0x30 + lVar3);
                  local_258 = *pdVar2;
                  dStack_250 = pdVar2[1];
                  fVar57 = (float)local_258;
                  pdVar2 = (double *)(lVar55 + 0x20 + lVar3);
                  local_268 = *pdVar2;
                  dStack_260 = pdVar2[1];
                  fVar69 = (float)local_268;
                  fVar70 = (float)dStack_260;
                  pdVar2 = (double *)(lVar55 + 0x10 + lVar3);
                  local_238 = *pdVar2;
                  dStack_230 = pdVar2[1];
                  local_248 = *(double *)(lVar55 + lVar3);
                  dStack_240 = ((double *)(lVar55 + lVar3))[1];
                  fVar58 = (float)local_238;
                  fVar67 = (float)dStack_230;
                  uVar26 = 0;
                  if ((int)uVar52 < (int)local_1388) {
                    uVar26 = uVar50;
                  }
                  fVar77 = (float)local_248;
                  fVar78 = (float)dStack_240;
                  if ((uVar26 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar4 = (code *)swi(3);
                    uVar18 = (*pcVar4)();
                    return (bool)uVar18;
                  }
                  pfVar34 = (float *)(lVar31 + 0x10 + (longlong)local_1390);
                  local_1158 = *pfVar34;
                  fStack_1154 = pfVar34[1];
                  local_1150 = pfVar34[2];
                  local_114c = CONCAT44(fVar70,fVar69);
                  fVar68 = (float)this->Tolerance;
                  local_1144 = fVar57;
                  if (((fVar68 < (float)((uint)(local_1158 - fVar69) & uVar51)) ||
                      (fVar68 < (float)((uint)(fStack_1154 - fVar70) & uVar51))) ||
                     (fVar68 < (float)((uint)(local_1150 - fVar57) & uVar51))) {
                    ::FString::FString(&local_c98,
                                       L"Metadata array locationvalue element doesn\'t match.");
                    ::FName::ToString(local_13e0,&local_608);
                    ::FString::PrintfImpl(&local_988,L"%s: %s");
                    local_1298[0] = 1;
                    UE::Core::Private::Function::CheckCallable(local_208[0]);
                    pcVar4 = local_208[0];
                    plVar43 = local_1f8;
                    if (local_1e0 != (longlong *)0x0) {
                      plVar43 = local_1e0;
                    }
                    uVar37 = (**(code **)(*plVar43 + 8))();
                    (*pcVar4)(uVar37,local_1298);
                    if (local_988.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_988.Data.AllocatorInstance.Data);
                    }
                    if (local_608.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_608.Data.AllocatorInstance.Data);
                    }
                    if (local_c98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_c98.Data.AllocatorInstance.Data);
                    }
                    bVar54 = false;
                  }
                  uVar26 = 0;
                  if ((int)uVar52 < (int)local_1388) {
                    uVar26 = uVar50;
                  }
                  if ((uVar26 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar4 = (code *)swi(3);
                    uVar18 = (*pcVar4)();
                    return (bool)uVar18;
                  }
                  local_5f8._0_8_ = *(undefined8 *)(lVar31 + (longlong)local_1390);
                  local_5f8._8_8_ = ((undefined8 *)(lVar31 + (longlong)local_1390))[1];
                  UE::Math::TQuat<float>::Rotator(&local_5f8,&local_8e0);
                  dVar5 = this->Tolerance;
                  local_5e8.X = fVar77;
                  local_5e8.Y = fVar78;
                  local_5e8.Z = fVar58;
                  local_5e8.W = fVar67;
                  UE::Math::TQuat<float>::Rotator(&local_5e8,&local_8ec);
                  bVar17 = UE::Math::TRotator<float>::EqualsOrientation
                                     (&local_8e0,&local_8ec,(float)dVar5);
                  if (!bVar17) {
                    ::FString::FString(&local_c88,
                                       L"Metadata array rotation value element doesn\'t match.");
                    ::FName::ToString(local_13e0,&local_5d8);
                    ::FString::PrintfImpl(&local_978,L"%s: %s");
                    local_1290[0] = 1;
                    UE::Core::Private::Function::CheckCallable(local_208[0]);
                    pcVar4 = local_208[0];
                    plVar43 = local_1f8;
                    if (local_1e0 != (longlong *)0x0) {
                      plVar43 = local_1e0;
                    }
                    uVar37 = (**(code **)(*plVar43 + 8))();
                    (*pcVar4)(uVar37,local_1290);
                    if (local_978.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_978.Data.AllocatorInstance.Data);
                    }
                    if (local_5d8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_5d8.Data.AllocatorInstance.Data);
                    }
                    if (local_c88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_c88.Data.AllocatorInstance.Data);
                    }
                    bVar54 = false;
                  }
                  uVar26 = 0;
                  if ((int)uVar52 < (int)local_1388) {
                    uVar26 = uVar50;
                  }
                  if ((uVar26 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar4 = (code *)swi(3);
                    uVar18 = (*pcVar4)();
                    return (bool)uVar18;
                  }
                  pfVar34 = (float *)(lVar31 + 0x20 + (longlong)local_1390);
                  local_1140 = *pfVar34;
                  fStack_113c = pfVar34[1];
                  local_1138 = pfVar34[2];
                  local_1134 = CONCAT44(fVar74,fVar73);
                  fVar57 = (float)this->Tolerance;
                  local_112c = fVar56;
                  if (((fVar57 < (float)((uint)(local_1140 - fVar73) & uVar51)) ||
                      (fVar57 < (float)((uint)(fStack_113c - fVar74) & uVar51))) ||
                     (fVar57 < (float)((uint)(local_1138 - fVar56) & uVar51))) {
                    ::FString::FString(&local_c78,
                                       L"Metadata array scale value element doesn\'t match.");
                    ::FName::ToString(local_13e0,&local_5c8);
                    ::FString::PrintfImpl(&local_968,L"%s: %s");
                    local_1288[0] = 1;
                    UE::Core::Private::Function::CheckCallable(local_208[0]);
                    pcVar4 = local_208[0];
                    plVar43 = local_1f8;
                    if (local_1e0 != (longlong *)0x0) {
                      plVar43 = local_1e0;
                    }
                    uVar37 = (**(code **)(*plVar43 + 8))();
                    (*pcVar4)(uVar37,local_1288);
                    if (local_968.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_968.Data.AllocatorInstance.Data);
                    }
                    if (local_5c8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_5c8.Data.AllocatorInstance.Data);
                    }
                    if (local_c78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_c78.Data.AllocatorInstance.Data);
                    }
                    bVar54 = false;
                  }
                  uVar52 = uVar52 + 1;
                  lVar55 = lVar55 + 0x60;
                  lVar31 = lVar31 + 0x30;
                  pvVar38 = local_1390;
                  FVar39.Data = (FScriptContainerElement *)local_1428;
                } while ((int)uVar52 < (int)local_1388);
              }
            }
            else {
              ::FString::FString(&local_ca8,L"Metadata array value num doesn\'t match.");
              ::FName::ToString(pFVar30,&local_618);
              ::FString::PrintfImpl(&local_998,L"%s: %s");
              UE::Core::Private::Function::
              TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(enum_EMessageSeverity::Type,FString_const_&)>
              ::operator()(local_208,Error,&local_998);
              if (local_998.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_998.Data.AllocatorInstance.Data);
              }
              if (local_618.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_618.Data.AllocatorInstance.Data);
              }
              if (local_ca8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_ca8.Data.AllocatorInstance.Data);
              }
              bVar54 = false;
              pvVar38 = local_1390;
            }
            goto LAB_14a2a8699;
          case LinearColor:
            local_10a8 = local_1408.Object;
            pTStack_10a0 = local_1408.SharedReferenceCount.ReferenceController;
            if (local_1408.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_1408.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_1408.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            if ((local_1408.Object == (FSampleTrackBase *)0x0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar17)) {
              pcVar4 = (code *)swi(3);
              uVar18 = (*pcVar4)();
              return (bool)uVar18;
            }
            (**(code **)(local_10a8->_padding_ + 200))(local_10a8,&local_1098,param_1,param_2);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_10a0);
            fVar56 = (float)this->Tolerance;
            if (((fVar56 <= (float)((uint)(local_1098 - *(float *)&pFVar35[1]._padding_) & uVar51))
                || (fVar56 <= (float)((uint)(local_1094 -
                                            *(float *)((longlong)&pFVar35[1]._padding_ + 4)) &
                                     uVar51))) ||
               ((fVar56 <= (float)((uint)(local_1090 - (float)pFVar35[1].Name.ComparisonIndex.Value)
                                  & uVar51) ||
                (fVar56 <= (float)((uint)(local_108c - (float)pFVar35[1].Name.Number) & uVar51)))))
            {
              ::FString::FString(&local_c68,L"Metadata value doesn\'t match.");
              ::FName::ToString(pFVar30,&local_5b8);
              ::FString::PrintfImpl(&local_958,L"%s: %s");
              UE::Core::Private::Function::
              TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(enum_EMessageSeverity::Type,FString_const_&)>
              ::operator()(local_208,Error,&local_958);
              if (local_958.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_958.Data.AllocatorInstance.Data);
              }
              FVar42.Data = local_c68.Data.AllocatorInstance.Data;
              if (local_5b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_5b8.Data.AllocatorInstance.Data);
                FVar42.Data = local_c68.Data.AllocatorInstance.Data;
              }
              goto LAB_14a2a836f;
            }
            break;
          case LinearColorArray:
            local_1088 = local_1408.Object;
            pTStack_1080 = local_1408.SharedReferenceCount.ReferenceController;
            if (local_1408.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_1408.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_1408.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            if ((local_1408.Object == (FSampleTrackBase *)0x0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar17)) {
              pcVar4 = (code *)swi(3);
              uVar18 = (*pcVar4)();
              return (bool)uVar18;
            }
            (**(code **)(local_1088->_padding_ + 200))(local_1088,&local_1200,param_1,param_2);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_1080);
            if (local_11f8 == pFVar35[1].Name.ComparisonIndex.Value) {
              uVar52 = 0;
              pvVar38 = local_1200;
              FVar39.Data = (FScriptContainerElement *)local_1428;
              if (0 < (int)local_11f8) {
                lVar31 = 0;
                do {
                  uVar26 = 0;
                  if ((int)uVar52 < (int)local_11f8) {
                    uVar26 = ~uVar52 >> 0x1f;
                  }
                  if ((uVar26 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar4 = (code *)swi(3);
                    uVar18 = (*pcVar4)();
                    return (bool)uVar18;
                  }
                  pvVar38 = local_1200;
                  fVar56 = (float)this->Tolerance;
                  uVar26 = 0;
                  if ((int)uVar52 < (int)pFVar35[1].Name.ComparisonIndex.Value) {
                    uVar26 = ~uVar52 >> 0x1f;
                  }
                  if ((uVar26 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar4 = (code *)swi(3);
                    uVar18 = (*pcVar4)();
                    return (bool)uVar18;
                  }
                  lVar55 = pFVar35[1]._padding_;
                  if ((((fVar56 <= (float)((uint)(*(float *)(lVar31 + (longlong)pvVar38) -
                                                 *(float *)(lVar31 + lVar55)) & uVar51)) ||
                       (fVar56 <= (float)((uint)(*(float *)(lVar31 + 4 + (longlong)pvVar38) -
                                                *(float *)(lVar31 + 4 + lVar55)) & uVar51))) ||
                      (fVar56 <= (float)((uint)(*(float *)(lVar31 + 8 + (longlong)pvVar38) -
                                               *(float *)(lVar31 + 8 + lVar55)) & uVar51))) ||
                     (fVar56 <= (float)((uint)(*(float *)(lVar31 + 0xc + (longlong)pvVar38) -
                                              *(float *)(lVar31 + 0xc + lVar55)) & uVar51))) {
                    ::FString::FString(&local_c48,L"Metadata array value element doesn\'t match.");
                    ::FName::ToString(pFVar30,&local_598);
                    ::FString::PrintfImpl(&local_938,L"%s: %s");
                    local_1318[0] = 1;
                    UE::Core::Private::Function::CheckCallable(local_208[0]);
                    pcVar4 = local_208[0];
                    plVar43 = local_1f8;
                    if (local_1e0 != (longlong *)0x0) {
                      plVar43 = local_1e0;
                    }
                    uVar37 = (**(code **)(*plVar43 + 8))();
                    (*pcVar4)(uVar37,local_1318);
                    if (local_938.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_938.Data.AllocatorInstance.Data);
                    }
                    if (local_598.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_598.Data.AllocatorInstance.Data);
                    }
                    if (local_c48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_c48.Data.AllocatorInstance.Data);
                    }
                    bVar54 = false;
                  }
                  uVar52 = uVar52 + 1;
                  lVar31 = lVar31 + 0x10;
                  pvVar38 = local_1200;
                  FVar39.Data = (FScriptContainerElement *)local_1428;
                } while ((int)uVar52 < (int)local_11f8);
              }
            }
            else {
              ::FString::FString(&local_c58,L"Metadata array value num doesn\'t match.");
              ::FName::ToString(pFVar30,&local_5a8);
              ::FString::PrintfImpl(&local_948,L"%s: %s");
              UE::Core::Private::Function::
              TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(enum_EMessageSeverity::Type,FString_const_&)>
              ::operator()(local_208,Error,&local_948);
              if (local_948.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_948.Data.AllocatorInstance.Data);
              }
              if (local_5a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_5a8.Data.AllocatorInstance.Data);
              }
              if (local_c58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_c58.Data.AllocatorInstance.Data);
              }
              bVar54 = false;
              pvVar38 = local_1200;
            }
            goto LAB_14a2a8699;
          case RigElementKey:
            local_1078 = local_1408.Object;
            pTStack_1070 = local_1408.SharedReferenceCount.ReferenceController;
            if (local_1408.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_1408.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_1408.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            if ((local_1408.Object == (FSampleTrackBase *)0x0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar17)) {
              pcVar4 = (code *)swi(3);
              uVar18 = (*pcVar4)();
              return (bool)uVar18;
            }
            (**(code **)(local_1078->_padding_ + 200))(local_1078,local_f18,param_1,param_2);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_1070);
            if ((local_f14 != *(longlong *)((longlong)&pFVar35[1]._padding_ + 4)) ||
               (local_f18[0] != (char)pFVar35[1]._padding_)) {
              ::FString::FString(&local_c38,L"Metadata value doesn\'t match.");
              ::FName::ToString(pFVar30,&local_588);
              ::FString::PrintfImpl(&local_928,L"%s: %s");
              UE::Core::Private::Function::
              TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(enum_EMessageSeverity::Type,FString_const_&)>
              ::operator()(local_208,Error,&local_928);
              if (local_928.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_928.Data.AllocatorInstance.Data);
              }
              FVar42.Data = local_c38.Data.AllocatorInstance.Data;
              if (local_588.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_588.Data.AllocatorInstance.Data);
                FVar42.Data = local_c38.Data.AllocatorInstance.Data;
              }
              goto LAB_14a2a836f;
            }
            break;
          case RigElementKeyArray:
            local_1068 = local_1408.Object;
            pTStack_1060 = local_1408.SharedReferenceCount.ReferenceController;
            if (local_1408.SharedReferenceCount.ReferenceController !=
                (TReferenceControllerBase<1> *)0x0) {
              LOCK();
              (local_1408.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                   (atomic<int>)
                   ((int)(local_1408.SharedReferenceCount.ReferenceController)->SharedReferenceCount
                   + 1);
              UNLOCK();
            }
            if ((local_1408.Object == (FSampleTrackBase *)0x0) &&
               (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                   ("IsValid()",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                    ,0x458,L""), bVar17)) {
              pcVar4 = (code *)swi(3);
              uVar18 = (*pcVar4)();
              return (bool)uVar18;
            }
            (**(code **)(local_1068->_padding_ + 200))(local_1068,&local_11f0,param_1,param_2);
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (pTStack_1060);
            if (local_11e8 == pFVar35[1].Name.ComparisonIndex.Value) {
              uVar52 = 0;
              pvVar38 = local_11f0;
              if (0 < (int)local_11e8) {
                lVar31 = 0;
                do {
                  uVar26 = 0;
                  if ((int)uVar52 < (int)local_11e8) {
                    uVar26 = ~uVar52 >> 0x1f;
                  }
                  if ((uVar26 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar4 = (code *)swi(3);
                    uVar18 = (*pcVar4)();
                    return (bool)uVar18;
                  }
                  pvVar38 = local_11f0;
                  uVar26 = 0;
                  if ((int)uVar52 < (int)pFVar35[1].Name.ComparisonIndex.Value) {
                    uVar26 = ~uVar52 >> 0x1f;
                  }
                  if ((uVar26 == 0) &&
                     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar17)) {
                    pcVar4 = (code *)swi(3);
                    uVar18 = (*pcVar4)();
                    return (bool)uVar18;
                  }
                  if ((*(longlong *)(lVar31 + 4 + (longlong)pvVar38) !=
                       *(longlong *)(lVar31 + 4 + pFVar35[1]._padding_)) ||
                     (*(char *)(lVar31 + (longlong)pvVar38) !=
                      *(char *)(lVar31 + pFVar35[1]._padding_))) {
                    ::FString::FString(&local_ef8,L"Metadata array value element doesn\'t match.");
                    ::FName::ToString(pFVar30,&local_568);
                    ::FString::PrintfImpl(&local_908,L"%s: %s");
                    local_1280[0] = 1;
                    UE::Core::Private::Function::CheckCallable(local_208[0]);
                    pcVar4 = local_208[0];
                    plVar43 = local_1f8;
                    if (local_1e0 != (longlong *)0x0) {
                      plVar43 = local_1e0;
                    }
                    uVar37 = (**(code **)(*plVar43 + 8))();
                    (*pcVar4)(uVar37,local_1280);
                    if (local_908.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_908.Data.AllocatorInstance.Data);
                    }
                    if (local_568.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_568.Data.AllocatorInstance.Data);
                    }
                    if (local_ef8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_ef8.Data.AllocatorInstance.Data);
                    }
                    bVar54 = false;
                  }
                  uVar52 = uVar52 + 1;
                  lVar31 = lVar31 + 0xc;
                  pvVar38 = local_11f0;
                  FVar39.Data = (FScriptContainerElement *)local_1428;
                } while ((int)uVar52 < (int)local_11e8);
              }
            }
            else {
              ::FString::FString(&local_f08,L"Metadata array value num doesn\'t match.");
              ::FName::ToString(pFVar30,&local_578);
              ::FString::PrintfImpl(&local_918,L"%s: %s");
              UE::Core::Private::Function::
              TFunctionRefBase<UE::Core::Private::Function::TFunctionStorage<0>,void___cdecl(enum_EMessageSeverity::Type,FString_const_&)>
              ::operator()(local_208,Error,&local_918);
              if (local_918.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_918.Data.AllocatorInstance.Data);
              }
              if (local_578.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_578.Data.AllocatorInstance.Data);
              }
              if (local_f08.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_f08.Data.AllocatorInstance.Data);
              }
              bVar54 = false;
              pvVar38 = local_11f0;
            }
LAB_14a2a8699:
            if (pvVar38 != (void *)0x0) {
              FMemory::Free(pvVar38);
            }
            break;
          case Invalid:
            ::FString::FString(&local_bf8,L"Unsupported Metadata Type.");
            `UControlRigReplay::ValidateExpectedResults'::__l92::<lambda_2>::operator()
                      (local_208,Error,pFVar30,&local_bf8);
            if (local_bf8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_bf8.Data.AllocatorInstance.Data);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_1408.SharedReferenceCount.ReferenceController);
            if ((FName *)local_11a8.AllocatorInstance.Data != (FName *)0x0) {
              FMemory::Free(local_11a8.AllocatorInstance.Data);
            }
            if (local_208[0] != (code *)0x0) {
              plVar43 = local_1f8;
              if (local_1e0 != (longlong *)0x0) {
                plVar43 = local_1e0;
              }
              (**(code **)(*plVar43 + 0x10))();
            }
            if (local_1d8[0] != (code *)0x0) {
              plVar43 = local_1c8;
              if (local_1b0 != (longlong *)0x0) {
                plVar43 = local_1b0;
              }
              (**(code **)(*plVar43 + 0x10))();
            }
            if ((FRigElementKey *)local_1420.AllocatorInstance.Data != (FRigElementKey *)0x0) {
              FMemory::Free(local_1420.AllocatorInstance.Data);
            }
            if (*(longlong *)local_1360 != 0) {
              plVar43 = (longlong *)&local_1360->field_0x10;
              if (*(longlong **)&local_1360->field_0x28 != (longlong *)0x0) {
                plVar43 = *(longlong **)&local_1360->field_0x28;
              }
              (**(code **)(*plVar43 + 0x10))();
            }
            return false;
          }
switchD_14a2a8208_default:
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_1408.SharedReferenceCount.ReferenceController);
          uVar41 = (ulonglong)(uint)local_11a8.ArrayNum;
          FVar44.Data = FVar44.Data + 8;
          uVar45 = (ulonglong)local_13e8;
        }
        if ((FName *)local_11a8.AllocatorInstance.Data != (FName *)0x0) {
          FMemory::Free(local_11a8.AllocatorInstance.Data);
        }
        pFVar47 = local_1358;
        if (local_208[0] != (code *)0x0) {
          plVar43 = local_1f8;
          if (local_1e0 != (longlong *)0x0) {
            plVar43 = local_1e0;
          }
          (**(code **)(*plVar43 + 0x10))();
          pFVar47 = local_1358;
        }
      }
      uVar45 = (ulonglong)local_1268;
      FVar39.Data = FVar39.Data + 0xc;
    }
  }
  if (this->bValidateVariables != false) {
    local_13d8.Data = (FScriptContainerElement *)0x0;
    local_13d0 = 0;
    local_13b8.Struct = (UStruct *)local_11c0->_padding_;
    if (local_13b8.Struct == (UStruct *)0x0) {
      local_13b8.Field = (FField *)0x0;
    }
    else {
      local_13b8.Field = (local_13b8.Struct)->ChildProperties;
    }
    local_13b8.InterfaceIndex = -1;
    local_13b8.bIncludeSuper = true;
    local_13b8.bIncludeDeprecated = true;
    local_13b8.bIncludeInterface = false;
    TFieldIterator<FProperty>::IterateToNext(&local_13b8);
    pTVar15 = local_1360;
    this_00 = (FProperty *)local_13b8.Field;
    while (local_13b8.Field = (FField *)this_00, this_00 != (FProperty *)0x0) {
      pUVar32 = (UScriptStruct *)0x0;
      bVar17 = FField::IsNative((FField *)this_00);
      if (!bVar17) {
        if (this_00 != (FProperty *)0x0) {
          if ((*(uint *)(this_00->_padding_ + 0x18) >> 0x14 & 1) == 0) {
            if ((((this_00 != (FProperty *)0x0) &&
                 ((*(uint *)(this_00->_padding_ + 0x18) >> 0x15 & 1) != 0)) &&
                (lVar31 = this_00[1]._padding_, lVar31 != 0)) &&
               ((*(uint *)(*(longlong *)(lVar31 + 8) + 0x18) >> 0x14 & 1) != 0)) {
              pUVar32 = *(UScriptStruct **)(lVar31 + 0x70);
            }
          }
          else {
            pUVar32 = (UScriptStruct *)this_00[1]._padding_;
          }
        }
        pFVar30 = FControlRigReplayTracks::GetTrackName(local_1398,this_00);
        pFVar27 = FSampleTrackHost::GetContainer((FSampleTrackHost *)local_1398);
        FSampleTrackContainer::FindTrack(pFVar27,&local_1370,pFVar30);
        if (local_1370.Object == (FSampleTrackBase *)0x0) {
          if ((param_1 == 0) && (*(longlong *)pTVar15 != 0)) {
            bVar54 = IsThisNotNull(this_00,"FField::GetName");
            if (bVar54) {
              ::FName::ToString((FName *)&this_00->_padding_,&local_1108);
            }
            else {
              ::FString::FString(&local_1108,L"None");
            }
            ::FString::PrintfImpl
                      (&local_11d0,L"Frame [%04d]: Track for Variable \'%s\' is missing in replay.")
            ;
            if (local_1d8[0] != (code *)0x0) {
              local_1320[0] = 1;
              UE::Core::Private::Function::CheckCallable(local_1d8[0]);
              pcVar4 = local_1d8[0];
              plVar43 = local_1c8;
              if (local_1b0 != (longlong *)0x0) {
                plVar43 = local_1b0;
              }
              uVar37 = (**(code **)(*plVar43 + 8))();
              (*pcVar4)(uVar37,local_1320,&local_11d0);
            }
            pUVar16 = local_1a8;
            pTVar48 = &local_1a8->LastValidationWarningsAndErrors;
            pFVar49 = (pTVar48->AllocatorInstance).Data;
            if (((pFVar49 <= (FScriptContainerElement *)&local_11d0) &&
                ((FScriptContainerElement *)&local_11d0 <
                 pFVar49 + (longlong)(local_1a8->LastValidationWarningsAndErrors).ArrayMax * 0x10))
               && (bVar54 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar54)) {
              pcVar4 = (code *)swi(3);
              uVar18 = (*pcVar4)();
              return (bool)uVar18;
            }
            iVar23 = (pUVar16->LastValidationWarningsAndErrors).ArrayNum;
            piVar1 = &(pUVar16->LastValidationWarningsAndErrors).ArrayMax;
            if (iVar23 == *piVar1) {
              iVar23 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&pTVar48->AllocatorInstance,piVar1);
            }
            (pUVar16->LastValidationWarningsAndErrors).ArrayNum = iVar23 + 1;
            ::FString::FString((FString *)
                               ((pTVar48->AllocatorInstance).Data + (longlong)iVar23 * 0x10),
                               &local_11d0);
            FVar39.Data = local_1108.Data.AllocatorInstance.Data;
            if (local_11d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_11d0.Data.AllocatorInstance.Data);
              FVar39.Data = local_1108.Data.AllocatorInstance.Data;
            }
LAB_14a2ac4a2:
            if (FVar39.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(FVar39.Data);
            }
          }
LAB_14a2ac4ac:
          bVar54 = false;
        }
        else {
          EVar19 = FControlRigReplayTracks::GetTrackTypeFromProperty(this_00);
          if ((local_1370.Object == (FSampleTrackBase *)0x0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar17)) {
            pcVar4 = (code *)swi(3);
            uVar18 = (*pcVar4)();
            return (bool)uVar18;
          }
          EVar21 = (**(code **)((local_1370.Object)->_padding_ + 8))();
          if (EVar21 != EVar19) {
LAB_14a2ac153:
            if ((param_1 == 0) && (*(longlong *)pTVar15 != 0)) {
              bVar54 = IsThisNotNull(this_00,"FField::GetName");
              if (bVar54) {
                ::FName::ToString((FName *)&this_00->_padding_,&local_1118);
              }
              else {
                ::FString::FString(&local_1118,L"None");
              }
              ::FString::PrintfImpl
                        (&local_11e0,L"Frame [%04d]: Track for Variable \'%s\' has incorrect type.")
              ;
              if (local_1d8[0] != (code *)0x0) {
                local_1328[0] = 1;
                UE::Core::Private::Function::CheckCallable(local_1d8[0]);
                pcVar4 = local_1d8[0];
                plVar43 = local_1c8;
                if (local_1b0 != (longlong *)0x0) {
                  plVar43 = local_1b0;
                }
                uVar37 = (**(code **)(*plVar43 + 8))();
                (*pcVar4)(uVar37,local_1328,&local_11e0);
              }
              pUVar16 = local_1a8;
              pTVar48 = &local_1a8->LastValidationWarningsAndErrors;
              pFVar49 = (pTVar48->AllocatorInstance).Data;
              if (((pFVar49 <= (FScriptContainerElement *)&local_11e0) &&
                  ((FScriptContainerElement *)&local_11e0 <
                   pFVar49 + (longlong)(local_1a8->LastValidationWarningsAndErrors).ArrayMax * 0x10)
                  ) && (bVar54 = ::FDebug::CheckVerifyFailedImpl2
                                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x7a5,
                                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                           ), bVar54)) {
                pcVar4 = (code *)swi(3);
                uVar18 = (*pcVar4)();
                return (bool)uVar18;
              }
              iVar23 = (pUVar16->LastValidationWarningsAndErrors).ArrayNum;
              piVar1 = &(pUVar16->LastValidationWarningsAndErrors).ArrayMax;
              if (iVar23 == *piVar1) {
                iVar23 = UE::Core::Private::
                         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                   (0x810,&pTVar48->AllocatorInstance,piVar1);
              }
              (pUVar16->LastValidationWarningsAndErrors).ArrayNum = iVar23 + 1;
              ::FString::FString((FString *)
                                 ((pTVar48->AllocatorInstance).Data + (longlong)iVar23 * 0x10),
                                 &local_11e0);
              FVar39.Data = local_1118.Data.AllocatorInstance.Data;
              if (local_11e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_11e0.Data.AllocatorInstance.Data);
                FVar39.Data = local_1118.Data.AllocatorInstance.Data;
              }
              goto LAB_14a2ac4a2;
            }
            goto LAB_14a2ac4ac;
          }
          if ((local_1370.Object == (FSampleTrackBase *)0x0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar17)) {
            pcVar4 = (code *)swi(3);
            uVar18 = (*pcVar4)();
            return (bool)uVar18;
          }
          if ((local_1370.Object)->ScriptStruct != pUVar32) goto LAB_14a2ac153;
          local_1380.Data = (FScriptContainerElement *)0x0;
          local_1378 = 0;
          UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (1,1,this_00->ArrayDim * this_00->ElementSize,&local_1380,(int *)&local_1378,
                     (int *)((longlong)&local_1378 + 4));
          if (((uint)(int)this_00->PropertyFlags >> 9 & 1) == 0) {
            (**(code **)(this_00->_padding_ + 0x150))(this_00,local_1380.Data);
          }
          else {
            memset(local_1380.Data,0,(longlong)this_00->ArrayDim * (longlong)this_00->ElementSize);
          }
          if ((local_1370.Object == (FSampleTrackBase *)0x0) &&
             (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                                 ("IsValid()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                  ,0x458,L""), bVar17)) {
            pcVar4 = (code *)swi(3);
            uVar18 = (*pcVar4)();
            return (bool)uVar18;
          }
          (**(code **)((local_1370.Object)->_padding_ + 0x68))
                    (local_1370.Object,param_1,param_2,this_00);
          pvVar38 = FProperty::ContainerUObjectPtrToValuePtrInternal
                              (this_00,(UObject *)local_11c0,0);
          cVar22 = (**(code **)(this_00->_padding_ + 0xb8))(this_00,local_1380.Data,pvVar38,0);
          if (cVar22 == '\0') {
            bVar54 = IsThisNotNull(this_00,"FField::GetName");
            if (bVar54) {
              ::FName::ToString((FName *)&this_00->_padding_,&local_1128);
            }
            else {
              ::FString::FString(&local_1128,L"None");
            }
            ::FString::PrintfImpl
                      (&local_1350,L"Frame [%04d]: Variable \'%s\' value doesn\'t match replay.");
            if (local_1d8[0] != (code *)0x0) {
              local_1330[0] = 1;
              UE::Core::Private::Function::CheckCallable(local_1d8[0]);
              pcVar4 = local_1d8[0];
              plVar43 = local_1c8;
              if (local_1b0 != (longlong *)0x0) {
                plVar43 = local_1b0;
              }
              uVar37 = (**(code **)(*plVar43 + 8))();
              (*pcVar4)(uVar37,local_1330,&local_1350);
            }
            pUVar16 = local_1a8;
            pTVar48 = &local_1a8->LastValidationWarningsAndErrors;
            pFVar49 = (pTVar48->AllocatorInstance).Data;
            if (((pFVar49 <= (FScriptContainerElement *)&local_1350) &&
                ((FScriptContainerElement *)&local_1350 <
                 pFVar49 + (longlong)(local_1a8->LastValidationWarningsAndErrors).ArrayMax * 0x10))
               && (bVar54 = ::FDebug::CheckVerifyFailedImpl2
                                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                       ,0x7a5,
                                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                      ), bVar54)) {
              pcVar4 = (code *)swi(3);
              uVar18 = (*pcVar4)();
              return (bool)uVar18;
            }
            iVar23 = (pUVar16->LastValidationWarningsAndErrors).ArrayNum;
            piVar1 = &(pUVar16->LastValidationWarningsAndErrors).ArrayMax;
            if (iVar23 == *piVar1) {
              iVar23 = UE::Core::Private::
                       ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                 (0x810,&pTVar48->AllocatorInstance,piVar1);
            }
            FVar39.Data = local_1350.Data.AllocatorInstance.Data;
            (pUVar16->LastValidationWarningsAndErrors).ArrayNum = iVar23 + 1;
            pFVar49 = (pTVar48->AllocatorInstance).Data + (longlong)iVar23 * 0x10;
            *(undefined8 *)&pFVar49->field_0x0 = 0;
            lVar31 = (longlong)local_1350.Data.ArrayNum;
            *(int *)&pFVar49[8].field_0x0 = local_1350.Data.ArrayNum;
            if (local_1350.Data.ArrayNum == 0) {
              *(int *)(pFVar49 + 0xc) = 0;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (2,2,local_1350.Data.ArrayNum,0,(ForAnyElementType *)pFVar49,
                         local_1350.Data.ArrayNum,(int *)(pFVar49 + 0xc));
              memcpy(*(void **)&pFVar49->field_0x0,FVar39.Data,lVar31 * 2);
            }
            if (local_1350.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1350.Data.AllocatorInstance.Data);
            }
            if (local_1128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_1128.Data.AllocatorInstance.Data);
            }
            bVar54 = false;
          }
          if ((this_00->PropertyFlags & CPF_NoDestructor) == CPF_None) {
            (**(code **)(this_00->_padding_ + 0x138))(this_00,local_1380.Data);
          }
          if (local_1380.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1380.Data);
          }
        }
        bVar17 = IsThisNotNull(this_00,"FField::GetFName");
        if (bVar17) {
          local_13c8 = (FName)this_00->_padding_;
        }
        else {
          local_f68 = 0;
          local_13c8.ComparisonIndex.Value = 0;
          local_13c8.Number = 0;
        }
        if (((local_13d8.Data <= &local_13c8) &&
            (&local_13c8 < (FName *)(local_13d8.Data + (longlong)local_13d0._4_4_ * 8))) &&
           (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                               ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x7a5,
                                L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                               ), bVar17)) {
          pcVar4 = (code *)swi(3);
          uVar18 = (*pcVar4)();
          return (bool)uVar18;
        }
        iVar23 = (int)local_13d0;
        if ((int)local_13d0 == local_13d0._4_4_) {
          iVar23 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x408,&local_13d8,(int *)((longlong)&local_13d0 + 4));
        }
        local_13d0 = CONCAT44(local_13d0._4_4_,iVar23 + 1);
        *(FName *)(local_13d8.Data + (longlong)iVar23 * 8) = local_13c8;
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_1370.SharedReferenceCount.ReferenceController);
      }
      local_13b8.Field = (FField *)this_00->_padding_;
      TFieldIterator<FProperty>::IterateToNext(&local_13b8);
      this_00 = (FProperty *)local_13b8.Field;
    }
    if (param_1 == 0) {
      pFVar27 = FSampleTrackHost::GetContainer((FSampleTrackHost *)local_1398);
      FLazyName::Resolve(&FControlRigReplayTracks::VariableNamesName);
      iVar23 = FSampleTrackContainer::GetTrackIndex(pFVar27,&local_f50);
      if ((iVar23 < 0) || ((pFVar27->Tracks).ArrayNum <= iVar23)) {
        local_ec8 = (FSampleTrackBase *)0x0;
        pTStack_ec0 = (TReferenceControllerBase<1> *)0x0;
      }
      else {
        FSampleTrackContainer::GetTrack(pFVar27,&local_be8,iVar23);
        local_ec8 = local_be8.Object;
        pTStack_ec0 = local_be8.SharedReferenceCount.ReferenceController;
        if (local_be8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_be8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_be8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_be8.SharedReferenceCount.ReferenceController);
      }
      if (local_ec8 != (FSampleTrackBase *)0x0) {
        (**(code **)(local_ec8->_padding_ + 200))(local_ec8,&local_10f8,0,param_2);
        iVar23 = local_10f0;
        pFVar30 = local_10f8 + local_10f0;
        this_03 = local_10f8;
        while( true ) {
          if (local_10f0 != iVar23) {
            local_142a[0] = 0;
            `TCheckedPointerIterator<FName_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                      (local_142a);
          }
          if (this_03 == pFVar30) break;
          if ((FName *)local_13d8.Data != (FName *)(local_13d8.Data + (longlong)(int)local_13d0 * 8)
             ) {
            FVar39.Data = local_13d8.Data;
            do {
              if (*(FName *)FVar39.Data == *this_03) goto LAB_14a2ac855;
              FVar39.Data = FVar39.Data + 8;
            } while ((FName *)FVar39.Data !=
                     (FName *)(local_13d8.Data + (longlong)(int)local_13d0 * 8));
          }
          ::FName::ToString(this_03,&local_538);
          ::FString::PrintfImpl
                    (&local_1340,L"Frame [%04d]: Variable \'%s\' for stored track is missing.");
          if (local_1d8[0] != (code *)0x0) {
            local_12d8[0] = 1;
            UE::Core::Private::Function::CheckCallable(local_1d8[0]);
            pcVar4 = local_1d8[0];
            plVar43 = local_1c8;
            if (local_1b0 != (longlong *)0x0) {
              plVar43 = local_1b0;
            }
            uVar37 = (**(code **)(*plVar43 + 8))();
            (*pcVar4)(uVar37,local_12d8,&local_1340);
          }
          pUVar16 = local_1a8;
          pTVar48 = &local_1a8->LastValidationWarningsAndErrors;
          pFVar49 = (pTVar48->AllocatorInstance).Data;
          if (((pFVar49 <= (FScriptContainerElement *)&local_1340) &&
              ((FScriptContainerElement *)&local_1340 <
               pFVar49 + (longlong)(local_1a8->LastValidationWarningsAndErrors).ArrayMax * 0x10)) &&
             (bVar54 = ::FDebug::CheckVerifyFailedImpl2
                                 ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                  ,0x7a5,
                                  L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                 ), bVar54)) {
            pcVar4 = (code *)swi(3);
            uVar18 = (*pcVar4)();
            return (bool)uVar18;
          }
          iVar25 = (pUVar16->LastValidationWarningsAndErrors).ArrayNum;
          piVar1 = &(pUVar16->LastValidationWarningsAndErrors).ArrayMax;
          if (iVar25 == *piVar1) {
            iVar25 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x810,&pTVar48->AllocatorInstance,piVar1);
          }
          FVar39.Data = local_1340.Data.AllocatorInstance.Data;
          (pUVar16->LastValidationWarningsAndErrors).ArrayNum = iVar25 + 1;
          pFVar49 = (pTVar48->AllocatorInstance).Data + (longlong)iVar25 * 0x10;
          *(undefined8 *)&pFVar49->field_0x0 = 0;
          lVar31 = (longlong)local_1340.Data.ArrayNum;
          *(int *)&pFVar49[8].field_0x0 = local_1340.Data.ArrayNum;
          if (local_1340.Data.ArrayNum == 0) {
            *(int *)(pFVar49 + 0xc) = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_1340.Data.ArrayNum,0,(ForAnyElementType *)pFVar49,
                       local_1340.Data.ArrayNum,(int *)(pFVar49 + 0xc));
            memcpy(*(void **)&pFVar49->field_0x0,FVar39.Data,lVar31 * 2);
          }
          if (local_1340.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_1340.Data.AllocatorInstance.Data);
          }
          if (local_538.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_538.Data.AllocatorInstance.Data);
          }
          bVar54 = false;
LAB_14a2ac855:
          this_03 = this_03 + 1;
        }
        if (local_10f8 != (FName *)0x0) {
          FMemory::Free(local_10f8);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (pTStack_ec0);
    }
    if ((FName *)local_13d8.Data != (FName *)0x0) {
      FMemory::Free(local_13d8.Data);
    }
  }
  if (local_1d8[0] != (code *)0x0) {
    plVar43 = local_1c8;
    if (local_1b0 != (longlong *)0x0) {
      plVar43 = local_1b0;
    }
    (**(code **)(*plVar43 + 0x10))();
  }
  if ((FRigElementKey *)local_1420.AllocatorInstance.Data != (FRigElementKey *)0x0) {
    FMemory::Free(local_1420.AllocatorInstance.Data);
  }
  if (*(longlong *)local_1360 != 0) {
    plVar43 = (longlong *)&local_1360->field_0x10;
    if (*(longlong **)&local_1360->field_0x28 != (longlong *)0x0) {
      plVar43 = *(longlong **)&local_1360->field_0x28;
    }
    (**(code **)(*plVar43 + 0x10))();
  }
  return bVar54;
  while (FVar39.Data = FVar39.Data + 0xc,
        (FRigElementKey *)FVar39.Data !=
        (FRigElementKey *)(local_13f8.AllocatorInstance.Data + (longlong)local_13f8.ArrayNum * 0xc))
  {
LAB_14a2a7050:
    if ((((FRigElementKey *)FVar39.Data)->Name == pFVar28->Name) &&
       (((FRigElementKey *)FVar39.Data)->Type == pFVar28->Type)) {
      lVar31 = ((longlong)FVar39.Data - (longlong)local_13f8.AllocatorInstance.Data) / 6 +
               ((longlong)FVar39.Data - (longlong)local_13f8.AllocatorInstance.Data >> 0x3f);
      uVar46 = (int)(lVar31 >> 1) - (int)(lVar31 >> 0x3f);
      goto LAB_14a2a7070;
    }
  }
LAB_14a2a706b:
  uVar46 = 0xffffffff;
LAB_14a2a7070:
  uVar24 = 0;
  if ((int)uVar51 < local_eb0) {
    uVar24 = ~uVar51 >> 0x1f;
  }
  if ((uVar24 == 0) &&
     (bVar17 = ::FDebug::CheckVerifyFailedImpl2
                         ("(Index >= 0) & (Index < ArrayNum)",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                          ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar17)) {
    pcVar4 = (code *)swi(3);
    uVar18 = (*pcVar4)();
    return (bool)uVar18;
  }
  uVar51 = *(uint *)((longlong)local_eb8 + (longlong)(int)uVar51 * 4);
  lVar31 = (longlong)(int)uVar51;
  if (uVar46 == 0xffffffff) {
    if (uVar51 == 0xffffffff) goto LAB_14a2a754f;
    uVar46 = 0;
    if ((int)uVar51 < local_1420.ArrayNum) {
      uVar46 = ~uVar51 >> 0x1f;
    }
    if ((uVar46 == 0) &&
       (bVar54 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar54)) {
      pcVar4 = (code *)swi(3);
      uVar18 = (*pcVar4)();
      return (bool)uVar18;
    }
    FRigElementKey::ToString
              ((FRigElementKey *)(local_1420.AllocatorInstance.Data + lVar31 * 0xc),&local_868);
    FRigElementKey::ToString(pFVar47,&local_878);
    ::FString::PrintfImpl
              (&local_b98,L"Element %s is at root currently, but is parented to %s in the replay.");
    `UControlRigReplay::ValidateExpectedResults'::__l2::<lambda_1>::operator()
              (local_1d8,Error,&local_b98);
    if (local_b98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b98.Data.AllocatorInstance.Data);
    }
    FVar39.Data = local_868.Data.AllocatorInstance.Data;
    if (local_878.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_878.Data.AllocatorInstance.Data);
      FVar39.Data = local_868.Data.AllocatorInstance.Data;
    }
  }
  else {
    if (uVar51 != 0xffffffff) {
      uVar24 = 0;
      if ((int)uVar46 < local_13f8.ArrayNum) {
        uVar24 = ~uVar46 >> 0x1f;
      }
      if ((uVar24 == 0) &&
         (bVar54 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar54)) {
        pcVar4 = (code *)swi(3);
        uVar18 = (*pcVar4)();
        return (bool)uVar18;
      }
      pFVar28 = (FRigElementKey *)(longlong)(int)uVar46;
      local_1358 = (FRigElementKey *)local_13f8.AllocatorInstance.Data;
      uVar24 = 0;
      if ((int)uVar51 < local_1420.ArrayNum) {
        uVar24 = ~uVar51 >> 0x1f;
      }
      local_1428 = pFVar28;
      if ((uVar24 == 0) &&
         (bVar54 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar54)) {
        pcVar4 = (code *)swi(3);
        uVar18 = (*pcVar4)();
        return (bool)uVar18;
      }
      if ((local_1358[(longlong)pFVar28].Name !=
           *(FName *)(local_1420.AllocatorInstance.Data + lVar31 * 0xc + 4)) ||
         (pUVar53 = local_13c0, bVar54 = local_1458,
         local_1358[(longlong)pFVar28].Type !=
         local_1420.AllocatorInstance.Data[lVar31 * 0xc].field_0x0)) {
        uVar24 = 0;
        if ((int)uVar51 < local_1420.ArrayNum) {
          uVar24 = ~uVar51 >> 0x1f;
        }
        if ((uVar24 == 0) &&
           (bVar54 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar54)) {
          pcVar4 = (code *)swi(3);
          uVar18 = (*pcVar4)();
          return (bool)uVar18;
        }
        FRigElementKey::ToString
                  ((FRigElementKey *)(local_1420.AllocatorInstance.Data + lVar31 * 0xc),&local_818);
        uVar51 = 0;
        if ((int)uVar46 < local_13f8.ArrayNum) {
          uVar51 = ~uVar46 >> 0x1f;
        }
        if ((uVar51 == 0) &&
           (bVar54 = ::FDebug::CheckVerifyFailedImpl2
                               ("(Index >= 0) & (Index < ArrayNum)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                ,0x447,L"Array index out of bounds: %lld into an array of size %lld"
                               ), bVar54)) {
          pcVar4 = (code *)swi(3);
          uVar18 = (*pcVar4)();
          return (bool)uVar18;
        }
        FRigElementKey::ToString
                  ((FRigElementKey *)(local_13f8.AllocatorInstance.Data + (longlong)pFVar28 * 0xc),
                   &local_828);
        FRigElementKey::ToString(pFVar47,&local_838);
        ::FString::PrintfImpl
                  (&local_b78,
                   L"Element %s is parent to %s currently, but was parented to %s in the replay.");
        `UControlRigReplay::ValidateExpectedResults'::__l2::<lambda_1>::operator()
                  (local_1d8,Error,&local_b78);
        if (local_b78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_b78.Data.AllocatorInstance.Data);
        }
        if (local_838.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_838.Data.AllocatorInstance.Data);
        }
        if (local_828.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_828.Data.AllocatorInstance.Data);
        }
        if (local_818.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_818.Data.AllocatorInstance.Data);
        }
        local_1458 = false;
        pUVar53 = local_13c0;
        bVar54 = local_1458;
      }
      goto LAB_14a2a754f;
    }
    uVar51 = 0;
    if ((int)uVar46 < local_13f8.ArrayNum) {
      uVar51 = ~uVar46 >> 0x1f;
    }
    if ((uVar51 == 0) &&
       (bVar54 = ::FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar54)) {
      pcVar4 = (code *)swi(3);
      uVar18 = (*pcVar4)();
      return (bool)uVar18;
    }
    FRigElementKey::ToString
              ((FRigElementKey *)(local_13f8.AllocatorInstance.Data + (longlong)(int)uVar46 * 0xc),
               &local_848);
    FRigElementKey::ToString(pFVar47,&local_858);
    ::FString::PrintfImpl
              (&local_b88,L"Element %s is parent to %s currently, but was root in the replay.");
    `UControlRigReplay::ValidateExpectedResults'::__l2::<lambda_1>::operator()
              (local_1d8,Error,&local_b88);
    if (local_b88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_b88.Data.AllocatorInstance.Data);
    }
    FVar39.Data = local_848.Data.AllocatorInstance.Data;
    if (local_858.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_858.Data.AllocatorInstance.Data);
      FVar39.Data = local_848.Data.AllocatorInstance.Data;
    }
  }
  if (FVar39.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar39.Data);
  }
  local_1458 = false;
  bVar54 = false;
LAB_14a2a754f:
  local_13e8 = local_13e8 + 1;
  local_13e0 = (FName *)((longlong)local_13e0 + 0xc);
  this_02 = local_1398;
  if (local_13f8.ArrayNum <= (int)local_13e8) goto LAB_14a2a7579;
  goto LAB_14a2a6ef0;
}

// execCreateNewAsset @ 14a2b00c0

void __cdecl UControlRigReplay::execCreateNewAsset(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  void *pvVar2;
  longlong lVar3;
  undefined8 local_res10;
  void *local_58;
  undefined8 local_50;
  void *local_48;
  undefined8 local_40;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  ForAnyElementType local_28;
  int local_20;
  int local_1c;
  
  local_48 = (void *)0x0;
  local_40 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  local_58 = (void *)0x0;
  local_50 = 0;
  FStrProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  pvVar2 = local_58;
  local_28.Data = (FScriptContainerElement *)0x0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar3 = (longlong)(int)local_50;
  local_20 = (int)local_50;
  if ((int)local_50 == 0) {
    local_1c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_50,0,&local_28,(int)local_50,&local_1c);
    memcpy(local_28.Data,pvVar2,lVar3 * 2);
  }
  pvVar2 = local_48;
  lVar3 = (longlong)(int)local_40;
  local_38.Data = (FScriptContainerElement *)0x0;
  local_30 = (int)local_40;
  if ((int)local_40 == 0) {
    local_2c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (2,2,(int)local_40,0,&local_38,(int)local_40,&local_2c);
    memcpy(local_38.Data,pvVar2,lVar3 * 2);
  }
  if (local_38.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data);
  }
  if (local_28.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data);
  }
  *(undefined8 *)param_3 = 0;
  if (local_58 != (void *)0x0) {
    FMemory::Free(local_58);
  }
  if (local_48 != (void *)0x0) {
    FMemory::Free(local_48);
  }
  return;
}

// execGetPlaybackMode @ 14a2b3710

void __cdecl UControlRigReplay::execGetPlaybackMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  char cVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  cVar1 = (**(code **)(*(longlong *)param_1 + 0x2e0))();
  if (cVar1 != '\0') {
    *(undefined1 *)param_3 = param_1[0x18].field_0x12;
    return;
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execGetTimeRange @ 14a2b3ac0

void __cdecl UControlRigReplay::execGetTimeRange(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined1 local_18 [16];
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  puVar2 = (undefined8 *)(**(code **)(*(longlong *)param_1 + 0x2b0))(param_1,local_18);
  uVar1 = puVar2[1];
  *(undefined8 *)param_3 = *puVar2;
  *(undefined8 *)((longlong)param_3 + 8) = uVar1;
  return;
}

// execIsPaused @ 14a2b3e50

void __cdecl UControlRigReplay::execIsPaused(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2e8))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execIsRecording @ 14a2b3e90

void __cdecl UControlRigReplay::execIsRecording(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2f0))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execIsReplaying @ 14a2b3ed0

void __cdecl UControlRigReplay::execIsReplaying(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2e0))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execPauseReplay @ 14a2b4450

void __cdecl UControlRigReplay::execPauseReplay(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2d8))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execSetPlaybackMode @ 14a2b7640

void __cdecl UControlRigReplay::execSetPlaybackMode(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  byte bVar2;
  byte local_res8 [8];
  
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = local_res8[0];
  if (2 < local_res8[0]) {
    bVar2 = 1;
  }
  if (param_1[0x18].field_0x12 != bVar2) {
    if (bVar2 == 0) {
      (**(code **)(*(longlong *)param_1 + 0x2d0))(param_1);
      return;
    }
    param_1[0x18].field_0x12 = bVar2;
  }
  return;
}

// execStartRecording @ 14a2b7970

void __cdecl UControlRigReplay::execStartRecording(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
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
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x2b8))(param_1,local_res8);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execStartReplay @ 14a2b7a20

void __cdecl UControlRigReplay::execStartReplay(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 uVar2;
  undefined1 local_res8 [8];
  undefined8 local_res10;
  
  local_res10 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res8[0] = 0;
  FEnumProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar2 = (**(code **)(*(longlong *)param_1 + 0x2c8))(param_1,local_res10,local_res8[0]);
  *(undefined1 *)param_3 = uVar2;
  return;
}

// execStopRecording @ 14a2b7b00

void __cdecl UControlRigReplay::execStopRecording(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2c0))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

// execStopReplay @ 14a2b7b40

void __cdecl UControlRigReplay::execStopReplay(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 uVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  uVar1 = (**(code **)(*(longlong *)param_1 + 0x2d0))();
  *(undefined1 *)param_3 = uVar1;
  return;
}

