// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 11

// StaticClass @ 14b40cdd0

UClass * __cdecl UDS_ActivateWarpDeviceData::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ActivateWarpDeviceData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ActivateWarpDeviceData",
               &Z_Registration_Info_UClass_UDS_ActivateWarpDeviceData.InnerSingleton,
               StaticRegisterNativesUDS_ActivateWarpDeviceData,0x70,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_ActivateWarpDeviceData>,
               InternalVTableHelperCtorCaller<UDS_ActivateWarpDeviceData>,local_res8,
               UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ActivateWarpDeviceData.InnerSingleton;
}

// UDS_ActivateWarpDeviceData @ 14b4112a0

UDS_ActivateWarpDeviceData * __thiscall
UDS_ActivateWarpDeviceData::UDS_ActivateWarpDeviceData
          (UDS_ActivateWarpDeviceData *this,FVTableHelper *param_1)

{
  UDS_DataBase::UDS_DataBase((UDS_DataBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_ActivateWarpDeviceData__6B_;
  (this->ActivateWarpDeviceIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActivateWarpDeviceIDs).ArrayNum = 0;
  (this->ActivateWarpDeviceIDs).ArrayMax = 0;
  this->SyncState = None;
  return this;
}

// ~UDS_ActivateWarpDeviceData @ 14b411e40

void __thiscall
UDS_ActivateWarpDeviceData::~UDS_ActivateWarpDeviceData(UDS_ActivateWarpDeviceData *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDS_ActivateWarpDeviceData__6B_;
  pFVar1 = (this->ActivateWarpDeviceIDs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UDS_DataBase::~UDS_DataBase((UDS_DataBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b413360

UClass * __cdecl UDS_ActivateWarpDeviceData::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_ActivateWarpDeviceData.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_ActivateWarpDeviceData",
               &Z_Registration_Info_UClass_UDS_ActivateWarpDeviceData.InnerSingleton,
               StaticRegisterNativesUDS_ActivateWarpDeviceData,0x70,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_ActivateWarpDeviceData>,
               InternalVTableHelperCtorCaller<UDS_ActivateWarpDeviceData>,local_res8,
               UDS_DataBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_ActivateWarpDeviceData.InnerSingleton;
}

// StaticRegisterNativesUDS_ActivateWarpDeviceData @ 14b414240

void __cdecl UDS_ActivateWarpDeviceData::StaticRegisterNativesUDS_ActivateWarpDeviceData(void)

{
  return;
}

// UDS_ActivateWarpDeviceData @ 14ba32460

UDS_ActivateWarpDeviceData * __thiscall
UDS_ActivateWarpDeviceData::UDS_ActivateWarpDeviceData
          (UDS_ActivateWarpDeviceData *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  *(undefined1 *)&this->_padding_ = 1;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UDS_ActivateWarpDeviceData__6B_;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  (this->ActivateWarpDeviceIDs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ActivateWarpDeviceIDs).ArrayNum = 0;
  (this->ActivateWarpDeviceIDs).ArrayMax = 0;
  this->SyncState = None;
  return this;
}

// AddActivateWarpDevice @ 14ba34f70

bool __thiscall
UDS_ActivateWarpDeviceData::AddActivateWarpDevice(UDS_ActivateWarpDeviceData *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  
  pFVar3 = (this->ActivateWarpDeviceIDs).AllocatorInstance.Data;
  iVar2 = (this->ActivateWarpDeviceIDs).ArrayNum;
  pFVar1 = pFVar3 + (longlong)iVar2 * 4;
  while( true ) {
    if (pFVar3 == pFVar1) {
      if (iVar2 == (this->ActivateWarpDeviceIDs).ArrayMax) {
        iVar2 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x404,&(this->ActivateWarpDeviceIDs).AllocatorInstance,
                           &(this->ActivateWarpDeviceIDs).ArrayMax);
      }
      pFVar1 = (this->ActivateWarpDeviceIDs).AllocatorInstance.Data;
      (this->ActivateWarpDeviceIDs).ArrayNum = iVar2 + 1;
      *(int *)(pFVar1 + (longlong)iVar2 * 4) = param_1;
      return true;
    }
    if (*(int *)pFVar3 == param_1) break;
    pFVar3 = pFVar3 + 4;
  }
  return false;
}

// FindOrAddData @ 14ba40af0

TWeakObjectPtr<UDS_ActivateWarpDeviceData,FWeakObjectPtr> __cdecl
UDS_ActivateWarpDeviceData::FindOrAddData(ulong64 param_1,ulong64 param_2)

{
  bool in_R8B;
  
  GetData(param_1,param_2,in_R8B);
  return (TWeakObjectPtr<UDS_ActivateWarpDeviceData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// GetData @ 14ba477b0

TWeakObjectPtr<UDS_ActivateWarpDeviceData,FWeakObjectPtr> __cdecl
UDS_ActivateWarpDeviceData::GetData(ulong64 param_1,ulong64 param_2,bool param_3)

{
  int iVar1;
  bool bVar2;
  UDS_DataSetBase *pUVar3;
  TWeakObjectPtr<UDS_DataBase,FWeakObjectPtr> TVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  UDS_ActivateWarpDeviceData *pUVar7;
  undefined7 in_register_00000081;
  char in_R9B;
  FWeakObjectPtr local_38;
  FWeakObjectPtr local_30;
  UDS_ActivateWarpDeviceData *local_28;
  undefined1 local_20 [8];
  
  if (in_R9B == '\0') {
    TDS_DataSetGetter<UDS_ActivateWarpDeviceDataSet>::Get((ulong64)&local_30);
    bVar2 = TWeakObjectPtr<UDS_ActivateWarpDeviceDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_ActivateWarpDeviceDataSet,FWeakObjectPtr> *)&local_30,
                       (void *)0x0);
    if (!bVar2) {
      pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_30);
      TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_20);
      pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
      if (pUVar5 == (UObject *)0x0) {
LAB_14ba4783f:
        pUVar5 = (UObject *)0x0;
      }
      else {
        pUVar6 = Z_Construct_UClass_UDS_ActivateWarpDeviceData_NoRegister();
        iVar1 = (int)pUVar6->_padding_;
        if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
            &pUVar6->_padding_)) goto LAB_14ba4783f;
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      local_38.ObjectIndex = 0;
      local_38.ObjectSerialNumber = 0;
      local_28 = (UDS_ActivateWarpDeviceData *)pUVar5;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar5);
      }
      FWeakObjectPtr::operator=(&local_38,(FObjectPtr)&local_28);
      bVar2 = TWeakObjectPtr<UDS_ActivateWarpDeviceData,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_ActivateWarpDeviceData,FWeakObjectPtr> *)&local_38,
                         (void *)0x0);
      if (!bVar2) {
LAB_14ba4789a:
        *(FWeakObjectPtr *)param_1 = local_38;
        return (TWeakObjectPtr<UDS_ActivateWarpDeviceData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
      }
    }
  }
  else {
    TDS_DataSetGetter<UDS_ActivateWarpDeviceDataSet>::Get((ulong64)&local_30);
    bVar2 = TWeakObjectPtr<UDS_ActivateWarpDeviceDataSet,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_ActivateWarpDeviceDataSet,FWeakObjectPtr> *)&local_30,
                       (void *)0x0);
    if (bVar2) goto LAB_14ba479e2;
    pUVar3 = (UDS_DataSetBase *)FWeakObjectPtr::Get(&local_30);
    TVar4 = UDS_DataSetBase::GetData(pUVar3,(ulong64)local_20);
    pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)TVar4.WeakPtr);
    if (pUVar5 == (UObject *)0x0) {
LAB_14ba47909:
      pUVar5 = (UObject *)0x0;
    }
    else {
      pUVar6 = Z_Construct_UClass_UDS_ActivateWarpDeviceData_NoRegister();
      iVar1 = (int)pUVar6->_padding_;
      if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar1) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
          &pUVar6->_padding_)) goto LAB_14ba47909;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    local_38.ObjectIndex = 0;
    local_38.ObjectSerialNumber = 0;
    local_28 = (UDS_ActivateWarpDeviceData *)pUVar5;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    FWeakObjectPtr::operator=(&local_38,(FObjectPtr)&local_28);
    bVar2 = TWeakObjectPtr<UDS_ActivateWarpDeviceData,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_ActivateWarpDeviceData,FWeakObjectPtr> *)&local_38,
                       (void *)0x0);
    if (!bVar2) goto LAB_14ba4789a;
    pUVar5 = GetTransientPackageAsObject();
    pUVar7 = NewObject<UDS_ActivateWarpDeviceData>(pUVar5);
    if (pUVar7 != (UDS_ActivateWarpDeviceData *)0x0) {
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
        goto LAB_14ba479e9;
      }
    }
  }
LAB_14ba479e2:
  *(undefined8 *)param_1 = 0;
  local_28 = (UDS_ActivateWarpDeviceData *)0x0;
LAB_14ba479e9:
  FWeakObjectPtr::operator=((FWeakObjectPtr *)param_1,(FObjectPtr)&local_28);
  return (TWeakObjectPtr<UDS_ActivateWarpDeviceData,FWeakObjectPtr>)(FWeakObjectPtr)param_1;
}

// IsActivateWarpDevice @ 14ba59c40

bool __thiscall
UDS_ActivateWarpDeviceData::IsActivateWarpDevice(UDS_ActivateWarpDeviceData *this,int param_1)

{
  FScriptContainerElement *pFVar1;
  FScriptContainerElement *pFVar2;
  
  pFVar2 = (this->ActivateWarpDeviceIDs).AllocatorInstance.Data;
  pFVar1 = pFVar2 + (longlong)(this->ActivateWarpDeviceIDs).ArrayNum * 4;
  while( true ) {
    if (pFVar2 == pFVar1) {
      return false;
    }
    if (*(int *)pFVar2 == param_1) break;
    pFVar2 = pFVar2 + 4;
  }
  return true;
}

// UpdateData @ 14ba7c590

void __thiscall
UDS_ActivateWarpDeviceData::UpdateData(UDS_ActivateWarpDeviceData *this,DbWorkItem *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UObject *pUVar6;
  FScriptContainerElement *pFVar7;
  SqlWarpDeviceTableDefaultTypeInternal *pSVar8;
  
  if ((param_1->_impl_)._oneof_case_[0] == 0x35) {
    pSVar8 = (SqlWarpDeviceTableDefaultTypeInternal *)(param_1->_impl_).Item_.characterlevel_;
  }
  else {
    pSVar8 = &ds_game::_SqlWarpDeviceTable_default_instance_;
  }
  iVar2 = *(int *)((longlong)pSVar8 + 0x20);
  if (iVar2 < 1) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_5920579784374484967>,true,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\Manager\\Data\\DS_ActivateWarpDeviceData.cpp"
                       ,0x19,"warp_deviceid > 0");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    pFVar7 = (this->ActivateWarpDeviceIDs).AllocatorInstance.Data;
    iVar5 = (this->ActivateWarpDeviceIDs).ArrayNum;
    pFVar1 = pFVar7 + (longlong)iVar5 * 4;
    for (; pFVar7 != pFVar1; pFVar7 = pFVar7 + 4) {
      if (*(int *)pFVar7 == iVar2) goto LAB_14ba7c645;
    }
    if (iVar5 == (this->ActivateWarpDeviceIDs).ArrayMax) {
      iVar5 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x404,&(this->ActivateWarpDeviceIDs).AllocatorInstance,
                         &(this->ActivateWarpDeviceIDs).ArrayMax);
    }
    (this->ActivateWarpDeviceIDs).ArrayNum = iVar5 + 1;
    *(int *)((this->ActivateWarpDeviceIDs).AllocatorInstance.Data + (longlong)iVar5 * 4) = iVar2;
LAB_14ba7c645:
    *(undefined1 *)&this->_padding_ = 1;
    bVar4 = TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UDS_DataSetBase,FWeakObjectPtr> *)&this->_padding_,
                       (void *)0x0);
    if (!bVar4) {
      pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
      pUVar6[4].field_0x8 = 1;
      bVar4 = TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr>::UEOpEquals
                        ((TWeakObjectPtr<UDS_DataSetContainer,FWeakObjectPtr> *)(pUVar6 + 4),
                         (void *)0x0);
      if (!bVar4) {
        pUVar6 = FWeakObjectPtr::Get((FWeakObjectPtr *)(pUVar6 + 4));
        pUVar6[3].field_0x20 = 1;
      }
    }
  }
  return;
}

