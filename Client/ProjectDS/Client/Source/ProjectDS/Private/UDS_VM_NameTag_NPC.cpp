// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 25

// StaticClass @ 14b788eb0

UClass * __cdecl UDS_VM_NameTag_NPC::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_NameTag_NPC.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_NameTag_NPC",
               &Z_Registration_Info_UClass_UDS_VM_NameTag_NPC.InnerSingleton,
               StaticRegisterNativesUDS_VM_NameTag_NPC,0x260,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_NameTag_NPC>,
               InternalVTableHelperCtorCaller<UDS_VM_NameTag_NPC>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_NameTag_NPC.InnerSingleton;
}

// UDS_VM_NameTag_NPC @ 14b78c5f0

UDS_VM_NameTag_NPC * __thiscall
UDS_VM_NameTag_NPC::UDS_VM_NameTag_NPC(UDS_VM_NameTag_NPC *this,FVTableHelper *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->NameAlpha = 1.0;
  this->NameStyleID = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->Name).StringTableType = None;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NameTag_NPC__6B_;
  (this->Name).StringTableID = 0;
  (this->Name).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Name).StringEnumTableNameID.Number = 0;
  (this->Name).DateTime.Ticks = 0;
  (this->Name).TimeSpan.Ticks = 0;
  (this->Name).TimeExpressionType = None;
  (this->Name).IsExpression = false;
  (this->Name).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).UniqueString.Data.ArrayNum = 0;
  (this->Name).UniqueString.Data.ArrayMax = 0;
  (this->Name).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).FormatArgs.ArrayNum = 0;
  (this->Name).FormatArgs.ArrayMax = 0;
  (this->Title).StringTableType = None;
  (this->Title).StringTableID = 0;
  (this->Title).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Title).StringEnumTableNameID.Number = 0;
  (this->Title).DateTime.Ticks = 0;
  (this->Title).TimeSpan.Ticks = 0;
  (this->Title).TimeExpressionType = None;
  (this->Title).IsExpression = false;
  (this->Title).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Title).UniqueString.Data.ArrayNum = 0;
  (this->Title).UniqueString.Data.ArrayMax = 0;
  (this->Title).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Title).FormatArgs.ArrayNum = 0;
  (this->Title).FormatArgs.ArrayMax = 0;
  this->TitleStyleID = 0;
  this->TitleAlpha = 1.0;
  this->TitleNameVisibility = HitTestInvisible;
  this->AttributeVisibility = Collapsed;
  this->InteractionVisibility = Collapsed;
  this->GaugeVisibility = Collapsed;
  this->BgVisibility = Collapsed;
  this->FunctionIconID = 0;
  FText::FText(&this->Text_RemainTime);
  (this->OwnerActor).WeakPtr = (FWeakObjectPtr)0x0;
  (this->NameTagCollection).NameTagType = None;
  *(undefined8 *)&(this->NameTagCollection).AlphaDataMap = 0;
  *(undefined8 *)&(this->NameTagCollection).AlphaDataMap.field_0x8 = 0;
  *(undefined8 *)&(this->NameTagCollection).AlphaDataMap.field_0x20 = 0;
  *(undefined4 *)&(this->NameTagCollection).AlphaDataMap.field_0x28 = 0;
  *(undefined4 *)&(this->NameTagCollection).AlphaDataMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->NameTagCollection).AlphaDataMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NameTagCollection).AlphaDataMap.field_0x34 = 0;
  *(undefined8 *)&(this->NameTagCollection).AlphaDataMap.field_0x40 = 0;
  *(undefined4 *)&(this->NameTagCollection).AlphaDataMap.field_0x48 = 0;
  *(undefined8 *)&(this->NameTagCollection).NameTagDataMap = 0;
  *(undefined8 *)&(this->NameTagCollection).NameTagDataMap.field_0x8 = 0;
  *(undefined8 *)&(this->NameTagCollection).NameTagDataMap.field_0x20 = 0;
  *(undefined4 *)&(this->NameTagCollection).NameTagDataMap.field_0x28 = 0;
  *(undefined4 *)&(this->NameTagCollection).NameTagDataMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->NameTagCollection).NameTagDataMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NameTagCollection).NameTagDataMap.field_0x34 = 0;
  *(undefined8 *)&(this->NameTagCollection).NameTagDataMap.field_0x40 = 0;
  *(undefined4 *)&(this->NameTagCollection).NameTagDataMap.field_0x48 = 0;
  this->InteractionCurrentTime = 0.0;
  this->InteractionTimeMax = 0.0;
  this->bIsInteracting = false;
  return this;
}

// UDS_VM_NameTag_NPC @ 14b78c7c0

UDS_VM_NameTag_NPC * __thiscall
UDS_VM_NameTag_NPC::UDS_VM_NameTag_NPC(UDS_VM_NameTag_NPC *this,FObjectInitializer *param_1)

{
  UDS_ViewModelBase::UDS_ViewModelBase((UDS_ViewModelBase *)this,param_1);
  this->NameAlpha = 1.0;
  this->NameStyleID = 0;
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  (this->Name).StringTableType = None;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NameTag_NPC__6B_;
  (this->Name).StringTableID = 0;
  (this->Name).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Name).StringEnumTableNameID.Number = 0;
  (this->Name).DateTime.Ticks = 0;
  (this->Name).TimeSpan.Ticks = 0;
  (this->Name).TimeExpressionType = None;
  (this->Name).IsExpression = false;
  (this->Name).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).UniqueString.Data.ArrayNum = 0;
  (this->Name).UniqueString.Data.ArrayMax = 0;
  (this->Name).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Name).FormatArgs.ArrayNum = 0;
  (this->Name).FormatArgs.ArrayMax = 0;
  (this->Title).StringTableType = None;
  (this->Title).StringTableID = 0;
  (this->Title).StringEnumTableNameID.ComparisonIndex = 0;
  (this->Title).StringEnumTableNameID.Number = 0;
  (this->Title).DateTime.Ticks = 0;
  (this->Title).TimeSpan.Ticks = 0;
  (this->Title).TimeExpressionType = None;
  (this->Title).IsExpression = false;
  (this->Title).UniqueString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Title).UniqueString.Data.ArrayNum = 0;
  (this->Title).UniqueString.Data.ArrayMax = 0;
  (this->Title).FormatArgs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->Title).FormatArgs.ArrayNum = 0;
  (this->Title).FormatArgs.ArrayMax = 0;
  this->TitleStyleID = 0;
  this->TitleAlpha = 1.0;
  this->TitleNameVisibility = HitTestInvisible;
  this->AttributeVisibility = Collapsed;
  this->InteractionVisibility = Collapsed;
  this->GaugeVisibility = Collapsed;
  this->BgVisibility = Collapsed;
  this->FunctionIconID = 0;
  FText::FText(&this->Text_RemainTime);
  (this->OwnerActor).WeakPtr = (FWeakObjectPtr)0x0;
  (this->NameTagCollection).NameTagType = None;
  *(undefined8 *)&(this->NameTagCollection).AlphaDataMap = 0;
  *(undefined8 *)&(this->NameTagCollection).AlphaDataMap.field_0x8 = 0;
  *(undefined8 *)&(this->NameTagCollection).AlphaDataMap.field_0x20 = 0;
  *(undefined4 *)&(this->NameTagCollection).AlphaDataMap.field_0x28 = 0;
  *(undefined4 *)&(this->NameTagCollection).AlphaDataMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->NameTagCollection).AlphaDataMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NameTagCollection).AlphaDataMap.field_0x34 = 0;
  *(undefined8 *)&(this->NameTagCollection).AlphaDataMap.field_0x40 = 0;
  *(undefined4 *)&(this->NameTagCollection).AlphaDataMap.field_0x48 = 0;
  *(undefined8 *)&(this->NameTagCollection).NameTagDataMap = 0;
  *(undefined8 *)&(this->NameTagCollection).NameTagDataMap.field_0x8 = 0;
  *(undefined8 *)&(this->NameTagCollection).NameTagDataMap.field_0x20 = 0;
  *(undefined4 *)&(this->NameTagCollection).NameTagDataMap.field_0x28 = 0;
  *(undefined4 *)&(this->NameTagCollection).NameTagDataMap.field_0x2c = 0x80;
  *(undefined4 *)&(this->NameTagCollection).NameTagDataMap.field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->NameTagCollection).NameTagDataMap.field_0x34 = 0;
  *(undefined8 *)&(this->NameTagCollection).NameTagDataMap.field_0x40 = 0;
  *(undefined4 *)&(this->NameTagCollection).NameTagDataMap.field_0x48 = 0;
  this->InteractionCurrentTime = 0.0;
  this->InteractionTimeMax = 0.0;
  this->bIsInteracting = false;
  return this;
}

// ~UDS_VM_NameTag_NPC @ 14b78de20

void __thiscall UDS_VM_NameTag_NPC::~UDS_VM_NameTag_NPC(UDS_VM_NameTag_NPC *this)

{
  void *pvVar1;
  ITextData *pIVar2;
  FScriptContainerElement *pFVar3;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_NameTag_NPC__6B_;
  *(undefined4 *)&(this->NameTagCollection).NameTagDataMap.field_0x48 = 0;
  pvVar1 = *(void **)&(this->NameTagCollection).NameTagDataMap.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_NameTagStateType,FDS_NameTagData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_NameTagStateType,FDS_NameTagData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->NameTagCollection).NameTagDataMap);
  *(undefined4 *)&(this->NameTagCollection).AlphaDataMap.field_0x48 = 0;
  pvVar1 = *(void **)&(this->NameTagCollection).AlphaDataMap.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<enum_EDS_NameTagElementType,FDS_NameTagElementAlphaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<enum_EDS_NameTagElementType,FDS_NameTagElementAlphaData>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&(this->NameTagCollection).AlphaDataMap);
  pIVar2 = (this->Text_RemainTime).TextData.Reference;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 0x10))();
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Title).FormatArgs.AllocatorInstance.Data,
             (this->Title).FormatArgs.ArrayNum);
  pFVar3 = (this->Title).FormatArgs.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->Title).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)(this->Name).FormatArgs.AllocatorInstance.Data,
             (this->Name).FormatArgs.ArrayNum);
  pFVar3 = (this->Name).FormatArgs.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (this->Name).UniqueString.Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  UDS_ViewModelBase::~UDS_ViewModelBase((UDS_ViewModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b78fb20

IClassDescriptor * __thiscall
UDS_VM_NameTag_NPC::GetFieldNotificationDescriptor(UDS_VM_NameTag_NPC *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_NameTag_NPC::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b78fef0

UClass * __cdecl UDS_VM_NameTag_NPC::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_NameTag_NPC.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_NameTag_NPC",
               &Z_Registration_Info_UClass_UDS_VM_NameTag_NPC.InnerSingleton,
               StaticRegisterNativesUDS_VM_NameTag_NPC,0x260,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_NameTag_NPC>,
               InternalVTableHelperCtorCaller<UDS_VM_NameTag_NPC>,local_res8,
               UDS_ViewModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_NameTag_NPC.InnerSingleton;
}

// GetTickableTickType @ 14b790a40

ETickableTickType __thiscall UDS_VM_NameTag_NPC::GetTickableTickType(UDS_VM_NameTag_NPC *this)

{
  return Conditional;
}

// IsUpdate @ 14b790a70

bool __thiscall UDS_VM_NameTag_NPC::IsUpdate(UDS_VM_NameTag_NPC *this)

{
  return this->bIsUpdate;
}

// StaticRegisterNativesUDS_VM_NameTag_NPC @ 14b790a90

void __cdecl UDS_VM_NameTag_NPC::StaticRegisterNativesUDS_VM_NameTag_NPC(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 2;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_NameTag_NPC_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// __VTableCtorCaller @ 14b791ae0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl UDS_VM_NameTag_NPC::__VTableCtorCaller(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UDS_ViewModelBase *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = GetPrivateStaticClass();
  this = (UDS_ViewModelBase *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UDS_ViewModelBase *)0x0) {
    UDS_ViewModelBase::UDS_ViewModelBase(this,param_1);
    *(undefined4 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&_vftable__for__UObject__;
    *(undefined1 *)&this[1]._padding_ = 0;
    this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
    this->_padding_ = (longlong)&___7UDS_VM_NameTag_NPC__6B_;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)&this[1]._padding_ = 0;
    *(undefined1 *)((longlong)&this[1]._padding_ + 4) = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    *(undefined4 *)((longlong)&this[1]._padding_ + 4) = 0x3f800000;
    *(undefined1 *)&this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1]._padding_ = 0;
    this[1].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    this[1].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    *(undefined4 *)&this[1].Visibility = 0;
    *(undefined1 *)&this[1].VMName.ComparisonIndex.Value = 0;
    *(undefined8 *)&this[1].VMName.Number = 0;
    this[1].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[1].TextPropertyIDList.ArrayNum = 0;
    this[1].TextPropertyIDList.ArrayMax = 0;
    this[2]._padding_ = 0;
    *(undefined4 *)&this[2]._padding_ = 0;
    *(undefined4 *)((longlong)&this[2]._padding_ + 4) = 0x3f800000;
    *(undefined4 *)&this[2]._padding_ = 0x1010103;
    *(undefined1 *)((longlong)&this[2]._padding_ + 4) = 1;
    *(undefined4 *)&this[2]._padding_ = 0;
    FText::FText((FText *)&this[2]._padding_);
    *(undefined8 *)((longlong)&this[2]._padding_ + 4) = 0;
    *(undefined1 *)&this[2]._padding_ = 0;
    this[2].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    this[2].ViewModelContext.SharedReferenceCount.ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
    this[2].TextPropertyIDList.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    this[2].TextPropertyIDList.ArrayNum = 0;
    this[2].TextPropertyIDList.ArrayMax = 0x80;
    *(undefined4 *)&this[3]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0x80;
    *(undefined4 *)&this[3]._padding_ = 0xffffffff;
    *(undefined4 *)((longlong)&this[3]._padding_ + 4) = 0;
    this[3]._padding_ = 0;
    *(undefined4 *)&this[3]._padding_ = 0;
    this[3].ViewModelContext.Object = (FDS_ViewModelContext *)0x0;
    *(undefined1 *)&this[3].ViewModelContext.SharedReferenceCount.ReferenceController = 0;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// execGetInteractionCurrentPercent @ 14b792240

void __cdecl
UDS_VM_NameTag_NPC::execGetInteractionCurrentPercent(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = GetInteractionCurrentPercent((UDS_VM_NameTag_NPC *)param_1);
  *(float *)param_3 = fVar1;
  return;
}

// execGetInteractionRemainTime @ 14b792280

void __cdecl
UDS_VM_NameTag_NPC::execGetInteractionRemainTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = GetInteractionRemainTime((UDS_VM_NameTag_NPC *)param_1);
  *(float *)param_3 = fVar1;
  return;
}

// GetInteractionCurrentPercent @ 14c01ae50

float __thiscall UDS_VM_NameTag_NPC::GetInteractionCurrentPercent(UDS_VM_NameTag_NPC *this)

{
  float fVar1;
  
  fVar1 = 0.0;
  if (this->InteractionTimeMax != 0.0) {
    fVar1 = this->InteractionCurrentTime / this->InteractionTimeMax;
  }
  return fVar1;
}

// GetInteractionRemainTime @ 14c01ae80

float __thiscall UDS_VM_NameTag_NPC::GetInteractionRemainTime(UDS_VM_NameTag_NPC *this)

{
  if (this->InteractionTimeMax == 0.0) {
    return 0.0;
  }
  return this->InteractionTimeMax - this->InteractionCurrentTime;
}

// OnCloseInit @ 14c028450

void __thiscall UDS_VM_NameTag_NPC::OnCloseInit(UDS_VM_NameTag_NPC *this)

{
  bool bVar1;
  UObject *pUVar2;
  UDS_QuestEvent *pUVar3;
  FWeakObjectPtr local_res8;
  FWeakObjectPtr local_res10;
  
  bVar1 = FWeakObjectPtr::IsValid(&(this->OwnerActor).WeakPtr);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[0x27].field_0x8,this);
  }
  pUVar3 = UDS_QuestEvent::GetEvent();
  if (pUVar3 != (UDS_QuestEvent *)0x0) {
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar3->OnChanedQuestDelegate,
               this);
  }
  UDS_NPCGimmickData::GetData((ulong64)&local_res8);
  bVar1 = FWeakObjectPtr::IsValid(&local_res8);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_res8);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[5].field_0x10,this);
    pUVar2 = FWeakObjectPtr::Get(&local_res8);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[6].field_0x8,this);
    pUVar2 = FWeakObjectPtr::Get(&local_res8);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar2 + 7),this);
  }
  UDS_NPCLingData::GetData((ulong64)&local_res10);
  bVar1 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar1) {
    pUVar2 = FWeakObjectPtr::Get(&local_res10);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[2].field_0x8,this);
    pUVar2 = FWeakObjectPtr::Get(&local_res10);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)(pUVar2 + 3),this);
    pUVar2 = FWeakObjectPtr::Get(&local_res10);
    TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
              ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar2[3].field_0x20,this);
  }
  UDS_ViewModelBase::OnCloseInit((UDS_ViewModelBase *)this);
  return;
}

// OnInteractionCanceled @ 14c02bc20

void __thiscall
UDS_VM_NameTag_NPC::OnInteractionCanceled(UDS_VM_NameTag_NPC *this,ulong64 param_1,int param_2)

{
  this->bIsInteracting = false;
  Refresh(this);
  return;
}

// OnInteractionCompleted @ 14c02bcd0

void __thiscall UDS_VM_NameTag_NPC::OnInteractionCompleted(UDS_VM_NameTag_NPC *this,ulong64 param_1)

{
  this->bIsInteracting = false;
  Refresh(this);
  return;
}

// OnInteractionStarted @ 14c02bec0

void __thiscall
UDS_VM_NameTag_NPC::OnInteractionStarted(UDS_VM_NameTag_NPC *this,ulong64 param_1,float param_2)

{
  this->InteractionTimeMax = param_2;
  this->bIsInteracting = true;
  this->InteractionCurrentTime = 0.0;
  Refresh(this);
  return;
}

// OnQuestChanged @ 14c02e150

void __thiscall
UDS_VM_NameTag_NPC::OnQuestChanged(UDS_VM_NameTag_NPC *this,int param_1,EDS_QuestDataType param_2)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  UDS_QuestManager *this_00;
  UObject *pUVar7;
  longlong lVar8;
  ESlateVisibility EVar9;
  FName *pFVar10;
  undefined7 in_register_00000081;
  FName FStack_68;
  int iStack_60;
  FName FStack_58;
  int iStack_50;
  FName FStack_48;
  int iStack_40;
  FName FStack_38;
  int iStack_30;
  FName FStack_28;
  int iStack_20;
  FName FStack_18;
  int iStack_10;
  
  iStack_60 = FFieldNotificationClassDescriptor::InteractionVisibility.BitNumber;
  FStack_68 = FFieldNotificationClassDescriptor::InteractionVisibility.FieldName;
  if (this->bIsInteracting == true) {
    if (this->InteractionVisibility != Collapsed) {
      this->InteractionVisibility = Collapsed;
      (**(code **)(this->_padding_ + 0x38))
                (&this->_padding_,&FStack_68,CONCAT71(in_register_00000081,param_2));
      return;
    }
  }
  else {
    this_00 = UDS_QuestManager::GetInst();
    if (this_00 == (UDS_QuestManager *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1688012410360692959>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_NPC.cpp"
                         ,0xdf,"false");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      bVar4 = FWeakObjectPtr::IsValid(&(this->OwnerActor).WeakPtr);
      if (bVar4) {
        iVar6 = UDS_QuestManager::GetNpcIconID(this_00,this->OwnerEntityID);
        iVar3 = FFieldNotificationClassDescriptor::InteractionVisibility.BitNumber;
        FVar2 = FFieldNotificationClassDescriptor::InteractionVisibility.FieldName;
        if (iVar6 == 0) {
          if (this->InteractionVisibility == Collapsed) {
            return;
          }
          this->InteractionVisibility = Collapsed;
          iStack_50 = iVar3;
          pFVar10 = &FStack_58;
          lVar8 = this->_padding_;
          FStack_58 = FVar2;
        }
        else {
          pUVar7 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
          cVar5 = (**(code **)(*(longlong *)&pUVar7[0x11].field_0x18 + 0x188))
                            (&pUVar7[0x11].field_0x18,5);
          iVar3 = FFieldNotificationClassDescriptor::InteractionVisibility.BitNumber;
          FVar2 = FFieldNotificationClassDescriptor::InteractionVisibility.FieldName;
          if (cVar5 == '\0') {
            if (this->InteractionVisibility == Collapsed) {
              return;
            }
            this->InteractionVisibility = Collapsed;
            iStack_40 = iVar3;
            pFVar10 = &FStack_48;
            lVar8 = this->_padding_;
            FStack_48 = FVar2;
          }
          else {
            if (this->InteractionVisibility != SelfHitTestInvisible) {
              this->InteractionVisibility = SelfHitTestInvisible;
              iStack_30 = iVar3;
              FStack_38 = FVar2;
              (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_38);
            }
            iVar3 = FFieldNotificationClassDescriptor::FunctionIconID.BitNumber;
            FVar2 = FFieldNotificationClassDescriptor::FunctionIconID.FieldName;
            if (this->FunctionIconID != iVar6) {
              this->FunctionIconID = iVar6;
              iStack_20 = iVar3;
              FStack_28 = FVar2;
              (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&FStack_28);
            }
            bVar4 = UDS_QuestManager::IsQuestTarget(this_00,this->OwnerEntityID);
            EVar9 = SelfHitTestInvisible;
            if (bVar4) {
              EVar9 = Collapsed;
            }
            this->BgVisibility = EVar9;
            pFVar10 = &FStack_18;
            iStack_10 = FFieldNotificationClassDescriptor::BgVisibility.BitNumber;
            lVar8 = this->_padding_;
            FStack_18 = FFieldNotificationClassDescriptor::BgVisibility.FieldName;
          }
        }
        (**(code **)(lVar8 + 0x38))(&this->_padding_,pFVar10);
      }
    }
  }
  return;
}

// OnSetViewModel @ 14c0316d0

void __thiscall
UDS_VM_NameTag_NPC::OnSetViewModel
          (UDS_VM_NameTag_NPC *this,TSharedPtr<FDS_ViewModelContext,1> *param_1)

{
  TReferenceControllerBase<1> *pTVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  UDS_QuestEvent *pUVar5;
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18 [2];
  uint uStack_fc;
  TSharedPtr<FDS_ViewModelContext_Entity,1> local_f8;
  TSharedPtr<FDS_ViewModelContext,1> local_e8;
  undefined1 local_d8 [16];
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  code *local_a8;
  longlong lStack_a0;
  code *local_98;
  longlong lStack_90;
  code *local_88;
  longlong lStack_80;
  code *local_78;
  longlong lStack_70;
  code *local_68;
  longlong lStack_60;
  code *local_58;
  longlong lStack_50;
  code *local_48;
  longlong lStack_40;
  
  pTVar1 = (param_1->SharedReferenceCount).ReferenceController;
  if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  local_e8.Object = param_1->Object;
  local_e8.SharedReferenceCount.ReferenceController =
       (param_1->SharedReferenceCount).ReferenceController;
  if (local_e8.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
         (atomic<int>)
         ((int)(local_e8.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  SafeCast<FDS_ViewModelContext_Entity>(&local_f8,&local_e8);
  if (local_f8.Object == (FDS_ViewModelContext_Entity *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1688012410360692795>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_NPC.cpp"
                       ,0x3b,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f8.SharedReferenceCount.ReferenceController);
  }
  else {
    if (local_f8.Object == (FDS_ViewModelContext_Entity *)0x0) {
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
    this->OwnerEntityID = (local_f8.Object)->EntityID;
    UDS_NPCGimmickData::GetData((ulong64)&local_res10);
    bVar3 = FWeakObjectPtr::IsValid(&local_res10);
    if (bVar3) {
      lStack_a0 = (ulonglong)uStack_fc << 0x20;
      local_a8 = OnInteractionStarted;
      pUVar4 = FWeakObjectPtr::Get(&local_res10);
      TMulticastDelegateRegistration<void___cdecl(unsigned___int64,float),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_VM_NameTag_NPC>
                ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64,float),FDefaultDelegateUserPolicy>
                  *)&pUVar4[5].field_0x10,(UDS_VM_NameTag_NPC *)(local_res18 + 1),
                 (pmf_8d570cfd *)this);
      lStack_90 = (ulonglong)uStack_fc << 0x20;
      local_98 = OnInteractionCanceled;
      pUVar4 = FWeakObjectPtr::Get(&local_res10);
      TMulticastDelegateRegistration<void___cdecl(unsigned___int64,int),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_VM_NameTag_NPC>
                ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64,int),FDefaultDelegateUserPolicy>
                  *)&pUVar4[6].field_0x8,(UDS_VM_NameTag_NPC *)local_d8,(pmf_888728d0 *)this);
      lStack_80 = (ulonglong)uStack_fc << 0x20;
      local_88 = OnInteractionCompleted;
      pUVar4 = FWeakObjectPtr::Get(&local_res10);
      TMulticastDelegateRegistration<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>::
      AddUObject<UDS_VM_NameTag_NPC>
                ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>
                  *)(pUVar4 + 7),(UDS_VM_NameTag_NPC *)(local_d8 + 8),(pmf_c88955b8 *)this);
    }
    UDS_NPCLingData::GetData((ulong64)local_res18);
    bVar3 = FWeakObjectPtr::IsValid(local_res18);
    if (bVar3) {
      lStack_70 = (ulonglong)uStack_fc << 0x20;
      local_78 = OnInteractionStarted;
      pUVar4 = FWeakObjectPtr::Get(local_res18);
      TMulticastDelegateRegistration<void___cdecl(unsigned___int64,float),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_VM_NameTag_NPC>
                ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64,float),FDefaultDelegateUserPolicy>
                  *)&pUVar4[2].field_0x8,(UDS_VM_NameTag_NPC *)local_c8,(pmf_8d570cfd *)this);
      lStack_60 = (ulonglong)uStack_fc << 0x20;
      local_68 = OnInteractionCanceled;
      pUVar4 = FWeakObjectPtr::Get(local_res18);
      TMulticastDelegateRegistration<void___cdecl(unsigned___int64,int),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_VM_NameTag_NPC>
                ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64,int),FDefaultDelegateUserPolicy>
                  *)(pUVar4 + 3),(UDS_VM_NameTag_NPC *)(local_c8 + 8),(pmf_888728d0 *)this);
      lStack_50 = (ulonglong)uStack_fc << 0x20;
      local_58 = OnInteractionCompleted;
      pUVar4 = FWeakObjectPtr::Get(local_res18);
      TMulticastDelegateRegistration<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>::
      AddUObject<UDS_VM_NameTag_NPC>
                ((TMulticastDelegateRegistration<void___cdecl(unsigned___int64),FDefaultDelegateUserPolicy>
                  *)&pUVar4[3].field_0x20,(UDS_VM_NameTag_NPC *)local_b8,(pmf_c88955b8 *)this);
    }
    pUVar5 = UDS_QuestEvent::GetEvent();
    if (pUVar5 != (UDS_QuestEvent *)0x0) {
      TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
                ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                 &pUVar5->OnChanedQuestDelegate,this);
      lStack_40 = (ulonglong)uStack_fc << 0x20;
      local_48 = OnQuestChanged;
      TMulticastDelegateRegistration<void___cdecl(int,enum_EDS_QuestDataType),FDefaultDelegateUserPolicy>
      ::AddUObject<UDS_VM_NameTag_NPC>
                (&pUVar5->OnChanedQuestDelegate,(UDS_VM_NameTag_NPC *)(local_b8 + 8),
                 (pmf_b47a8208 *)this);
    }
    Refresh(this);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (local_f8.SharedReferenceCount.ReferenceController);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return;
}

// OnTriggerOverlaped @ 14c039e10

void __thiscall
UDS_VM_NameTag_NPC::OnTriggerOverlaped
          (UDS_VM_NameTag_NPC *this,UDS_TriggerComponent *param_1,bool param_2)

{
  ESlateVisibility EVar1;
  FName local_18;
  int local_10;
  
  if (param_1->TriggerType == FunctionIcon) {
    EVar1 = Collapsed;
    if (param_2) {
      EVar1 = SelfHitTestInvisible;
    }
    this->InteractionVisibility = EVar1;
    local_10 = FFieldNotificationClassDescriptor::InteractionVisibility.BitNumber;
    local_18 = FFieldNotificationClassDescriptor::InteractionVisibility.FieldName;
    (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
    RefreshQuestIcon(this);
    return;
  }
  return;
}

// OnUpdate @ 14c03a190

void __thiscall UDS_VM_NameTag_NPC::OnUpdate(UDS_VM_NameTag_NPC *this,float param_1)

{
  undefined1 auVar1 [16];
  longlong lVar2;
  code *pcVar3;
  FName FVar4;
  int iVar5;
  ForAnyElementType _Src;
  bool bVar6;
  UObject *pUVar7;
  FText *pFVar8;
  float fVar9;
  float fVar10;
  double dVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  double dVar14;
  float fVar15;
  FString local_d8;
  FName local_c8;
  int local_c0;
  FName local_b8;
  int local_b0;
  FName local_a8;
  int local_a0;
  FName local_98;
  int local_90;
  FString local_88;
  FText local_78;
  double local_68;
  FDS_StringIDWrapper local_60;
  undefined8 local_58;
  FStringFormatArg local_50 [2];
  
  bVar6 = FWeakObjectPtr::IsValid(&(this->OwnerActor).WeakPtr);
  if (bVar6) {
    pUVar7 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
    lVar2 = *(longlong *)(pUVar7 + 0xb);
    if (lVar2 == 0) {
      uVar12 = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
      uVar13 = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
      dVar14 = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_8_;
      local_68 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    }
    else {
      auVar1 = *(undefined1 (*) [16])(lVar2 + 0x210);
      uVar12 = auVar1._0_4_;
      uVar13 = auVar1._4_4_;
      dVar14 = auVar1._8_8_;
      local_68 = *(double *)(lVar2 + 0x220);
    }
    dVar11 = (double)CONCAT44(uVar13,uVar12) - ADS_CameraManager::CameraLocation.field0_0x0._s_0.X;
    fVar9 = UDS_NameTagDataAsset::GetAlphaByDistance
                      (NoneBattleNpc,Name,
                       (float)((dVar14 - ADS_CameraManager::CameraLocation.field0_0x0._s_0.Y) *
                               (dVar14 - ADS_CameraManager::CameraLocation.field0_0x0._s_0.Y) +
                               dVar11 * dVar11 +
                              (local_68 - ADS_CameraManager::CameraLocation.field0_0x0._s_0.Z) *
                              (local_68 - ADS_CameraManager::CameraLocation.field0_0x0._s_0.Z)));
    iVar5 = FFieldNotificationClassDescriptor::NameAlpha.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::NameAlpha.FieldName;
    if (fVar9 != this->NameAlpha) {
      this->NameAlpha = fVar9;
      local_c0 = iVar5;
      local_c8 = FVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_c8);
    }
    iVar5 = FFieldNotificationClassDescriptor::TitleAlpha.BitNumber;
    FVar4 = FFieldNotificationClassDescriptor::TitleAlpha.FieldName;
    if (fVar9 != this->TitleAlpha) {
      this->TitleAlpha = fVar9;
      local_b0 = iVar5;
      local_b8 = FVar4;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_b8);
    }
    if (this->GaugeVisibility != Collapsed) {
      fVar15 = param_1 + this->InteractionCurrentTime;
      fVar9 = this->InteractionTimeMax;
      this->InteractionCurrentTime = fVar15;
      if (fVar9 < fVar15) {
        this->InteractionCurrentTime = fVar9;
        fVar15 = fVar9;
      }
      fVar10 = 0.0;
      if (fVar9 != 0.0) {
        fVar10 = fVar9 - fVar15;
      }
      UDS_TimeUtilManager::ConvertStringFromSec(&local_88,fVar10,SecondsDec1,false);
      _Src.Data = local_88.Data.AllocatorInstance.Data;
      local_60 = (FDS_StringIDWrapper)&___7FDS_StringBaseID__6B_;
      local_58 = 0x9c47;
      local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      if (local_88.Data.ArrayNum == 0) {
        local_d8.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,local_88.Data.ArrayNum,0,(ForAnyElementType *)&local_d8,
                   local_88.Data.ArrayNum,&local_d8.Data.ArrayMax);
        memcpy(local_d8.Data.AllocatorInstance.Data,_Src.Data,(longlong)local_88.Data.ArrayNum * 2);
      }
      FStringFormatArg::FStringFormatArg(local_50,&local_d8);
      pFVar8 = FDS_StringIDWrapper::FormatText(&local_60,&local_78,local_50);
      FText::operator=(&this->Text_RemainTime,pFVar8);
      if (local_78.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_78.TextData.Reference + 0x10))();
      }
      if (local_50[0].StringValue.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_50[0].StringValue.Data.AllocatorInstance.Data);
      }
      local_a0 = FFieldNotificationClassDescriptor::Text_RemainTime.BitNumber;
      local_a8 = FFieldNotificationClassDescriptor::Text_RemainTime.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_a8);
      local_90 = FFieldNotificationClassDescriptor::GetInteractionCurrentPercent.BitNumber;
      local_98 = FFieldNotificationClassDescriptor::GetInteractionCurrentPercent.FieldName;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_98);
      if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_88.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1688012410360692830>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_NPC.cpp"
                       ,0x5e,"false");
    if (bVar6) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  return;
}

// Refresh @ 14c03dac0

void __thiscall UDS_VM_NameTag_NPC::Refresh(UDS_VM_NameTag_NPC *this)

{
  longlong *plVar1;
  int iVar2;
  code *pcVar3;
  FName FVar4;
  bool bVar5;
  int iVar6;
  TWeakObjectPtr<AActor,FWeakObjectPtr> this_00;
  UObject *pUVar7;
  UClass *pUVar8;
  UDS_QuestManager *pUVar9;
  FDS_NameTagDataCollection *pFVar10;
  FDS_NpcBaseTableRow *pFVar11;
  FName *pFVar12;
  TWeakObjectPtr<ADS_EntityActorBase,FWeakObjectPtr> *this_01;
  int local_res8;
  int iStackX_c;
  UObject *local_res10;
  FName local_f8;
  int iStack_f0;
  uint uStack_ec;
  FName local_e8;
  int local_e0;
  FName local_d8;
  int local_d0;
  FName local_c8;
  int local_c0;
  FName local_b8;
  int local_b0;
  FName local_a8;
  int local_a0;
  FName local_98;
  int local_90;
  FName local_88;
  int local_80;
  code *local_68;
  longlong lStack_60;
  
  this_00 = FDS_EntityBase::GetActorFromEntityID((ulong64 *)&stack0x00000020);
  pUVar7 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
  if (pUVar7 == (UObject *)0x0) {
LAB_14c03db1b:
    pUVar7 = (UObject *)0x0;
  }
  else {
    pUVar8 = Z_Construct_UClass_ADS_EntityActorBase_NoRegister();
    iVar2 = (int)pUVar8->_padding_;
    if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar2) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar2 * 8) !=
        &pUVar8->_padding_)) goto LAB_14c03db1b;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  local_res8 = 0;
  iStackX_c = 0;
  local_res10 = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  FWeakObjectPtr::operator=((FWeakObjectPtr *)&stack0x00000008,(FObjectPtr)&stack0x00000010);
  bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&stack0x00000008);
  if (!bVar5) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1688012410360692893>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_NPC.cpp"
                       ,0x9d,"false");
    if (!bVar5) {
      return;
    }
code_r0x00014c03dc41:
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  (this->OwnerActor).WeakPtr = _local_res8;
  this->bIsUpdate = true;
  pUVar9 = UDS_QuestManager::GetInst();
  if (pUVar9 == (UDS_QuestManager *)0x0) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1688012410360692903>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_NPC.cpp"
                       ,0xa7,"false");
    if (!bVar5) {
      return;
    }
    goto code_r0x00014c03dc41;
  }
  UDS_PlayerData::GetMainPlayerData();
  bVar5 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)&stack0x00000018);
  if (!bVar5) {
    bVar5 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<1688012410360692910>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_NPC.cpp"
                       ,0xae,"false");
    if (!bVar5) {
      return;
    }
    goto code_r0x00014c03dc41;
  }
  pFVar10 = UDS_NameTagDataAsset::GetNameTagDataCollection(NoneBattleNpc);
  FDS_NameTagDataCollection::operator=(&this->NameTagCollection,pFVar10);
  iVar2 = FFieldNotificationClassDescriptor::NameAlpha.BitNumber;
  FVar4 = FFieldNotificationClassDescriptor::NameAlpha.FieldName;
  plVar1 = &this->_padding_;
  if (this->NameAlpha != 0.0) {
    this->NameAlpha = 0.0;
    local_e0 = iVar2;
    local_e8 = FVar4;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_e8);
  }
  iVar2 = FFieldNotificationClassDescriptor::TitleAlpha.BitNumber;
  FVar4 = FFieldNotificationClassDescriptor::TitleAlpha.FieldName;
  if (this->TitleAlpha != 0.0) {
    this->TitleAlpha = 0.0;
    local_d0 = iVar2;
    local_d8 = FVar4;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_d8);
  }
  this_01 = &this->OwnerActor;
  pUVar7 = FWeakObjectPtr::Get(&this_01->WeakPtr);
  TMulticastDelegateBase<FDefaultDelegateUserPolicy>::RemoveAll
            ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)&pUVar7[0x27].field_0x8,this);
  iStack_f0 = 0;
  local_f8 = (FName)OnTriggerOverlaped;
  lStack_60 = (ulonglong)uStack_ec << 0x20;
  local_68 = OnTriggerOverlaped;
  pUVar7 = FWeakObjectPtr::Get(&this_01->WeakPtr);
  TMulticastDelegateRegistration<void___cdecl(UDS_TriggerComponent_*,bool),FDefaultDelegateUserPolicy>
  ::AddUObject<UDS_VM_NameTag_NPC>
            ((TMulticastDelegateRegistration<void___cdecl(UDS_TriggerComponent_*,bool),FDefaultDelegateUserPolicy>
              *)&pUVar7[0x27].field_0x8,(UDS_VM_NameTag_NPC *)&stack0xffffffffffffff88,
             (pmf_8ea696be *)this);
  pUVar7 = FWeakObjectPtr::Get(&this_01->WeakPtr);
  pFVar11 = FDS_NpcBaseTableRow::GetRef(*(long64 *)&pUVar7[0x12].field_0x8,true);
  FDS_Text::SetTextFromStringID(&this->Name,&pFVar11->ID_NameSid);
  local_c0 = FFieldNotificationClassDescriptor::Name.BitNumber;
  local_c8 = FFieldNotificationClassDescriptor::Name.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_c8);
  iVar2 = FFieldNotificationClassDescriptor::NameStyleID.BitNumber;
  FVar4 = FFieldNotificationClassDescriptor::NameStyleID.FieldName;
  iVar6 = FDS_NameTagDataCollection::GetStyleID(&this->NameTagCollection,Default,Name);
  if (this->NameStyleID != iVar6) {
    this->NameStyleID = iVar6;
    local_b8 = FVar4;
    local_b0 = iVar2;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_b8);
  }
  FDS_Text::SetTextFromStringID(&this->Title,&pFVar11->ID_NameTitleSid);
  local_a0 = FFieldNotificationClassDescriptor::Title.BitNumber;
  local_a8 = FFieldNotificationClassDescriptor::Title.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_a8);
  iVar2 = FFieldNotificationClassDescriptor::TitleStyleID.BitNumber;
  FVar4 = FFieldNotificationClassDescriptor::TitleStyleID.FieldName;
  iVar6 = FDS_NameTagDataCollection::GetStyleID(&this->NameTagCollection,Default,Title);
  if (this->TitleStyleID != iVar6) {
    this->TitleStyleID = iVar6;
    local_98 = FVar4;
    local_90 = iVar2;
    (**(code **)(*plVar1 + 0x38))(plVar1,&local_98);
  }
  iVar2 = FFieldNotificationClassDescriptor::GaugeVisibility.BitNumber;
  FVar4 = FFieldNotificationClassDescriptor::GaugeVisibility.FieldName;
  if (this->bIsInteracting == false) {
    if (this->GaugeVisibility == Collapsed) goto LAB_14c03defc;
    this->GaugeVisibility = Collapsed;
    pFVar12 = &local_88;
    local_88 = FVar4;
    local_80 = iVar2;
  }
  else {
    if (this->GaugeVisibility == SelfHitTestInvisible) goto LAB_14c03defc;
    this->GaugeVisibility = SelfHitTestInvisible;
    pFVar12 = &local_f8;
    local_f8 = FVar4;
    iStack_f0 = iVar2;
  }
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,pFVar12);
LAB_14c03defc:
  RefreshQuestIcon(this);
  return;
}

// RefreshGauge @ 14c03e630

void __thiscall UDS_VM_NameTag_NPC::RefreshGauge(UDS_VM_NameTag_NPC *this)

{
  FName local_18;
  int local_10;
  
  local_10 = FFieldNotificationClassDescriptor::GaugeVisibility.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::GaugeVisibility.FieldName;
  if (this->bIsInteracting == false) {
    if (this->GaugeVisibility == Collapsed) {
      return;
    }
    this->GaugeVisibility = Collapsed;
  }
  else {
    if (this->GaugeVisibility == SelfHitTestInvisible) {
      return;
    }
    this->GaugeVisibility = SelfHitTestInvisible;
  }
  (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_18);
  return;
}

// RefreshQuestIcon @ 14c03f5c0

void __thiscall UDS_VM_NameTag_NPC::RefreshQuestIcon(UDS_VM_NameTag_NPC *this)

{
  code *pcVar1;
  FName FVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  UDS_QuestManager *this_00;
  UObject *pUVar7;
  longlong lVar8;
  ESlateVisibility EVar9;
  FName *pFVar10;
  FName local_68;
  int local_60;
  FName local_58;
  int local_50;
  FName local_48;
  int local_40;
  FName local_38;
  int local_30;
  FName local_28;
  int local_20;
  FName local_18;
  int local_10;
  
  local_60 = FFieldNotificationClassDescriptor::InteractionVisibility.BitNumber;
  local_68 = FFieldNotificationClassDescriptor::InteractionVisibility.FieldName;
  if (this->bIsInteracting == true) {
    if (this->InteractionVisibility != Collapsed) {
      this->InteractionVisibility = Collapsed;
      (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_68);
      return;
    }
  }
  else {
    this_00 = UDS_QuestManager::GetInst();
    if (this_00 == (UDS_QuestManager *)0x0) {
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<1688012410360692959>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\View\\DS_W_NameTag_NPC.cpp"
                         ,0xdf,"false");
      if (bVar4) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    else {
      bVar4 = FWeakObjectPtr::IsValid(&(this->OwnerActor).WeakPtr);
      if (bVar4) {
        iVar6 = UDS_QuestManager::GetNpcIconID(this_00,this->OwnerEntityID);
        iVar3 = FFieldNotificationClassDescriptor::InteractionVisibility.BitNumber;
        FVar2 = FFieldNotificationClassDescriptor::InteractionVisibility.FieldName;
        if (iVar6 == 0) {
          if (this->InteractionVisibility == Collapsed) {
            return;
          }
          this->InteractionVisibility = Collapsed;
          local_50 = iVar3;
          pFVar10 = &local_58;
          lVar8 = this->_padding_;
          local_58 = FVar2;
        }
        else {
          pUVar7 = FWeakObjectPtr::Get(&(this->OwnerActor).WeakPtr);
          cVar5 = (**(code **)(*(longlong *)&pUVar7[0x11].field_0x18 + 0x188))
                            (&pUVar7[0x11].field_0x18,5);
          iVar3 = FFieldNotificationClassDescriptor::InteractionVisibility.BitNumber;
          FVar2 = FFieldNotificationClassDescriptor::InteractionVisibility.FieldName;
          if (cVar5 == '\0') {
            if (this->InteractionVisibility == Collapsed) {
              return;
            }
            this->InteractionVisibility = Collapsed;
            local_40 = iVar3;
            pFVar10 = &local_48;
            lVar8 = this->_padding_;
            local_48 = FVar2;
          }
          else {
            if (this->InteractionVisibility != SelfHitTestInvisible) {
              this->InteractionVisibility = SelfHitTestInvisible;
              local_30 = iVar3;
              local_38 = FVar2;
              (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_38);
            }
            iVar3 = FFieldNotificationClassDescriptor::FunctionIconID.BitNumber;
            FVar2 = FFieldNotificationClassDescriptor::FunctionIconID.FieldName;
            if (this->FunctionIconID != iVar6) {
              this->FunctionIconID = iVar6;
              local_20 = iVar3;
              local_28 = FVar2;
              (**(code **)(this->_padding_ + 0x38))(&this->_padding_,&local_28);
            }
            bVar4 = UDS_QuestManager::IsQuestTarget(this_00,this->OwnerEntityID);
            EVar9 = SelfHitTestInvisible;
            if (bVar4) {
              EVar9 = Collapsed;
            }
            this->BgVisibility = EVar9;
            pFVar10 = &local_18;
            local_10 = FFieldNotificationClassDescriptor::BgVisibility.BitNumber;
            lVar8 = this->_padding_;
            local_18 = FFieldNotificationClassDescriptor::BgVisibility.FieldName;
          }
        }
        (**(code **)(lVar8 + 0x38))(&this->_padding_,pFVar10);
      }
    }
  }
  return;
}

