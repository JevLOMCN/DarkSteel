// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 9

// StaticStruct @ 142c884e0

UScriptStruct * __cdecl FSimpleWidgetConstructor::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSimpleWidgetConstructor.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_TypedElementFramework();
    Z_Registration_Info_UScriptStruct_FSimpleWidgetConstructor.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSimpleWidgetConstructor,(UObject *)pUVar1,
                         L"SimpleWidgetConstructor");
  }
  return Z_Registration_Info_UScriptStruct_FSimpleWidgetConstructor.OuterSingleton;
}

// CreateWidget @ 142c88520

TSharedPtr<SWidget,1> * __thiscall
FSimpleWidgetConstructor::CreateWidget
          (FSimpleWidgetConstructor *this,TSharedPtr<SWidget,1> *__return_storage_ptr__,
          ICoreProvider *param_1,IUiProvider *param_2,ulong64 param_3,ulong64 param_4,
          FMetaDataView *param_5)

{
  __return_storage_ptr__->Object = (SWidget *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// SetColumns @ 142c88540

bool __thiscall
FSimpleWidgetConstructor::SetColumns
          (FSimpleWidgetConstructor *this,ICoreProvider *param_1,ulong64 param_2)

{
  return true;
}

// CreateWidget @ 142c88550

TSharedPtr<SWidget,1> * __thiscall
FSimpleWidgetConstructor::CreateWidget
          (FSimpleWidgetConstructor *this,TSharedPtr<SWidget,1> *__return_storage_ptr__,
          FMetaDataView *param_1)

{
  __return_storage_ptr__->Object = (SWidget *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  return __return_storage_ptr__;
}

// FinalizeWidget @ 142c88570

bool __thiscall
FSimpleWidgetConstructor::FinalizeWidget
          (FSimpleWidgetConstructor *this,ICoreProvider *param_1,IUiProvider *param_2,
          ulong64 param_3,TSharedPtr<SWidget,1> *param_4)

{
  return true;
}

// Construct @ 142c88580

TSharedPtr<SWidget,1> * __thiscall
FSimpleWidgetConstructor::Construct
          (FSimpleWidgetConstructor *this,TSharedPtr<SWidget,1> *__return_storage_ptr__,
          ulong64 param_1,ICoreProvider *param_2,IUiProvider *param_3,FMetaDataView *param_4)

{
  code *pcVar1;
  UScriptStruct *pUVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  uVar4 = 0;
  pcVar1 = *(code **)((longlong)*param_2 + 0xf0);
  pUVar2 = FTypedElementRowReferenceColumn::StaticStruct();
  puVar3 = (undefined8 *)(*pcVar1)(param_2,param_1,pUVar2);
  if (puVar3 != (undefined8 *)0x0) {
    uVar4 = *puVar3;
  }
  (**(code **)(*(longlong *)this + 0x78))(this,param_2,param_1);
  (**(code **)(*(longlong *)this + 0x68))
            (this,__return_storage_ptr__,param_2,param_3,uVar4,param_1,param_4);
  if (__return_storage_ptr__->Object != (SWidget *)0x0) {
    FTypedElementWidgetConstructor::AddDefaultWidgetColumns
              ((FTypedElementWidgetConstructor *)this,param_1,param_2);
  }
  return __return_storage_ptr__;
}

// FSimpleWidgetConstructor @ 142c986f0

FSimpleWidgetConstructor * __thiscall
FSimpleWidgetConstructor::FSimpleWidgetConstructor
          (FSimpleWidgetConstructor *this,UScriptStruct *param_1)

{
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined4 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x44 = 0x80;
  *(undefined4 *)&this->field_0x4c = 0;
  *(undefined4 *)&this->field_0x48 = 0xffffffff;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined4 *)&this->field_0x60 = 0;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined8 *)&this->field_0x70 = 0;
  *(undefined ***)this = &___7FSimpleWidgetConstructor__6B_;
  *(UScriptStruct **)&this->field_0x78 = param_1;
  return this;
}

// FSimpleWidgetConstructor @ 142c98750

FSimpleWidgetConstructor * __thiscall
FSimpleWidgetConstructor::FSimpleWidgetConstructor(FSimpleWidgetConstructor *this)

{
  UScriptStruct *pUVar1;
  UPackage *pUVar2;
  
  if (Z_Registration_Info_UScriptStruct_FSimpleWidgetConstructor.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar2 = Z_Construct_UPackage__Script_TypedElementFramework();
    Z_Registration_Info_UScriptStruct_FSimpleWidgetConstructor.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSimpleWidgetConstructor,(UObject *)pUVar2,
                         L"SimpleWidgetConstructor");
  }
  pUVar1 = Z_Registration_Info_UScriptStruct_FSimpleWidgetConstructor.OuterSingleton;
  *(undefined8 *)&this->field_0x8 = 0;
  *(undefined8 *)&this->field_0x10 = 0;
  *(undefined8 *)&this->field_0x18 = 0;
  *(undefined8 *)&this->field_0x20 = 0;
  *(undefined8 *)&this->field_0x38 = 0;
  *(undefined4 *)&this->field_0x40 = 0;
  *(undefined4 *)&this->field_0x44 = 0x80;
  *(undefined4 *)&this->field_0x48 = 0xffffffff;
  *(undefined4 *)&this->field_0x4c = 0;
  *(undefined8 *)&this->field_0x58 = 0;
  *(undefined4 *)&this->field_0x60 = 0;
  *(UScriptStruct **)&this->field_0x78 = pUVar1;
  *(undefined ***)this = &___7FSimpleWidgetConstructor__6B_;
  *(undefined8 *)&this->field_0x68 = 0;
  *(undefined8 *)&this->field_0x70 = 0;
  return this;
}

// ~FSimpleWidgetConstructor @ 142c9a600

void __thiscall FSimpleWidgetConstructor::~FSimpleWidgetConstructor(FSimpleWidgetConstructor *this)

{
  *(undefined4 *)&this->field_0x60 = 0;
  if (*(void **)&this->field_0x58 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x58);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->field_0x18);
  if (*(void **)&this->field_0x8 != (void *)0x0) {
    FMemory::Free(*(void **)&this->field_0x8);
  }
  return;
}

