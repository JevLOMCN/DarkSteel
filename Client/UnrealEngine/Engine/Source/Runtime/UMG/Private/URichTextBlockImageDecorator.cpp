// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 9

// StaticClass @ 146965920

UClass * __cdecl URichTextBlockImageDecorator::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URichTextBlockImageDecorator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"RichTextBlockImageDecorator",
               &Z_Registration_Info_UClass_URichTextBlockImageDecorator.InnerSingleton,
               StaticRegisterNativesURichTextBlockImageDecorator,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<URichTextBlockImageDecorator>,
               InternalVTableHelperCtorCaller<URichTextBlockImageDecorator>,local_res8,
               URichTextBlockDecorator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URichTextBlockImageDecorator.InnerSingleton;
}

// URichTextBlockImageDecorator @ 14698cca0

URichTextBlockImageDecorator * __thiscall
URichTextBlockImageDecorator::URichTextBlockImageDecorator
          (URichTextBlockImageDecorator *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7URichTextBlockImageDecorator__6B_;
  (this->ImageSet).field0_0x0.DebugPtr = (UDataTable *)0x0;
  return this;
}

// URichTextBlockImageDecorator @ 14698ccd0

URichTextBlockImageDecorator * __thiscall
URichTextBlockImageDecorator::URichTextBlockImageDecorator
          (URichTextBlockImageDecorator *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7URichTextBlockImageDecorator__6B_;
  (this->ImageSet).field0_0x0.DebugPtr = (UDataTable *)0x0;
  return this;
}

// ~URichTextBlockImageDecorator @ 146993e30

void __thiscall
URichTextBlockImageDecorator::~URichTextBlockImageDecorator(URichTextBlockImageDecorator *this)

{
  this->_padding_ = (longlong)&___7URichTextBlockDecorator__6B_;
  UObject::~UObject((UObject *)this);
  return;
}

// CreateDecorator @ 1469bcc60

TSharedPtr<ITextDecorator,1> * __thiscall
URichTextBlockImageDecorator::CreateDecorator
          (URichTextBlockImageDecorator *this,TSharedPtr<ITextDecorator,1> *__return_storage_ptr__,
          URichTextBlock *param_1)

{
  TRawPtrProxy<FRichInlineImage> local_res10;
  
  local_res10.Object = ::operator_new(0x18);
  if (local_res10.Object != (FRichInlineImage *)0x0) {
    (local_res10.Object)->_padding_ = (longlong)param_1;
    (local_res10.Object)->_padding_ = (longlong)&___7FRichInlineImage__6B_;
    (local_res10.Object)->Decorator = this;
  }
  TSharedPtr<ITextDecorator,1>::TSharedPtr<ITextDecorator,1><FRichInlineImage>
            (__return_storage_ptr__,&local_res10);
  return __return_storage_ptr__;
}

// FindImageBrush @ 1469c8c40

FSlateBrush * __thiscall
URichTextBlockImageDecorator::FindImageBrush
          (URichTextBlockImageDecorator *this,FName param_1,bool param_2)

{
  UDataTable *this_00;
  UPackage *pUVar1;
  uchar *puVar2;
  FSlateBrush *pFVar3;
  
  this_00 = (this->ImageSet).field0_0x0.DebugPtr;
  if (this_00 != (UDataTable *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FRichImageRow.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar1 = Z_Construct_UPackage__Script_UMG();
      Z_Registration_Info_UScriptStruct_FRichImageRow.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FRichImageRow,(UObject *)pUVar1,L"RichImageRow"
                          );
    }
    puVar2 = UDataTable::FindRowInternal
                       (this_00,Z_Registration_Info_UScriptStruct_FRichImageRow.OuterSingleton,
                        param_1,L"",param_2);
    pFVar3 = (FSlateBrush *)0x0;
    if (puVar2 != (uchar *)0x0) {
      pFVar3 = (FSlateBrush *)(puVar2 + 0x10);
    }
    return pFVar3;
  }
  return (FSlateBrush *)0x0;
}

// FindImageRow @ 1469c8ce0

FRichImageRow * __thiscall
URichTextBlockImageDecorator::FindImageRow
          (URichTextBlockImageDecorator *this,FName param_1,bool param_2)

{
  UDataTable *this_00;
  UPackage *pUVar1;
  FRichImageRow *pFVar2;
  
  this_00 = (this->ImageSet).field0_0x0.DebugPtr;
  if (this_00 != (UDataTable *)0x0) {
    if (Z_Registration_Info_UScriptStruct_FRichImageRow.OuterSingleton == (UScriptStruct *)0x0) {
      pUVar1 = Z_Construct_UPackage__Script_UMG();
      Z_Registration_Info_UScriptStruct_FRichImageRow.OuterSingleton =
           GetStaticStruct(Z_Construct_UScriptStruct_FRichImageRow,(UObject *)pUVar1,L"RichImageRow"
                          );
    }
    pFVar2 = (FRichImageRow *)
             UDataTable::FindRowInternal
                       (this_00,Z_Registration_Info_UScriptStruct_FRichImageRow.OuterSingleton,
                        param_1,L"",param_2);
    return pFVar2;
  }
  return (FRichImageRow *)0x0;
}

// GetPrivateStaticClass @ 1469d5460

UClass * __cdecl URichTextBlockImageDecorator::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_URichTextBlockImageDecorator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"RichTextBlockImageDecorator",
               &Z_Registration_Info_UClass_URichTextBlockImageDecorator.InnerSingleton,
               StaticRegisterNativesURichTextBlockImageDecorator,0x30,8,
               CLASS_Intrinsic|CLASS_Abstract,CASTCLASS_None,L"Engine",
               InternalConstructor<URichTextBlockImageDecorator>,
               InternalVTableHelperCtorCaller<URichTextBlockImageDecorator>,local_res8,
               URichTextBlockDecorator::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_URichTextBlockImageDecorator.InnerSingleton;
}

// StaticRegisterNativesURichTextBlockImageDecorator @ 146a1ed90

void __cdecl URichTextBlockImageDecorator::StaticRegisterNativesURichTextBlockImageDecorator(void)

{
  return;
}

