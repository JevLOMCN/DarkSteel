// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: TypedElementFramework
// Functions: 4

// StaticStruct @ 142c86700

UScriptStruct * __cdecl FTedsDecoratorWidgetConstructor::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FTedsDecoratorWidgetConstructor.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_TypedElementFramework();
    Z_Registration_Info_UScriptStruct_FTedsDecoratorWidgetConstructor.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FTedsDecoratorWidgetConstructor,(UObject *)pUVar1
                         ,L"TedsDecoratorWidgetConstructor");
  }
  return Z_Registration_Info_UScriptStruct_FTedsDecoratorWidgetConstructor.OuterSingleton;
}

// CreateDecoratorWidget @ 142c86740

TSharedPtr<SWidget,1> * __thiscall
FTedsDecoratorWidgetConstructor::CreateDecoratorWidget
          (FTedsDecoratorWidgetConstructor *this,TSharedPtr<SWidget,1> *__return_storage_ptr__,
          TSharedPtr<SWidget,1> *param_1,ICoreProvider *param_2,IUiProvider *param_3,ulong64 param_4
          ,ulong64 param_5,FMetaDataView *param_6)

{
  __return_storage_ptr__->Object = (SWidget *)0x0;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->SharedReferenceCount).ReferenceController);
  return __return_storage_ptr__;
}

// FTedsDecoratorWidgetConstructor @ 142c987e0

FTedsDecoratorWidgetConstructor * __thiscall
FTedsDecoratorWidgetConstructor::FTedsDecoratorWidgetConstructor
          (FTedsDecoratorWidgetConstructor *this,UScriptStruct *param_1)

{
  undefined8 local_res8 [4];
  
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0x80;
  *(undefined4 *)&this->_padding_ = 0xffffffff;
  *(undefined4 *)((longlong)&this->_padding_ + 4) = 0;
  this->_padding_ = 0;
  *(undefined4 *)&this->_padding_ = 0;
  this->_padding_ = (longlong)param_1;
  this->_padding_ = 0;
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7FTedsDecoratorWidgetConstructor__6B_;
  local_res8[0] = 0;
  (this->TypeInfo).WeakPtr = (FWeakObjectPtr)0x0;
  FWeakObjectPtr::operator=(&(this->TypeInfo).WeakPtr,(FObjectPtr)local_res8);
  return this;
}

// ~FTedsDecoratorWidgetConstructor @ 142c9a650

void __thiscall
FTedsDecoratorWidgetConstructor::~FTedsDecoratorWidgetConstructor
          (FTedsDecoratorWidgetConstructor *this)

{
  *(undefined4 *)&this->_padding_ = 0;
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TWeakObjectPtr<UScriptStruct_const_,FWeakObjectPtr>,FName>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->_padding_);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  return;
}

