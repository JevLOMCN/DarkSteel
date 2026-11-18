// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 13

// StaticClass @ 14b4abee0

UClass * __cdecl UDS_HUD_Detection::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_HUD_Detection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_HUD_Detection",
               &Z_Registration_Info_UClass_UDS_HUD_Detection.InnerSingleton,
               StaticRegisterNativesUDS_HUD_Detection,0x880,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_HUD_Detection>,
               InternalVTableHelperCtorCaller<UDS_HUD_Detection>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_HUD_Detection.InnerSingleton;
}

// UDS_HUD_Detection @ 14b4b1c40

UDS_HUD_Detection * __thiscall
UDS_HUD_Detection::UDS_HUD_Detection(UDS_HUD_Detection *this,FVTableHelper *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  return this;
}

// UDS_HUD_Detection @ 14b4b1c90

UDS_HUD_Detection * __thiscall
UDS_HUD_Detection::UDS_HUD_Detection(UDS_HUD_Detection *this,FObjectInitializer *param_1)

{
  UDS_UserWidget::UDS_UserWidget((UDS_UserWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  return this;
}

// ~UDS_HUD_Detection @ 14b4b33d0

void __thiscall UDS_HUD_Detection::~UDS_HUD_Detection(UDS_HUD_Detection *this)

{
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&_vftable__for__UCommonUserWidget__;
  this->_padding_ = (longlong)&_vftable__for__IUserObjectListEntry__;
  UDS_UserWidget::~UDS_UserWidget((UDS_UserWidget *)this);
  return;
}

// GetPrivateStaticClass @ 14b4b6c60

UClass * __cdecl UDS_HUD_Detection::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_HUD_Detection.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UUserWidget::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_HUD_Detection",
               &Z_Registration_Info_UClass_UDS_HUD_Detection.InnerSingleton,
               StaticRegisterNativesUDS_HUD_Detection,0x880,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_HUD_Detection>,
               InternalVTableHelperCtorCaller<UDS_HUD_Detection>,local_res8,
               UDS_UserWidget::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_HUD_Detection.InnerSingleton;
}

// StaticRegisterNativesUDS_HUD_Detection @ 14b4b8460

void __cdecl UDS_HUD_Detection::StaticRegisterNativesUDS_HUD_Detection(void)

{
  return;
}

// operator() @ 14c068ad0

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall `UDS_HUD_Detection::AddIndicator'::__l2::<lambda_1>::operator()(void *this)

{
  int iVar1;
  UCanvasPanel *this_00;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  UDS_GameInstance *this_01;
  UWorld *pUVar5;
  UDS_UserWidget *pUVar6;
  UCanvasPanelSlot *this_02;
  UObject *pUVar7;
  UScriptStruct *pUVar8;
  UDS_ViewModelContextManager *this_03;
  UObject *pUVar9;
  UObject *pUVar10;
  FWeakObjectPtr local_res8;
  FName local_res10;
  UObject *local_res18;
  UDS_UserWidget *local_res20;
  TSharedPtr<FDS_ViewModelContext,1> local_48;
  TSharedPtr<FDS_ViewModelContext,1> local_38;
  
  local_res18 = FSoftObjectPath::ResolveObject(this);
  if (local_res18 != (UObject *)0x0) {
    pUVar9 = (UObject *)0x0;
    local_res10.ComparisonIndex.Value = 0;
    local_res10.Number = 0;
    pUVar4 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)&local_res18->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&local_res18->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar4->_padding_)) {
      local_res18 = pUVar9;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res18 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res18);
    }
    this_01 = UDS_GameInstance::GetInst();
    pUVar5 = UGameInstance::GetWorld((UGameInstance *)this_01);
    pUVar6 = CreateWidget<UDS_UserWidget,UWorld_*>
                       (pUVar5,(TSubclassOf<UUserWidget>)&local_res18,local_res10);
    if (pUVar6 != (UDS_UserWidget *)0x0) {
      this_00 = *(UCanvasPanel **)(*(longlong *)((longlong)this + 0x28) + 0x878);
      if ((this_00 != (UCanvasPanel *)0x0) &&
         (this_02 = UCanvasPanel::AddChildToCanvas(this_00,(UWidget *)pUVar6),
         this_02 != (UCanvasPanelSlot *)0x0)) {
        UCanvasPanelSlot::SetAutoSize(this_02,true);
      }
      pUVar7 = ::operator_new(0x28);
      pUVar10 = pUVar9;
      if (pUVar7 != (UObject *)0x0) {
        *(undefined8 *)&pUVar7->field_0x18 = 0;
        *(undefined8 *)&pUVar7->field_0x8 = 0;
        *(undefined8 *)&pUVar7->field_0x10 = 0;
        *(undefined ***)pUVar7 = &___7FDS_ViewModelContext_HUD_DetectionIndicator__6B_;
        *(undefined8 *)&pUVar7->field_0x20 = 0;
        pUVar10 = pUVar7;
      }
      pUVar7 = ::operator_new(0x20);
      if (pUVar7 != (UObject *)0x0) {
        *(undefined4 *)&pUVar7->field_0x8 = 1;
        *(code **)&pUVar7->field_0x10 = ViewModelContextDeleter;
        *(undefined ***)pUVar7 =
             &
             ___7__TReferenceControllerWithDeleter_UFDS_ViewModelContext_HUD_DetectionIndicator__P6AXPEAUFDS_ViewModelContext___Z_00_SharedPointerInternals__6B_
        ;
        *(undefined4 *)&pUVar7->field_0xc = 1;
        *(UObject **)&pUVar7->field_0x18 = pUVar10;
        pUVar9 = pUVar7;
      }
      if ((pUVar10 == (UObject *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IsValid()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                             ,0x458,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pUVar8 = FDS_ViewModelContext_HUD_DetectionIndicator::StaticStruct();
      *(UScriptStruct **)&pUVar10->field_0x8 = pUVar8;
      this_03 = UDS_ViewModelContextManager::GetInst();
      if (this_03 != (UDS_ViewModelContextManager *)0x0) {
        if (pUVar9 != (UObject *)0x0) {
          LOCK();
          *(int *)&pUVar9->field_0x8 = *(int *)&pUVar9->field_0x8 + 1;
          UNLOCK();
        }
        local_48.Object = (FDS_ViewModelContext *)pUVar10;
        local_48.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pUVar9;
        UDS_ViewModelContextManager::RegisterContext(this_03,&local_48);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_48.SharedReferenceCount.ReferenceController);
      }
      *(undefined4 *)&pUVar10->field_0x18 = 0x53;
      *(undefined8 *)&pUVar10->field_0x20 = *(undefined8 *)((longlong)this + 0x20);
      if (pUVar9 != (UObject *)0x0) {
        LOCK();
        *(int *)&pUVar9->field_0x8 = *(int *)&pUVar9->field_0x8 + 1;
        UNLOCK();
      }
      local_38.Object = (FDS_ViewModelContext *)pUVar10;
      local_38.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)pUVar9;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      local_res8.ObjectIndex = 0;
      local_res8.ObjectSerialNumber = 0;
      local_res20 = pUVar6;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res20);
      DS_ViewModelTemplateUtil::BindViewModel
                ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res8,&local_38,false);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                ((TReferenceControllerBase<1> *)pUVar9);
    }
  }
  return;
}

// AddIndicator @ 14c06b290

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */

void __thiscall UDS_HUD_Detection::AddIndicator(UDS_HUD_Detection *this,ulong64 param_1)

{
  int iVar1;
  UObject *pUVar2;
  ForAnyElementType _Src;
  bool bVar3;
  FDS_EntityBase *pFVar4;
  FDS_EntityBase *pFVar5;
  ADS_CameraManager *pAVar6;
  APlayerController *this_00;
  UDS_MovementCore *this_01;
  FString *pFVar7;
  UAssetManager *pUVar8;
  undefined8 *puVar9;
  ulong64 uVar10;
  size_t _Size;
  double dVar11;
  ulong64 local_res10;
  float local_res18 [2];
  int local_res20 [2];
  undefined1 local_f8 [8];
  FDelegateAllocation FStack_f0;
  undefined1 local_d8 [16];
  char *local_c8;
  FString local_b8;
  FSoftObjectPath local_a8;
  FName local_88;
  FName FStack_80;
  ForAnyElementType local_78;
  undefined8 local_70;
  ulong64 local_68;
  UDS_HUD_Detection *local_60;
  TVector<double>_u_0 local_58;
  undefined1 *local_40;
  TSharedPtr<FStreamableHandle,1> local_38;
  
  local_res10 = param_1;
  pFVar4 = FDS_EntityBase::GetEntityBase(&local_res10);
  if ((pFVar4 != (FDS_EntityBase *)0x0) &&
     (pFVar5 = FDS_EntityBase::GetMainPlayerEntityBase(true), pFVar5 != (FDS_EntityBase *)0x0)) {
    dVar11 = DS_CommonDataHelper::HudIndicatorShowRange();
    local_res18[0] = (float)dVar11;
    bVar3 = DS_Util::IsCloseDist(pFVar4,pFVar5,local_res18);
    if (bVar3) {
      pAVar6 = ADS_CameraManager::GetInst();
      this_00 = (APlayerController *)(**(code **)(*(longlong *)pAVar6 + 0x7a8))(pAVar6);
      if (this_00 != (APlayerController *)0x0) {
        pUVar2 = (UObject *)this_00->_padding_;
        if (UE::GC::GIsIncrementalReachabilityPending == false) {
          if (pUVar2 == (UObject *)0x0) {
            return;
          }
        }
        else {
          if (pUVar2 == (UObject *)0x0) {
            return;
          }
          UE::GC::MarkAsReachable(pUVar2);
        }
        UDS_MovementCore::GetMovementCore((ulong64)&local_b8);
        bVar3 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&local_b8);
        if (bVar3) {
          this_01 = (UDS_MovementCore *)FWeakObjectPtr::Get((FWeakObjectPtr *)&local_b8);
          UDS_MovementCore::GetActorFootLocation(this_01,(TVector<double> *)local_f8);
          local_58._16_1_ = (undefined1)FStack_f0.DelegateSize;
          local_58._s_0.X = (double)local_f8;
          local_58._s_0.Y = (double)FStack_f0.DelegateAllocator;
          bVar3 = APlayerController::ProjectWorldLocationToScreen
                            (this_00,(TVector<double> *)&local_58._s_0,(TVector2<double> *)local_d8,
                             false);
          APlayerController::GetViewportSize(this_00,(int *)local_res18,local_res20);
          if ((((!bVar3) || ((double)local_d8._0_8_ < 0.0)) ||
              ((double)(int)local_res18[0] < (double)local_d8._0_8_)) ||
             (((double)local_d8._8_8_ < 0.0 || ((double)local_res20[0] < (double)local_d8._8_8_))))
          {
            pFVar7 = ::FString::FString((FString *)local_f8,
                                        L"/Game/UIs/MIR_FIVE/UMG_BP_N/HUD_N/HUD_Indicator/W_HUD_Indicatror_N.W_HUD_Indicatror_N"
                                       );
            pFVar7 = FWN_SoftObjectUtils::GetObjectPath(&local_b8,pFVar7,false);
            local_a8.AssetPath.PackageName.ComparisonIndex.Value = 0;
            local_a8.AssetPath.PackageName.Number = 0;
            local_a8.AssetPath.AssetName.ComparisonIndex.Value = 0;
            local_a8.AssetPath.AssetName.Number = 0;
            local_a8.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_a8.SubPathString.Data.ArrayNum = 0;
            local_a8.SubPathString.Data.ArrayMax = 0;
            local_d8._0_8_ = (pFVar7->Data).AllocatorInstance.Data;
            iVar1 = (pFVar7->Data).ArrayNum;
            local_d8._8_4_ = iVar1 + -1;
            if (iVar1 == 0) {
              local_d8._8_4_ = 0;
            }
            FSoftObjectPath::SetPath(&local_a8,(TStringView<wchar_t> *)local_d8);
            if ((FWeakObjectPtr)local_b8.Data.AllocatorInstance.Data != (FWeakObjectPtr)0x0) {
              FMemory::Free(local_b8.Data.AllocatorInstance.Data);
            }
            if (local_f8 != (undefined1  [8])0x0) {
              FMemory::Free((void *)local_f8);
            }
            pUVar8 = UAssetManager::Get();
            _Src.Data = local_a8.SubPathString.Data.AllocatorInstance.Data;
            _Size = (size_t)local_a8.SubPathString.Data.ArrayNum;
            local_d8._8_8_ =
                 "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\View\\Hud\\DS_HUD_Detection.cpp"
            ;
            local_c8 = "void __cdecl UDS_HUD_Detection::AddIndicator(unsigned __int64)";
            local_d8._0_8_ = 1.31563739086289e-312;
            local_b8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_b8.Data.ArrayNum = 0;
            local_b8.Data.ArrayMax = 0;
            local_78.Data = (FScriptContainerElement *)0x0;
            local_70 = CONCAT44(local_70._4_4_,local_a8.SubPathString.Data.ArrayNum);
            local_88 = local_a8.AssetPath.PackageName;
            FStack_80 = local_a8.AssetPath.AssetName;
            if (local_a8.SubPathString.Data.ArrayNum == 0) {
              local_70 = local_a8.SubPathString.Data._8_8_ & 0xffffffff;
            }
            else {
              UE::Core::Private::
              ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,local_a8.SubPathString.Data.ArrayNum,0,&local_78,
                         local_a8.SubPathString.Data.ArrayNum,(int *)((longlong)&local_70 + 4));
              memcpy(local_78.Data,_Src.Data,_Size);
            }
            local_68 = local_res10;
            local_f8 = (undefined1  [8])0x0;
            FStack_f0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
            FStack_f0.DelegateSize = 0;
            local_60 = this;
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
                       (FWriteAccessScope *)&local_58._s_0);
            local_40 = local_f8 + 8;
            puVar9 = UE::Core::Private::DelegateAllocate(0x48,(FDelegateAllocation *)(local_f8 + 8))
            ;
            if (puVar9 != (undefined8 *)0x0) {
              *puVar9 = &
                        ___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_
              ;
              uVar10 = FDelegateHandle::GenerateNewID();
              puVar9[2] = uVar10;
              *puVar9 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDS_HUD_Detection::AddIndicator'::`2'::<lambda_1>_>
                         ::_vftable_;
              *(FName *)(puVar9 + 3) = local_88;
              *(FName *)(puVar9 + 4) = FStack_80;
              puVar9[5] = 0;
              puVar9[5] = local_78.Data;
              local_78.Data = (FScriptContainerElement *)0x0;
              *(undefined4 *)(puVar9 + 6) = (undefined4)local_70;
              *(undefined4 *)((longlong)puVar9 + 0x34) = local_70._4_4_;
              local_70 = 0;
              puVar9[7] = local_68;
              puVar9[8] = local_60;
            }
            if (local_58._16_1_ == '\0') {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                        ((FMRSWRecursiveAccessDetector *)local_58._s_0.Y,
                         (FDestructionSentinel *)&local_58._s_0);
            }
            local_58._s_0.X = (double)local_d8._0_8_;
            local_58._s_0.Y = (double)local_d8._8_8_;
            local_58._s_0.Z = (double)local_c8;
            FStreamableManager::
            RequestAsyncLoad<FSoftObjectPath_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,void>
                      (&pUVar8->StreamableManager,&local_38,&local_a8,
                       (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_f8,100,
                       false,false,&local_b8,(FSourceLocation *)&local_58._s_0);
            TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                      ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_f8,
                       (FWriteAccessScope *)local_d8);
            if ((FStack_f0.DelegateSize != 0) &&
               (FStack_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
              (*(code *)**(undefined8 **)FStack_f0.DelegateAllocator)();
              TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
                        ((ForAnyElementType *)(local_f8 + 8),0,0,0x10);
              FStack_f0.DelegateSize = 0;
            }
            if (local_c8._0_1_ == false) {
              FMRSWRecursiveAccessDetector::ReleaseWriteAccess
                        ((FMRSWRecursiveAccessDetector *)local_d8._8_8_,
                         (FDestructionSentinel *)local_d8);
            }
            if (FStack_f0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
              FMemory::Free((void *)FStack_f0.DelegateAllocator);
            }
            FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
                      ((FMRSWRecursiveAccessDetector *)local_f8);
            if (local_78.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_78.Data);
            }
            SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                      (local_38.SharedReferenceCount.ReferenceController);
            if (local_a8.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0
               ) {
              FMemory::Free(local_a8.SubPathString.Data.AllocatorInstance.Data);
            }
          }
        }
      }
    }
  }
  return;
}

// IsActorOutView @ 14c08e230

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

bool __thiscall UDS_HUD_Detection::IsActorOutView(UDS_HUD_Detection *this,ulong64 param_1)

{
  UObject *pUVar1;
  bool bVar2;
  ADS_CameraManager *pAVar3;
  APlayerController *this_00;
  UDS_MovementCore *this_01;
  int local_res18 [2];
  int local_res20 [2];
  FWeakObjectPtr local_58;
  TVector2<double>_u_0 local_50;
  TVector<double>_u_0 local_40;
  TVector<double>_u_0 local_28;
  
  pAVar3 = ADS_CameraManager::GetInst();
  this_00 = (APlayerController *)(**(code **)(*(longlong *)pAVar3 + 0x7a8))(pAVar3);
  if (this_00 != (APlayerController *)0x0) {
    pUVar1 = (UObject *)this_00->_padding_;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar1 == (UObject *)0x0) {
        return false;
      }
    }
    else {
      if (pUVar1 == (UObject *)0x0) {
        return false;
      }
      UE::GC::MarkAsReachable(pUVar1);
    }
    UDS_MovementCore::GetMovementCore((ulong64)&local_58);
    bVar2 = FWeakObjectPtr::IsValid(&local_58);
    if (bVar2) {
      this_01 = (UDS_MovementCore *)FWeakObjectPtr::Get(&local_58);
      UDS_MovementCore::GetActorFootLocation(this_01,(TVector<double> *)&local_40._s_0);
      local_28._s_0.X = local_40._s_0.X;
      local_28._s_0.Y = local_40._s_0.Y;
      local_28._s_0.Z = local_40._s_0.Z;
      bVar2 = APlayerController::ProjectWorldLocationToScreen
                        (this_00,(TVector<double> *)&local_28._s_0,
                         (TVector2<double> *)&local_50._s_0,false);
      APlayerController::GetViewportSize(this_00,local_res18,local_res20);
      if ((((!bVar2) || (local_50._s_0.X < 0.0)) || ((double)local_res18[0] < local_50._s_0.X)) ||
         ((local_50._s_0.Y < 0.0 || ((double)local_res20[0] < local_50._s_0.Y)))) {
        return true;
      }
    }
  }
  return false;
}

// NativeConstruct @ 14c0909f0

void __thiscall UDS_HUD_Detection::NativeConstruct(UDS_HUD_Detection *this)

{
  bool bVar1;
  FName *pFVar2;
  UObject *pUVar3;
  FWeakObjectPtr local_res8;
  FName local_res10 [3];
  
  UDS_UserWidget::NativeConstruct((UDS_UserWidget *)this);
  pFVar2 = ::FName::FName(local_res10,"CP_Main");
  UDS_UserWidget::BindWidget<UDS_CanvasPanel>((UDS_UserWidget *)this,&this->CanvasPanel,*pFVar2);
  UDS_PlayerData::GetMainPlayerData();
  bVar1 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar1) {
    pUVar3 = FWeakObjectPtr::Get(&local_res8);
    TMulticastDelegateRegistration<void___cdecl(enum_EDS_PlayerSkillType_const_&,FDS_PlayerSkillTargetInfo_const_&,enum_EDS_PlayerSkillTargetInfoChangeType_const_&),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_HUD_Detection>
              (&pUVar3[0xf].field_0x10,(UDS_HUD_Detection *)local_res10,(pmf_f218d190 *)this);
    pUVar3 = FWeakObjectPtr::Get(&local_res8);
    TMulticastDelegateRegistration<void___cdecl(FDS_BreachDetailInfo_const_&,enum_EDS_BreachInfoChangeType),FDefaultDelegateUserPolicy>
    ::AddUObject<UDS_HUD_Detection>
              (&pUVar3[0xc].field_0x18,(UDS_HUD_Detection *)local_res10,(pmf_feb31ae4 *)this);
  }
  return;
}

// NativeDestruct @ 14c090d90

void __thiscall UDS_HUD_Detection::NativeDestruct(UDS_HUD_Detection *this)

{
  bool bVar1;
  UObject *pUVar2;
  FWeakObjectPtr local_res10 [3];
  
  UDS_UserWidget::NativeDestruct((UDS_UserWidget *)this);
  UDS_PlayerData::GetMainPlayerData();
  bVar1 = FWeakObjectPtr::IsValid(local_res10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(local_res10);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[0xf].field_0x10,this);
    pUVar2 = FWeakObjectPtr::Get(local_res10);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[0xc].field_0x18,this);
  }
  return;
}

// OnChangedBreachDetailInfo @ 14c092170

void __thiscall
UDS_HUD_Detection::OnChangedBreachDetailInfo
          (UDS_HUD_Detection *this,FDS_BreachDetailInfo *param_1,EDS_BreachInfoChangeType param_2)

{
  if (param_2 == Added) {
    AddIndicator(this,param_1->StuffPortalEntityID);
    return;
  }
  return;
}

// OnChangedPlayerSkillTargetInfo @ 14c0928c0

void __thiscall
UDS_HUD_Detection::OnChangedPlayerSkillTargetInfo
          (UDS_HUD_Detection *this,EDS_PlayerSkillType *param_1,FDS_PlayerSkillTargetInfo *param_2,
          EDS_PlayerSkillTargetInfoChangeType *param_3)

{
  if ((*param_1 == Detection) && (*param_3 == Added)) {
    AddIndicator(this,param_2->EntityID);
    return;
  }
  return;
}

