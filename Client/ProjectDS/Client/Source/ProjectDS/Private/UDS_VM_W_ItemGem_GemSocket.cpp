// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 22

// SetEventClickedSlot_WrapperImpl @ 14b73e590

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
UDS_VM_W_ItemGem_GemSocket::SetEventClickedSlot_WrapperImpl(void *param_1,void *param_2)

{
  UObject *pUVar1;
  UDS_ModelBase *this;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  longlong *plVar6;
  undefined1 auStackY_e8 [32];
  FWeakObjectPtr FStack_b8;
  FWeakObjectPtr FStack_b0;
  UObject *pUStack_a8;
  UObject *pUStack_a0;
  undefined1 auStack_98 [128];
  ulonglong uStack_18;
  
  uStack_18 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  if (*(longlong *)((longlong)param_1 + 0xa0) == 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4403586189987151942>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_W_ItemGem_GemSocket.cpp"
                       ,0x46,"false");
    if (!bVar3) {
      return;
    }
  }
  else {
    pUVar4 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar4,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar5 = Z_Construct_UClass_UDS_ModelEventGemSocketSlot_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)auStack_98,pUVar5);
    auStack_98._8_8_ = pUVar4;
    pUVar4 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)auStack_98);
    if (auStack_98._64_8_ != 0) {
      plVar6 = (longlong *)(auStack_98 + 0x50);
      if ((longlong *)auStack_98._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)auStack_98._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar4 != (UObject *)0x0) goto LAB_14be2dc8a;
    }
    else if (pUVar4 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar4);
LAB_14be2dc8a:
      pUVar1 = *(UObject **)((longlong)param_1 + 0xa0);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar1 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar1);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar1);
        }
      }
      FStack_b8.ObjectIndex = 0;
      FStack_b8.ObjectSerialNumber = 0;
      pUStack_a8 = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar1);
      }
      FWeakObjectPtr::operator=(&FStack_b8,(FObjectPtr)&pUStack_a8);
      *(int *)&pUVar4[1].field_0x0 = FStack_b8.ObjectIndex;
      *(int *)&pUVar4[1].field_0x4 = FStack_b8.ObjectSerialNumber;
      pUVar4[5].field_0x8 = 0;
      this = *(UDS_ModelBase **)((longlong)param_1 + 0xa0);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (UE::GC::MarkAsReachable(pUVar4), UE::GC::GIsIncrementalReachabilityPending != false)) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      FStack_b0.ObjectIndex = 0;
      FStack_b0.ObjectSerialNumber = 0;
      pUStack_a0 = pUVar4;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      FWeakObjectPtr::operator=(&FStack_b0,(FObjectPtr)&pUStack_a0);
      UDS_ModelBase::UpdateModel(this,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)FStack_b0);
      return;
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4403586189987151945>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_W_ItemGem_GemSocket.cpp"
                       ,0x49,"false");
    if (!bVar3) {
      return;
    }
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// StaticClass @ 14b73e5a0

UClass * __cdecl UDS_VM_W_ItemGem_GemSocket::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_ItemGem_GemSocket.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_ItemGem_GemSocket",
               &Z_Registration_Info_UClass_UDS_VM_W_ItemGem_GemSocket.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_ItemGem_GemSocket,0xe0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_W_ItemGem_GemSocket>,
               InternalVTableHelperCtorCaller<UDS_VM_W_ItemGem_GemSocket>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_ItemGem_GemSocket.InnerSingleton;
}

// UDS_VM_W_ItemGem_GemSocket @ 14b741b10

UDS_VM_W_ItemGem_GemSocket * __thiscall
UDS_VM_W_ItemGem_GemSocket::UDS_VM_W_ItemGem_GemSocket
          (UDS_VM_W_ItemGem_GemSocket *this,FVTableHelper *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_ItemGem_GemSocket__6B_;
  *(undefined8 *)&(this->EventClickedSlot).Delegate = 0;
  *(undefined8 *)&(this->EventClickedSlot).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->EventClickedSlot).Delegate.field_0x10 = 0;
  (this->EventClickedSlot)._padding_ = '\0';
  (this->EventClickedSlot).bIsCustomSelected = false;
  (this->EventClickedSlot).bIsLacked = false;
  (this->EventClickedSlot).bIsCustomDisabled = false;
  return this;
}

// UDS_VM_W_ItemGem_GemSocket @ 14b741b70

UDS_VM_W_ItemGem_GemSocket * __thiscall
UDS_VM_W_ItemGem_GemSocket::UDS_VM_W_ItemGem_GemSocket
          (UDS_VM_W_ItemGem_GemSocket *this,FObjectInitializer *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_ItemGem_GemSocket__6B_;
  *(undefined8 *)&(this->EventClickedSlot).Delegate = 0;
  *(undefined8 *)&(this->EventClickedSlot).Delegate.field_0x8 = 0;
  *(undefined4 *)&(this->EventClickedSlot).Delegate.field_0x10 = 0;
  (this->EventClickedSlot)._padding_ = '\0';
  (this->EventClickedSlot).bIsCustomSelected = false;
  (this->EventClickedSlot).bIsLacked = false;
  (this->EventClickedSlot).bIsCustomDisabled = false;
  return this;
}

// ~UDS_VM_W_ItemGem_GemSocket @ 14b742f40

void __thiscall
UDS_VM_W_ItemGem_GemSocket::~UDS_VM_W_ItemGem_GemSocket(UDS_VM_W_ItemGem_GemSocket *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  this->_padding_ = (longlong)&___7UDS_VM_W_ItemGem_GemSocket__6B_;
  TDelegateBase<FNotThreadSafeDelegateMode>::Unbind
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(this->EventClickedSlot).Delegate);
  pvVar1 = *(void **)&(this->EventClickedSlot).Delegate.field_0x8;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&(this->EventClickedSlot).Delegate);
  UDS_VM_ModelBase::~UDS_VM_ModelBase((UDS_VM_ModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b744ea0

IClassDescriptor * __thiscall
UDS_VM_W_ItemGem_GemSocket::GetFieldNotificationDescriptor(UDS_VM_W_ItemGem_GemSocket *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_W_ItemGem_GemSocket::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b745740

UClass * __cdecl UDS_VM_W_ItemGem_GemSocket::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_W_ItemGem_GemSocket.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_W_ItemGem_GemSocket",
               &Z_Registration_Info_UClass_UDS_VM_W_ItemGem_GemSocket.InnerSingleton,
               StaticRegisterNativesUDS_VM_W_ItemGem_GemSocket,0xe0,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UDS_VM_W_ItemGem_GemSocket>,
               InternalVTableHelperCtorCaller<UDS_VM_W_ItemGem_GemSocket>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_W_ItemGem_GemSocket.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_W_ItemGem_GemSocket @ 14b745d40

void __cdecl UDS_VM_W_ItemGem_GemSocket::StaticRegisterNativesUDS_VM_W_ItemGem_GemSocket(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_W_ItemGem_GemSocket_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execBonusGemColor @ 14b746d40

void __cdecl
UDS_VM_W_ItemGem_GemSocket::execBonusGemColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FColor FVar1;
  undefined4 extraout_var;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar1 = BonusGemColor((UDS_VM_W_ItemGem_GemSocket *)param_1);
  *(undefined4 *)param_3 = *(undefined4 *)CONCAT44(extraout_var,FVar1.field0_0x0);
  return;
}

// execGemSocketName @ 14b746e80

void __cdecl
UDS_VM_W_ItemGem_GemSocket::execGemSocketName(UObject *param_1,FFrame *param_2,void *param_3)

{
  FDS_Text *pFVar1;
  FDS_Text local_58;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = GemSocketName((UDS_VM_W_ItemGem_GemSocket *)param_1,&local_58);
  FDS_Text::operator=(param_3,pFVar1);
  DestructItems<FDS_TextFormatArg,int>
            ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data,
             local_58.FormatArgs.ArrayNum);
  if ((FDS_TextFormatArg *)local_58.FormatArgs.AllocatorInstance.Data != (FDS_TextFormatArg *)0x0) {
    FMemory::Free(local_58.FormatArgs.AllocatorInstance.Data);
  }
  if (local_58.UniqueString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.UniqueString.Data.AllocatorInstance.Data);
  }
  return;
}

// execGemSocketStatus @ 14b746ef0

void __cdecl
UDS_VM_W_ItemGem_GemSocket::execGemSocketStatus(UObject *param_1,FFrame *param_2,void *param_3)

{
  FText *pFVar1;
  FText local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = GemSocketStatus((UDS_VM_W_ItemGem_GemSocket *)param_1,&local_18);
  FText::operator=(param_3,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execIsActivated @ 14b747140

void __cdecl
UDS_VM_W_ItemGem_GemSocket::execIsActivated(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsActivated((UDS_VM_W_ItemGem_GemSocket *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execIsSelected @ 14b7472c0

void __cdecl
UDS_VM_W_ItemGem_GemSocket::execIsSelected(UObject *param_1,FFrame *param_2,void *param_3)

{
  bool bVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar1 = IsSelected((UDS_VM_W_ItemGem_GemSocket *)param_1);
  *(bool *)param_3 = bVar1;
  return;
}

// execSocketGemColor @ 14b747b00

void __cdecl
UDS_VM_W_ItemGem_GemSocket::execSocketGemColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FColor FVar1;
  undefined4 extraout_var;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FVar1 = SocketGemColor((UDS_VM_W_ItemGem_GemSocket *)param_1);
  *(undefined4 *)param_3 = *(undefined4 *)CONCAT44(extraout_var,FVar1.field0_0x0);
  return;
}

// BonusGemColor @ 14be13ae0

FColor __thiscall UDS_VM_W_ItemGem_GemSocket::BonusGemColor(UDS_VM_W_ItemGem_GemSocket *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FColor_u_0 FVar4;
  UClass *pUVar5;
  UDS_M_ItemGem_GemSocket *this_00;
  undefined4 *in_RDX;
  UObject *pUVar6;
  FWeakObjectPtr local_res8;
  UObject *local_res18 [2];
  
  pUVar6 = (UObject *)this->_padding_;
  if (pUVar6 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_M_ItemGem_GemSocket_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14be13b1e;
  }
  pUVar6 = (UObject *)0x0;
LAB_14be13b1e:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  bVar3 = FWeakObjectPtr::IsValid(&local_res8);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4403586189987151904>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_W_ItemGem_GemSocket.cpp"
                       ,0x20,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4.Bits = (*pcVar2)();
      return (FColor_u_0)(FColor_u_0)FVar4._s_0;
    }
    *in_RDX = 0;
    return (FColor)SUB84(in_RDX,0);
  }
  this_00 = (UDS_M_ItemGem_GemSocket *)FWeakObjectPtr::Get(&local_res8);
  UDS_M_ItemGem_GemSocket::GetBonusGemColor(this_00);
  return (FColor)SUB84(in_RDX,0);
}

// GemSocketName @ 14be200e0

FDS_Text * __thiscall
UDS_VM_W_ItemGem_GemSocket::GemSocketName
          (UDS_VM_W_ItemGem_GemSocket *this,FDS_Text *__return_storage_ptr__)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UClass *pUVar4;
  FDS_Text *pFVar5;
  UDS_M_ItemGem_GemSocket *this_00;
  UObject *pUVar6;
  FWeakObjectPtr local_res8;
  UObject *local_res18;
  
  pUVar6 = (UObject *)this->_padding_;
  if (pUVar6 != (UObject *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_M_ItemGem_GemSocket_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) goto LAB_14be20126;
  }
  pUVar6 = (UObject *)0x0;
LAB_14be20126:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18 = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)&local_res18);
  bVar3 = FWeakObjectPtr::IsValid(&local_res8);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4403586189987151912>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_W_ItemGem_GemSocket.cpp"
                       ,0x28,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FDS_Text *)(*pcVar2)();
      return pFVar5;
    }
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
    return __return_storage_ptr__;
  }
  this_00 = (UDS_M_ItemGem_GemSocket *)FWeakObjectPtr::Get(&local_res8);
  UDS_M_ItemGem_GemSocket::GetSocketName(this_00,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GemSocketStatus @ 14be20220

FText * __thiscall
UDS_VM_W_ItemGem_GemSocket::GemSocketStatus
          (UDS_VM_W_ItemGem_GemSocket *this,FText *__return_storage_ptr__)

{
  int iVar1;
  ITextData *pIVar2;
  code *pcVar3;
  bool bVar4;
  UClass *pUVar5;
  FText *pFVar6;
  UDS_M_ItemGem_GemSocket *this_00;
  UObject *pUVar7;
  undefined1 local_res8 [8];
  FWeakObjectPtr local_res18;
  UObject *local_res20;
  
  pUVar7 = (UObject *)this->_padding_;
  if (pUVar7 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_M_ItemGem_GemSocket_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar7->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar7->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14be2025e;
  }
  pUVar7 = (UObject *)0x0;
LAB_14be2025e:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  local_res18.ObjectIndex = 0;
  local_res18.ObjectSerialNumber = 0;
  local_res20 = pUVar7;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar7 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar7);
  }
  FWeakObjectPtr::operator=(&local_res18,(FObjectPtr)&local_res20);
  bVar4 = FWeakObjectPtr::IsValid(&local_res18);
  if (!bVar4) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4403586189987151920>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_W_ItemGem_GemSocket.cpp"
                       ,0x30,"false");
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      pFVar6 = (FText *)(*pcVar3)();
      return pFVar6;
    }
    pFVar6 = FText::GetEmpty();
    (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
    pIVar2 = (pFVar6->TextData).Reference;
    (__return_storage_ptr__->TextData).Reference = pIVar2;
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
    }
    __return_storage_ptr__->Flags = pFVar6->Flags;
    return __return_storage_ptr__;
  }
  this_00 = (UDS_M_ItemGem_GemSocket *)FWeakObjectPtr::Get(&local_res18);
  UDS_M_ItemGem_GemSocket::GetSocketStatus(this_00,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// IsActivated @ 14be25fc0

bool __thiscall UDS_VM_W_ItemGem_GemSocket::IsActivated(UDS_VM_W_ItemGem_GemSocket *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UClass *pUVar5;
  UDS_M_ItemGem_GemSocket *this_00;
  UObject *pUVar6;
  FWeakObjectPtr local_res8;
  UObject *local_res10 [3];
  
  pUVar6 = (UObject *)this->_padding_;
  if (pUVar6 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_M_ItemGem_GemSocket_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14be25ff7;
  }
  pUVar6 = (UObject *)0x0;
LAB_14be25ff7:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  bVar3 = FWeakObjectPtr::IsValid(&local_res8);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4403586189987151935>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_W_ItemGem_GemSocket.cpp"
                       ,0x3f,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    return false;
  }
  this_00 = (UDS_M_ItemGem_GemSocket *)FWeakObjectPtr::Get(&local_res8);
  bVar3 = UDS_M_ItemGem_GemSocket::IsActivated(this_00);
  return bVar3;
}

// IsSelected @ 14be27460

bool __thiscall UDS_VM_W_ItemGem_GemSocket::IsSelected(UDS_VM_W_ItemGem_GemSocket *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  UClass *pUVar5;
  UDS_M_ItemGem_GemSocket *this_00;
  UObject *pUVar6;
  FWeakObjectPtr local_res8;
  UObject *local_res10 [3];
  
  pUVar6 = (UObject *)this->_padding_;
  if (pUVar6 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_M_ItemGem_GemSocket_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14be27497;
  }
  pUVar6 = (UObject *)0x0;
LAB_14be27497:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res10[0] = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res10);
  bVar3 = FWeakObjectPtr::IsValid(&local_res8);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4403586189987151928>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_W_ItemGem_GemSocket.cpp"
                       ,0x38,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      uVar4 = (*pcVar2)();
      return (bool)uVar4;
    }
    return false;
  }
  this_00 = (UDS_M_ItemGem_GemSocket *)FWeakObjectPtr::Get(&local_res8);
  bVar3 = UDS_M_ItemGem_GemSocket::IsSelected(this_00);
  return bVar3;
}

// OnEventClickedSlot @ 14be2dba0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __thiscall
UDS_VM_W_ItemGem_GemSocket::OnEventClickedSlot
          (UDS_VM_W_ItemGem_GemSocket *this,FDS_ButtonEventField *param_1)

{
  UObject *pUVar1;
  UDS_ModelBase *this_00;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  UClass *pUVar5;
  longlong *plVar6;
  undefined1 auStackY_e8 [32];
  FWeakObjectPtr local_b8;
  FWeakObjectPtr local_b0;
  UObject *local_a8;
  UObject *local_a0;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_e8;
  if (this->_padding_ == 0) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4403586189987151942>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_W_ItemGem_GemSocket.cpp"
                       ,0x46,"false");
    if (!bVar3) {
      return;
    }
  }
  else {
    pUVar4 = GetTransientPackageAsObject();
    FObjectInitializer::AssertIfInConstructor
              (pUVar4,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
    pUVar5 = Z_Construct_UClass_UDS_ModelEventGemSocketSlot_NoRegister();
    FStaticConstructObjectParameters::FStaticConstructObjectParameters
              ((FStaticConstructObjectParameters *)local_98,pUVar5);
    local_98._8_8_ = pUVar4;
    pUVar4 = StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
    if (local_98._64_8_ != 0) {
      plVar6 = (longlong *)(local_98 + 0x50);
      if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
        plVar6 = (longlong *)local_98._104_8_;
      }
      (**(code **)(*plVar6 + 0x10))();
    }
    if (UE::GC::GIsIncrementalReachabilityPending == false) {
      if (pUVar4 != (UObject *)0x0) goto LAB_14be2dc8a;
    }
    else if (pUVar4 != (UObject *)0x0) {
      UE::GC::MarkAsReachable(pUVar4);
LAB_14be2dc8a:
      pUVar1 = (UObject *)this->_padding_;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        if (pUVar1 != (UObject *)0x0) {
          UE::GC::MarkAsReachable(pUVar1);
        }
        if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(pUVar1);
        }
      }
      local_b8.ObjectIndex = 0;
      local_b8.ObjectSerialNumber = 0;
      local_a8 = pUVar1;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar1 != (UObject *)0x0)) {
        UE::GC::MarkAsReachable(pUVar1);
      }
      FWeakObjectPtr::operator=(&local_b8,(FObjectPtr)&local_a8);
      *(int *)&pUVar4[1].field_0x0 = local_b8.ObjectIndex;
      *(int *)&pUVar4[1].field_0x4 = local_b8.ObjectSerialNumber;
      pUVar4[5].field_0x8 = 0;
      this_00 = (UDS_ModelBase *)this->_padding_;
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (UE::GC::MarkAsReachable(pUVar4), UE::GC::GIsIncrementalReachabilityPending != false)) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      local_b0.ObjectIndex = 0;
      local_b0.ObjectSerialNumber = 0;
      local_a0 = pUVar4;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar4);
      }
      FWeakObjectPtr::operator=(&local_b0,(FObjectPtr)&local_a0);
      UDS_ModelBase::UpdateModel
                (this_00,(TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr>)local_b0);
      return;
    }
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4403586189987151945>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_W_ItemGem_GemSocket.cpp"
                       ,0x49,"false");
    if (!bVar3) {
      return;
    }
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// SocketGemColor @ 14be53640

FColor __thiscall UDS_VM_W_ItemGem_GemSocket::SocketGemColor(UDS_VM_W_ItemGem_GemSocket *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  FColor_u_0 FVar4;
  UClass *pUVar5;
  UDS_M_ItemGem_GemSocket *this_00;
  undefined4 *in_RDX;
  UObject *pUVar6;
  FWeakObjectPtr local_res8;
  UObject *local_res18 [2];
  
  pUVar6 = (UObject *)this->_padding_;
  if (pUVar6 != (UObject *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_M_ItemGem_GemSocket_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar6->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar6->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar5->_padding_)) goto LAB_14be5367e;
  }
  pUVar6 = (UObject *)0x0;
LAB_14be5367e:
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  local_res8.ObjectIndex = 0;
  local_res8.ObjectSerialNumber = 0;
  local_res18[0] = pUVar6;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(pUVar6);
  }
  FWeakObjectPtr::operator=(&local_res8,(FObjectPtr)local_res18);
  bVar3 = FWeakObjectPtr::IsValid(&local_res8);
  if (!bVar3) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<4403586189987151896>,false,
                       "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\DS_VM_W_ItemGem_GemSocket.cpp"
                       ,0x18,"false");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      FVar4.Bits = (*pcVar2)();
      return (FColor_u_0)(FColor_u_0)FVar4._s_0;
    }
    *in_RDX = 0;
    return (FColor)SUB84(in_RDX,0);
  }
  this_00 = (UDS_M_ItemGem_GemSocket *)FWeakObjectPtr::Get(&local_res8);
  UDS_M_ItemGem_GemSocket::GetSocketGemColor(this_00);
  return (FColor)SUB84(in_RDX,0);
}

// UpdateView @ 14be5ac20

void __thiscall
UDS_VM_W_ItemGem_GemSocket::UpdateView
          (UDS_VM_W_ItemGem_GemSocket *this,
          TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  longlong *plVar1;
  FName local_18;
  int local_10;
  
  plVar1 = &this->_padding_;
  local_10 = FFieldNotificationClassDescriptor::SocketGemColor.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::SocketGemColor.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::BonusGemColor.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::BonusGemColor.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::GemSocketName.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::GemSocketName.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::GemSocketStatus.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::GemSocketStatus.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::IsSelected.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsSelected.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::IsActivated.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::IsActivated.FieldName;
  (**(code **)(*plVar1 + 0x38))(plVar1,&local_18);
  return;
}

