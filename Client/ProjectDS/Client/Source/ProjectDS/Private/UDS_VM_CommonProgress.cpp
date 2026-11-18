// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 14

// StaticClass @ 14b61d590

UClass * __cdecl UDS_VM_CommonProgress::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_CommonProgress.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_CommonProgress",
               &Z_Registration_Info_UClass_UDS_VM_CommonProgress.InnerSingleton,
               StaticRegisterNativesUDS_VM_CommonProgress,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_CommonProgress>,
               InternalVTableHelperCtorCaller<UDS_VM_CommonProgress>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_CommonProgress.InnerSingleton;
}

// UDS_VM_CommonProgress @ 14b620df0

UDS_VM_CommonProgress * __thiscall
UDS_VM_CommonProgress::UDS_VM_CommonProgress(UDS_VM_CommonProgress *this,FVTableHelper *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_CommonProgress__6B_;
  return this;
}

// UDS_VM_CommonProgress @ 14b620e30

UDS_VM_CommonProgress * __thiscall
UDS_VM_CommonProgress::UDS_VM_CommonProgress
          (UDS_VM_CommonProgress *this,FObjectInitializer *param_1)

{
  UDS_VM_ModelBase::UDS_VM_ModelBase((UDS_VM_ModelBase *)this,param_1);
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_CommonProgress__6B_;
  return this;
}

// ~UDS_VM_CommonProgress @ 14b621c50

void __thiscall UDS_VM_CommonProgress::~UDS_VM_CommonProgress(UDS_VM_CommonProgress *this)

{
  *(undefined ***)this = &_vftable__for__UObject__;
  *(undefined ***)&this->field_0x28 = &_vftable__for__INotifyFieldValueChanged__;
  *(undefined ***)&this->field_0x68 = &___7UDS_VM_CommonProgress__6B_;
  UDS_VM_ModelBase::~UDS_VM_ModelBase((UDS_VM_ModelBase *)this);
  return;
}

// GetFieldNotificationDescriptor @ 14b623c00

IClassDescriptor * __thiscall
UDS_VM_CommonProgress::GetFieldNotificationDescriptor(UDS_VM_CommonProgress *this)

{
  if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
              0x9d4c) < ::_TSS0) {
    _Init_thread_header(&::_TSS0);
    if (::_TSS0 == -1) {
      atexit(`UDS_VM_CommonProgress::FFieldNotificationClassDescriptor::GetDescriptor'::__l2::
             _dynamic_atexit_destructor_for__Instance__);
      _Init_thread_footer(&::_TSS0);
    }
  }
  return (IClassDescriptor *)&::Instance;
}

// GetPrivateStaticClass @ 14b624670

UClass * __cdecl UDS_VM_CommonProgress::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_VM_CommonProgress.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_VM_CommonProgress",
               &Z_Registration_Info_UClass_UDS_VM_CommonProgress.InnerSingleton,
               StaticRegisterNativesUDS_VM_CommonProgress,0xc0,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDS_VM_CommonProgress>,
               InternalVTableHelperCtorCaller<UDS_VM_CommonProgress>,local_res8,
               UDS_VM_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_VM_CommonProgress.InnerSingleton;
}

// StaticRegisterNativesUDS_VM_CommonProgress @ 14b624bd0

void __cdecl UDS_VM_CommonProgress::StaticRegisterNativesUDS_VM_CommonProgress(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 3;
  local_18.DataPtr = Z_Construct_UClass_UDS_VM_CommonProgress_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execProgressText @ 14b6259b0

void __cdecl UDS_VM_CommonProgress::execProgressText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FText *pFVar1;
  FText local_18;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = ProgressText((UDS_VM_CommonProgress *)param_1,&local_18);
  FText::operator=(param_3,pFVar1);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execProgressValue @ 14b625a00

void __cdecl
UDS_VM_CommonProgress::execProgressValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  fVar1 = ProgressValue((UDS_VM_CommonProgress *)param_1);
  *(float *)param_3 = fVar1;
  return;
}

// execVisibleProgressText @ 14b626030

void __cdecl
UDS_VM_CommonProgress::execVisibleProgressText(UObject *param_1,FFrame *param_2,void *param_3)

{
  ESlateVisibility EVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EVar1 = VisibleProgressText((UDS_VM_CommonProgress *)param_1);
  *(ESlateVisibility *)param_3 = EVar1;
  return;
}

// ProgressText @ 14bde21c0

FText * __thiscall
UDS_VM_CommonProgress::ProgressText(UDS_VM_CommonProgress *this,FText *__return_storage_ptr__)

{
  int iVar1;
  UDS_M_CommonProgress *this_00;
  ITextData *pIVar2;
  UClass *pUVar3;
  FText *pFVar4;
  undefined1 local_res8 [8];
  
  this_00 = *(UDS_M_CommonProgress **)&this->field_0xa0;
  if (this_00 != (UDS_M_CommonProgress *)0x0) {
    pUVar3 = Z_Construct_UClass_UDS_M_CommonProgress_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      UDS_M_CommonProgress::GetProgressText(this_00,__return_storage_ptr__);
      return __return_storage_ptr__;
    }
  }
  pFVar4 = FText::GetEmpty();
  (__return_storage_ptr__->TextData).Reference = (ITextData *)0x0;
  pIVar2 = (pFVar4->TextData).Reference;
  (__return_storage_ptr__->TextData).Reference = pIVar2;
  if (pIVar2 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res8);
  }
  __return_storage_ptr__->Flags = pFVar4->Flags;
  return __return_storage_ptr__;
}

// ProgressValue @ 14bde2260

float __thiscall UDS_VM_CommonProgress::ProgressValue(UDS_VM_CommonProgress *this)

{
  int iVar1;
  UDS_M_CommonProgress *this_00;
  UClass *pUVar2;
  float fVar3;
  
  this_00 = *(UDS_M_CommonProgress **)&this->field_0xa0;
  if (this_00 != (UDS_M_CommonProgress *)0x0) {
    pUVar2 = Z_Construct_UClass_UDS_M_CommonProgress_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) {
      fVar3 = UDS_M_CommonProgress::GetProgressValue(this_00);
      return fVar3;
    }
  }
  return 0.0;
}

// UpdateView @ 14bdf9fa0

void __thiscall
UDS_VM_CommonProgress::UpdateView
          (UDS_VM_CommonProgress *this,TWeakObjectPtr<UDS_ModelEventBase,FWeakObjectPtr> param_1)

{
  undefined1 *puVar1;
  FName local_18;
  int local_10;
  
  puVar1 = &this->field_0x28;
  local_10 = FFieldNotificationClassDescriptor::VisibleProgressText.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::VisibleProgressText.FieldName;
  (**(code **)(*(longlong *)puVar1 + 0x38))(puVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::ProgressText.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ProgressText.FieldName;
  (**(code **)(*(longlong *)puVar1 + 0x38))(puVar1,&local_18);
  local_10 = FFieldNotificationClassDescriptor::ProgressValue.BitNumber;
  local_18 = FFieldNotificationClassDescriptor::ProgressValue.FieldName;
  (**(code **)(*(longlong *)puVar1 + 0x38))(puVar1,&local_18);
  return;
}

// VisibleProgressText @ 14bdfbe30

ESlateVisibility __thiscall UDS_VM_CommonProgress::VisibleProgressText(UDS_VM_CommonProgress *this)

{
  int iVar1;
  UDS_M_CommonProgress *this_00;
  bool bVar2;
  UClass *pUVar3;
  ESlateVisibility EVar4;
  
  this_00 = *(UDS_M_CommonProgress **)&this->field_0xa0;
  if (this_00 != (UDS_M_CommonProgress *)0x0) {
    pUVar3 = Z_Construct_UClass_UDS_M_CommonProgress_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(this_00->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this_00->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      bVar2 = UDS_M_CommonProgress::IsVisibleText(this_00);
      EVar4 = Collapsed;
      if (bVar2) {
        EVar4 = SelfHitTestInvisible;
      }
      return EVar4;
    }
  }
  return Collapsed;
}

