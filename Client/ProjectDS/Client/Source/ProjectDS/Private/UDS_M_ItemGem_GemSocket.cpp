// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 23

// StaticClass @ 14b5096d0

UClass * __cdecl UDS_M_ItemGem_GemSocket::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ItemGem_GemSocket.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ItemGem_GemSocket",
               &Z_Registration_Info_UClass_UDS_M_ItemGem_GemSocket.InnerSingleton,
               StaticRegisterNativesUDS_M_ItemGem_GemSocket,0x1b0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_ItemGem_GemSocket>,
               InternalVTableHelperCtorCaller<UDS_M_ItemGem_GemSocket>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ItemGem_GemSocket.InnerSingleton;
}

// UDS_M_ItemGem_GemSocket @ 14b511d20

UDS_M_ItemGem_GemSocket * __thiscall
UDS_M_ItemGem_GemSocket::UDS_M_ItemGem_GemSocket
          (UDS_M_ItemGem_GemSocket *this,FVTableHelper *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_M_ItemGem_GemSocket__6B_;
  (this->GemStatusModel).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->GemStatusModel).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// UDS_M_ItemGem_GemSocket @ 14b511d70

UDS_M_ItemGem_GemSocket * __thiscall
UDS_M_ItemGem_GemSocket::UDS_M_ItemGem_GemSocket
          (UDS_M_ItemGem_GemSocket *this,FObjectInitializer *param_1)

{
  undefined8 local_res8 [4];
  
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&___7UDS_M_ItemGem_GemSocket__6B_;
  (this->GemStatusModel).WeakPtr = (FWeakObjectPtr)0x0;
  local_res8[0] = 0;
  FWeakObjectPtr::operator=(&(this->GemStatusModel).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~UDS_M_ItemGem_GemSocket @ 14b513220

void __thiscall UDS_M_ItemGem_GemSocket::~UDS_M_ItemGem_GemSocket(UDS_M_ItemGem_GemSocket *this)

{
  this->_padding_ = (longlong)&___7UDS_M_ItemGem_GemSocket__6B_;
  UDS_ModelBase::~UDS_ModelBase((UDS_ModelBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b5165c0

UClass * __cdecl UDS_M_ItemGem_GemSocket::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_ItemGem_GemSocket.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_ItemGem_GemSocket",
               &Z_Registration_Info_UClass_UDS_M_ItemGem_GemSocket.InnerSingleton,
               StaticRegisterNativesUDS_M_ItemGem_GemSocket,0x1b0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_M_ItemGem_GemSocket>,
               InternalVTableHelperCtorCaller<UDS_M_ItemGem_GemSocket>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_ItemGem_GemSocket.InnerSingleton;
}

// StaticRegisterNativesUDS_M_ItemGem_GemSocket @ 14b516e20

void __cdecl UDS_M_ItemGem_GemSocket::StaticRegisterNativesUDS_M_ItemGem_GemSocket(void)

{
  return;
}

// GetBonusGemColor @ 14bcf5940

FColor __thiscall UDS_M_ItemGem_GemSocket::GetBonusGemColor(UDS_M_ItemGem_GemSocket *this)

{
  code *pcVar1;
  bool bVar2;
  FColor_u_0 FVar3;
  FDS_ItemGemSocketTableRow *pFVar4;
  FDS_ResourceColorTableRow *pFVar5;
  atomic<unsigned_char> *paVar6;
  FColor_u_0 *in_RDX;
  int iVar7;
  
  pFVar4 = GetSocketTable(this);
  if (pFVar4 == (FDS_ItemGemSocketTableRow *)0x0) {
    iVar7 = 0x93;
    paVar6 = &bGEnsureHasExecuted<_9078076213808856941>;
  }
  else {
    pFVar5 = FDS_ResourceColorTableRow::Get((longlong)pFVar4->BonusGemColor,true);
    if (pFVar5 != (FDS_ResourceColorTableRow *)0x0) {
      *in_RDX = (pFVar5->Color).field0_0x0;
      return (FColor)SUB84(in_RDX,0);
    }
    iVar7 = 0x96;
    paVar6 = &bGEnsureHasExecuted<_9078076213808856938>;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar6,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemGem_GemSocket.cpp"
                     ,iVar7,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    FVar3.Bits = (*pcVar1)();
    return (FColor_u_0)(FColor_u_0)FVar3._s_0;
  }
  in_RDX->Bits = 0;
  return (FColor)SUB84(in_RDX,0);
}

// GetGemSlotContextViewModel @ 14bcf79b0

TSharedPtr<FDS_ViewModelContext_ModelBase,1> * __thiscall
UDS_M_ItemGem_GemSocket::GetGemSlotContextViewModel
          (UDS_M_ItemGem_GemSocket *this,
          TSharedPtr<FDS_ViewModelContext_ModelBase,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TObjectPtr<UObject> *pTVar3;
  TSharedPtr<FDS_ViewModelContext_ModelBase,1> *pTVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  atomic<unsigned_char> *paVar7;
  int iVar8;
  int local_res8 [4];
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  UObject *local_28;
  UObject *local_20;
  
  local_res8[0] = 4;
  pTVar3 = TMapBase<int,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UObject>,0>_>
           ::FindOrAddImpl<int_const_&>
                     ((TMapBase<int,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UObject>,0>_>
                       *)&this->_padding_,4,local_res8);
  pUVar5 = (pTVar3->field0_0x0).DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar5 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_28 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_28);
  bVar2 = FWeakObjectPtr::IsValid(&local_res18);
  if (!bVar2) {
    iVar8 = 0xc3;
    paVar7 = &bGEnsureHasExecuted<_9078076213808856893>;
    goto LAB_14bcf7a5a;
  }
  pUVar5 = FWeakObjectPtr::Get(&local_res18);
  if (pUVar5 == (UObject *)0x0) {
LAB_14bcf7ac1:
    pUVar5 = (UObject *)0x0;
  }
  else {
    pUVar6 = Z_Construct_UClass_UDS_ModelBase_NoRegister();
    iVar8 = (int)pUVar6->_padding_;
    if ((*(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38) < iVar8) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar8 * 8) !=
        &pUVar6->_padding_)) goto LAB_14bcf7ac1;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_20 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_20);
  bVar2 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar2) {
    pUVar5 = FWeakObjectPtr::Get(&local_res20);
    (**(code **)(*(longlong *)pUVar5 + 0x310))(pUVar5,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  iVar8 = 0xc6;
  paVar7 = &bGEnsureHasExecuted<_9078076213808856890>;
LAB_14bcf7a5a:
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar7,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemGem_GemSocket.cpp"
                     ,iVar8,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar4 = (TSharedPtr<FDS_ViewModelContext_ModelBase,1> *)(*pcVar1)();
    return pTVar4;
  }
  __return_storage_ptr__->Object = (FDS_ViewModelContext_ModelBase *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetGemStatusContextViewModel @ 14bcf7b90

TSharedPtr<FDS_ViewModelContext_ModelBase,1> * __thiscall
UDS_M_ItemGem_GemSocket::GetGemStatusContextViewModel
          (UDS_M_ItemGem_GemSocket *this,
          TSharedPtr<FDS_ViewModelContext_ModelBase,1> *__return_storage_ptr__)

{
  code *pcVar1;
  bool bVar2;
  TSharedPtr<FDS_ViewModelContext_ModelBase,1> *pTVar3;
  UObject *pUVar4;
  
  bVar2 = FWeakObjectPtr::IsValid(&(this->GemStatusModel).WeakPtr);
  if (bVar2) {
    pUVar4 = FWeakObjectPtr::Get(&(this->GemStatusModel).WeakPtr);
    (**(code **)(*(longlong *)pUVar4 + 0x310))(pUVar4,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_9078076213808856883>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemGem_GemSocket.cpp"
                     ,0xcd,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    pTVar3 = (TSharedPtr<FDS_ViewModelContext_ModelBase,1> *)(*pcVar1)();
    return pTVar3;
  }
  __return_storage_ptr__->Object = (FDS_ViewModelContext_ModelBase *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// GetGemTID @ 14bcf7c30

int __thiscall UDS_M_ItemGem_GemSocket::GetGemTID(UDS_M_ItemGem_GemSocket *this)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  FName FVar4;
  FString *pFVar5;
  wchar_t *_Str;
  
  FVar4 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemGemSocketSlotData>
                    ((FDS_DataContainer *)&this->_padding_,8);
  uVar1 = *(undefined8 *)FVar4;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&this->_padding_,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if ((pFVar5->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  iVar3 = _wtoi(_Str);
  return iVar3;
}

// GetSocketGemColor @ 14bcfbdb0

FColor __thiscall UDS_M_ItemGem_GemSocket::GetSocketGemColor(UDS_M_ItemGem_GemSocket *this)

{
  code *pcVar1;
  bool bVar2;
  FColor_u_0 FVar3;
  FDS_ItemGemSocketTableRow *pFVar4;
  FDS_ResourceColorTableRow *pFVar5;
  atomic<unsigned_char> *paVar6;
  FColor_u_0 *in_RDX;
  int iVar7;
  
  pFVar4 = GetSocketTable(this);
  if (pFVar4 == (FDS_ItemGemSocketTableRow *)0x0) {
    iVar7 = 0x89;
    paVar6 = &bGEnsureHasExecuted<_9078076213808856951>;
  }
  else {
    pFVar5 = FDS_ResourceColorTableRow::Get((longlong)pFVar4->SocketGemColor,true);
    if (pFVar5 != (FDS_ResourceColorTableRow *)0x0) {
      *in_RDX = (pFVar5->Color).field0_0x0;
      return (FColor)SUB84(in_RDX,0);
    }
    iVar7 = 0x8c;
    paVar6 = &bGEnsureHasExecuted<_9078076213808856948>;
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar6,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemGem_GemSocket.cpp"
                     ,iVar7,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    FVar3.Bits = (*pcVar1)();
    return (FColor_u_0)(FColor_u_0)FVar3._s_0;
  }
  in_RDX->Bits = 0;
  return (FColor)SUB84(in_RDX,0);
}

// GetSocketName @ 14bcfc000

FDS_Text * __thiscall
UDS_M_ItemGem_GemSocket::GetSocketName
          (UDS_M_ItemGem_GemSocket *this,FDS_Text *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FDS_ItemGemSocketTableRow *pFVar4;
  FDS_Text *pFVar5;
  TObjectPtr<UObject> *pTVar6;
  UObject *pUVar7;
  UClass *pUVar8;
  int local_res18 [2];
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_28;
  UObject *local_20;
  UObject *local_18 [2];
  
  bVar3 = IsEmpty(this);
  if (bVar3) {
    pFVar4 = GetSocketTable(this);
    if (pFVar4 != (FDS_ItemGemSocketTableRow *)0x0) {
      __return_storage_ptr__->StringTableType = None;
      __return_storage_ptr__->StringTableID = 0;
      (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
      (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
      (__return_storage_ptr__->DateTime).Ticks = 0;
      (__return_storage_ptr__->TimeSpan).Ticks = 0;
      __return_storage_ptr__->TimeExpressionType = None;
      __return_storage_ptr__->IsExpression = false;
      (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
           (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
      (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
      (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
      (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
      __return_storage_ptr__->StringTableID = (pFVar4->ID_SocketName).ID;
      __return_storage_ptr__->StringTableType = StringUi;
      return __return_storage_ptr__;
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9078076213808856997>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemGem_GemSocket.cpp"
                       ,0x5b,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FDS_Text *)(*pcVar2)();
      return pFVar5;
    }
    __return_storage_ptr__->StringTableType = None;
    goto LAB_14bcfc061;
  }
  local_res18[0] = 4;
  pTVar6 = TMapBase<int,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UObject>,0>_>
           ::FindOrAddImpl<int_const_&>
                     ((TMapBase<int,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UObject>,0>_>
                       *)&this->_padding_,4,local_res18);
  pUVar7 = (pTVar6->field0_0x0).DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar7 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar7);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar7);
    }
  }
  local_28.ObjectIndex = 0;
  local_28.ObjectSerialNumber = 0;
  local_20 = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  FWeakObjectPtr::operator=(&local_28,(FObjectPtr)&local_20);
  pUVar7 = FWeakObjectPtr::Get(&local_28);
  if (pUVar7 == (UObject *)0x0) {
LAB_14bcfc19e:
    pUVar7 = (UObject *)0x0;
  }
  else {
    pUVar8 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
    iVar1 = (int)pUVar8->_padding_;
    if ((*(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar1 * 8) !=
        &pUVar8->_padding_)) goto LAB_14bcfc19e;
  }
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_18[0] = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)local_18);
  bVar3 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar3) {
    pUVar7 = FWeakObjectPtr::Get(&local_res20);
    (**(code **)(*(longlong *)pUVar7 + 0x400))(pUVar7,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<_9078076213808856990>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemGem_GemSocket.cpp"
                     ,0x62,"false");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    pFVar5 = (FDS_Text *)(*pcVar2)();
    return pFVar5;
  }
  __return_storage_ptr__->StringTableType = None;
LAB_14bcfc061:
  __return_storage_ptr__->StringTableID = 0;
  (__return_storage_ptr__->StringEnumTableNameID).ComparisonIndex = 0;
  (__return_storage_ptr__->StringEnumTableNameID).Number = 0;
  (__return_storage_ptr__->DateTime).Ticks = 0;
  (__return_storage_ptr__->TimeSpan).Ticks = 0;
  __return_storage_ptr__->TimeExpressionType = None;
  __return_storage_ptr__->IsExpression = false;
  (__return_storage_ptr__->UniqueString).Data.AllocatorInstance.Data =
       (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->UniqueString).Data.ArrayNum = 0;
  (__return_storage_ptr__->UniqueString).Data.ArrayMax = 0;
  (__return_storage_ptr__->FormatArgs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (__return_storage_ptr__->FormatArgs).ArrayNum = 0;
  (__return_storage_ptr__->FormatArgs).ArrayMax = 0;
  return __return_storage_ptr__;
}

// GetSocketStatus @ 14bcfc270

FText * __thiscall
UDS_M_ItemGem_GemSocket::GetSocketStatus
          (UDS_M_ItemGem_GemSocket *this,FText *__return_storage_ptr__)

{
  FScriptContainerElement *pFVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  FText *pFVar5;
  FDS_ItemGemSocketTableRow *pFVar6;
  UEnum *pUVar7;
  FString *pFVar8;
  FString *pFVar9;
  TWeakObjectPtr<UObject,FWeakObjectPtr> this_00;
  UObject *pUVar10;
  UClass *pUVar11;
  FDS_ItemBaseTableRow *this_01;
  FDS_ItemAbilityTableRow *pFVar12;
  atomic<unsigned_char> *paVar13;
  FScriptContainerElement *pFVar14;
  int iVar15;
  undefined1 local_res18 [8];
  undefined1 local_res20 [8];
  FWeakObjectPtr local_c8;
  FWeakObjectPtr local_c0;
  FString local_b8;
  UEnum *local_a8;
  UObject *local_a0;
  FString local_98;
  FDS_StringUiID local_88;
  undefined1 local_78 [8];
  FString local_70;
  FString local_60;
  FString local_50;
  
  local_a8 = StaticEnum<enum_EDS_StatusType>();
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a8 != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_a8);
  }
  local_c8.ObjectIndex = 0;
  local_c8.ObjectSerialNumber = 0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_a8 != (UEnum *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_a8);
  }
  FWeakObjectPtr::operator=(&local_c8,(FObjectPtr)&local_a8);
  bVar4 = FWeakObjectPtr::IsValid(&local_c8);
  if (!bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9078076213808856981>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemGem_GemSocket.cpp"
                       ,0x6b,"false");
    if (!bVar4) {
      pFVar5 = FText::GetEmpty();
      (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
      pIVar2 = (pFVar5->TextData).Reference;
      (__return_storage_ptr__->TextData).Reference = pIVar2;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res18);
      }
      __return_storage_ptr__->Flags = pFVar5->Flags;
      return __return_storage_ptr__;
    }
    pcVar3 = (code *)swi(3);
    pFVar5 = (FText *)(*pcVar3)();
    return pFVar5;
  }
  pFVar6 = GetSocketTable(this);
  if (pFVar6 == (FDS_ItemGemSocketTableRow *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9078076213808856978>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemGem_GemSocket.cpp"
                       ,0x6e,"false");
    if (!bVar4) {
      pFVar5 = FText::GetEmpty();
      (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
      pIVar2 = (pFVar5->TextData).Reference;
      (__return_storage_ptr__->TextData).Reference = pIVar2;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res20);
      }
      __return_storage_ptr__->Flags = pFVar5->Flags;
      return __return_storage_ptr__;
    }
    pcVar3 = (code *)swi(3);
    pFVar5 = (FText *)(*pcVar3)();
    return pFVar5;
  }
  bVar4 = IsEmpty(this);
  if (bVar4) {
    iVar15 = pFVar6->BonusStatusValue;
    pUVar7 = (UEnum *)FWeakObjectPtr::Get(&local_c8);
    pFVar8 = UEnum::GetNameStringByValue(pUVar7,&local_50,(longlong)(int)pFVar6->BonusStatusType);
    local_88.ID = 0x9ec2;
    local_88._padding_ = (longlong)&___7FDS_StringUiID__6B_;
    pFVar9 = FDS_StringUiID::Str(&local_88);
    pFVar8 = DS_Util::GetFormatString<FString,int>(&local_70,pFVar9,pFVar8,iVar15);
    FText::FromString(__return_storage_ptr__,pFVar8);
LAB_14bcfc6a7:
    if (local_70.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.Data.AllocatorInstance.Data);
    }
  }
  else {
    this_00 = UDS_ModelBase::GetObjectData((UDS_ModelBase *)this,(int)local_78);
    pUVar10 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00.WeakPtr);
    if (pUVar10 == (UObject *)0x0) {
LAB_14bcfc469:
      pUVar10 = (UObject *)0x0;
    }
    else {
      pUVar11 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
      iVar15 = (int)pUVar11->_padding_;
      if ((*(int *)(*(longlong *)&pUVar10->field_0x10 + 0x38) < iVar15) ||
         ((longlong *)
          *(undefined1 **)
           (*(longlong *)(*(longlong *)&pUVar10->field_0x10 + 0x30) + (longlong)iVar15 * 8) !=
          &pUVar11->_padding_)) goto LAB_14bcfc469;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar10);
    }
    local_c0.ObjectIndex = 0;
    local_c0.ObjectSerialNumber = 0;
    local_a0 = pUVar10;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar10 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar10);
    }
    FWeakObjectPtr::operator=(&local_c0,(FObjectPtr)&local_a0);
    bVar4 = FWeakObjectPtr::IsValid(&local_c0);
    if (bVar4) {
      pUVar10 = FWeakObjectPtr::Get(&local_c0);
      this_01 = (FDS_ItemBaseTableRow *)(**(code **)(*(longlong *)pUVar10 + 0x3b0))(pUVar10);
      if (this_01 != (FDS_ItemBaseTableRow *)0x0) {
        pFVar12 = FDS_ItemBaseTableRow::ID_AbilityTable(this_01);
        if (((pFVar12->StatusValue).ArrayNum < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar5 = (FText *)(*pcVar3)();
          return pFVar5;
        }
        pUVar7 = (UEnum *)FWeakObjectPtr::Get(&local_c8);
        pFVar12 = FDS_ItemBaseTableRow::ID_AbilityTable(this_01);
        if (((pFVar12->StatusType).ArrayNum < 1) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar5 = (FText *)(*pcVar3)();
          return pFVar5;
        }
        UEnum::GetNameStringByValue
                  (pUVar7,&local_60,(longlong)*(int *)(pFVar12->StatusType).AllocatorInstance.Data);
        ::FString::PrintfImpl(&local_b8,L"%s %d");
        if (local_60.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Data.AllocatorInstance.Data);
        }
        pFVar14 = (pFVar6->BonusItemType).AllocatorInstance.Data;
        pFVar1 = pFVar14 + (longlong)(pFVar6->BonusItemType).ArrayNum * 4;
        if (pFVar14 != pFVar1) {
          do {
            if (*(EDS_ItemType *)pFVar14 == this_01->ItemType) {
              ::FString::PrintfImpl(&local_98,L"%s\t +(%d)");
              if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_b8.Data.AllocatorInstance.Data);
              }
              local_b8.Data.AllocatorInstance.Data = local_98.Data.AllocatorInstance.Data;
              local_b8.Data.ArrayNum = local_98.Data.ArrayNum;
              local_b8.Data.ArrayMax = local_98.Data.ArrayMax;
              break;
            }
            pFVar14 = pFVar14 + 4;
          } while (pFVar14 != pFVar1);
        }
        FText::FromString(__return_storage_ptr__,&local_b8);
        local_70.Data.AllocatorInstance.Data = local_b8.Data.AllocatorInstance.Data;
        goto LAB_14bcfc6a7;
      }
      iVar15 = 0x7a;
      paVar13 = &bGEnsureHasExecuted<_9078076213808856966>;
    }
    else {
      iVar15 = 0x77;
      paVar13 = &bGEnsureHasExecuted<_9078076213808856969>;
    }
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (paVar13,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemGem_GemSocket.cpp"
                       ,iVar15,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar5 = (FText *)(*pcVar3)();
      return pFVar5;
    }
    pFVar5 = FText::GetEmpty();
    FText::FText(__return_storage_ptr__,pFVar5);
  }
  return __return_storage_ptr__;
}

// GetSocketTable @ 14bcfc6d0

FDS_ItemGemSocketTableRow * __thiscall
UDS_M_ItemGem_GemSocket::GetSocketTable(UDS_M_ItemGem_GemSocket *this)

{
  undefined8 uVar1;
  uint uVar2;
  int iVar3;
  FName FVar4;
  FString *pFVar5;
  FDS_ItemGemSocketTableRow *pFVar6;
  wchar_t *_Str;
  
  FVar4 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemGemSocketSlotData>
                    ((FDS_DataContainer *)&this->_padding_,8);
  uVar1 = *(undefined8 *)FVar4;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&this->_padding_,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if ((pFVar5->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  iVar3 = _wtoi(_Str);
  pFVar6 = FDS_ItemGemSocketTableRow::Get((longlong)iVar3,true);
  return pFVar6;
}

// GetViewModelContext @ 14bcff940

TSharedPtr<FDS_ViewModelContext_ModelBase,1> * __thiscall
UDS_M_ItemGem_GemSocket::GetViewModelContext
          (UDS_M_ItemGem_GemSocket *this,
          TSharedPtr<FDS_ViewModelContext_ModelBase,1> *__return_storage_ptr__)

{
  *(undefined4 *)&this->_padding_ = 0xb7;
  UDS_ModelBase::GetViewModelContext((UDS_ModelBase *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// InitModel @ 14bd033f0

void __thiscall
UDS_M_ItemGem_GemSocket::InitModel
          (UDS_M_ItemGem_GemSocket *this,EDS_GemSocketIndex param_1,int param_2,int param_3)

{
  code *pcVar1;
  TObjectPtr<UObject>_u_0 this_00;
  bool bVar2;
  TObjectPtr<UObject>_u_0 *pTVar3;
  undefined8 uVar4;
  undefined7 uVar5;
  TObjectPtr<UObject>_u_0 local_res8;
  int local_res10 [2];
  UDS_M_ItemGem_GemSocket *local_28 [2];
  
  uVar4 = 0;
  FDS_DataContainer::SetData<int,enum_EDS_ItemGemSocketSlotData>
            ((FDS_DataContainer *)&this->_padding_,GemSocketIndex,(uint)param_1);
  uVar5 = (undefined7)((ulonglong)uVar4 >> 8);
  FDS_DataContainer::SetData<int,enum_EDS_ItemGemSocketSlotData>
            ((FDS_DataContainer *)&this->_padding_,GemSocketTID,param_2);
  FDS_DataContainer::SetData<int,enum_EDS_ItemGemSocketSlotData>
            ((FDS_DataContainer *)&this->_padding_,GemItemTID,param_3);
  FDS_DataContainer::SetData<int,enum_EDS_ItemGemSocketSlotData>
            ((FDS_DataContainer *)&this->_padding_,EquippedGemItemTID,param_3);
  DS_ItemDataUtil::CreateItemModel((EDS_ItemSlotStateType)&local_res8,(int)CONCAT71(uVar5,0x19));
  this_00 = local_res8;
  if (local_res8.DebugPtr == (UObject *)0x0) {
    bVar2 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9078076213808857033>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemGem_GemSocket.cpp"
                       ,0x37,"false");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    local_28[0] = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (this != (UDS_M_ItemGem_GemSocket *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    UDS_ModelBase::SetParentModel
              ((UDS_ModelBase *)this_00.DebugPtr,(TObjectPtr<UDS_ModelBase>)local_28);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res8.DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8.DebugPtr);
    }
    local_res10[0] = 4;
    pTVar3 = &TMapBase<int,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UObject>,0>_>
              ::FindOrAddImpl<int_const_&>
                        ((TMapBase<int,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UObject>,0>_>
                          *)&this->_padding_,4,local_res10)->field0_0x0;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_res8.DebugPtr != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(local_res8.DebugPtr);
    }
    *pTVar3 = local_res8;
    (**(code **)(this->_padding_ + 0x2b0))(this);
  }
  return;
}

// IsActivated @ 14bd04d40

bool __thiscall UDS_M_ItemGem_GemSocket::IsActivated(UDS_M_ItemGem_GemSocket *this)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TObjectPtr<UObject> *pTVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  longlong lVar8;
  FDS_ItemGemSocketTableRow *pFVar9;
  atomic<unsigned_char> *paVar10;
  FScriptContainerElement *pFVar11;
  int iVar12;
  int local_res8 [2];
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  UObject *local_28 [2];
  
  local_res8[0] = 4;
  pTVar5 = TMapBase<int,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UObject>,0>_>
           ::FindOrAddImpl<int_const_&>
                     ((TMapBase<int,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UObject>,0>_>
                       *)&this->_padding_,4,local_res8);
  pUVar6 = (pTVar5->field0_0x0).DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar6 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_res20 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
  pUVar6 = FWeakObjectPtr::Get(&local_res18);
  if (pUVar6 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
    iVar12 = (int)pUVar7->_padding_;
    if ((iVar12 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar12 * 8) ==
        &pUVar7->_padding_)) goto LAB_14bd04e07;
  }
  pUVar6 = (UObject *)0x0;
LAB_14bd04e07:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_28[0] = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_28);
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (bVar3) {
    pUVar6 = FWeakObjectPtr::Get(&local_res10);
    lVar8 = (**(code **)(*(longlong *)pUVar6 + 0x3b0))(pUVar6);
    if (lVar8 == 0) {
      return false;
    }
    pFVar9 = GetSocketTable(this);
    if (pFVar9 != (FDS_ItemGemSocketTableRow *)0x0) {
      pFVar11 = (pFVar9->BonusItemType).AllocatorInstance.Data;
      pFVar1 = pFVar11 + (longlong)(pFVar9->BonusItemType).ArrayNum * 4;
      if (pFVar11 == pFVar1) {
        return false;
      }
      do {
        if (*(int *)pFVar11 == *(int *)(lVar8 + 0x38)) {
          return true;
        }
        pFVar11 = pFVar11 + 4;
      } while (pFVar11 != pFVar1);
      return false;
    }
    iVar12 = 0xbb;
    paVar10 = &bGEnsureHasExecuted<_9078076213808856901>;
  }
  else {
    iVar12 = 0xb5;
    paVar10 = &bGEnsureHasExecuted<_9078076213808856907>;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (paVar10,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemGem_GemSocket.cpp"
                     ,iVar12,"false");
  if (!bVar3) {
    return false;
  }
  pcVar2 = (code *)swi(3);
  uVar4 = (*pcVar2)();
  return (bool)uVar4;
}

// IsEmpty @ 14bd057e0

bool __thiscall UDS_M_ItemGem_GemSocket::IsEmpty(UDS_M_ItemGem_GemSocket *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TObjectPtr<UObject> *pTVar5;
  UObject *pUVar6;
  UClass *pUVar7;
  int local_res8 [2];
  FWeakObjectPtr local_res10;
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  UObject *local_28 [3];
  
  local_res8[0] = 4;
  pTVar5 = TMapBase<int,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UObject>,0>_>
           ::FindOrAddImpl<int_const_&>
                     ((TMapBase<int,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UObject>,0>_>
                       *)&this->_padding_,4,local_res8);
  pUVar6 = (pTVar5->field0_0x0).DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar6 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar6);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar6);
    }
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_res20 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
  pUVar6 = FWeakObjectPtr::Get(&local_res18);
  if (pUVar6 != (UObject *)0x0) {
    pUVar7 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar7->_padding_)) goto LAB_14bd058a3;
  }
  pUVar6 = (UObject *)0x0;
LAB_14bd058a3:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_res10.ObjectIndex = 0;
  local_res10.ObjectSerialNumber = 0;
  local_28[0] = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_28);
  bVar3 = FWeakObjectPtr::IsValid(&local_res10);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9078076213808856915>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemGem_GemSocket.cpp"
                       ,0xad,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    return false;
  }
  pUVar6 = FWeakObjectPtr::Get(&local_res10);
  uVar4 = (**(code **)(*(longlong *)pUVar6 + 0x558))(pUVar6);
  return (bool)uVar4;
}

// IsSelected @ 14bd06170

bool __thiscall UDS_M_ItemGem_GemSocket::IsSelected(UDS_M_ItemGem_GemSocket *this)

{
  undefined8 uVar1;
  bool bVar2;
  uint uVar3;
  FName FVar4;
  FString *pFVar5;
  wchar_t *pwVar6;
  
  FVar4 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemGemSocketSlotData>
                    ((FDS_DataContainer *)&this->_padding_,8);
  uVar1 = *(undefined8 *)FVar4;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar5 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&this->_padding_,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar4);
  if ((pFVar5->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar5->Data).AllocatorInstance.Data;
  }
  bVar2 = FToBoolHelper::FromCStringWide(pwVar6);
  return bVar2;
}

// PreInitBindViewModel @ 14bd16bc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall UDS_M_ItemGem_GemSocket::PreInitBindViewModel(UDS_M_ItemGem_GemSocket *this)

{
  undefined8 uVar1;
  code *pcVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  UClass *pUVar7;
  UDS_ModelBase *pUVar8;
  UObject *pUVar9;
  FName FVar10;
  FString *pFVar11;
  longlong *plVar12;
  wchar_t *_Str;
  wchar_t *_Str_00;
  undefined1 auStackY_f8 [32];
  UDS_ModelBase *local_c8;
  undefined1 local_c0 [8];
  undefined1 local_b8 [16];
  undefined1 local_a8 [128];
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  FObjectInitializer::AssertIfInConstructor
            ((UObject *)this,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar7 = Z_Construct_UClass_UDS_M_GemSocketStatus_NoRegister();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_a8,pUVar7);
  local_a8._8_8_ = this;
  pUVar8 = (UDS_ModelBase *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_a8);
  if (local_a8._64_8_ != 0) {
    plVar12 = (longlong *)(local_a8 + 0x50);
    if ((longlong *)local_a8._104_8_ != (longlong *)0x0) {
      plVar12 = (longlong *)local_a8._104_8_;
    }
    (**(code **)(*plVar12 + 0x10))();
  }
  UDS_ModelBase::AddChildModelInternal((UDS_ModelBase *)this,pUVar8);
  local_c8 = pUVar8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar8 != (UDS_ModelBase *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar8);
  }
  FWeakObjectPtr::operator=(&(this->GemStatusModel).WeakPtr,(FObjectPtr)&local_c8);
  bVar3 = TWeakObjectPtr<UDS_M_GemSocketStatus,FWeakObjectPtr>::UEOpEquals
                    (&this->GemStatusModel,(void *)0x0);
  if (bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9078076213808857057>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemGem_GemSocket.cpp"
                       ,0x1f,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else {
    pUVar9 = FWeakObjectPtr::Get(&(this->GemStatusModel).WeakPtr);
    *(undefined4 *)&pUVar9[9].field_0x20 = 0x1c3;
    pUVar9 = FWeakObjectPtr::Get(&(this->GemStatusModel).WeakPtr);
    plVar12 = &this->_padding_;
    FVar10 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemGemSocketSlotData>
                       ((FDS_DataContainer *)plVar12,(EDS_ItemGemSocketSlotData)local_c0);
    uVar1 = *(undefined8 *)FVar10;
    uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
    pFVar11 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              ::FindOrAddImpl<FName>
                        ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                          *)plVar12,uVar4 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar10);
    _Str_00 = L"";
    if ((pFVar11->Data).ArrayNum == 0) {
      _Str = L"";
    }
    else {
      _Str = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    }
    iVar5 = _wtoi(_Str);
    FVar10 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemGemSocketSlotData>
                       ((FDS_DataContainer *)plVar12,(EDS_ItemGemSocketSlotData)local_b8);
    uVar1 = *(undefined8 *)FVar10;
    uVar4 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
    pFVar11 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
              ::FindOrAddImpl<FName>
                        ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                          *)plVar12,uVar4 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar10);
    if ((pFVar11->Data).ArrayNum != 0) {
      _Str_00 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    }
    iVar6 = _wtoi(_Str_00);
    *(int *)&pUVar9[10].field_0x1c = iVar5;
    *(int *)&pUVar9[10].field_0x18 = iVar6;
  }
  return;
}

// SetGemTID @ 14bd1fad0

void __thiscall UDS_M_ItemGem_GemSocket::SetGemTID(UDS_M_ItemGem_GemSocket *this,int param_1)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TObjectPtr<UObject> *pTVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  int local_res8 [2];
  FWeakObjectPtr local_res18;
  FWeakObjectPtr local_res20;
  UObject *local_28;
  UObject *local_20;
  
  FDS_DataContainer::SetData<int,enum_EDS_ItemGemSocketSlotData>
            ((FDS_DataContainer *)&this->_padding_,GemItemTID,param_1);
  local_res8[0] = 4;
  pTVar4 = TMapBase<int,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UObject>,0>_>
           ::FindOrAddImpl<int_const_&>
                     ((TMapBase<int,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UObject>,0>_>
                       *)&this->_padding_,4,local_res8);
  pUVar5 = (pTVar4->field0_0x0).DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar5 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_28 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_28);
  pUVar5 = FWeakObjectPtr::Get(&local_res20);
  if (pUVar5 != (UObject *)0x0) {
    pUVar6 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) goto LAB_14bd1fbab;
  }
  pUVar5 = (UObject *)0x0;
LAB_14bd1fbab:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_20 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_20);
  bVar3 = FWeakObjectPtr::IsValid(&local_res18);
  if (bVar3) {
    pUVar5 = FWeakObjectPtr::Get(&local_res18);
    (**(code **)(*(longlong *)pUVar5 + 0x348))(pUVar5,param_1);
    *(undefined1 *)&this->_padding_ = 1;
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9078076213808857019>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemGem_GemSocket.cpp"
                       ,0x45,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

// SetSelected @ 14bd20d80

void __thiscall UDS_M_ItemGem_GemSocket::SetSelected(UDS_M_ItemGem_GemSocket *this,int param_1)

{
  undefined8 uVar1;
  FScriptContainerElement *pFVar2;
  uint uVar3;
  int iVar4;
  FName FVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  undefined1 local_res8 [8];
  FString local_28;
  
  FVar5 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemGemSocketSlotData>
                    ((FDS_DataContainer *)&this->_padding_,(EDS_ItemGemSocketSlotData)local_res8);
  uVar1 = *(undefined8 *)FVar5;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar6 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&this->_padding_,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar5);
  if ((pFVar6->Data).ArrayNum == 0) {
    pwVar7 = L"";
  }
  else {
    pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
  }
  iVar4 = _wtoi(pwVar7);
  pwVar7 = L"true";
  if (param_1 != iVar4) {
    pwVar7 = L"false";
  }
  ::FString::FString(&local_28,pwVar7);
  FVar5 = FDS_DataContainer::TransformIndexToName<enum_EDS_ItemGemSocketSlotData>
                    ((FDS_DataContainer *)&this->_padding_,(EDS_ItemGemSocketSlotData)local_res8);
  uVar1 = *(undefined8 *)FVar5;
  uVar3 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar6 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&this->_padding_,uVar3 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar5);
  if (pFVar6 != &local_28) {
    pFVar2 = (pFVar6->Data).AllocatorInstance.Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (pFVar6->Data).AllocatorInstance.Data = local_28.Data.AllocatorInstance.Data;
    local_28.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pFVar6->Data).ArrayNum = local_28.Data.ArrayNum;
    (pFVar6->Data).ArrayMax = local_28.Data.ArrayMax;
    local_28.Data.ArrayNum = 0;
    local_28.Data.ArrayMax = 0;
  }
  if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  *(undefined1 *)&this->_padding_ = 1;
  return;
}

// UpdateView @ 14bd2a8b0

void __thiscall
UDS_M_ItemGem_GemSocket::UpdateView
          (UDS_M_ItemGem_GemSocket *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1,
          bool param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  TObjectPtr<UObject> *pTVar4;
  UObject *pUVar5;
  UClass *pUVar6;
  int local_res8 [2];
  FWeakObjectPtr local_res20;
  FWeakObjectPtr local_38;
  FWeakObjectPtr local_30;
  UObject *local_28;
  UObject *local_20;
  undefined8 local_18 [2];
  
  UDS_ModelBase::UpdateView((UDS_ModelBase *)this,param_1,false);
  local_res8[0] = 4;
  pTVar4 = TMapBase<int,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UObject>,0>_>
           ::FindOrAddImpl<int_const_&>
                     ((TMapBase<int,TObjectPtr<UObject>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,TObjectPtr<UObject>,0>_>
                       *)&this->_padding_,4,local_res8);
  pUVar5 = (pTVar4->field0_0x0).DebugPtr;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    if (pUVar5 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar5);
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
      UE::GC::MarkAsReachable(pUVar5);
    }
  }
  local_38.ObjectIndex = 0;
  local_38.ObjectSerialNumber = 0;
  local_28 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_38,(FObjectPtr)&local_28);
  pUVar5 = FWeakObjectPtr::Get(&local_38);
  if (pUVar5 != (UObject *)0x0) {
    pUVar6 = Z_Construct_UClass_UDS_M_ItemImplBase_NoRegister();
    iVar1 = (int)pUVar6->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar5->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar5->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar6->_padding_)) goto LAB_14bd2a981;
  }
  pUVar5 = (UObject *)0x0;
LAB_14bd2a981:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  local_res20.ObjectIndex = 0;
  local_res20.ObjectSerialNumber = 0;
  local_20 = pUVar5;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar5 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar5);
  }
  FWeakObjectPtr::operator=(&local_res20,(FObjectPtr)&local_20);
  bVar3 = FWeakObjectPtr::IsValid(&local_res20);
  if (bVar3) {
    pUVar5 = FWeakObjectPtr::Get(&local_res20);
    local_18[0] = 0;
    local_30.ObjectIndex = 0;
    local_30.ObjectSerialNumber = 0;
    pcVar2 = *(code **)(*(longlong *)pUVar5 + 0x2e0);
    FWeakObjectPtr::operator=(&local_30,(FObjectPtr)local_18);
    (*pcVar2)(pUVar5,local_30,0);
  }
  else {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_9078076213808857046>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\Model\\DS_M_ItemGem_GemSocket.cpp"
                       ,0x2a,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  return;
}

