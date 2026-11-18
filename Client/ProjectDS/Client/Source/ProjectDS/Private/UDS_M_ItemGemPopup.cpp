// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 20

// StaticClass @ 14b50c250

UClass * __cdecl UDS_M_ItemGemPopup::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ItemGemPopup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ItemGemPopup",
               &Z_Registration_Info_UClass_UDS_M_ItemGemPopup.InnerSingleton,
               StaticRegisterNativesUDS_M_ItemGemPopup,0x1f8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_ItemGemPopup>,
               InternalVTableHelperCtorCaller<UDS_M_ItemGemPopup>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ItemGemPopup.InnerSingleton;
}

// UDS_M_ItemGemPopup @ 14b511c40

UDS_M_ItemGemPopup * __thiscall
UDS_M_ItemGemPopup::UDS_M_ItemGemPopup(UDS_M_ItemGemPopup *this,FVTableHelper *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_M_ItemGemPopup__6B_;
  *(undefined8 *)&this->GemSocketSlotModelList = 0;
  *(undefined8 *)&(this->GemSocketSlotModelList).field_0x8 = 0;
  *(undefined8 *)&(this->GemSocketSlotModelList).field_0x20 = 0;
  *(undefined4 *)&(this->GemSocketSlotModelList).field_0x28 = 0;
  *(undefined4 *)&(this->GemSocketSlotModelList).field_0x2c = 0x80;
  *(undefined4 *)&(this->GemSocketSlotModelList).field_0x34 = 0;
  *(undefined4 *)&(this->GemSocketSlotModelList).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->GemSocketSlotModelList).field_0x40 = 0;
  *(undefined4 *)&(this->GemSocketSlotModelList).field_0x48 = 0;
  return this;
}

// UDS_M_ItemGemPopup @ 14b511cb0

UDS_M_ItemGemPopup * __thiscall
UDS_M_ItemGemPopup::UDS_M_ItemGemPopup(UDS_M_ItemGemPopup *this,FObjectInitializer *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_M_ItemGemPopup__6B_;
  *(undefined8 *)&this->GemSocketSlotModelList = 0;
  *(undefined8 *)&(this->GemSocketSlotModelList).field_0x8 = 0;
  *(undefined8 *)&(this->GemSocketSlotModelList).field_0x20 = 0;
  *(undefined4 *)&(this->GemSocketSlotModelList).field_0x28 = 0;
  *(undefined4 *)&(this->GemSocketSlotModelList).field_0x2c = 0x80;
  *(undefined4 *)&(this->GemSocketSlotModelList).field_0x34 = 0;
  *(undefined4 *)&(this->GemSocketSlotModelList).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->GemSocketSlotModelList).field_0x40 = 0;
  *(undefined4 *)&(this->GemSocketSlotModelList).field_0x48 = 0;
  return this;
}

// ~UDS_M_ItemGemPopup @ 14b5131c0

void __thiscall UDS_M_ItemGemPopup::~UDS_M_ItemGemPopup(UDS_M_ItemGemPopup *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_M_ItemGemPopup__6B_;
  *(undefined4 *)&(this->GemSocketSlotModelList).field_0x48 = 0;
  pvVar1 = *(void **)&(this->GemSocketSlotModelList).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UDS_M_ItemGem_GemSocket>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UDS_M_ItemGem_GemSocket>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UDS_M_ItemGem_GemSocket>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->GemSocketSlotModelList);
  UDS_ModelBase::~UDS_ModelBase((UDS_ModelBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b516500

UClass * __cdecl UDS_M_ItemGemPopup::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ItemGemPopup.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ItemGemPopup",
               &Z_Registration_Info_UClass_UDS_M_ItemGemPopup.InnerSingleton,
               StaticRegisterNativesUDS_M_ItemGemPopup,0x1f8,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_ItemGemPopup>,
               InternalVTableHelperCtorCaller<UDS_M_ItemGemPopup>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ItemGemPopup.InnerSingleton;
}

// StaticRegisterNativesUDS_M_ItemGemPopup @ 14b516de0

void __cdecl UDS_M_ItemGemPopup::StaticRegisterNativesUDS_M_ItemGemPopup(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDS_M_ItemGemPopup_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execOnClickedCancel @ 14b518c30

void __cdecl UDS_M_ItemGemPopup::execOnClickedCancel(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FDS_ButtonEventField *pFVar2;
  FDestructionSentinel local_48;
  undefined1 local_30 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_28;
  ForAnyElementType FStack_20;
  int local_18;
  
  local_30[0] = '\0';
  local_30[1] = false;
  local_30[2] = false;
  local_30[3] = false;
  local_18 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_28.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_20.Data = (FScriptContainerElement *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_30,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_30);
  }
  pFVar2 = (FDS_ButtonEventField *)local_30;
  if ((FDS_ButtonEventField *)param_2->MostRecentPropertyAddress != (FDS_ButtonEventField *)0x0) {
    pFVar2 = (FDS_ButtonEventField *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnClickedCancel((UDS_M_ItemGemPopup *)param_1,pFVar2);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_28,(FWriteAccessScope *)&local_48);
  if ((local_18 != 0) && (FStack_20.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_20.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_20,0,0,0x10);
    local_18 = 0;
  }
  if (local_48.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_48.Accessor,&local_48);
  }
  if (FStack_20.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_20.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_28.AccessDetector);
  return;
}

// execOnClickedOK @ 14b518d50

void __cdecl UDS_M_ItemGemPopup::execOnClickedOK(UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FProperty *pFVar2;
  FDS_ButtonEventField *pFVar3;
  int local_res10 [2];
  FWeakObjectPtr local_res20;
  FDestructionSentinel local_68;
  undefined1 local_50 [8];
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_48;
  ForAnyElementType FStack_40;
  int local_38;
  
  local_50[0] = '\0';
  local_50[1] = false;
  local_50[2] = false;
  local_50[3] = false;
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  local_38 = 0;
  local_48.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
  FStack_40.Data = (FScriptContainerElement *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_50,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_50);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  pFVar3 = (FDS_ButtonEventField *)local_50;
  if ((FDS_ButtonEventField *)param_2->MostRecentPropertyAddress != (FDS_ButtonEventField *)0x0) {
    pFVar3 = (FDS_ButtonEventField *)param_2->MostRecentPropertyAddress;
  }
  FWeakObjectProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0;
  FIntProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  OnClickedOK((UDS_M_ItemGemPopup *)param_1,pFVar3,
              (TWeakObjectPtr<UDS_M_ItemGem_GemSocket,FWeakObjectPtr>)local_res20,local_res10[0]);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            (&local_48,(FWriteAccessScope *)&local_68);
  if ((local_38 != 0) && (FStack_40.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_40.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_40,0,0,0x10);
    local_38 = 0;
  }
  if (local_68.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_68.Accessor,&local_68);
  }
  if (FStack_40.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_40.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_48.AccessDetector);
  return;
}

// GetGemSocketSlotModelList @ 14bcf7b60

TArray<TObjectPtr<UDS_M_ItemGem_GemSocket>,TSizedDefaultAllocator<32>_> * __thiscall
UDS_M_ItemGemPopup::GetGemSocketSlotModelList
          (UDS_M_ItemGemPopup *this,
          TArray<TObjectPtr<UDS_M_ItemGem_GemSocket>,TSizedDefaultAllocator<32>_>
          *__return_storage_ptr__)

{
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  TMapBase<int,TObjectPtr<UDS_M_ItemGem_GemSocket>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_M_ItemGem_GemSocket>,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<int,TObjectPtr<UDS_M_ItemGem_GemSocket>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_M_ItemGem_GemSocket>,0>_>
              *)&this->GemSocketSlotModelList,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InitModel @ 14bd02d00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_M_ItemGemPopup::InitModel
          (UDS_M_ItemGemPopup *this,TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr> param_1)

{
  TMap<int,TObjectPtr<UDS_M_ItemGem_GemSocket>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_M_ItemGem_GemSocket>,0>_>
  *this_00;
  undefined1 *puVar1;
  code *pcVar2;
  TObjectPtr<UObject>_u_0 TVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  TObjectPtr<UObject> TVar8;
  TObjectPtr<UObject>_u_0 *pTVar9;
  UObject *pUVar10;
  UDS_M_InventoryBag *this_01;
  FDS_DataContainer *pFVar11;
  UDS_ItemData *pUVar12;
  UClass *pUVar13;
  UDS_M_ItemGem_GemSocket *this_02;
  FName FVar14;
  FString *pFVar15;
  longlong *plVar16;
  wchar_t *_Str;
  undefined8 uVar17;
  undefined7 uVar19;
  undefined1 *puVar18;
  longlong lVar20;
  FWeakObjectPtr local_res10;
  undefined1 auStackY_2d8 [32];
  uint local_2a8 [2];
  FWeakObjectPtr local_2a0;
  int local_298 [2];
  int local_290 [2];
  int local_288 [2];
  TObjectPtr<UObject>_u_0 local_280;
  UObject *local_278;
  UDS_M_ItemGemPopup *local_270;
  UDS_M_InventoryBag *local_268;
  UDS_M_ItemGem_GemSocket *local_260;
  UDS_M_ItemGemPopup *local_258;
  uint *local_250;
  TDelegate<void___cdecl(TWeakObjectPtr<UDS_M_ItemImplBase,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_248;
  TDelegate<bool___cdecl(TWeakObjectPtr<UDS_ItemData,FWeakObjectPtr>),FDefaultDelegateUserPolicy>
  local_230;
  undefined1 local_218 [8];
  FDS_DataContainer local_210;
  undefined1 local_168 [128];
  undefined1 local_e8 [64];
  void *local_a8;
  undefined4 local_a0;
  undefined1 local_98 [64];
  void *local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_2d8;
  local_res10 = param_1.WeakPtr;
  bVar4 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar4) {
    local_278 = FWeakObjectPtr::Get(&local_res10);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_278 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_278);
    }
    local_2a0.ObjectIndex = 0;
    local_2a0.ObjectSerialNumber = 0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_278 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_278);
    }
    FWeakObjectPtr::operator=(&local_2a0,(FObjectPtr)&local_278);
    bVar4 = FWeakObjectPtr::IsValid(&local_2a0);
    if (bVar4) {
      TVar8.field0_0x0 = (TObjectPtr<UObject>_u_0)FWeakObjectPtr::Get(&local_res10);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar8.field0_0x0 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar8.field0_0x0);
      }
      local_298[0] = 0;
      pTVar9 = &TMapBase<int,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UObject>,0>_>
                ::FindOrAddImpl<int_const_&>
                          ((TMapBase<int,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UObject>,0>_>
                            *)&this->_padding_,0,local_298)->field0_0x0;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (TVar8.field0_0x0 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)TVar8.field0_0x0);
      }
      *pTVar9 = TVar8.field0_0x0;
      pUVar10 = GetTransientPackageAsObject();
      this_01 = NewObject<UDS_M_InventoryBag>(pUVar10);
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (this_01 != (UDS_M_InventoryBag *)0x0) goto LAB_14bd02e96;
      }
      else if (this_01 != (UDS_M_InventoryBag *)0x0) {
        UE::GC::MarkAsReachable((UObject *)this_01);
LAB_14bd02e96:
        local_e8._0_8_ = 0;
        local_e8._8_8_ = 0;
        local_e8._32_8_ = 0;
        local_e8._40_4_ = 0;
        local_e8._44_4_ = 0x80;
        local_e8._48_4_ = 0xffffffff;
        local_e8._52_4_ = 0;
        local_a8 = (void *)0x0;
        local_a0 = 0;
        local_98._0_8_ = 0;
        local_98._8_8_ = 0;
        local_98._32_8_ = 0;
        local_98._40_4_ = 0;
        local_98._44_4_ = 0x80;
        local_98._48_4_ = 0xffffffff;
        local_98._52_4_ = 0;
        local_58 = (void *)0x0;
        local_50 = 0;
        FDS_DataContainer::SetData<enum_EDS_BagGroupType,enum_EDS_InventoryBagData>
                  ((FDS_DataContainer *)local_e8,BagGroupType,ItemGem);
        FDS_DataContainer::SetData<enum_EDS_SortingType,enum_EDS_InventoryBagData>
                  ((FDS_DataContainer *)local_e8,SortType,Equip);
        local_248._16_8_ = 0;
        local_248._0_8_ = 0;
        local_248._8_8_ = 0;
        local_230._16_8_ = 0;
        local_230._0_8_ = 0;
        local_230._8_8_ = 0;
        pFVar11 = FDS_DataContainer::FDS_DataContainer(&local_210,(FDS_DataContainer *)local_e8);
        UDS_M_InventoryBag::InitModel(this_01,pFVar11,&local_230,&local_248);
        local_270 = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_M_ItemGemPopup *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        UDS_ModelBase::SetParentModel
                  ((UDS_ModelBase *)this_01,(TObjectPtr<UDS_ModelBase>)&local_270);
        local_268 = this_01;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this_01);
        }
        UDS_ModelBase::SetObjectData((UDS_ModelBase *)this,1,(TObjectPtr<UObject>)&local_268);
        FDS_DataContainer::SetData<int,enum_EDS_ItemGemPopupData>
                  ((FDS_DataContainer *)&this->_padding_,SelectedGemSocketIndex,1);
        local_2a8[0] = 1;
        do {
          pUVar12 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_2a0);
          bVar4 = UDS_ItemData::IsAvailableGemSocket(pUVar12,(EDS_GemSocketIndex)local_2a8[0]);
          if (bVar4) {
            pUVar10 = GetTransientPackageAsObject();
            FObjectInitializer::AssertIfInConstructor
                      (pUVar10,
                       L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
                      );
            pUVar13 = Z_Construct_UClass_UDS_M_ItemGem_GemSocket_NoRegister();
            FStaticConstructObjectParameters::FStaticConstructObjectParameters
                      ((FStaticConstructObjectParameters *)local_168,pUVar13);
            local_168._8_8_ = pUVar10;
            this_02 = (UDS_M_ItemGem_GemSocket *)
                      StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_168);
            if (local_168._64_8_ != 0) {
              plVar16 = (longlong *)(local_168 + 0x50);
              if ((longlong *)local_168._104_8_ != (longlong *)0x0) {
                plVar16 = (longlong *)local_168._104_8_;
              }
              (**(code **)(*plVar16 + 0x10))();
            }
            if (UE::GC::GIsIncrementalReachabilityPending == false) {
              if (this_02 == (UDS_M_ItemGem_GemSocket *)0x0) goto LAB_14bd0334c;
            }
            else {
              if (this_02 == (UDS_M_ItemGem_GemSocket *)0x0) {
LAB_14bd0334c:
                bVar4 = UE::Assert::Private::ExecCheckImplInternal
                                  (&bGEnsureHasExecuted<295645598533550341>,false,
                                   "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemGemPopup.cpp"
                                   ,0x105,"false");
                if (bVar4) {
                  pcVar2 = (code *)swi(3);
                  (*pcVar2)();
                  return;
                }
                break;
              }
              UE::GC::MarkAsReachable((UObject *)this_02);
            }
            pUVar12 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_2a0);
            iVar5 = UDS_ItemData::GetEquippedGemTID(pUVar12,(EDS_GemSocketIndex)local_2a8[0]);
            pUVar12 = (UDS_ItemData *)FWeakObjectPtr::Get(&local_2a0);
            iVar6 = UDS_ItemData::GetGemSocketTID(pUVar12,(EDS_GemSocketIndex)local_2a8[0]);
            uVar17 = 0;
            FDS_DataContainer::SetData<int,enum_EDS_ItemGemSocketSlotData>
                      ((FDS_DataContainer *)&this_02->_padding_,GemSocketIndex,local_2a8[0] & 0xff);
            uVar19 = (undefined7)((ulonglong)uVar17 >> 8);
            FDS_DataContainer::SetData<int,enum_EDS_ItemGemSocketSlotData>
                      ((FDS_DataContainer *)&this_02->_padding_,GemSocketTID,iVar6);
            FDS_DataContainer::SetData<int,enum_EDS_ItemGemSocketSlotData>
                      ((FDS_DataContainer *)&this_02->_padding_,GemItemTID,iVar5);
            FDS_DataContainer::SetData<int,enum_EDS_ItemGemSocketSlotData>
                      ((FDS_DataContainer *)&this_02->_padding_,EquippedGemItemTID,iVar5);
            DS_ItemDataUtil::CreateItemModel
                      ((EDS_ItemSlotStateType)&local_280,(int)CONCAT71(uVar19,0x19));
            TVar3 = local_280;
            if (local_280.DebugPtr == (UObject *)0x0) {
              bVar4 = UE::Assert::Private::ExecCheckImplInternal
                                (&bGEnsureHasExecuted<_9078076213808857033>,false,
                                 "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemGem_GemSocket.cpp"
                                 ,0x37,"false");
              if (bVar4) {
                pcVar2 = (code *)swi(3);
                (*pcVar2)();
                return;
              }
            }
            else {
              local_260 = this_02;
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable((UObject *)this_02);
              }
              UDS_ModelBase::SetParentModel
                        ((UDS_ModelBase *)TVar3.DebugPtr,(TObjectPtr<UDS_ModelBase>)&local_260);
              TVar3 = local_280;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (local_280.DebugPtr != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(local_280.DebugPtr);
              }
              local_290[0] = 4;
              pTVar9 = &TMapBase<int,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UObject>,0>_>
                        ::FindOrAddImpl<int_const_&>
                                  ((TMapBase<int,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UObject>,0>_>
                                    *)&this_02->_padding_,4,local_290)->field0_0x0;
              if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
                 (TVar3.DebugPtr != (UObject *)0x0)) {
                UE::GC::MarkAsReachable(TVar3.DebugPtr);
              }
              *pTVar9 = TVar3;
              (**(code **)(this_02->_padding_ + 0x2b0))(this_02);
            }
            FVar14 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemGemPopupData>
                               ((FDS_DataContainer *)&this->_padding_,
                                (EDS_ItemGemPopupData)local_218);
            uVar17 = *(undefined8 *)FVar14;
            uVar7 = ::GetTypeHash((FNameEntryId)(uint)uVar17);
            pFVar15 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                      ::FindOrAddImpl<FName>
                                ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                                  *)&this->_padding_,uVar7 + (int)((ulonglong)uVar17 >> 0x20),
                                 (FName *)FVar14);
            if ((pFVar15->Data).ArrayNum == 0) {
              _Str = L"";
            }
            else {
              _Str = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
            }
            iVar5 = _wtoi(_Str);
            UDS_M_ItemGem_GemSocket::SetSelected(this_02,iVar5);
            local_258 = this;
            if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
               (this != (UDS_M_ItemGemPopup *)0x0)) {
              UE::GC::MarkAsReachable((UObject *)this);
            }
            UDS_ModelBase::SetParentModel
                      ((UDS_ModelBase *)this_02,(TObjectPtr<UDS_ModelBase>)&local_258);
            this_00 = &this->GemSocketSlotModelList;
            if (*(int *)&(this->GemSocketSlotModelList).field_0x8 !=
                *(int *)&(this->GemSocketSlotModelList).field_0x34) {
              puVar1 = *(undefined1 **)&(this->GemSocketSlotModelList).field_0x40;
              puVar18 = &(this->GemSocketSlotModelList).field_0x38;
              if (puVar1 != (undefined1 *)0x0) {
                puVar18 = puVar1;
              }
              iVar5 = *(int *)(puVar18 +
                              (ulonglong)
                              (*(int *)&(this->GemSocketSlotModelList).field_0x48 - 1U &
                              local_2a8[0]) * 4);
              if (iVar5 != -1) {
                do {
                  lVar20 = *(longlong *)&this_00->field_0x0 + (longlong)iVar5 * 0x18;
                  if (*(uint *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar5 * 0x18) ==
                      local_2a8[0]) {
                    if (lVar20 != 0) goto LAB_14bd03322;
                    break;
                  }
                  iVar5 = *(int *)(lVar20 + 0x10);
                } while (iVar5 != -1);
              }
            }
            local_250 = local_2a8;
            TSet<TTuple<int,TObjectPtr<UDS_M_ItemGem_GemSocket>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_M_ItemGem_GemSocket>,0>,FDefaultSetAllocator>
            ::EmplaceByHash<TKeyInitializer<int_const_&>_>
                      ((TSet<TTuple<int,TObjectPtr<UDS_M_ItemGem_GemSocket>_>,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_M_ItemGem_GemSocket>,0>,FDefaultSetAllocator>
                        *)this_00,(uint)local_288,
                       (TKeyInitializer<int_const_&> *)(ulonglong)local_2a8[0],(bool *)&local_250);
            lVar20 = *(longlong *)&this_00->field_0x0 + (longlong)local_288[0] * 0x18;
LAB_14bd03322:
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable((UObject *)this_02);
            }
            *(UDS_M_ItemGem_GemSocket **)(lVar20 + 8) = this_02;
          }
          local_2a8[0] = local_2a8[0] + 1;
        } while ((int)local_2a8[0] < 4);
        local_50 = 0;
        if (local_58 != (void *)0x0) {
          FMemory::Free(local_58);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<FString,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_98);
        local_a0 = 0;
        if (local_a8 != (void *)0x0) {
          FMemory::Free(local_a8);
        }
        TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::
        ~TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  ((TSparseArray<TSparseSetElement<TTuple<FName,FString>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    *)local_e8);
        return;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<295645598533550322>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemGemPopup.cpp"
                         ,0xf2,"false");
      if (!bVar4) {
        return;
      }
    }
    else {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<295645598533550317>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemGemPopup.cpp"
                         ,0xed,"false");
      if (!bVar4) {
        return;
      }
    }
  }
  else {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<295645598533550314>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemGemPopup.cpp"
                       ,0xea,"false");
    if (!bVar4) {
      return;
    }
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// IsTryToEquipGem @ 14bd06630

bool __thiscall UDS_M_ItemGemPopup::IsTryToEquipGem(UDS_M_ItemGemPopup *this)

{
  undefined1 *this_00;
  FScriptContainerElement *pFVar1;
  UObject *pUVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  FName FVar8;
  FString *pFVar9;
  ulonglong uVar10;
  wchar_t *pwVar11;
  ForAnyElementType FVar12;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  TArray<TObjectPtr<UDS_M_ItemGem_GemSocket>,TSizedDefaultAllocator<32>_> local_48;
  
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  TMapBase<int,TObjectPtr<UDS_M_ItemGem_GemSocket>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_M_ItemGem_GemSocket>,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<int,TObjectPtr<UDS_M_ItemGem_GemSocket>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_M_ItemGem_GemSocket>,0>_>
              *)&this->GemSocketSlotModelList,&local_48);
  iVar4 = local_48.ArrayNum;
  uVar10 = (ulonglong)local_48.ArrayNum;
  pFVar1 = local_48.AllocatorInstance.Data + uVar10 * 8;
  FVar12.Data = local_48.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar10 != iVar4) {
      `TCheckedPointerIterator<TObjectPtr<UDS_M_ItemGem_GemSocket>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar12.Data == pFVar1) {
      if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_48.AllocatorInstance.Data);
      }
      return false;
    }
    pUVar2 = *(UObject **)FVar12.Data;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    this_00 = &pUVar2[1].field_0x18;
    FVar8 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemGemSocketSlotData>
                      ((FDS_DataContainer *)this_00,(EDS_ItemGemSocketSlotData)local_res10);
    uVar3 = *(undefined8 *)FVar8;
    uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
    pFVar9 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)this_00,uVar5 + (int)((ulonglong)uVar3 >> 0x20),(FName *)FVar8);
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    iVar6 = _wtoi(pwVar11);
    FVar8 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemGemSocketSlotData>
                      ((FDS_DataContainer *)this_00,(EDS_ItemGemSocketSlotData)local_res18);
    uVar3 = *(undefined8 *)FVar8;
    uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
    pFVar9 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)this_00,uVar5 + (int)((ulonglong)uVar3 >> 0x20),(FName *)FVar8);
    if ((pFVar9->Data).ArrayNum == 0) {
      pwVar11 = L"";
    }
    else {
      pwVar11 = (wchar_t *)(pFVar9->Data).AllocatorInstance.Data;
    }
    iVar7 = _wtoi(pwVar11);
    if (iVar6 != iVar7) break;
    uVar10 = local_48._8_8_ & 0xffffffff;
    FVar12.Data = FVar12.Data + 8;
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return true;
}

// OnCancelEquip @ 14bd09ed0

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_M_ItemGemPopup::OnCancelEquip
          (UDS_M_ItemGemPopup *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  UDS_WindowManager *this_00;
  float local_res18 [2];
  uint local_res20 [2];
  
  this_00 = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_00 == (UDS_WindowManager *)0x0) {
      return;
    }
  }
  else {
    if (this_00 == (UDS_WindowManager *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  local_res18[0] = 0.0;
  local_res20[0] = 0;
  UDS_WindowManager::CloseWindow(this_00,PopupCommon,local_res20,local_res18);
  return;
}

// OnClickedCancel @ 14bd0ae30

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_M_ItemGemPopup::OnClickedCancel(UDS_M_ItemGemPopup *this,FDS_ButtonEventField *param_1)

{
  UDS_WindowManager *this_00;
  float local_res18 [2];
  uint local_res20 [2];
  
  this_00 = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_00 == (UDS_WindowManager *)0x0) {
      return;
    }
  }
  else {
    if (this_00 == (UDS_WindowManager *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  local_res18[0] = 0.0;
  local_res20[0] = 0;
  UDS_WindowManager::CloseWindow(this_00,ItemGemChangePopup,local_res20,local_res18);
  return;
}

// OnClickedOK @ 14bd0bb50

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_M_ItemGemPopup::OnClickedOK
          (UDS_M_ItemGemPopup *this,FDS_ButtonEventField *param_1,
          TWeakObjectPtr<UDS_M_ItemGem_GemSocket,FWeakObjectPtr> param_2,int param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  UDS_WindowManager *this_00;
  UDS_M_ItemGem_GemSocket *this_01;
  FWeakObjectPtr local_res18;
  float local_28;
  uint local_24;
  FWeakObjectPtr local_20;
  undefined8 local_18 [2];
  
  local_res18 = param_2.WeakPtr;
  this_00 = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_00 == (UDS_WindowManager *)0x0) {
      return;
    }
  }
  else {
    if (this_00 == (UDS_WindowManager *)0x0) {
      return;
    }
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  local_28 = 0.0;
  local_24 = 0;
  UDS_WindowManager::CloseWindow(this_00,ItemGemChangePopup,&local_24,&local_28);
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar2) {
    iVar3 = QuantityOfGemsToBeEquipped(this,param_3);
    iVar4 = DS_ItemDataUtil::GetTotalStackCountByItemTID(PlayerNormal,param_3);
    if (iVar3 < iVar4) {
      this_01 = (UDS_M_ItemGem_GemSocket *)FWeakObjectPtr::Get(&local_res18);
      UDS_M_ItemGem_GemSocket::SetGemTID(this_01,param_3);
      local_20.ObjectIndex = 0;
      local_20.ObjectSerialNumber = 0;
      local_18[0] = 0;
      pcVar1 = *(code **)(this->_padding_ + 0x2e0);
      FWeakObjectPtr::operator=(&local_20,(FObjectPtr)local_18);
      (*pcVar1)(this,local_20,0);
    }
  }
  else {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<295645598533550529>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemGemPopup.cpp"
                       ,0x1c1,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  return;
}

// OnConfirmEquip @ 14bd0c6e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_M_ItemGemPopup::OnConfirmEquip
          (UDS_M_ItemGemPopup *this,TWeakObjectPtr<UDS_M_CommonPopup,FWeakObjectPtr> param_1)

{
  undefined1 *puVar1;
  TMap<int,TObjectPtr<UDS_M_ItemGem_GemSocket>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_M_ItemGem_GemSocket>,0>_>
  *pTVar2;
  ulonglong uVar3;
  undefined1 *puVar4;
  undefined8 uVar5;
  longlong lVar6;
  code *pcVar7;
  TMap<int,TObjectPtr<UDS_M_ItemGem_GemSocket>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_M_ItemGem_GemSocket>,0>_>
  *pTVar8;
  bool bVar9;
  uint uVar10;
  TObjectPtr<UObject> *pTVar11;
  UObject *pUVar12;
  UClass *pUVar13;
  FName FVar14;
  FString *pFVar15;
  UDS_WindowManager *this_00;
  wchar_t *pwVar16;
  int iVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  undefined1 *puVar22;
  uint *puVar23;
  undefined1 auStackY_1d8 [32];
  undefined1 local_1a8 [8];
  FWeakObjectPtr local_1a0;
  int local_198 [2];
  int local_190;
  int local_18c;
  float local_188;
  uint local_184;
  float local_180;
  uint local_17c;
  FWeakObjectPtr local_178;
  TMap<int,TObjectPtr<UDS_M_ItemGem_GemSocket>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_M_ItemGem_GemSocket>,0>_>
  *local_170;
  uint uStack_168;
  uint uStack_164;
  undefined1 *local_160;
  undefined4 uStack_158;
  uint uStack_154;
  uint local_150;
  uint uStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  int local_140;
  undefined1 local_13c [20];
  TMap<int,TObjectPtr<UDS_M_ItemGem_GemSocket>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_M_ItemGem_GemSocket>,0>_>
  *local_128;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_120;
  undefined8 uStack_100;
  int *local_f8;
  int *local_f0;
  undefined1 local_e8 [8];
  undefined1 local_e0 [8];
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_d8;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator> local_88;
  ulonglong local_38;
  UObject *pUVar21;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  pUVar21 = (UObject *)0x0;
  uVar20 = 0;
  local_198[0] = 0;
  pTVar11 = TMapBase<int,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UObject>,0>_>
            ::FindOrAddImpl<int_const_&>
                      ((TMapBase<int,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UObject>,0>_>
                        *)&this->_padding_,0,local_198);
  pUVar12 = (pTVar11->field0_0x0).DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar12 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar12);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar12);
    }
  }
  local_178.ObjectIndex = 0;
  local_178.ObjectSerialNumber = 0;
  local_13c._4_8_ = pUVar12;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar12);
  }
  FWeakObjectPtr::operator=(&local_178,(FObjectPtr)((longlong)local_13c + 4));
  pUVar12 = FWeakObjectPtr::Get(&local_178);
  if (pUVar12 == (UObject *)0x0) {
LAB_14bd0c7bb:
    pUVar12 = pUVar21;
  }
  else {
    pUVar13 = Z_Construct_UClass_UDS_ItemData_NoRegister();
    iVar17 = (int)pUVar13->_padding_;
    if ((*(int *)(*(longlong *)&pUVar12->field_0x10 + 0x38) < iVar17) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar12->field_0x10 + 0x30) + (longlong)iVar17 * 8) !=
        &pUVar13->_padding_)) goto LAB_14bd0c7bb;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar12);
  }
  local_1a0.ObjectIndex = 0;
  local_1a0.ObjectSerialNumber = 0;
  local_13c._12_8_ = pUVar12;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar12);
  }
  FWeakObjectPtr::operator=(&local_1a0,(FObjectPtr)((longlong)local_13c + 0xc));
  bVar9 = FWeakObjectPtr::IsValid(&local_1a0);
  if (!bVar9) {
    bVar9 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<295645598533550497>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemGemPopup.cpp"
                       ,0x1a1,"false");
    if (!bVar9) {
      return;
    }
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  pTVar2 = &this->GemSocketSlotModelList;
  uStack_164 = 1;
  puVar1 = &(this->GemSocketSlotModelList).field_0x10;
  local_88.Elements._0_8_ = 0;
  local_88.Elements._8_8_ = 0;
  local_88.Elements._32_8_ = 0;
  local_88.Elements._40_4_ = 0;
  local_88.Elements._44_4_ = 0x80;
  local_88.Elements._48_4_ = 0xffffffff;
  local_88.Elements._52_4_ = 0;
  local_88.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_88.HashSize = 0;
  uVar19 = *(uint *)&(this->GemSocketSlotModelList).field_0x28;
  uStack_154 = uVar20;
  local_150 = uVar20;
  if (uVar19 != 0) {
    puVar23 = *(uint **)&(this->GemSocketSlotModelList).field_0x20;
    if (puVar23 == (uint *)0x0) {
      puVar23 = (uint *)puVar1;
    }
    uVar10 = *puVar23;
    pUVar12 = pUVar21;
    uVar20 = 0;
    local_150 = 0;
    while (uVar10 == 0) {
      uVar20 = (int)pUVar21 + 1;
      pUVar21 = (UObject *)(ulonglong)uVar20;
      local_150 = (int)pUVar12 + 0x20;
      pUVar12 = (UObject *)(ulonglong)local_150;
      uStack_154 = uVar19;
      if ((int)((uVar19 - 1) + ((int)(uVar19 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar20)
      goto LAB_14bd0c91e;
      uVar10 = puVar23[(int)uVar20];
    }
    uStack_164 = -uVar10 & uVar10;
    uVar3 = (ulonglong)uStack_164 * 2 + 1;
    lVar6 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    local_140 = (int)lVar6;
    uStack_154 = local_140 + -1 + local_150;
    if ((int)uVar19 < (int)uStack_154) {
      uStack_154 = uVar19;
    }
  }
LAB_14bd0c91e:
  uVar10 = *(uint *)&(this->GemSocketSlotModelList).field_0x28;
  uVar18 = uVar10 & 0xffffffe0;
  iStack_148 = *(int *)&(this->GemSocketSlotModelList).field_0x8 -
               *(int *)&(this->GemSocketSlotModelList).field_0x34;
  uStack_158 = 0xffffffff;
  TStack_120._padding_ = CONCAT44(uStack_164,uVar20);
  TStack_120.CurrentBitIndex = uStack_154;
  TStack_120.UnvisitedBitMask = 0xffffffff;
  iVar17 = (int)uVar10 >> 5;
  TStack_120._28_4_ = uStack_154;
  TStack_120.BaseBitIndex = local_150;
  uStack_100 = CONCAT44(uStack_144,iStack_148);
  local_170 = pTVar2;
  uStack_168 = uVar20;
  local_160 = puVar1;
  uStack_14c = uStack_154;
  local_128 = pTVar2;
  TStack_120.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar10 < 0) || ((int)uVar19 < (int)uVar10)) &&
     (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar9)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  uVar20 = *(uint *)&(this->GemSocketSlotModelList).field_0x28;
  if (uVar10 != uVar20) {
    puVar4 = *(undefined1 **)&(this->GemSocketSlotModelList).field_0x20;
    puVar22 = puVar1;
    if (puVar4 != (undefined1 *)0x0) {
      puVar22 = puVar4;
    }
    uVar19 = -1 << ((byte)uVar10 & 0x1f) & *(uint *)(puVar22 + (longlong)iVar17 * 4);
    while (uVar19 == 0) {
      iVar17 = iVar17 + 1;
      uVar18 = uVar18 + 0x20;
      uVar10 = uVar20;
      if ((int)(((int)(uVar20 - 1) >> 0x1f & 0x1fU) + (uVar20 - 1)) >> 5 < iVar17)
      goto LAB_14bd0ca20;
      uVar19 = *(uint *)(puVar22 + (longlong)iVar17 * 4);
    }
    uVar3 = (ulonglong)(-uVar19 & uVar19) * 2 + 1;
    lVar6 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar6 == 0; lVar6 = lVar6 + -1) {
      }
    }
    uVar10 = (int)lVar6 + -1 + uVar18;
    if ((int)uVar20 < (int)uVar10) {
      uVar10 = uVar20;
    }
  }
LAB_14bd0ca20:
  while( true ) {
    pTVar8 = local_128;
    if (*(int *)&local_128->field_0x8 - *(int *)&local_128->field_0x34 != (int)uStack_100) {
      `TSparseArray<TSparseSetElement<TTuple<int,TObjectPtr<UDS_M_ItemGem_GemSocket>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_1a8);
    }
    if (((TStack_120.CurrentBitIndex == uVar10) &&
        (TStack_120.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar8 == pTVar2))
    break;
    pUVar12 = *(UObject **)(*(longlong *)pTVar8 + 8 + (longlong)TStack_120.CurrentBitIndex * 0x18);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar12 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar12);
    }
    puVar4 = &pUVar12[1].field_0x18;
    FVar14 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemGemSocketSlotData>
                       ((FDS_DataContainer *)puVar4,(EDS_ItemGemSocketSlotData)local_e8);
    uVar5 = *(undefined8 *)FVar14;
    uVar20 = ::GetTypeHash((FNameEntryId)(uint)uVar5);
    pFVar15 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              ::FindOrAddImpl<FName>
                        ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                          *)puVar4,(int)((ulonglong)uVar5 >> 0x20) + uVar20,(FName *)FVar14);
    if ((pFVar15->Data).ArrayNum == 0) {
      pwVar16 = L"";
    }
    else {
      pwVar16 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
    }
    local_18c = _wtoi(pwVar16);
    FVar14 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemGemSocketSlotData>
                       ((FDS_DataContainer *)puVar4,(EDS_ItemGemSocketSlotData)local_e0);
    uVar5 = *(undefined8 *)FVar14;
    uVar20 = ::GetTypeHash((FNameEntryId)(uint)uVar5);
    pFVar15 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              ::FindOrAddImpl<FName>
                        ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                          *)puVar4,(int)((ulonglong)uVar5 >> 0x20) + uVar20,(FName *)FVar14);
    if ((pFVar15->Data).ArrayNum == 0) {
      pwVar16 = L"";
    }
    else {
      pwVar16 = (wchar_t *)(pFVar15->Data).AllocatorInstance.Data;
    }
    local_190 = _wtoi(pwVar16);
    local_f8 = &local_190;
    local_f0 = &local_18c;
    TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<int_&&,int_&&>_>
              (&local_88,(TPairInitializer<int_&&,int_&&> *)local_13c,(bool *)&local_f8);
    TStack_120.UnvisitedBitMask = TStack_120.UnvisitedBitMask & ~TStack_120._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_120);
  }
  local_d8.Elements._0_8_ = 0;
  local_d8.Elements._40_8_ = ___xmm_00000000ffffffff0000008000000000;
  local_d8.Elements._48_8_ = _UNK_150631d98;
  local_d8.Elements._8_8_ = 0;
  local_d8.Elements._32_8_ = 0;
  local_d8.Hash.SecondaryData = (ForElementType<FSetElementId>)0x0;
  local_d8.HashSize = 0;
  TSet<TTuple<int,int>,TDefaultMapHashableKeyFuncs<int,int,0>,FDefaultSetAllocator>::operator=
            (&local_d8,&local_88);
  pUVar12 = FWeakObjectPtr::Get(&local_1a0);
  FDS_ItemGemService::RequestItemGemSocketEquip
            (*(long64 *)&pUVar12[8].field_0x8,
             (TMap<int,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,int,0>_> *)&local_d8
            );
  this_00 = UDS_WindowManager::GetInst();
  if (UE::GC::GIsIncrementalReachabilityPending == false) {
    if (this_00 == (UDS_WindowManager *)0x0) goto LAB_14bd0cc16;
  }
  else {
    if (this_00 == (UDS_WindowManager *)0x0) goto LAB_14bd0cc16;
    UE::GC::MarkAsReachable((UObject *)this_00);
  }
  local_188 = 0.0;
  local_184 = 0;
  UDS_WindowManager::CloseWindow(this_00,ItemGemPopup,&local_184,&local_188);
  local_180 = 0.0;
  local_17c = 0;
  UDS_WindowManager::CloseWindow(this_00,PopupCommon,&local_17c,&local_180);
LAB_14bd0cc16:
  local_88.HashSize = 0;
  if (local_88.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)local_88.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&local_88.Elements);
  return;
}

// OnOpenCallBackChangePopup @ 14bd0eb10

void __thiscall
UDS_M_ItemGemPopup::OnOpenCallBackChangePopup
          (UDS_M_ItemGemPopup *this,UDS_UserWidget *param_1,
          TWeakObjectPtr<UDS_M_ItemGem_GemSocket,FWeakObjectPtr> param_2,int param_3)

{
  undefined8 uVar1;
  code *pcVar2;
  FDS_ViewModelContext_CommonIconTextButton *pFVar3;
  ForAnyElementType FVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  ulong64 uVar9;
  UDS_M_ItemGem_GemSocket *this_00;
  FDS_ItemGemSocketTableRow *pFVar10;
  UObject *pUVar11;
  UDS_M_ItemDetail_StatusSlot *pUVar12;
  FName FVar13;
  FString *pFVar14;
  FDS_ItemBaseTableRow *pFVar15;
  FDS_ItemAbilityTableRow *pFVar16;
  FName *pFVar17;
  wchar_t *_Str;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  FWeakObjectPtr local_2a8;
  FWeakObjectPtr local_2a0;
  FWeakObjectPtr local_298;
  FWeakObjectPtr local_290;
  FWeakObjectPtr local_288 [2];
  TSharedPtr<FDS_ViewModelContext_CommonIconTextButton,1> local_278;
  TSharedPtr<FDS_ViewModelContext_CommonIconTextButton,1> local_268;
  FName local_258;
  UDS_M_ItemGemPopup *local_250;
  UDS_UserWidget *local_248;
  FName local_240;
  UDS_M_ItemGemPopup *local_238;
  UDS_UserWidget *local_230;
  UDS_UserWidget *local_228;
  UDS_UserWidget *local_220;
  UDS_UserWidget *local_218;
  UDS_UserWidget *local_210;
  FDS_Text local_208;
  FDS_Text local_1b8;
  TSharedPtr<FDS_ViewModelContext,1> local_168;
  TSharedPtr<FDS_ViewModelContext,1> local_158;
  TSharedPtr<FDS_ViewModelContext,1> local_148;
  TSharedPtr<FDS_ViewModelContext,1> local_138;
  FDestructionSentinel local_128;
  undefined1 *local_110;
  FDestructionSentinel local_108;
  undefined1 *local_f0;
  undefined1 local_e8 [8];
  FName local_e0;
  FName local_d8;
  FName local_d0;
  FName local_c8;
  FName local_c0;
  FName local_b8 [2];
  TSharedPtr<FDS_ViewModelContext,1> local_a8;
  TSharedPtr<FDS_ViewModelContext,1> local_98;
  undefined1 local_88 [8];
  TReferenceControllerBase<1> *local_80;
  undefined1 local_78 [8];
  TReferenceControllerBase<1> *local_70;
  undefined1 local_68 [8];
  TReferenceControllerBase<1> *local_60;
  undefined1 local_58 [8];
  TReferenceControllerBase<1> *local_50;
  FName local_48;
  FName local_40;
  
  local_res18[0] = param_2.WeakPtr;
  MakeContext<FDS_ViewModelContext_CommonIconTextButton>(&local_268);
  pFVar3 = local_268.Object;
  if ((local_268.Object == (FDS_ViewModelContext_CommonIconTextButton *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(undefined4 *)&pFVar3->_padding_ = 0x15b;
  ::FName::FName(&local_258,"DS_VM_CommonIconTextButton_Cancel");
  pFVar3->_padding_ = (longlong)local_258;
  local_208.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_208.StringEnumTableNameID.Number = 0;
  local_208.TimeExpressionType = None;
  local_208.DateTime.Ticks = 0;
  local_208.TimeSpan.Ticks = 0;
  local_208.IsExpression = false;
  local_208.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_208.UniqueString.Data.ArrayNum = 0;
  local_208.UniqueString.Data.ArrayMax = 0;
  local_208.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_208.FormatArgs.ArrayNum = 0;
  local_208.FormatArgs.ArrayMax = 0;
  local_208.StringTableType = StringUi;
  local_208.StringTableID = 0x66;
  FDS_Text::operator=(&pFVar3->DSText,&local_208);
  FVar4.Data = local_208.FormatArgs.AllocatorInstance.Data;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_208.FormatArgs.AllocatorInstance.Data,
             local_208.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)FVar4.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(FVar4.Data);
  }
  if (local_208.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_208.UniqueString.Data.AllocatorInstance.Data);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar3->OnClickDelegate,
             (FWriteAccessScope *)&local_128);
  local_110 = &(pFVar3->OnClickDelegate).field_0x8;
  puVar8 = UE::Core::Private::DelegateAllocate(0x28,(FDelegateAllocation *)local_110);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[2] = uVar9;
    *puVar8 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_M_ItemGemPopup____A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_M_ItemGemPopup *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar8[3] = 0;
    local_250 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_M_ItemGemPopup *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 3),(FObjectPtr)&local_250);
    puVar8[4] = OnClickedCancel;
  }
  if (local_128.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_128.Accessor,&local_128);
  }
  local_a8.Object = (FDS_ViewModelContext *)local_268.Object;
  local_a8.SharedReferenceCount.ReferenceController =
       local_268.SharedReferenceCount.ReferenceController;
  if (local_268.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_268.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_268.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_UserWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_248 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_UserWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)&local_248);
  DS_ViewModelTemplateUtil::BindViewModel
            ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_res10,&local_a8,false);
  MakeContext<FDS_ViewModelContext_CommonIconTextButton>(&local_278);
  pFVar3 = local_278.Object;
  if ((local_278.Object == (FDS_ViewModelContext_CommonIconTextButton *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  *(undefined4 *)&pFVar3->_padding_ = 0x15b;
  ::FName::FName(&local_240,"DS_VM_CommonIconTextButton_OK");
  pFVar3->_padding_ = (longlong)local_240;
  local_1b8.StringEnumTableNameID.ComparisonIndex.Value = 0;
  local_1b8.StringEnumTableNameID.Number = 0;
  local_1b8.DateTime.Ticks = 0;
  local_1b8.TimeSpan.Ticks = 0;
  local_1b8.TimeExpressionType = None;
  local_1b8.IsExpression = false;
  local_1b8.UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.UniqueString.Data.ArrayNum = 0;
  local_1b8.UniqueString.Data.ArrayMax = 0;
  local_1b8.FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_1b8.FormatArgs.ArrayNum = 0;
  local_1b8.FormatArgs.ArrayMax = 0;
  local_1b8.StringTableType = StringUi;
  local_1b8.StringTableID = 0x65;
  FDS_Text::operator=(&pFVar3->DSText,&local_1b8);
  FVar4.Data = local_1b8.FormatArgs.AllocatorInstance.Data;
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_1b8.FormatArgs.AllocatorInstance.Data,
             local_1b8.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)FVar4.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(FVar4.Data);
  }
  if (local_1b8.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.UniqueString.Data.AllocatorInstance.Data);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&pFVar3->OnClickDelegate,
             (FWriteAccessScope *)&local_108);
  local_f0 = &(pFVar3->OnClickDelegate).field_0x8;
  puVar8 = UE::Core::Private::DelegateAllocate(0x30,(FDelegateAllocation *)local_f0);
  if (puVar8 != (undefined8 *)0x0) {
    *puVar8 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_M_ItemGem_GemSocket__UFWeakObjectPtr____H__6B_
    ;
    *(FWeakObjectPtr *)(puVar8 + 1) = local_res18[0];
    *(int *)(puVar8 + 2) = param_3;
    uVar9 = FDelegateHandle::GenerateNewID();
    puVar8[3] = uVar9;
    *puVar8 = &
              ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_M_ItemGemPopup____A6AXAEBUFDS_ButtonEventField___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_M_ItemGem_GemSocket__UFWeakObjectPtr____H__6B_
    ;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_M_ItemGemPopup *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    puVar8[4] = 0;
    local_238 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UDS_M_ItemGemPopup *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 4),(FObjectPtr)&local_238);
    puVar8[5] = OnClickedOK;
  }
  if (local_108.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_108.Accessor,&local_108);
  }
  local_98.Object = (FDS_ViewModelContext *)local_278.Object;
  local_98.SharedReferenceCount.ReferenceController =
       local_278.SharedReferenceCount.ReferenceController;
  if (local_278.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_278.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_UserWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  local_2a8.ObjectIndex = 0;
  local_2a8.ObjectSerialNumber = 0;
  local_230 = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_UserWidget *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  FWeakObjectPtr::operator=(&local_2a8,(FObjectPtr)&local_230);
  DS_ViewModelTemplateUtil::BindViewModel
            ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_2a8,&local_98,false);
  this_00 = (UDS_M_ItemGem_GemSocket *)FWeakObjectPtr::Get(local_res18);
  pFVar10 = UDS_M_ItemGem_GemSocket::GetSocketTable(this_00);
  if (pFVar10 == (FDS_ItemGemSocketTableRow *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<295645598533550440>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemGemPopup.cpp"
                       ,0x168,"false");
    if (bVar5) goto code_r0x00014bd0f5f0;
    goto LAB_14bd0f705;
  }
  pUVar11 = GetTransientPackageAsObject();
  pUVar12 = NewObject<UDS_M_ItemDetail_StatusSlot>(pUVar11);
  if (pUVar12 == (UDS_M_ItemDetail_StatusSlot *)0x0) {
LAB_14bd0f240:
    pUVar11 = GetTransientPackageAsObject();
    pUVar12 = NewObject<UDS_M_ItemDetail_StatusSlot>(pUVar11);
    if (pUVar12 != (UDS_M_ItemDetail_StatusSlot *)0x0) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar12);
      }
      UDS_M_ItemDetail_StatusSlot::InitModel
                (pUVar12,pFVar10->BonusStatusType,pFVar10->BonusStatusValue);
      pcVar2 = *(code **)(*(longlong *)pUVar12 + 0x308);
      pFVar17 = ::FName::FName(local_b8,L"");
      FVar13 = *pFVar17;
      pFVar17 = ::FName::FName(&local_c0,L"DS_VM_ItemDetail_StatusSlot_EquippedBonus");
      puVar8 = (undefined8 *)(*pcVar2)(pUVar12,local_78,0xad,*pFVar17,FVar13);
      local_158.Object = (FDS_ViewModelContext *)*puVar8;
      local_158.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar8[1];
      if (local_158.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_158.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_UserWidget *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_298.ObjectIndex = 0;
      local_298.ObjectSerialNumber = 0;
      local_220 = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_UserWidget *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_298,(FObjectPtr)&local_220);
      DS_ViewModelTemplateUtil::BindViewModel
                ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_298,&local_158,false);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_70);
    }
    pUVar11 = GetTransientPackageAsObject();
    pUVar12 = NewObject<UDS_M_ItemDetail_StatusSlot>(pUVar11);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
       (pUVar12 == (UDS_M_ItemDetail_StatusSlot *)0x0)) {
      if (pUVar12 != (UDS_M_ItemDetail_StatusSlot *)0x0) goto LAB_14bd0f387;
    }
    else {
      UE::GC::MarkAsReachable((UObject *)pUVar12);
LAB_14bd0f387:
      pFVar15 = FDS_ItemBaseTableRow::Get((longlong)param_3,true);
      if (pFVar15 == (FDS_ItemBaseTableRow *)0x0) {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<295645598533550470>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemGemPopup.cpp"
                           ,0x186,"false");
        goto joined_r0x00014bd0f05a;
      }
      pFVar16 = FDS_ItemAbilityTableRow::Get((longlong)pFVar15->ID_Ability,true);
      if (pFVar16 == (FDS_ItemAbilityTableRow *)0x0) {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<295645598533550473>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemGemPopup.cpp"
                           ,0x189,"false");
        goto joined_r0x00014bd0f0a4;
      }
      if ((pFVar16->StatusType).ArrayNum < 1) {
        bVar5 = UE::Assert::Private::ExecCheckImplInternal
                          (&bGEnsureHasExecuted<295645598533550475>,false,
                           "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemGemPopup.cpp"
                           ,0x18b,"false");
        if (bVar5) goto code_r0x00014bd0f5f0;
        goto LAB_14bd0f705;
      }
      if (((pFVar16->StatusValue).ArrayNum < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      iVar7 = *(int *)(pFVar16->StatusValue).AllocatorInstance.Data;
      if (((pFVar16->StatusType).ArrayNum < 1) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      UDS_M_ItemDetail_StatusSlot::InitModel
                (pUVar12,*(EDS_StatusType *)(pFVar16->StatusType).AllocatorInstance.Data,iVar7);
      pcVar2 = *(code **)(*(longlong *)pUVar12 + 0x308);
      pFVar17 = ::FName::FName(&local_40,L"");
      FVar13 = *pFVar17;
      pFVar17 = ::FName::FName(&local_48,L"DS_VM_ItemDetail_StatusSlot_UnEquipped");
      puVar8 = (undefined8 *)(*pcVar2)(pUVar12,local_68,0xad,*pFVar17,FVar13);
      local_148.Object = (FDS_ViewModelContext *)*puVar8;
      local_148.SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)puVar8[1];
      if (local_148.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0)
      {
        LOCK();
        (local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_148.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
        UNLOCK();
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_UserWidget *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_290.ObjectIndex = 0;
      local_290.ObjectSerialNumber = 0;
      local_218 = param_1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_1 != (UDS_UserWidget *)0x0)
         ) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_290,(FObjectPtr)&local_218);
      DS_ViewModelTemplateUtil::BindViewModel
                ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_290,&local_148,false);
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_60);
    }
    pFVar10 = FDS_ItemGemSocketTableRow::Get((longlong)param_3,true);
    if (pFVar10 == (FDS_ItemGemSocketTableRow *)0x0) {
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<295645598533550483>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemGemPopup.cpp"
                         ,0x193,"false");
      if (bVar5) goto code_r0x00014bd0f5f0;
    }
    else {
      pUVar11 = GetTransientPackageAsObject();
      pUVar12 = NewObject<UDS_M_ItemDetail_StatusSlot>(pUVar11);
      if (pUVar12 != (UDS_M_ItemDetail_StatusSlot *)0x0) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar12);
        }
        UDS_M_ItemDetail_StatusSlot::InitModel
                  (pUVar12,pFVar10->BonusStatusType,pFVar10->BonusStatusValue);
        pcVar2 = *(code **)(*(longlong *)pUVar12 + 0x308);
        pFVar17 = ::FName::FName(&local_d0,L"");
        FVar13 = *pFVar17;
        pFVar17 = ::FName::FName(&local_c8,L"DS_VM_ItemDetail_StatusSlot_UnEquippedBonus");
        puVar8 = (undefined8 *)(*pcVar2)(pUVar12,local_58,0xad,*pFVar17,FVar13);
        local_138.Object = (FDS_ViewModelContext *)*puVar8;
        local_138.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)puVar8[1];
        if (local_138.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_138.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (param_1 != (UDS_UserWidget *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        local_288[0].ObjectIndex = 0;
        local_288[0].ObjectSerialNumber = 0;
        local_210 = param_1;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (param_1 != (UDS_UserWidget *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        FWeakObjectPtr::operator=(local_288,(FObjectPtr)&local_210);
        DS_ViewModelTemplateUtil::BindViewModel
                  ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_288[0],&local_138,false);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_50);
      }
    }
  }
  else {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)pUVar12);
    }
    pUVar11 = FWeakObjectPtr::Get(local_res18);
    FVar13 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemGemSocketSlotData>
                       ((FDS_DataContainer *)&pUVar11[1].field_0x18,
                        (EDS_ItemGemSocketSlotData)local_e8);
    uVar1 = *(undefined8 *)FVar13;
    uVar6 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
    pFVar14 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              ::FindOrAddImpl<FName>
                        ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                          *)&pUVar11[1].field_0x18,(int)((ulonglong)uVar1 >> 0x20) + uVar6,
                         (FName *)FVar13);
    if ((pFVar14->Data).ArrayNum == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
    }
    iVar7 = _wtoi(_Str);
    pFVar15 = FDS_ItemBaseTableRow::Get((longlong)iVar7,true);
    if (pFVar15 != (FDS_ItemBaseTableRow *)0x0) {
      pFVar16 = FDS_ItemAbilityTableRow::Get((longlong)pFVar15->ID_Ability,true);
      if (pFVar16 != (FDS_ItemAbilityTableRow *)0x0) {
        if ((pFVar16->StatusType).ArrayNum < 1) {
          bVar5 = UE::Assert::Private::ExecCheckImplInternal
                            (&bGEnsureHasExecuted<295645598533550451>,false,
                             "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemGemPopup.cpp"
                             ,0x173,"false");
          if (bVar5) goto code_r0x00014bd0f5f0;
          goto LAB_14bd0f705;
        }
        if (((pFVar16->StatusValue).ArrayNum < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar7 = *(int *)(pFVar16->StatusValue).AllocatorInstance.Data;
        if (((pFVar16->StatusType).ArrayNum < 1) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        UDS_M_ItemDetail_StatusSlot::InitModel
                  (pUVar12,*(EDS_StatusType *)(pFVar16->StatusType).AllocatorInstance.Data,iVar7);
        pcVar2 = *(code **)(*(longlong *)pUVar12 + 0x308);
        pFVar17 = ::FName::FName(&local_e0,L"");
        FVar13 = *pFVar17;
        pFVar17 = ::FName::FName(&local_d8,L"DS_VM_ItemDetail_StatusSlot_Equipped");
        puVar8 = (undefined8 *)(*pcVar2)(pUVar12,local_88,0xad,*pFVar17,FVar13);
        local_168.Object = (FDS_ViewModelContext *)*puVar8;
        local_168.SharedReferenceCount.ReferenceController =
             (TReferenceControllerBase<1> *)puVar8[1];
        if (local_168.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_168.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (param_1 != (UDS_UserWidget *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        local_2a0.ObjectIndex = 0;
        local_2a0.ObjectSerialNumber = 0;
        local_228 = param_1;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (param_1 != (UDS_UserWidget *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        FWeakObjectPtr::operator=(&local_2a0,(FObjectPtr)&local_228);
        DS_ViewModelTemplateUtil::BindViewModel
                  ((TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr>)local_2a0,&local_168,false);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_80);
        goto LAB_14bd0f240;
      }
      bVar5 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<295645598533550449>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemGemPopup.cpp"
                         ,0x171,"false");
joined_r0x00014bd0f0a4:
      if (bVar5) goto code_r0x00014bd0f5f0;
      goto LAB_14bd0f705;
    }
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<295645598533550446>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemGemPopup.cpp"
                       ,0x16e,"false");
joined_r0x00014bd0f05a:
    if (bVar5) {
code_r0x00014bd0f5f0:
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
LAB_14bd0f705:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_278.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_268.SharedReferenceCount.ReferenceController);
  return;
}

// QuantityOfGemsToBeEquipped @ 14bd174a0

int __thiscall UDS_M_ItemGemPopup::QuantityOfGemsToBeEquipped(UDS_M_ItemGemPopup *this,int param_1)

{
  undefined1 *this_00;
  FScriptContainerElement *pFVar1;
  UObject *pUVar2;
  undefined8 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  FName FVar7;
  FString *pFVar8;
  ulonglong uVar9;
  wchar_t *pwVar10;
  int iVar11;
  ForAnyElementType FVar12;
  undefined1 local_res8 [8];
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  TArray<TObjectPtr<UDS_M_ItemGem_GemSocket>,TSizedDefaultAllocator<32>_> local_48;
  
  iVar11 = 0;
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  TMapBase<int,TObjectPtr<UDS_M_ItemGem_GemSocket>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_M_ItemGem_GemSocket>,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<int,TObjectPtr<UDS_M_ItemGem_GemSocket>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_M_ItemGem_GemSocket>,0>_>
              *)&this->GemSocketSlotModelList,&local_48);
  iVar4 = local_48.ArrayNum;
  uVar9 = (ulonglong)local_48.ArrayNum;
  pFVar1 = local_48.AllocatorInstance.Data + uVar9 * 8;
  FVar12.Data = local_48.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar9 != iVar4) {
      `TCheckedPointerIterator<TObjectPtr<UDS_M_ItemGem_GemSocket>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res8);
    }
    if (FVar12.Data == pFVar1) break;
    pUVar2 = *(UObject **)FVar12.Data;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar2);
    }
    this_00 = &pUVar2[1].field_0x18;
    FVar7 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemGemSocketSlotData>
                      ((FDS_DataContainer *)this_00,(EDS_ItemGemSocketSlotData)local_res18);
    uVar3 = *(undefined8 *)FVar7;
    uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
    pFVar8 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
             ::FindOrAddImpl<FName>
                       ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                         *)this_00,uVar5 + (int)((ulonglong)uVar3 >> 0x20),(FName *)FVar7);
    if ((pFVar8->Data).ArrayNum == 0) {
      pwVar10 = L"";
    }
    else {
      pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
    }
    iVar6 = _wtoi(pwVar10);
    if (iVar6 == param_1) {
      FVar7 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemGemSocketSlotData>
                        ((FDS_DataContainer *)this_00,(EDS_ItemGemSocketSlotData)local_res20);
      uVar3 = *(undefined8 *)FVar7;
      uVar5 = ::GetTypeHash((FNameEntryId)(uint)uVar3);
      pFVar8 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
               ::FindOrAddImpl<FName>
                         ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                           *)this_00,uVar5 + (int)((ulonglong)uVar3 >> 0x20),(FName *)FVar7);
      if ((pFVar8->Data).ArrayNum == 0) {
        pwVar10 = L"";
      }
      else {
        pwVar10 = (wchar_t *)(pFVar8->Data).AllocatorInstance.Data;
      }
      iVar6 = _wtoi(pwVar10);
      if (iVar6 != param_1) {
        iVar11 = iVar11 + 1;
      }
    }
    uVar9 = local_48._8_8_ & 0xffffffff;
    FVar12.Data = FVar12.Data + 8;
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return iVar11;
}

// TranslateEvent @ 14bd233e0

EDS_ModelEventGemPopup __thiscall
UDS_M_ItemGemPopup::TranslateEvent
          (UDS_M_ItemGemPopup *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  EDS_ItemSlotStateType EVar4;
  EDS_ModelEventGemPopup EVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  UDS_M_ItemImplBase *pUVar8;
  UObject *pUVar9;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_48;
  FWeakObjectPtr local_40;
  UObject *local_38;
  UObject *local_30;
  UObject *local_28;
  UObject *local_20;
  
  local_res10 = param_1.WeakPtr;
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar3) {
    return None;
  }
  pUVar6 = FWeakObjectPtr::Get(&local_res10);
  pUVar9 = (UObject *)0x0;
  if (pUVar6 == (UObject *)0x0) {
LAB_14bd23436:
    pUVar6 = pUVar9;
  }
  else {
    pUVar7 = Z_Construct_UClass_UDS_ModelEventGemSocketSlot_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar7->_padding_)) goto LAB_14bd23436;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_48.ObjectIndex = 0;
  local_48.ObjectSerialNumber = 0;
  local_38 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_48,(FObjectPtr)&local_38);
  bVar3 = FWeakObjectPtr::IsValid(&local_48);
  if ((bVar3) && (pUVar6 = FWeakObjectPtr::Get(&local_48), pUVar6[5].field_0x8 == '\0')) {
    return ClickedLeftButtonSocket;
  }
  pUVar6 = FWeakObjectPtr::Get(&local_res10);
  if (pUVar6 == (UObject *)0x0) {
LAB_14bd234de:
    pUVar6 = pUVar9;
  }
  else {
    pUVar7 = Z_Construct_UClass_UDS_ModelEventItemBase_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar7->_padding_)) goto LAB_14bd234de;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_30 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_30);
  bVar3 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar3) {
    pUVar6 = FWeakObjectPtr::Get(&local_res10);
    pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar6 + 1));
    if (pUVar6 == (UObject *)0x0) {
LAB_14bd23574:
      pUVar6 = pUVar9;
    }
    else {
      pUVar7 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
      iVar1 = (int)pUVar7->_padding_;
      if ((*(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar7->_padding_)) goto LAB_14bd23574;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    local_res18.ObjectIndex = 0;
    local_res18.ObjectSerialNumber = 0;
    local_28 = pUVar6;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_28);
    bVar3 = FWeakObjectPtr::IsValid(&local_res18);
    if (!bVar3) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<295645598533550267>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemGemPopup.cpp"
                         ,0xbb,"false");
      if (!bVar3) {
        return None;
      }
      pcVar2 = (code *)swi(3);
      EVar5 = (*pcVar2)();
      return EVar5;
    }
    pUVar8 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(&local_res18);
    EVar4 = UDS_M_ItemImplBase::GetItemSlotType(pUVar8);
    if ((EVar4 == ItemGem) &&
       (pUVar6 = FWeakObjectPtr::Get(&local_res20), *(int *)&pUVar6[5].field_0x8 == 7)) {
      return ClickedRightButtonInventoryBagGem;
    }
    pUVar8 = (UDS_M_ItemImplBase *)FWeakObjectPtr::Get(&local_res18);
    EVar4 = UDS_M_ItemImplBase::GetItemSlotType(pUVar8);
    if (EVar4 == ItemGemEquip) {
      pUVar6 = FWeakObjectPtr::Get(&local_res20);
      iVar1 = *(int *)&pUVar6[5].field_0x8;
      if (iVar1 == 2) {
        return DragCancel;
      }
      if (iVar1 == 3) {
        return DroppedSocketGem;
      }
      if (iVar1 == 7) {
        return ClickedRightButtonSocketGem;
      }
    }
  }
  pUVar6 = FWeakObjectPtr::Get(&local_res10);
  if (pUVar6 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_UDS_ModelEventGemPopup_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) goto LAB_14bd236c2;
  }
  pUVar6 = pUVar9;
LAB_14bd236c2:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_40.ObjectIndex = 0;
  local_40.ObjectSerialNumber = 0;
  local_20 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_40,(FObjectPtr)&local_20);
  bVar3 = FWeakObjectPtr::IsValid(&local_40);
  if (!bVar3) {
    return None;
  }
  pUVar6 = FWeakObjectPtr::Get(&local_40);
  return *(EDS_ModelEventGemPopup *)&pUVar6[5].field_0x8;
}

// TryingToEquipGemOnSocket @ 14bd24690

/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UDS_M_ItemGemPopup::TryingToEquipGemOnSocket
          (UDS_M_ItemGemPopup *this,TWeakObjectPtr<UDS_M_ItemGem_GemSocket,FWeakObjectPtr> param_1,
          int param_2)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  UObject *pUVar5;
  FName FVar6;
  FString *pFVar7;
  UDS_M_ItemGem_GemSocket *this_00;
  UDS_WindowManager *this_01;
  undefined8 *puVar8;
  ulong64 uVar9;
  wchar_t *_Str;
  wchar_t *_Str_00;
  FWeakObjectPtr local_res10;
  UDS_M_ItemGemPopup *local_res20;
  undefined1 local_68 [8];
  FDelegateAllocation local_60;
  FDestructionSentinel local_50;
  FDelegateAllocation *local_38;
  
  local_res10 = param_1.WeakPtr;
  pUVar5 = FWeakObjectPtr::Get(&local_res10);
  FVar6 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemGemSocketSlotData>
                    ((FDS_DataContainer *)&pUVar5[1].field_0x18,
                     (EDS_ItemGemSocketSlotData)&local_res20);
  uVar1 = *(undefined8 *)FVar6;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar7 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&pUVar5[1].field_0x18,uVar2 + (int)((ulonglong)uVar1 >> 0x20),
                      (FName *)FVar6);
  _Str_00 = L"";
  if ((pFVar7->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  iVar3 = _wtoi(_Str);
  pUVar5 = FWeakObjectPtr::Get(&local_res10);
  FVar6 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemGemSocketSlotData>
                    ((FDS_DataContainer *)&pUVar5[1].field_0x18,
                     (EDS_ItemGemSocketSlotData)&local_res20);
  uVar1 = *(undefined8 *)FVar6;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar7 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&pUVar5[1].field_0x18,uVar2 + (int)((ulonglong)uVar1 >> 0x20),
                      (FName *)FVar6);
  if ((pFVar7->Data).ArrayNum != 0) {
    _Str_00 = (wchar_t *)(pFVar7->Data).AllocatorInstance.Data;
  }
  iVar4 = _wtoi(_Str_00);
  if (iVar4 == param_2) {
    this_00 = (UDS_M_ItemGem_GemSocket *)FWeakObjectPtr::Get(&local_res10);
    param_2 = iVar3;
  }
  else {
    if (0 < iVar3) {
      this_01 = UDS_WindowManager::GetInst();
      if (UE::GC::GIsIncrementalReachabilityPending == false) {
        if (this_01 == (UDS_WindowManager *)0x0) {
          return;
        }
      }
      else {
        if (this_01 == (UDS_WindowManager *)0x0) {
          return;
        }
        UE::GC::MarkAsReachable((UObject *)this_01);
      }
      local_68 = (undefined1  [8])0x0;
      local_60.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
      local_60.DelegateSize = 0;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_68,
                 (FWriteAccessScope *)&local_50);
      local_38 = &local_60;
      puVar8 = UE::Core::Private::DelegateAllocate(0x30,&local_60);
      if (puVar8 != (undefined8 *)0x0) {
        *puVar8 = &
                  ___7__TCommonDelegateInstanceState___A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_M_ItemGem_GemSocket__UFWeakObjectPtr____H__6B_
        ;
        *(FWeakObjectPtr *)(puVar8 + 1) = local_res10;
        *(int *)(puVar8 + 2) = param_2;
        uVar9 = FDelegateHandle::GenerateNewID();
        puVar8[3] = uVar9;
        *puVar8 = &
                  ___7__TBaseUObjectMethodDelegateInstance__0A_VUDS_M_ItemGemPopup____A6AXPEAVUDS_UserWidget___ZUFDefaultDelegateUserPolicy__U__TWeakObjectPtr_VUDS_M_ItemGem_GemSocket__UFWeakObjectPtr____H__6B_
        ;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_M_ItemGemPopup *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        puVar8[4] = 0;
        local_res20 = this;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (this != (UDS_M_ItemGemPopup *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        FWeakObjectPtr::operator=((FWeakObjectPtr *)(puVar8 + 4),(FObjectPtr)&local_res20);
        puVar8[5] = OnOpenCallBackChangePopup;
      }
      if (local_50.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_50.Accessor,&local_50);
      }
      UDS_WindowManager::OpenWindow
                (this_01,ItemGemChangePopup,
                 (TDelegate<void___cdecl(UDS_UserWidget_*),FDefaultDelegateUserPolicy> *)local_68);
      return;
    }
    iVar3 = QuantityOfGemsToBeEquipped(this,param_2);
    iVar4 = DS_ItemDataUtil::GetTotalStackCountByItemTID(PlayerNormal,param_2);
    if (iVar4 <= iVar3) {
      return;
    }
    this_00 = (UDS_M_ItemGem_GemSocket *)FWeakObjectPtr::Get(&local_res10);
  }
  UDS_M_ItemGem_GemSocket::SetGemTID(this_00,param_2);
  return;
}

// UpdateView @ 14bd2a6c0

void __thiscall
UDS_M_ItemGemPopup::UpdateView
          (UDS_M_ItemGemPopup *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1,
          bool param_2)

{
  int iVar1;
  undefined8 *puVar2;
  bool bVar3;
  TObjectPtr<UObject> *pTVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  TObjectPtr<UObject>_u_0 TVar7;
  longlong lVar8;
  UObject *local_res8;
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_58;
  TObjectPtr<UObject>_u_0 local_50;
  undefined8 local_48;
  
  UDS_ModelBase::UpdateView((UDS_ModelBase *)this,param_1,false);
  local_50.DebugPtr = (UObject *)0x0;
  local_48 = 0;
  TMapBase<int,TObjectPtr<UDS_M_ItemGem_GemSocket>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_M_ItemGem_GemSocket>,0>_>
  ::GenerateValueArray<TSizedDefaultAllocator<32>_>
            ((TMapBase<int,TObjectPtr<UDS_M_ItemGem_GemSocket>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UDS_M_ItemGem_GemSocket>,0>_>
              *)&this->GemSocketSlotModelList,
             (TArray<TObjectPtr<UDS_M_ItemGem_GemSocket>,TSizedDefaultAllocator<32>_> *)
             &local_50.ObjectPtr);
  iVar1 = (int)local_48;
  lVar8 = (longlong)(int)local_48;
  puVar2 = (undefined8 *)&(local_50.DebugPtr)->field_0x0;
  TVar7 = local_50;
  while( true ) {
    if ((int)local_48 != iVar1) {
      `TCheckedPointerIterator<TObjectPtr<UDS_M_ItemGem_GemSocket>,int,0>::operator!='::__l2::
      <lambda_1>::operator()(&local_res8);
    }
    if (TVar7.DebugPtr == (UObject *)(puVar2 + lVar8)) break;
                    /* WARNING: Load size is inaccurate */
    pUVar5 = *TVar7.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar5 != (UObject *)0x0) goto LAB_14bd2a744;
    }
    else if (pUVar5 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar5);
LAB_14bd2a744:
      (**(code **)(*(longlong *)pUVar5 + 0x2e0))(pUVar5,param_1.WeakPtr,0);
    }
    TVar7.DebugPtr = (UObject *)&(TVar7.DebugPtr)->field_0x8;
  }
  if (local_50.DebugPtr != (UObject *)0x0) {
    FMemory::Free(local_50.DebugPtr);
  }
  local_res8 = (UObject *)CONCAT44(local_res8._4_4_,1);
  pTVar4 = TMapBase<int,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UObject>,0>_>
           ::FindOrAddImpl<int_const_&>
                     ((TMapBase<int,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UObject>,0>_>
                       *)&this->_padding_,1,(int *)&local_res8);
  TVar7.ObjectPtr.field0_0x0 = (FObjectPtr)(pTVar4->field0_0x0).DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (TVar7.DebugPtr != (UObject *)0x0) {
      UE::GC::MarkAsReachable(TVar7.DebugPtr);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar7.DebugPtr != (UObject *)0x0))
    {
      UE::GC::MarkAsReachable(TVar7.DebugPtr);
    }
  }
  local_58.ObjectIndex = 0;
  local_58.ObjectSerialNumber = 0;
  local_50.ObjectPtr.field0_0x0 = TVar7.ObjectPtr.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (TVar7.DebugPtr != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(TVar7.DebugPtr);
  }
  FWeakObjectPtr::operator=(&local_58,(FObjectPtr)&local_50);
  pUVar5 = FWeakObjectPtr::Get(&local_58);
  if (pUVar5 != (UObject *)0x0) {
    pUVar6 = Z_Construct_UClass_UDS_ModelBase_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) goto LAB_14bd2a81d;
  }
  pUVar5 = (UObject *)0x0;
LAB_14bd2a81d:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_res8 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_res8);
  bVar3 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar3) {
    pUVar5 = FWeakObjectPtr::Get(&local_res20);
    (**(code **)(*(longlong *)pUVar5 + 0x2e0))(pUVar5,param_1.WeakPtr,0);
  }
  return;
}

