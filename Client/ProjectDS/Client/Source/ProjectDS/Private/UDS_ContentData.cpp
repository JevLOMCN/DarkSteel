// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b46c570

UClass * __cdecl UDS_ContentData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ContentData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ContentData",
               &Z_Registration_Info_UClass_UDS_ContentData.InnerSingleton,
               StaticRegisterNativesUDS_ContentData,0x70,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_ContentData>,InternalVTableHelperCtorCaller<UDS_ContentData>,
               local_res8,UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ContentData.InnerSingleton;
}

// UDS_ContentData @ 14b471930

UDS_ContentData * __thiscall
UDS_ContentData::UDS_ContentData(UDS_ContentData *this,FVTableHelper *param_1)

{
  UDS_DataBase::UDS_DataBase((UDS_DataBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ContentData__6B_;
  *(undefined8 *)&this->OnChanged_SelectedContent = 0;
  *(undefined8 *)&(this->OnChanged_SelectedContent).field_0x8 = 0;
  *(undefined8 *)&(this->OnChanged_SelectedContent).field_0x10 = 0;
  return this;
}

// ~UDS_ContentData @ 14b472cc0

void __thiscall UDS_ContentData::~UDS_ContentData(UDS_ContentData *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7UDS_ContentData__6B_;
  pvVar1 = *(void **)&(this->OnChanged_SelectedContent).field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&this->OnChanged_SelectedContent);
  UDS_DataBase::~UDS_DataBase((UDS_DataBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b476530

UClass * __cdecl UDS_ContentData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ContentData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ContentData",
               &Z_Registration_Info_UClass_UDS_ContentData.InnerSingleton,
               StaticRegisterNativesUDS_ContentData,0x70,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UDS_ContentData>,InternalVTableHelperCtorCaller<UDS_ContentData>,
               local_res8,UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ContentData.InnerSingleton;
}

// StaticRegisterNativesUDS_ContentData @ 14b476ef0

void __cdecl UDS_ContentData::StaticRegisterNativesUDS_ContentData(void)

{
  return;
}

// UDS_ContentData @ 14ba328e0

UDS_ContentData * __thiscall
UDS_ContentData::UDS_ContentData(UDS_ContentData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDS_ContentData__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined8 *)&this->OnChanged_SelectedContent = 0;
  *(undefined8 *)&(this->OnChanged_SelectedContent).field_0x8 = 0;
  *(undefined8 *)&(this->OnChanged_SelectedContent).field_0x10 = 0;
  return this;
}

// FindOrAddData @ 14ba40b10

TWeakObjectPtr<UDS_ContentData,FWeakObjectPtr> __cdecl
UDS_ContentData::FindOrAddData(ulong64 param_1,ulong64 param_2)

{
  bool in_R8B;
  
  GetData(param_1,param_2,in_R8B);
  return (TWeakObjectPtr<UDS_ContentData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetData @ 14ba47f20

TWeakObjectPtr<UDS_ContentData,FWeakObjectPtr> __cdecl
UDS_ContentData::GetData(ulong64 param_1,ulong64 param_2,bool param_3)

{
  int iVar1;
  bool bVar2;
  UDS_DataSetBase *pUVar3;
  TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> TVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  UDS_ContentData *pUVar7;
  undefined7 in_register_00000081;
  char in_R9B;
  FWeakObjectPtr local_38;
  FWeakObjectPtr local_30;
  UDS_ContentData *local_28;
  undefined1 local_20 [8];
  
  if (in_R9B == '\0') {
    TDS_DataSetGetter<UDS_ContentDataSet>::Get((ulong64)&local_30);
    bVar2 = TWeakObjectPtr<UDS_ContentDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_ContentDataSet,FWeakObjectPtr> *)&local_30,(void *)0x0);
    if (!bVar2) {
      pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_30);
      TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_20);
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
      if (pUVar5 == (UObject *)0x0) {
LAB_14ba47faf:
        pUVar5 = (UObject *)0x0;
      }
      else {
        pUVar6 = Z_Construct_UClass_UDS_ContentData_NoRegister();
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) goto LAB_14ba47faf;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      local_38.ObjectIndex = 0;
      local_38.ObjectSerialNumber = 0;
      local_28 = (UDS_ContentData *)pUVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      FWeakObjectPtr::operator=(&local_38,(FObjectPtr)&local_28);
      bVar2 = TWeakObjectPtr<UDS_ContentData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_ContentData,FWeakObjectPtr> *)&local_38,(void *)0x0);
      if (!bVar2) {
LAB_14ba4800a:
        *(FWeakObjectPtr *)param_1 = local_38;
        return (TWeakObjectPtr<UDS_ContentData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
    }
  }
  else {
    TDS_DataSetGetter<UDS_ContentDataSet>::Get((ulong64)&local_30);
    bVar2 = TWeakObjectPtr<UDS_ContentDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_ContentDataSet,FWeakObjectPtr> *)&local_30,(void *)0x0);
    if (bVar2) goto LAB_14ba48152;
    pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_30);
    TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_20);
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
    if (pUVar5 == (UObject *)0x0) {
LAB_14ba48079:
      pUVar5 = (UObject *)0x0;
    }
    else {
      pUVar6 = Z_Construct_UClass_UDS_ContentData_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) goto LAB_14ba48079;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    local_38.ObjectIndex = 0;
    local_38.ObjectSerialNumber = 0;
    local_28 = (UDS_ContentData *)pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    FWeakObjectPtr::operator=(&local_38,(FObjectPtr)&local_28);
    bVar2 = TWeakObjectPtr<UDS_ContentData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_ContentData,FWeakObjectPtr> *)&local_38,(void *)0x0);
    if (!bVar2) goto LAB_14ba4800a;
    pUVar5 = GetTransientPackageAsObject();
    pUVar7 = NewObject<UDS_ContentData>(pUVar5);
    if (pUVar7 != (UDS_ContentData *)0x0) {
      pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_30);
      local_28 = pUVar7;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      bVar2 = UDS_DataSetBase::AddData
                        (pUVar3,CONCAT71(in_register_00000081,param_3),
                         (TObjectPtr<UDS_DataBase>)&local_28);
      if (bVar2) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar7);
        }
        *(undefined8 *)param_1 = 0;
        local_28 = pUVar7;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)pUVar7);
        }
        goto LAB_14ba48159;
      }
    }
  }
LAB_14ba48152:
  *(undefined8 *)param_1 = 0;
  local_28 = (UDS_ContentData *)0x0;
LAB_14ba48159:
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
  return (TWeakObjectPtr<UDS_ContentData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// ResetData @ 14ba68b10

void __thiscall UDS_ContentData::ResetData(UDS_ContentData *this)

{
  return;
}

// SetContentsSelectedChange @ 14ba6b510

void __thiscall UDS_ContentData::SetContentsSelectedChange(UDS_ContentData *this,bool *param_1)

{
  int iVar1;
  FReadAccessScope local_28;
  
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
             &this->OnChanged_SelectedContent,&local_28);
  iVar1 = *(int *)&(this->OnChanged_SelectedContent).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  if (0 < iVar1) {
    FDS_DataPropertyDelegate_bool_DelegateWrapper
              ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)
               &this->OnChanged_SelectedContent,*param_1);
  }
  return;
}

