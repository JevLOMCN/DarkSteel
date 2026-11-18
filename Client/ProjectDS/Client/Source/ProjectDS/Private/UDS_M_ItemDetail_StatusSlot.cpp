// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 18

// StaticClass @ 14b50af50

UClass * __cdecl UDS_M_ItemDetail_StatusSlot::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ItemDetail_StatusSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ItemDetail_StatusSlot",
               &Z_Registration_Info_UClass_UDS_M_ItemDetail_StatusSlot.InnerSingleton,
               StaticRegisterNativesUDS_M_ItemDetail_StatusSlot,0x1a8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_M_ItemDetail_StatusSlot>,
               InternalVTableHelperCtorCaller<UDS_M_ItemDetail_StatusSlot>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ItemDetail_StatusSlot.InnerSingleton;
}

// UDS_M_ItemDetail_StatusSlot @ 14b511860

UDS_M_ItemDetail_StatusSlot * __thiscall
UDS_M_ItemDetail_StatusSlot::UDS_M_ItemDetail_StatusSlot
          (UDS_M_ItemDetail_StatusSlot *this,FVTableHelper *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  *(undefined ***)this = &___7UDS_M_ItemDetail_StatusSlot__6B_;
  return this;
}

// UDS_M_ItemDetail_StatusSlot @ 14b511890

UDS_M_ItemDetail_StatusSlot * __thiscall
UDS_M_ItemDetail_StatusSlot::UDS_M_ItemDetail_StatusSlot
          (UDS_M_ItemDetail_StatusSlot *this,FObjectInitializer *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  *(undefined ***)this = &___7UDS_M_ItemDetail_StatusSlot__6B_;
  return this;
}

// ~UDS_M_ItemDetail_StatusSlot @ 14b513110

void __thiscall
UDS_M_ItemDetail_StatusSlot::~UDS_M_ItemDetail_StatusSlot(UDS_M_ItemDetail_StatusSlot *this)

{
  *(undefined ***)this = &___7UDS_M_ItemDetail_StatusSlot__6B_;
  UDS_ModelBase::~UDS_ModelBase((UDS_ModelBase *)this);
  return;
}

// BindViewModel @ 14b514720

void __thiscall
UDS_M_ItemDetail_StatusSlot::BindViewModel
          (UDS_M_ItemDetail_StatusSlot *this,TWeakObjectPtr<UDS_UserWidget,FWeakObjectPtr> param_1)

{
  return;
}

// GetPrivateStaticClass @ 14b5162c0

UClass * __cdecl UDS_M_ItemDetail_StatusSlot::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ItemDetail_StatusSlot.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ItemDetail_StatusSlot",
               &Z_Registration_Info_UClass_UDS_M_ItemDetail_StatusSlot.InnerSingleton,
               StaticRegisterNativesUDS_M_ItemDetail_StatusSlot,0x1a8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_M_ItemDetail_StatusSlot>,
               InternalVTableHelperCtorCaller<UDS_M_ItemDetail_StatusSlot>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ItemDetail_StatusSlot.InnerSingleton;
}

// StaticRegisterNativesUDS_M_ItemDetail_StatusSlot @ 14b516d50

void __cdecl UDS_M_ItemDetail_StatusSlot::StaticRegisterNativesUDS_M_ItemDetail_StatusSlot(void)

{
  return;
}

// GetViewModelContext @ 14bcff870

TSharedPtr<FDS_ViewModelContext_ModelBase,1> * __thiscall
UDS_M_ItemDetail_StatusSlot::GetViewModelContext
          (UDS_M_ItemDetail_StatusSlot *this,
          TSharedPtr<FDS_ViewModelContext_ModelBase,1> *__return_storage_ptr__,
          EDS_ViewModelTemplateKey param_1,FName param_2,FName param_3)

{
  *(uint *)&this->field_0x180 = param_3.ComparisonIndex.Value;
  *(uint *)&this->field_0x184 = param_3.Number;
  *(EDS_ViewModelTemplateKey *)&this->field_0x188 = param_1;
  *(uint *)&this->field_0x178 = param_2.ComparisonIndex.Value;
  *(uint *)&this->field_0x17c = param_2.Number;
  (**(code **)(*(longlong *)this + 0x310))();
  return __return_storage_ptr__;
}

// GetViewModelContext @ 14bcff8b0

TSharedPtr<FDS_ViewModelContext_ModelBase,1> * __thiscall
UDS_M_ItemDetail_StatusSlot::GetViewModelContext
          (UDS_M_ItemDetail_StatusSlot *this,
          TSharedPtr<FDS_ViewModelContext_ModelBase,1> *__return_storage_ptr__)

{
  *(undefined4 *)&this->field_0x188 = 0xad;
  UDS_ModelBase::GetViewModelContext((UDS_ModelBase *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InitModel @ 14bd02bb0

void __thiscall
UDS_M_ItemDetail_StatusSlot::InitModel
          (UDS_M_ItemDetail_StatusSlot *this,EDS_StatusType param_1,int param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  FDS_StatusTableRow *pFVar5;
  UEnum *this_00;
  FName FVar6;
  FString *this_01;
  undefined1 *this_02;
  int iVar7;
  undefined1 local_res20 [8];
  FString local_28;
  
  pFVar5 = FDS_StatusTableRow::Get((longlong)(int)param_1,true);
  if (pFVar5 == (FDS_StatusTableRow *)0x0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_8064954872484593641>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemDetail_StatusSlot.cpp"
                       ,0x17,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    this_02 = &this->field_0x40;
    this_00 = StaticEnum<enum_EDS_StatusType>();
    if (this_00 == (UEnum *)0x0) {
      ::FString::FString(&local_28,L"");
    }
    else {
      UEnum::GetNameStringByValue(this_00,&local_28,(longlong)(int)param_1);
    }
    FVar6 = FDS_DataContainer::TransformIndexToName<enum_EDS_StatusSlotData>
                      ((FDS_DataContainer *)this_02,(EDS_StatusSlotData)local_res20);
    uVar1 = *(undefined8 *)FVar6;
    uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
    this_01 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              ::FindOrAddImpl<FName>
                        ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                          *)this_02,uVar4 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar6);
    iVar7 = local_28.Data.ArrayNum + -1;
    if (local_28.Data.ArrayNum == 0) {
      iVar7 = 0;
    }
    ::FString::AssignRange(this_01,(wchar_t *)local_28.Data.AllocatorInstance.Data,iVar7);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    FDS_DataContainer::SetData<int,enum_EDS_StatusSlotData>
              ((FDS_DataContainer *)this_02,StatusValue,param_2);
    FDS_DataContainer::SetData<int,enum_EDS_StatusSlotData>
              ((FDS_DataContainer *)this_02,IconID,pFVar5->ID_StatusIcon);
    FDS_DataContainer::SetData<__int64,enum_EDS_StatusSlotData>
              ((FDS_DataContainer *)this_02,StatusNameID,(pFVar5->ID_StatusName).ID);
  }
  return;
}

// SetStatusComparisonValue @ 14bd21dd0

void __thiscall
UDS_M_ItemDetail_StatusSlot::SetStatusComparisonValue(UDS_M_ItemDetail_StatusSlot *this,int param_1)

{
  FDS_DataContainer::SetData<int,enum_EDS_StatusSlotData>
            ((FDS_DataContainer *)&this->field_0x40,ComparisonValue,param_1);
  return;
}

// SetStatusEnhanceValue @ 14bd21df0

void __thiscall
UDS_M_ItemDetail_StatusSlot::SetStatusEnhanceValue(UDS_M_ItemDetail_StatusSlot *this,int param_1)

{
  FDS_DataContainer::SetData<int,enum_EDS_StatusSlotData>
            ((FDS_DataContainer *)&this->field_0x40,EnhanceValue,param_1);
  return;
}

// SetStatusIconID @ 14bd21e10

void __thiscall
UDS_M_ItemDetail_StatusSlot::SetStatusIconID(UDS_M_ItemDetail_StatusSlot *this,int param_1)

{
  FDS_DataContainer::SetData<int,enum_EDS_StatusSlotData>
            ((FDS_DataContainer *)&this->field_0x40,IconID,param_1);
  return;
}

// SetStatusNameID @ 14bd21e30

void __thiscall
UDS_M_ItemDetail_StatusSlot::SetStatusNameID(UDS_M_ItemDetail_StatusSlot *this,long64 param_1)

{
  FDS_DataContainer::SetData<__int64,enum_EDS_StatusSlotData>
            ((FDS_DataContainer *)&this->field_0x40,StatusNameID,param_1);
  return;
}

// SetStatusType @ 14bd21e50

void __thiscall
UDS_M_ItemDetail_StatusSlot::SetStatusType(UDS_M_ItemDetail_StatusSlot *this,EDS_StatusType param_1)

{
  undefined8 uVar1;
  uint uVar2;
  UEnum *this_00;
  FName FVar3;
  FString *this_01;
  int iVar4;
  undefined1 local_res8 [8];
  FString local_18;
  
  this_00 = StaticEnum<enum_EDS_StatusType>();
  if (this_00 == (UEnum *)0x0) {
    ::FString::FString(&local_18,L"");
  }
  else {
    UEnum::GetNameStringByValue(this_00,&local_18,(longlong)(int)param_1);
  }
  FVar3 = FDS_DataContainer::TransformIndexToName<enum_EDS_StatusSlotData>
                    ((FDS_DataContainer *)&this->field_0x40,(EDS_StatusSlotData)local_res8);
  uVar1 = *(undefined8 *)FVar3;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  this_01 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
            ::FindOrAddImpl<FName>
                      ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                        *)&this->field_0x40,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar3);
  iVar4 = local_18.Data.ArrayNum + -1;
  if (local_18.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  ::FString::AssignRange(this_01,(wchar_t *)local_18.Data.AllocatorInstance.Data,iVar4);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// SetStatusValue @ 14bd21f10

void __thiscall
UDS_M_ItemDetail_StatusSlot::SetStatusValue(UDS_M_ItemDetail_StatusSlot *this,int param_1)

{
  FDS_DataContainer::SetData<int,enum_EDS_StatusSlotData>
            ((FDS_DataContainer *)&this->field_0x40,StatusValue,param_1);
  return;
}

// SetStyleIDStatusComparisonValue @ 14bd21f30

void __thiscall
UDS_M_ItemDetail_StatusSlot::SetStyleIDStatusComparisonValue
          (UDS_M_ItemDetail_StatusSlot *this,long64 param_1,long64 param_2)

{
  FDS_DataContainer::SetData<__int64,enum_EDS_StatusSlotData>
            ((FDS_DataContainer *)&this->field_0x40,StyleIDIncreasedStatusComparisonValue,param_1);
  FDS_DataContainer::SetData<__int64,enum_EDS_StatusSlotData>
            ((FDS_DataContainer *)&this->field_0x40,StyleIDDecreasedStatusComparisonValue,param_2);
  return;
}

// SetStyleIDStatusName @ 14bd21f80

void __thiscall
UDS_M_ItemDetail_StatusSlot::SetStyleIDStatusName(UDS_M_ItemDetail_StatusSlot *this,long64 param_1)

{
  FDS_DataContainer::SetData<__int64,enum_EDS_StatusSlotData>
            ((FDS_DataContainer *)&this->field_0x40,StyleIDStatusName,param_1);
  return;
}

