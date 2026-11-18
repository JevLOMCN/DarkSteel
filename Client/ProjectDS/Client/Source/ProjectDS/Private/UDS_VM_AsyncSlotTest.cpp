// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 8

// StaticClass @ 14b5fd440

UClass * __cdecl UDS_VM_AsyncSlotTest::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_AsyncSlotTest.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_AsyncSlotTest",
               &Z_Registration_Info_UClass_UDS_VM_AsyncSlotTest.InnerSingleton,
               StaticRegisterNativesUDS_VM_AsyncSlotTest,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_AsyncSlotTest>,
               InternalVTableHelperCtorCaller<UDS_VM_AsyncSlotTest>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_AsyncSlotTest.InnerSingleton;
}

// UDS_VM_AsyncSlotTest @ 14b600150

UDS_VM_AsyncSlotTest * __thiscall
UDS_VM_AsyncSlotTest::UDS_VM_AsyncSlotTest(UDS_VM_AsyncSlotTest *this,FVTableHelper *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_AsyncSlotTest__6B_;
  return this;
}

// UDS_VM_AsyncSlotTest @ 14b600190

UDS_VM_AsyncSlotTest * __thiscall
UDS_VM_AsyncSlotTest::UDS_VM_AsyncSlotTest(UDS_VM_AsyncSlotTest *this,FObjectInitializer *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_AsyncSlotTest__6B_;
  return this;
}

// ~UDS_VM_AsyncSlotTest @ 14b601b20

void __thiscall UDS_VM_AsyncSlotTest::~UDS_VM_AsyncSlotTest(UDS_VM_AsyncSlotTest *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_AsyncSlotTest__6B_;
  UDS_VM_ModelBase::~UDS_VM_ModelBase((UDS_VM_ModelBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b604160

UClass * __cdecl UDS_VM_AsyncSlotTest::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_AsyncSlotTest.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_AsyncSlotTest",
               &Z_Registration_Info_UClass_UDS_VM_AsyncSlotTest.InnerSingleton,
               StaticRegisterNativesUDS_VM_AsyncSlotTest,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_AsyncSlotTest>,
               InternalVTableHelperCtorCaller<UDS_VM_AsyncSlotTest>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_AsyncSlotTest.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_AsyncSlotTest @ 14b604900

void __cdecl UDS_VM_AsyncSlotTest::StaticRegisterNativesUDS_VM_AsyncSlotTest(void)

{
  return;
}

// operator() @ 14bed4e30

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

void __thiscall `UDS_VM_AsyncSlotTest::OnSetViewModel'::__l2::<lambda_1>::operator()(void *this)

{
  int iVar1;
  UUserWidget *this_00;
  longlong *plVar2;
  code *pcVar3;
  UClass *pUVar4;
  UDS_GameInstance *this_01;
  UWorld *pUVar5;
  UDS_W_Slot *pUVar6;
  UCanvasPanel *this_02;
  UCanvasPanelSlot *this_03;
  FName local_res8;
  UDS_W_Slot *local_res10;
  
  local_res10 = (UDS_W_Slot *)FSoftObjectPath::ResolveObject(this);
  if (local_res10 != (UDS_W_Slot *)0x0) {
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    pUVar4 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((*(int *)(*(longlong *)&((UObject *)local_res10)->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&((UObject *)local_res10)->field_0x10 + 0x30) +
         (longlong)iVar1 * 8) != &pUVar4->_padding_)) {
      local_res10 = (UDS_W_Slot *)(UObject *)0x0;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res10 != (UDS_W_Slot *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)local_res10);
    }
    this_01 = UDS_GameInstance::GetInst();
    pUVar5 = UGameInstance::GetWorld((UGameInstance *)this_01);
    pUVar6 = CreateWidget<UDS_W_Slot,UWorld_*>
                       (pUVar5,(TSubclassOf<UUserWidget>)&local_res10,local_res8);
    if ((pUVar6 != (UDS_W_Slot *)0x0) &&
       (this_00 = *(UUserWidget **)(*(longlong *)((longlong)this + 0x20) + 0x20),
       this_00 != (UUserWidget *)0x0)) {
      pUVar4 = Z_Construct_UClass_UDS_UserWidget_NoRegister();
      iVar1 = (int)pUVar4->_padding_;
      if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar4->_padding_)) {
        ::FName::FName(&local_res8,L"CP_Item_Slot_N");
        this_02 = (UCanvasPanel *)UUserWidget::GetWidgetFromName(this_00,&local_res8);
        if (this_02 != (UCanvasPanel *)0x0) {
          pUVar4 = Z_Construct_UClass_UDS_CanvasPanel_NoRegister();
          iVar1 = (int)pUVar4->_padding_;
          if (((iVar1 <= *(int *)(this_02->_padding_ + 0x38)) &&
              ((longlong *)
               *(undefined1 **)(*(longlong *)(this_02->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
               &pUVar4->_padding_)) &&
             (this_03 = UCanvasPanel::AddChildToCanvas(this_02,(UWidget *)pUVar6),
             this_03 != (UCanvasPanelSlot *)0x0)) {
            UCanvasPanelSlot::SetAutoSize(this_03,true);
            plVar2 = *(longlong **)(*(longlong *)((longlong)this + 0x20) + 0xa0);
            if (plVar2 != (longlong *)0x0) {
              pcVar3 = *(code **)(*plVar2 + 0x2e8);
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)pUVar6);
              }
              local_res8.ComparisonIndex.Value = 0;
              local_res8.Number = 0;
              local_res10 = pUVar6;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)pUVar6);
              }
              FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res8,(FObjectPtr)&local_res10);
              (*pcVar3)(plVar2,local_res8);
            }
          }
        }
      }
    }
  }
  return;
}

// OnSetViewModel @ 14bf04650

void __thiscall
UDS_VM_AsyncSlotTest::OnSetViewModel
          (UDS_VM_AsyncSlotTest *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  int iVar1;
  ForAnyElementType _Src;
  FString *pFVar2;
  UAssetManager *pUVar3;
  undefined8 *puVar4;
  ulong64 uVar5;
  int iVar6;
  size_t _Size;
  undefined1 local_d8 [8];
  FSharedReferencer<1> FStack_d0;
  undefined1 local_c8 [8];
  FDelegateAllocation local_c0;
  undefined1 local_b0 [24];
  FName local_98;
  FName FStack_90;
  ForAnyElementType local_88;
  undefined8 local_80;
  UDS_VM_AsyncSlotTest *local_78;
  FSoftObjectPath local_70;
  undefined1 local_48 [16];
  char *local_38;
  FDelegateAllocation *local_30;
  TSharedPtr<FStreamableHandle,1> local_28;
  
  local_d8 = (undefined1  [8])param_1->Object;
  FStack_d0.ReferenceController = (param_1->SharedReferenceCount).ReferenceController;
  if (FStack_d0.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (FStack_d0.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(FStack_d0.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  UDS_VM_ModelBase::OnSetViewModel
            ((UDS_VM_ModelBase *)this,(TSharedPtr<FDS_ViewModelContext,1> *)local_d8);
  pFVar2 = ::FString::FString((FString *)local_c8,
                              L"/Game/UIs/MIR_FIVE/UMG_BP_N/Contents_N/W_Item_Slot_N.W_Item_Slot_N")
  ;
  pFVar2 = FWN_SoftObjectUtils::GetObjectPath((FString *)local_b0,pFVar2,false);
  local_70.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_70.AssetPath.PackageName.Number = 0;
  local_70.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_70.AssetPath.AssetName.Number = 0;
  local_70.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_70.SubPathString.Data.ArrayNum = 0;
  local_70.SubPathString.Data.ArrayMax = 0;
  local_d8 = (undefined1  [8])(pFVar2->Data).AllocatorInstance.Data;
  iVar1 = (pFVar2->Data).ArrayNum;
  iVar6 = iVar1 + -1;
  if (iVar1 == 0) {
    iVar6 = 0;
  }
  FStack_d0.ReferenceController._0_4_ = iVar6;
  FSoftObjectPath::SetPath(&local_70,(TStringView<wchar_t> *)local_d8);
  if ((void *)CONCAT44(local_b0._4_4_,local_b0._0_4_) != (void *)0x0) {
    FMemory::Free((void *)CONCAT44(local_b0._4_4_,local_b0._0_4_));
  }
  if ((atomic<unsigned___int64>)local_c8 != (atomic<unsigned___int64>)0x0) {
    FMemory::Free((void *)local_c8);
  }
  pUVar3 = UAssetManager::Get();
  _Src.Data = local_70.SubPathString.Data.AllocatorInstance.Data;
  _Size = (size_t)local_70.SubPathString.Data.ArrayNum;
  local_b0._8_8_ =
       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Item\\DS_VM_AsyncSlotTest.cpp"
  ;
  local_b0._16_8_ =
       "void __cdecl UDS_VM_AsyncSlotTest::OnSetViewModel(class TSharedPtr<struct FDS_ViewModelContext,1>)"
  ;
  local_b0._0_4_ = 0x16;
  local_b0._4_4_ = 0x3e;
  local_d8 = (undefined1  [8])0x0;
  FStack_d0.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = CONCAT44(local_80._4_4_,local_70.SubPathString.Data.ArrayNum);
  local_98 = local_70.AssetPath.PackageName;
  FStack_90 = local_70.AssetPath.AssetName;
  if (local_70.SubPathString.Data.ArrayNum == 0) {
    local_80 = local_70.SubPathString.Data._8_8_ & 0xffffffff;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (1,1,local_70.SubPathString.Data.ArrayNum,0,&local_88,
               local_70.SubPathString.Data.ArrayNum,(int *)((longlong)&local_80 + 4));
    memcpy(local_88.Data,_Src.Data,_Size);
  }
  local_c8 = (undefined1  [8])0x0;
  local_c0.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_c0.DelegateSize = 0;
  local_78 = this;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
             (FWriteAccessScope *)local_48);
  local_30 = &local_c0;
  puVar4 = UE::Core::Private::DelegateAllocate(0x40,&local_c0);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = &___7__TCommonDelegateInstanceState___A6AXXZUFDefaultDelegateUserPolicy____V__6B_;
    uVar5 = FDelegateHandle::GenerateNewID();
    puVar4[2] = uVar5;
    *puVar4 = &TBaseFunctorDelegateInstance<void___cdecl(void),FDefaultDelegateUserPolicy,`UDS_VM_AsyncSlotTest::OnSetViewModel'::`2'::<lambda_1>_>
               ::_vftable_;
    *(FName *)(puVar4 + 3) = local_98;
    *(FName *)(puVar4 + 4) = FStack_90;
    puVar4[5] = 0;
    puVar4[5] = local_88.Data;
    local_88.Data = (FScriptContainerElement *)0x0;
    *(undefined4 *)(puVar4 + 6) = (undefined4)local_80;
    *(undefined4 *)((longlong)puVar4 + 0x34) = local_80._4_4_;
    local_80 = 0;
    puVar4[7] = local_78;
  }
  if (local_38._0_1_ == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_48._8_8_,(FDestructionSentinel *)local_48);
  }
  local_48._4_4_ = local_b0._4_4_;
  local_48._0_4_ = local_b0._0_4_;
  local_48._8_8_ = local_b0._8_8_;
  local_38 = (char *)local_b0._16_8_;
  FStreamableManager::
  RequestAsyncLoad<FSoftObjectPath_&,TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>,void>
            (&pUVar3->StreamableManager,&local_28,&local_70,
             (TDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)local_c8,100,false,false,
             (FString *)local_d8,(FSourceLocation *)local_48);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_c8,
             (FWriteAccessScope *)local_b0);
  if ((local_c0.DelegateSize != 0) &&
     (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_c0.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_c0,0,0,0x10);
    local_c0.DelegateSize = 0;
  }
  if (local_b0[0x10] == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess
              ((FMRSWRecursiveAccessDetector *)local_b0._8_8_,(FDestructionSentinel *)local_b0);
  }
  if (local_c0.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_c0.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_c8);
  if (local_88.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  if (local_70.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_70.SubPathString.Data.AllocatorInstance.Data);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

