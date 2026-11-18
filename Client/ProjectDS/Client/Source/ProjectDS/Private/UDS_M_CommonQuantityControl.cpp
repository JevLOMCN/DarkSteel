// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ProjectDS
// Functions: 10

// StaticClass @ 14b509ad0

UClass * __cdecl UDS_M_CommonQuantityControl::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_CommonQuantityControl.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_CommonQuantityControl",
               &Z_Registration_Info_UClass_UDS_M_CommonQuantityControl.InnerSingleton,
               StaticRegisterNativesUDS_M_CommonQuantityControl,0x1a8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_M_CommonQuantityControl>,
               InternalVTableHelperCtorCaller<UDS_M_CommonQuantityControl>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_CommonQuantityControl.InnerSingleton;
}

// UDS_M_CommonQuantityControl @ 14b510860

UDS_M_CommonQuantityControl * __thiscall
UDS_M_CommonQuantityControl::UDS_M_CommonQuantityControl
          (UDS_M_CommonQuantityControl *this,FVTableHelper *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  *(undefined ***)this = &___7UDS_M_CommonQuantityControl__6B_;
  return this;
}

// UDS_M_CommonQuantityControl @ 14b510890

UDS_M_CommonQuantityControl * __thiscall
UDS_M_CommonQuantityControl::UDS_M_CommonQuantityControl
          (UDS_M_CommonQuantityControl *this,FObjectInitializer *param_1)

{
  UDS_ModelBase::UDS_ModelBase((UDS_ModelBase *)this,param_1);
  *(undefined ***)this = &___7UDS_M_CommonQuantityControl__6B_;
  return this;
}

// ~UDS_M_CommonQuantityControl @ 14b512c10

void __thiscall
UDS_M_CommonQuantityControl::~UDS_M_CommonQuantityControl(UDS_M_CommonQuantityControl *this)

{
  *(undefined ***)this = &___7UDS_M_CommonQuantityControl__6B_;
  UDS_ModelBase::~UDS_ModelBase((UDS_ModelBase *)this);
  return;
}

// GetPrivateStaticClass @ 14b515480

UClass * __cdecl UDS_M_CommonQuantityControl::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDS_M_CommonQuantityControl.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ProjectDS",L"DS_M_CommonQuantityControl",
               &Z_Registration_Info_UClass_UDS_M_CommonQuantityControl.InnerSingleton,
               StaticRegisterNativesUDS_M_CommonQuantityControl,0x1a8,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UDS_M_CommonQuantityControl>,
               InternalVTableHelperCtorCaller<UDS_M_CommonQuantityControl>,local_res8,
               UDS_ModelBase::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDS_M_CommonQuantityControl.InnerSingleton;
}

// StaticRegisterNativesUDS_M_CommonQuantityControl @ 14b516bf0

void __cdecl UDS_M_CommonQuantityControl::StaticRegisterNativesUDS_M_CommonQuantityControl(void)

{
  return;
}

// GetQuantity @ 14bcf9d90

float __thiscall UDS_M_CommonQuantityControl::GetQuantity(UDS_M_CommonQuantityControl *this)

{
  undefined8 uVar1;
  uint uVar2;
  FName FVar3;
  FString *pFVar4;
  wchar_t *_Str;
  double dVar5;
  undefined1 local_res8 [8];
  
  FVar3 = FDS_DataContainer::TransformIndexToName<enum_EDS_CommonQuantityControlData>
                    ((FDS_DataContainer *)&this->field_0x40,
                     (EDS_CommonQuantityControlData)local_res8);
  uVar1 = *(undefined8 *)FVar3;
  uVar2 = ::GetTypeHash((FNameEntryId)(uint)uVar1);
  pFVar4 = TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
           ::FindOrAddImpl<FName>
                     ((TMapBase<FName,FString,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,FString,0>_>
                       *)&this->field_0x40,uVar2 + (int)((ulonglong)uVar1 >> 0x20),(FName *)FVar3);
  if ((pFVar4->Data).ArrayNum == 0) {
    _Str = L"";
  }
  else {
    _Str = (wchar_t *)(pFVar4->Data).AllocatorInstance.Data;
  }
  dVar5 = _wtof(_Str);
  return (float)dVar5;
}

// GetViewModelContext @ 14bcff720

TSharedPtr<FDS_ViewModelContext_ModelBase,1> * __thiscall
UDS_M_CommonQuantityControl::GetViewModelContext
          (UDS_M_CommonQuantityControl *this,
          TSharedPtr<FDS_ViewModelContext_ModelBase,1> *__return_storage_ptr__)

{
  *(undefined4 *)&this->field_0x188 = 0x15f;
  UDS_ModelBase::GetViewModelContext((UDS_ModelBase *)this,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// Init @ 14bd00d00

void __thiscall
UDS_M_CommonQuantityControl::Init
          (UDS_M_CommonQuantityControl *this,float param_1,float param_2,float param_3,float param_4
          ,FText *param_5)

{
  ITextData *pIVar1;
  FString *pFVar2;
  FString local_38 [3];
  
  FDS_DataContainer::SetData<float,enum_EDS_CommonQuantityControlData>
            ((FDS_DataContainer *)&this->field_0x40,MinValue,param_1);
  FDS_DataContainer::SetData<float,enum_EDS_CommonQuantityControlData>
            ((FDS_DataContainer *)&this->field_0x40,MaxValue,param_2);
  FDS_DataContainer::SetData<float,enum_EDS_CommonQuantityControlData>
            ((FDS_DataContainer *)&this->field_0x40,Quantity,param_3);
  FDS_DataContainer::SetData<float,enum_EDS_CommonQuantityControlData>
            ((FDS_DataContainer *)&this->field_0x40,StepQuantity,param_4);
  pFVar2 = FText::ToString(param_5);
  pFVar2 = ::FString::FString(local_38,pFVar2);
  FDS_DataContainer::SetData<FString,enum_EDS_CommonQuantityControlData>
            ((FDS_DataContainer *)&this->field_0x40,QuantityName,pFVar2);
  this->field_0xe0 = 1;
  pIVar1 = (param_5->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return;
}

// Set @ 14bd1d530

void __thiscall
UDS_M_CommonQuantityControl::Set
          (UDS_M_CommonQuantityControl *this,float param_1,float param_2,float param_3,float param_4
          ,FText *param_5)

{
  ITextData *pIVar1;
  FString *pFVar2;
  FString local_38 [3];
  
  FDS_DataContainer::SetData<float,enum_EDS_CommonQuantityControlData>
            ((FDS_DataContainer *)&this->field_0x40,MinValue,param_2);
  FDS_DataContainer::SetData<float,enum_EDS_CommonQuantityControlData>
            ((FDS_DataContainer *)&this->field_0x40,MaxValue,param_3);
  FDS_DataContainer::SetData<float,enum_EDS_CommonQuantityControlData>
            ((FDS_DataContainer *)&this->field_0x40,Quantity,param_1);
  FDS_DataContainer::SetData<float,enum_EDS_CommonQuantityControlData>
            ((FDS_DataContainer *)&this->field_0x40,StepQuantity,param_4);
  pFVar2 = FText::ToString(param_5);
  pFVar2 = ::FString::FString(local_38,pFVar2);
  FDS_DataContainer::SetData<FString,enum_EDS_CommonQuantityControlData>
            ((FDS_DataContainer *)&this->field_0x40,QuantityName,pFVar2);
  this->field_0xe0 = 1;
  pIVar1 = (param_5->TextData).Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  return;
}

