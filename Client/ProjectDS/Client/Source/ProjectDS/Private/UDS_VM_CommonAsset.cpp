// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 20

// StaticClass @ 14b61ae50

UClass * __cdecl UDS_VM_CommonAsset::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_CommonAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_CommonAsset",
               &Z_Registration_Info_UClass_UDS_VM_CommonAsset.InnerSingleton,
               StaticRegisterNativesUDS_VM_CommonAsset,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_CommonAsset>,
               InternalVTableHelperCtorCaller<UDS_VM_CommonAsset>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_CommonAsset.InnerSingleton;
}

// UDS_VM_CommonAsset @ 14b620270

UDS_VM_CommonAsset * __thiscall
UDS_VM_CommonAsset::UDS_VM_CommonAsset(UDS_VM_CommonAsset *this,FVTableHelper *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_CommonAsset__6B_;
  return this;
}

// UDS_VM_CommonAsset @ 14b6202b0

UDS_VM_CommonAsset * __thiscall
UDS_VM_CommonAsset::UDS_VM_CommonAsset(UDS_VM_CommonAsset *this,FObjectInitializer *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_CommonAsset__6B_;
  return this;
}

// ~UDS_VM_CommonAsset @ 14b621720

void __thiscall UDS_VM_CommonAsset::~UDS_VM_CommonAsset(UDS_VM_CommonAsset *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_CommonAsset__6B_;
  UDS_VM_ModelBase::~UDS_VM_ModelBase((UDS_VM_ModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b623960

IClassDescriptor * __thiscall
UDS_VM_CommonAsset::GetFieldNotificationDescriptor(UDS_VM_CommonAsset *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_CommonAsset::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b6241f0

UClass * __cdecl UDS_VM_CommonAsset::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_CommonAsset.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_CommonAsset",
               &Z_Registration_Info_UClass_UDS_VM_CommonAsset.InnerSingleton,
               StaticRegisterNativesUDS_VM_CommonAsset,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_CommonAsset>,
               InternalVTableHelperCtorCaller<UDS_VM_CommonAsset>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_CommonAsset.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_CommonAsset @ 14b624b10

void __cdecl UDS_VM_CommonAsset::StaticRegisterNativesUDS_VM_CommonAsset(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_CommonAsset_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execAssetIcon @ 14b625830

void __cdecl UDS_VM_CommonAsset::execAssetIcon(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = AssetIcon((UDS_VM_CommonAsset *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execAssetValue1 @ 14b625870

void __cdecl UDS_VM_CommonAsset::execAssetValue1(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = AssetValue1((UDS_VM_CommonAsset *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execAssetValue2 @ 14b6258b0

void __cdecl UDS_VM_CommonAsset::execAssetValue2(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = AssetValue2((UDS_VM_CommonAsset *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execTagStyleID @ 14b625a40

void __cdecl UDS_VM_CommonAsset::execTagStyleID(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  iVar1 = TagStyleID((UDS_VM_CommonAsset *)param_1);
  *(int *)param_3 = iVar1;
  return;
}

// execVisibleAssetIcon @ 14b625d70

void __cdecl
UDS_VM_CommonAsset::execVisibleAssetIcon(UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = VisibleAssetIcon((UDS_VM_CommonAsset *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// execVisibleAssetValue2 @ 14b625db0

void __cdecl
UDS_VM_CommonAsset::execVisibleAssetValue2(UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = VisibleAssetValue2((UDS_VM_CommonAsset *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// AssetIcon @ 14bdaec90

int __thiscall UDS_VM_CommonAsset::AssetIcon(UDS_VM_CommonAsset *this)

{
  UDS_M_CommonAsset *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UClass *pUVar4;
  
  this_00 = *(UDS_M_CommonAsset **)&this->field_0xa0;
  if (this_00 != (UDS_M_CommonAsset *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_M_CommonAsset_NoRegister();
    iVar3 = (int)pUVar4->_padding_;
    if ((iVar3 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar3 * 8)
        == &pUVar4->_padding_)) {
      iVar3 = UDS_M_CommonAsset::GetIcon(this_00);
      return iVar3;
    }
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<5909467621647974440>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Common\\DS_VM_CommonAsset.cpp"
                     ,0x28,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return 0;
}

// AssetValue1 @ 14bdaed10

int __thiscall UDS_VM_CommonAsset::AssetValue1(UDS_VM_CommonAsset *this)

{
  UDS_M_CommonAsset *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UClass *pUVar4;
  
  this_00 = *(UDS_M_CommonAsset **)&this->field_0xa0;
  if (this_00 != (UDS_M_CommonAsset *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_M_CommonAsset_NoRegister();
    iVar3 = (int)pUVar4->_padding_;
    if ((iVar3 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar3 * 8)
        == &pUVar4->_padding_)) {
      iVar3 = UDS_M_CommonAsset::GetValue1(this_00);
      return iVar3;
    }
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<5909467621647974448>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Common\\DS_VM_CommonAsset.cpp"
                     ,0x30,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return 0;
}

// AssetValue2 @ 14bdaed90

int __thiscall UDS_VM_CommonAsset::AssetValue2(UDS_VM_CommonAsset *this)

{
  UDS_M_CommonAsset *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  UClass *pUVar4;
  
  this_00 = *(UDS_M_CommonAsset **)&this->field_0xa0;
  if (this_00 != (UDS_M_CommonAsset *)0x0) {
    pUVar4 = Z_Construct_UClass_UDS_M_CommonAsset_NoRegister();
    iVar3 = (int)pUVar4->_padding_;
    if ((iVar3 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar3 * 8)
        == &pUVar4->_padding_)) {
      iVar3 = UDS_M_CommonAsset::GetValue2(this_00);
      return iVar3;
    }
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<5909467621647974456>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Common\\DS_VM_CommonAsset.cpp"
                     ,0x38,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return 0;
}

// TagStyleID @ 14bdea9e0

int __thiscall UDS_VM_CommonAsset::TagStyleID(UDS_VM_CommonAsset *this)

{
  UDS_M_CommonAsset *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  UClass *pUVar5;
  int iVar6;
  
  this_00 = *(UDS_M_CommonAsset **)&this->field_0xa0;
  if (this_00 != (UDS_M_CommonAsset *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_M_CommonAsset_NoRegister();
    iVar3 = (int)pUVar5->_padding_;
    if ((iVar3 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar3 * 8)
        == &pUVar5->_padding_)) {
      iVar3 = UDS_M_CommonAsset::GetValue1(this_00);
      iVar4 = UDS_M_CommonAsset::GetValue2(this_00);
      iVar6 = 0x836;
      if (iVar4 < iVar3) {
        iVar6 = 0x84a;
      }
      return iVar6;
    }
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<5909467621647974464>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Common\\DS_VM_CommonAsset.cpp"
                     ,0x40,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    iVar3 = (*pcVar1)();
    return iVar3;
  }
  return 0;
}

// UpdateView @ 14bdf9cb0

void __thiscall
UDS_VM_CommonAsset::UpdateView
          (UDS_VM_CommonAsset *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  undefined1 *puVar1;
  FName local_18;
  int local_10;
  
  puVar1 = &this->field_0x28;
  local_10 = FFieldNotificationClassDescriptor::VisibleAssetIcon.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibleAssetIcon.FieldName;
  (**(code **)(*(longlong *)puVar1 + 0x38))(puVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::VisibleAssetValue2.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibleAssetValue2.FieldName;
  (**(code **)(*(longlong *)puVar1 + 0x38))(puVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::AssetIcon.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::AssetIcon.FieldName;
  (**(code **)(*(longlong *)puVar1 + 0x38))(puVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::AssetValue1.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::AssetValue1.FieldName;
  (**(code **)(*(longlong *)puVar1 + 0x38))(puVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::AssetValue2.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::AssetValue2.FieldName;
  (**(code **)(*(longlong *)puVar1 + 0x38))(puVar1,&local_18);
  return;
}

// VisibleAssetIcon @ 14bdfb4a0

ESlateVisibility __thiscall UDS_VM_CommonAsset::VisibleAssetIcon(UDS_VM_CommonAsset *this)

{
  UDS_M_CommonAsset *this_00;
  code *pcVar1;
  bool bVar2;
  ESlateVisibility EVar3;
  int iVar4;
  UClass *pUVar5;
  
  this_00 = *(UDS_M_CommonAsset **)&this->field_0xa0;
  if (this_00 != (UDS_M_CommonAsset *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_M_CommonAsset_NoRegister();
    iVar4 = (int)pUVar5->_padding_;
    if ((iVar4 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar4 * 8)
        == &pUVar5->_padding_)) {
      iVar4 = UDS_M_CommonAsset::GetIcon(this_00);
      EVar3 = Collapsed;
      if (0 < iVar4) {
        EVar3 = SelfHitTestInvisible;
      }
      return EVar3;
    }
  }
  bVar2 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<5909467621647974424>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Common\\DS_VM_CommonAsset.cpp"
                     ,0x18,"false");
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    EVar3 = (*pcVar1)();
    return EVar3;
  }
  return Collapsed;
}

// VisibleAssetValue2 @ 14bdfb530

ESlateVisibility __thiscall UDS_VM_CommonAsset::VisibleAssetValue2(UDS_VM_CommonAsset *this)

{
  int iVar1;
  UDS_M_CommonAsset *this_00;
  code *pcVar2;
  bool bVar3;
  ESlateVisibility EVar4;
  UClass *pUVar5;
  
  this_00 = *(UDS_M_CommonAsset **)&this->field_0xa0;
  if (this_00 != (UDS_M_CommonAsset *)0x0) {
    pUVar5 = Z_Construct_UClass_UDS_M_CommonAsset_NoRegister();
    iVar1 = (int)pUVar5->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar5->_padding_)) {
      bVar3 = UDS_M_CommonAsset::IsVisibleValue2(this_00);
      EVar4 = Collapsed;
      if (bVar3) {
        EVar4 = SelfHitTestInvisible;
      }
      return EVar4;
    }
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<5909467621647974432>,false,
                     "C:\\Workspace\\ProjectDS\\Client\\Source\\ProjectDS\\UI\\ViewModel\\Common\\DS_VM_CommonAsset.cpp"
                     ,0x20,"false");
  if (bVar3) {
    pcVar2 = (code *)swi(3);
    EVar4 = (*pcVar2)();
    return EVar4;
  }
  return Collapsed;
}

