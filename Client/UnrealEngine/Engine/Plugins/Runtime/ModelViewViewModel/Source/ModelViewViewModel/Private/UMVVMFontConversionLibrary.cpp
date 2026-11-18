// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 23

// StaticClass @ 14a735db0

UClass * __cdecl UMVVMFontConversionLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMFontConversionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMFontConversionLibrary",
               &Z_Registration_Info_UClass_UMVVMFontConversionLibrary.InnerSingleton,
               StaticRegisterNativesUMVVMFontConversionLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UMVVMFontConversionLibrary>,
               InternalVTableHelperCtorCaller<UMVVMFontConversionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMFontConversionLibrary.InnerSingleton;
}

// UMVVMFontConversionLibrary @ 14a73f970

UMVVMFontConversionLibrary * __thiscall
UMVVMFontConversionLibrary::UMVVMFontConversionLibrary
          (UMVVMFontConversionLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMVVMFontConversionLibrary__6B_;
  return this;
}

// UMVVMFontConversionLibrary @ 14a73f9a0

UMVVMFontConversionLibrary * __thiscall
UMVVMFontConversionLibrary::UMVVMFontConversionLibrary
          (UMVVMFontConversionLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMVVMFontConversionLibrary__6B_;
  return this;
}

// ~UMVVMFontConversionLibrary @ 14a7406a0

void __thiscall
UMVVMFontConversionLibrary::~UMVVMFontConversionLibrary(UMVVMFontConversionLibrary *this)

{
  *(undefined ***)this = &___7UMVVMFontConversionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// Conv_SetScalarParameter @ 14a7456d0

FSlateFontInfo * __cdecl
UMVVMFontConversionLibrary::Conv_SetScalarParameter
          (FSlateFontInfo *__return_storage_ptr__,FSlateFontInfo *param_1,FName param_2,
          float param_3)

{
  UMaterialInstanceDynamic *this;
  
  this = TryGetDynamicMaterial(param_1,(UObject *)0x0,(UMaterialInterface *)0x0);
  if (this != (UMaterialInstanceDynamic *)0x0) {
    UMaterialInstanceDynamic::SetScalarParameterValue(this,param_2,param_3);
  }
  FSlateFontInfo::FSlateFontInfo(__return_storage_ptr__,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->CompositeFont).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// Conv_SetScalarParameterMID @ 14a7457d0

FSlateFontInfo * __cdecl
UMVVMFontConversionLibrary::Conv_SetScalarParameterMID
          (FSlateFontInfo *__return_storage_ptr__,FSlateFontInfo *param_1,
          UMaterialInterface *param_2,FName param_3,float param_4)

{
  UMaterialInstanceDynamic *this;
  
  this = TryGetDynamicMaterial(param_1,(UObject *)0x0,param_2);
  if (this != (UMaterialInstanceDynamic *)0x0) {
    UMaterialInstanceDynamic::SetScalarParameterValue(this,param_3,param_4);
  }
  FSlateFontInfo::FSlateFontInfo(__return_storage_ptr__,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->CompositeFont).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// Conv_SetTextureParameter @ 14a7458c0

FSlateFontInfo * __cdecl
UMVVMFontConversionLibrary::Conv_SetTextureParameter
          (FSlateFontInfo *__return_storage_ptr__,FSlateFontInfo *param_1,FName param_2,
          UTexture *param_3)

{
  UMaterialInstanceDynamic *this;
  
  this = TryGetDynamicMaterial(param_1,(UObject *)0x0,(UMaterialInterface *)0x0);
  if (this != (UMaterialInstanceDynamic *)0x0) {
    UMaterialInstanceDynamic::SetTextureParameterValue(this,param_2,param_3);
  }
  FSlateFontInfo::FSlateFontInfo(__return_storage_ptr__,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->CompositeFont).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// Conv_SetTextureParameterMID @ 14a7459c0

FSlateFontInfo * __cdecl
UMVVMFontConversionLibrary::Conv_SetTextureParameterMID
          (FSlateFontInfo *__return_storage_ptr__,FSlateFontInfo *param_1,
          UMaterialInterface *param_2,FName param_3,UTexture *param_4)

{
  UMaterialInstanceDynamic *this;
  
  this = TryGetDynamicMaterial(param_1,(UObject *)0x0,param_2);
  if (this != (UMaterialInstanceDynamic *)0x0) {
    UMaterialInstanceDynamic::SetTextureParameterValue(this,param_3,param_4);
  }
  FSlateFontInfo::FSlateFontInfo(__return_storage_ptr__,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->CompositeFont).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// Conv_SetVectorParameter @ 14a745ab0

FSlateFontInfo * __cdecl
UMVVMFontConversionLibrary::Conv_SetVectorParameter
          (FSlateFontInfo *__return_storage_ptr__,FSlateFontInfo *param_1,FName param_2,
          FLinearColor *param_3)

{
  UMaterialInstanceDynamic *this;
  FLinearColor_u_0 local_18;
  
  this = TryGetDynamicMaterial(param_1,(UObject *)0x0,(UMaterialInterface *)0x0);
  if (this != (UMaterialInstanceDynamic *)0x0) {
    local_18._0_8_ = *(undefined8 *)&param_3->field0_0x0;
    local_18._8_8_ = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
    UMaterialInstanceDynamic::SetVectorParameterValue(this,param_2,(FLinearColor *)&local_18._s_0);
  }
  FSlateFontInfo::FSlateFontInfo(__return_storage_ptr__,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->CompositeFont).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// Conv_SetVectorParameterMID @ 14a745bc0

FSlateFontInfo * __cdecl
UMVVMFontConversionLibrary::Conv_SetVectorParameterMID
          (FSlateFontInfo *__return_storage_ptr__,FSlateFontInfo *param_1,
          UMaterialInterface *param_2,FName param_3,FLinearColor *param_4)

{
  UMaterialInstanceDynamic *this;
  FLinearColor_u_0 local_18;
  
  this = TryGetDynamicMaterial(param_1,(UObject *)0x0,param_2);
  if (this != (UMaterialInstanceDynamic *)0x0) {
    local_18._0_8_ = *(undefined8 *)&param_4->field0_0x0;
    local_18._8_8_ = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
    UMaterialInstanceDynamic::SetVectorParameterValue(this,param_3,(FLinearColor *)&local_18._s_0);
  }
  FSlateFontInfo::FSlateFontInfo(__return_storage_ptr__,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->CompositeFont).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// Conv_SetVectorParameterMID_FColor @ 14a745cc0

FSlateFontInfo * __cdecl
UMVVMFontConversionLibrary::Conv_SetVectorParameterMID_FColor
          (FSlateFontInfo *__return_storage_ptr__,FSlateFontInfo *param_1,
          UMaterialInterface *param_2,FName param_3,FColor param_4)

{
  UMaterialInstanceDynamic *this;
  FLinearColor_u_0 local_18;
  
  this = TryGetDynamicMaterial(param_1,(UObject *)0x0,param_2);
  if (this != (UMaterialInstanceDynamic *)0x0) {
    local_18._s_0.R = FLinearColor::sRGBToLinearTable[param_4.field0_0x0._s_0.R];
    local_18._s_0.G = FLinearColor::sRGBToLinearTable[param_4.field0_0x0._s_0.G];
    local_18._s_0.B = FLinearColor::sRGBToLinearTable[param_4.field0_0x0._s_0.B];
    local_18._s_0.A = (float)((uint)param_4.field0_0x0 >> 0x18) * __real_3b808081;
    UMaterialInstanceDynamic::SetVectorParameterValue(this,param_3,(FLinearColor *)&local_18._s_0);
  }
  FSlateFontInfo::FSlateFontInfo(__return_storage_ptr__,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->CompositeFont).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// Conv_SetVectorParameter_FColor @ 14a745e50

FSlateFontInfo * __cdecl
UMVVMFontConversionLibrary::Conv_SetVectorParameter_FColor
          (FSlateFontInfo *__return_storage_ptr__,FSlateFontInfo *param_1,FName param_2,
          FColor param_3)

{
  UMaterialInstanceDynamic *this;
  byte bStackX_21;
  byte bStackX_22;
  FLinearColor_u_0 local_18;
  
  this = TryGetDynamicMaterial(param_1,(UObject *)0x0,(UMaterialInterface *)0x0);
  if (this != (UMaterialInstanceDynamic *)0x0) {
    bStackX_22 = param_3.field0_0x0._2_1_;
    bStackX_21 = param_3.field0_0x0._1_1_;
    local_18._s_0.R = FLinearColor::sRGBToLinearTable[bStackX_22];
    local_18._s_0.G = FLinearColor::sRGBToLinearTable[bStackX_21];
    local_18._s_0.B = FLinearColor::sRGBToLinearTable[(uint)param_3.field0_0x0 & 0xff];
    local_18._s_0.A = (float)((uint)param_3.field0_0x0 >> 0x18) * __real_3b808081;
    UMaterialInstanceDynamic::SetVectorParameterValue(this,param_2,(FLinearColor *)&local_18._s_0);
  }
  FSlateFontInfo::FSlateFontInfo(__return_storage_ptr__,param_1);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_1->CompositeFont).SharedReferenceCount.ReferenceController);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14a753770

UClass * __cdecl UMVVMFontConversionLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMFontConversionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMFontConversionLibrary",
               &Z_Registration_Info_UClass_UMVVMFontConversionLibrary.InnerSingleton,
               StaticRegisterNativesUMVVMFontConversionLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None
               ,L"Engine",InternalConstructor<UMVVMFontConversionLibrary>,
               InternalVTableHelperCtorCaller<UMVVMFontConversionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMFontConversionLibrary.InnerSingleton;
}

// StaticRegisterNativesUMVVMFontConversionLibrary @ 14a760080

void __cdecl UMVVMFontConversionLibrary::StaticRegisterNativesUMVVMFontConversionLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 8;
  local_18.DataPtr = Z_Construct_UClass_UMVVMFontConversionLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TryGetDynamicMaterial @ 14a765170

UMaterialInstanceDynamic * __cdecl
UMVVMFontConversionLibrary::TryGetDynamicMaterial
          (FSlateFontInfo *param_1,UObject *param_2,UMaterialInterface *param_3)

{
  TObjectPtr<UObject> *this;
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UMaterialInstanceDynamic *pUVar4;
  
  this = &param_1->FontMaterial;
  if ((param_1->FontMaterial).field0_0x0.DebugPtr != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    bVar2 = FObjectPtr::IsA((FObjectPtr *)this,pUVar3);
    if (bVar2) {
      pUVar4 = (UMaterialInstanceDynamic *)(this->field0_0x0).DebugPtr;
      goto LAB_14a7651ab;
    }
  }
  pUVar4 = (UMaterialInstanceDynamic *)0x0;
LAB_14a7651ab:
  if ((param_3 == (UMaterialInterface *)0x0) &&
     (param_3 = (UMaterialInterface *)pUVar4, pUVar4 == (UMaterialInstanceDynamic *)0x0)) {
    return (UMaterialInstanceDynamic *)0x0;
  }
  pUVar3 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
  iVar1 = (int)pUVar3->_padding_;
  if ((*(int *)(((UMaterialInstanceDynamic *)param_3)->_padding_ + 0x38) < iVar1) ||
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(((UMaterialInstanceDynamic *)param_3)->_padding_ + 0x30) + (longlong)iVar1 * 8
       ) != &pUVar3->_padding_)) {
    param_3 = (UMaterialInterface *)UMaterialInstanceDynamic::Create(param_3,param_2,(FName)0x0);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UMaterialInstanceDynamic *)param_3 != (UMaterialInstanceDynamic *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_3);
    }
    (this->field0_0x0).DebugPtr = (UObject *)param_3;
  }
  return (UMaterialInstanceDynamic *)param_3;
}

// execConv_SetScalarParameter @ 14a769450

void __cdecl
UMVVMFontConversionLibrary::execConv_SetScalarParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  FName FVar3;
  FSlateFontInfo *pFVar4;
  UMaterialInstanceDynamic *this;
  float local_res10 [2];
  FName local_res20;
  FSlateFontInfo local_138;
  FSlateFontInfo local_d8;
  FSlateFontInfo local_78;
  
  FSlateFontInfo::FSlateFontInfo(&local_138);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FVar3 = local_res20;
  fVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = FSlateFontInfo::FSlateFontInfo(&local_78,&local_138);
  this = TryGetDynamicMaterial(pFVar4,(UObject *)0x0,(UMaterialInterface *)0x0);
  if (this != (UMaterialInstanceDynamic *)0x0) {
    UMaterialInstanceDynamic::SetScalarParameterValue(this,FVar3,fVar2);
  }
  FSlateFontInfo::FSlateFontInfo(&local_d8,pFVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar4->CompositeFont).SharedReferenceCount.ReferenceController);
  FSlateFontInfo::operator=(param_3,&local_d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.CompositeFont.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138.CompositeFont.SharedReferenceCount.ReferenceController);
  return;
}

// execConv_SetScalarParameterMID @ 14a7697d0

void __cdecl
UMVVMFontConversionLibrary::execConv_SetScalarParameterMID
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  float fVar2;
  FName FVar3;
  UMaterialInterface *pUVar4;
  FSlateFontInfo *pFVar5;
  UMaterialInstanceDynamic *this;
  float local_res10 [4];
  FName local_res20;
  UMaterialInterface *local_158 [2];
  FSlateFontInfo local_148;
  FSlateFontInfo local_e8;
  FSlateFontInfo local_88;
  
  FSlateFontInfo::FSlateFontInfo(&local_148);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  local_158[0] = (UMaterialInterface *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_158,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_158);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar4 = local_158[0];
  FVar3 = local_res20;
  fVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar5 = FSlateFontInfo::FSlateFontInfo(&local_88,&local_148);
  this = TryGetDynamicMaterial(pFVar5,(UObject *)0x0,pUVar4);
  if (this != (UMaterialInstanceDynamic *)0x0) {
    UMaterialInstanceDynamic::SetScalarParameterValue(this,FVar3,fVar2);
  }
  FSlateFontInfo::FSlateFontInfo(&local_e8,pFVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar5->CompositeFont).SharedReferenceCount.ReferenceController);
  FSlateFontInfo::operator=(param_3,&local_e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.CompositeFont.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.CompositeFont.SharedReferenceCount.ReferenceController);
  return;
}

// execConv_SetTextureParameter @ 14a769bd0

void __cdecl
UMVVMFontConversionLibrary::execConv_SetTextureParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  UTexture *pUVar3;
  FSlateFontInfo *pFVar4;
  UMaterialInstanceDynamic *this;
  FName local_res10 [2];
  UTexture *local_res20;
  FSlateFontInfo local_138;
  FSlateFontInfo local_d8;
  FSlateFontInfo local_78;
  
  FSlateFontInfo::FSlateFontInfo(&local_138);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  local_res20 = (UTexture *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  pUVar3 = local_res20;
  FVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = FSlateFontInfo::FSlateFontInfo(&local_78,&local_138);
  this = TryGetDynamicMaterial(pFVar4,(UObject *)0x0,(UMaterialInterface *)0x0);
  if (this != (UMaterialInstanceDynamic *)0x0) {
    UMaterialInstanceDynamic::SetTextureParameterValue(this,FVar2,pUVar3);
  }
  FSlateFontInfo::FSlateFontInfo(&local_d8,pFVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar4->CompositeFont).SharedReferenceCount.ReferenceController);
  FSlateFontInfo::operator=(param_3,&local_d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.CompositeFont.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138.CompositeFont.SharedReferenceCount.ReferenceController);
  return;
}

// execConv_SetTextureParameterMID @ 14a769f30

void __cdecl
UMVVMFontConversionLibrary::execConv_SetTextureParameterMID
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  UTexture *pUVar3;
  UMaterialInterface *pUVar4;
  FSlateFontInfo *pFVar5;
  UMaterialInstanceDynamic *this;
  FName local_res10;
  UTexture *local_res20;
  UMaterialInterface *local_148 [2];
  FSlateFontInfo local_138;
  FSlateFontInfo local_d8;
  FSlateFontInfo local_78;
  
  FSlateFontInfo::FSlateFontInfo(&local_138);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  local_148[0] = (UMaterialInterface *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_148);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res20 = (UTexture *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  pUVar4 = local_148[0];
  pUVar3 = local_res20;
  FVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar5 = FSlateFontInfo::FSlateFontInfo(&local_78,&local_138);
  this = TryGetDynamicMaterial(pFVar5,(UObject *)0x0,pUVar4);
  if (this != (UMaterialInstanceDynamic *)0x0) {
    UMaterialInstanceDynamic::SetTextureParameterValue(this,FVar2,pUVar3);
  }
  FSlateFontInfo::FSlateFontInfo(&local_d8,pFVar5);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar5->CompositeFont).SharedReferenceCount.ReferenceController);
  FSlateFontInfo::operator=(param_3,&local_d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.CompositeFont.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138.CompositeFont.SharedReferenceCount.ReferenceController);
  return;
}

// execConv_SetVectorParameter @ 14a76a320

void __cdecl
UMVVMFontConversionLibrary::execConv_SetVectorParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  FSlateFontInfo *pFVar3;
  UMaterialInstanceDynamic *this;
  FName local_res10;
  FLinearColor_u_0 local_148;
  undefined8 local_138;
  undefined8 uStack_130;
  FSlateFontInfo local_128;
  FSlateFontInfo local_c8;
  FSlateFontInfo local_68;
  
  FSlateFontInfo::FSlateFontInfo(&local_128);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_128,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_128);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  FVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_148._0_8_ = local_138;
  local_148._8_8_ = uStack_130;
  pFVar3 = FSlateFontInfo::FSlateFontInfo(&local_68,&local_128);
  this = TryGetDynamicMaterial(pFVar3,(UObject *)0x0,(UMaterialInterface *)0x0);
  if (this != (UMaterialInstanceDynamic *)0x0) {
    UMaterialInstanceDynamic::SetVectorParameterValue(this,FVar2,(FLinearColor *)&local_148._s_0);
  }
  FSlateFontInfo::FSlateFontInfo(&local_c8,pFVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar3->CompositeFont).SharedReferenceCount.ReferenceController);
  FSlateFontInfo::operator=(param_3,&local_c8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_c8.CompositeFont.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_128.CompositeFont.SharedReferenceCount.ReferenceController);
  return;
}

// execConv_SetVectorParameterMID @ 14a76a690

void __cdecl
UMVVMFontConversionLibrary::execConv_SetVectorParameterMID
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  UMaterialInterface *pUVar3;
  FSlateFontInfo *pFVar4;
  UMaterialInstanceDynamic *this;
  FName local_res10 [2];
  UMaterialInterface *local_res20;
  FLinearColor_u_0 local_158;
  undefined8 local_148;
  undefined8 uStack_140;
  FSlateFontInfo local_138;
  FSlateFontInfo local_d8;
  FSlateFontInfo local_78;
  
  FSlateFontInfo::FSlateFontInfo(&local_138);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  local_res20 = (UMaterialInterface *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  pUVar3 = local_res20;
  FVar2 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_158._0_8_ = local_148;
  local_158._8_8_ = uStack_140;
  pFVar4 = FSlateFontInfo::FSlateFontInfo(&local_78,&local_138);
  this = TryGetDynamicMaterial(pFVar4,(UObject *)0x0,pUVar3);
  if (this != (UMaterialInstanceDynamic *)0x0) {
    UMaterialInstanceDynamic::SetVectorParameterValue(this,FVar2,(FLinearColor *)&local_158._s_0);
  }
  FSlateFontInfo::FSlateFontInfo(&local_d8,pFVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar4->CompositeFont).SharedReferenceCount.ReferenceController);
  FSlateFontInfo::operator=(param_3,&local_d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.CompositeFont.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138.CompositeFont.SharedReferenceCount.ReferenceController);
  return;
}

// execConv_SetVectorParameterMID_FColor @ 14a76aa80

void __cdecl
UMVVMFontConversionLibrary::execConv_SetVectorParameterMID_FColor
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  UMaterialInterface *pUVar3;
  FSlateFontInfo *pFVar4;
  UMaterialInstanceDynamic *this;
  uint local_res10 [2];
  FName local_res20;
  UMaterialInterface *local_168 [2];
  FLinearColor_u_0 local_158;
  FSlateFontInfo local_148;
  FSlateFontInfo local_e8;
  FSlateFontInfo local_88;
  
  FSlateFontInfo::FSlateFontInfo(&local_148);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_148,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_148);
  }
  local_168[0] = (UMaterialInterface *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_168,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_168);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  pUVar3 = local_168[0];
  FVar2 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = FSlateFontInfo::FSlateFontInfo(&local_88,&local_148);
  this = TryGetDynamicMaterial(pFVar4,(UObject *)0x0,pUVar3);
  if (this != (UMaterialInstanceDynamic *)0x0) {
    local_158._s_0.R = FLinearColor::sRGBToLinearTable[local_res10[0] >> 0x10 & 0xff];
    local_158._s_0.A = (float)(local_res10[0] >> 0x18) * __real_3b808081;
    local_158._s_0.G = FLinearColor::sRGBToLinearTable[local_res10[0] >> 8 & 0xff];
    local_158._s_0.B = FLinearColor::sRGBToLinearTable[local_res10[0] & 0xff];
    UMaterialInstanceDynamic::SetVectorParameterValue(this,FVar2,(FLinearColor *)&local_158._s_0);
  }
  FSlateFontInfo::FSlateFontInfo(&local_e8,pFVar4);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar4->CompositeFont).SharedReferenceCount.ReferenceController);
  FSlateFontInfo::operator=(param_3,&local_e8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_e8.CompositeFont.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_148.CompositeFont.SharedReferenceCount.ReferenceController);
  return;
}

// execConv_SetVectorParameter_FColor @ 14a76af20

void __cdecl
UMVVMFontConversionLibrary::execConv_SetVectorParameter_FColor
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName FVar2;
  FSlateFontInfo *pFVar3;
  UMaterialInstanceDynamic *this;
  uint local_res10 [2];
  FName local_res20;
  FLinearColor_u_0 local_148;
  FSlateFontInfo local_138;
  FSlateFontInfo local_d8;
  FSlateFontInfo local_78;
  
  FSlateFontInfo::FSlateFontInfo(&local_138);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_138);
  }
  local_res20.ComparisonIndex.Value = 0;
  local_res20.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  FVar2 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar3 = FSlateFontInfo::FSlateFontInfo(&local_78,&local_138);
  this = TryGetDynamicMaterial(pFVar3,(UObject *)0x0,(UMaterialInterface *)0x0);
  if (this != (UMaterialInstanceDynamic *)0x0) {
    local_148._s_0.R = FLinearColor::sRGBToLinearTable[local_res10[0] >> 0x10 & 0xff];
    local_148._s_0.A = (float)(local_res10[0] >> 0x18) * __real_3b808081;
    local_148._s_0.G = FLinearColor::sRGBToLinearTable[local_res10[0] >> 8 & 0xff];
    local_148._s_0.B = FLinearColor::sRGBToLinearTable[local_res10[0] & 0xff];
    UMaterialInstanceDynamic::SetVectorParameterValue(this,FVar2,(FLinearColor *)&local_148._s_0);
  }
  FSlateFontInfo::FSlateFontInfo(&local_d8,pFVar3);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((pFVar3->CompositeFont).SharedReferenceCount.ReferenceController);
  FSlateFontInfo::operator=(param_3,&local_d8);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_d8.CompositeFont.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_138.CompositeFont.SharedReferenceCount.ReferenceController);
  return;
}

