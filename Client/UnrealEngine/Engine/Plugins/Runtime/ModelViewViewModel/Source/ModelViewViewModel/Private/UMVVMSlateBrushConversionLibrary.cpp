// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: ModelViewViewModel
// Functions: 23

// StaticClass @ 14a7379e0

UClass * __cdecl UMVVMSlateBrushConversionLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMSlateBrushConversionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMSlateBrushConversionLibrary",
               &Z_Registration_Info_UClass_UMVVMSlateBrushConversionLibrary.InnerSingleton,
               StaticRegisterNativesUMVVMSlateBrushConversionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMVVMSlateBrushConversionLibrary>,
               InternalVTableHelperCtorCaller<UMVVMSlateBrushConversionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMSlateBrushConversionLibrary.InnerSingleton;
}

// UMVVMSlateBrushConversionLibrary @ 14a73fbd0

UMVVMSlateBrushConversionLibrary * __thiscall
UMVVMSlateBrushConversionLibrary::UMVVMSlateBrushConversionLibrary
          (UMVVMSlateBrushConversionLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMVVMSlateBrushConversionLibrary__6B_;
  return this;
}

// UMVVMSlateBrushConversionLibrary @ 14a73fc00

UMVVMSlateBrushConversionLibrary * __thiscall
UMVVMSlateBrushConversionLibrary::UMVVMSlateBrushConversionLibrary
          (UMVVMSlateBrushConversionLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UMVVMSlateBrushConversionLibrary__6B_;
  return this;
}

// ~UMVVMSlateBrushConversionLibrary @ 14a740780

void __thiscall
UMVVMSlateBrushConversionLibrary::~UMVVMSlateBrushConversionLibrary
          (UMVVMSlateBrushConversionLibrary *this)

{
  *(undefined ***)this = &___7UMVVMSlateBrushConversionLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// Conv_SetScalarParameter @ 14a745750

FSlateBrush * __cdecl
UMVVMSlateBrushConversionLibrary::Conv_SetScalarParameter
          (FSlateBrush *__return_storage_ptr__,FSlateBrush *param_1,FName param_2,float param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  UMaterialInstanceDynamic *this;
  
  this = TryGetDynamicMaterial(param_1,(UObject *)0x0,(UMaterialInterface *)0x0);
  if (this != (UMaterialInstanceDynamic *)0x0) {
    UMaterialInstanceDynamic::SetScalarParameterValue(this,param_2,param_3);
  }
  FSlateBrush::FSlateBrush(__return_storage_ptr__,param_1);
  pTVar1 = (param_1->ResourceHandle).Data.SharedReferenceCount.ReferenceController;
  param_1->_padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// Conv_SetScalarParameterMID @ 14a745840

FSlateBrush * __cdecl
UMVVMSlateBrushConversionLibrary::Conv_SetScalarParameterMID
          (FSlateBrush *__return_storage_ptr__,FSlateBrush *param_1,UMaterialInterface *param_2,
          FName param_3,float param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  UMaterialInstanceDynamic *this;
  
  this = TryGetDynamicMaterial(param_1,(UObject *)0x0,param_2);
  if (this != (UMaterialInstanceDynamic *)0x0) {
    UMaterialInstanceDynamic::SetScalarParameterValue(this,param_3,param_4);
  }
  FSlateBrush::FSlateBrush(__return_storage_ptr__,param_1);
  pTVar1 = (param_1->ResourceHandle).Data.SharedReferenceCount.ReferenceController;
  param_1->_padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// Conv_SetTextureParameter @ 14a745940

FSlateBrush * __cdecl
UMVVMSlateBrushConversionLibrary::Conv_SetTextureParameter
          (FSlateBrush *__return_storage_ptr__,FSlateBrush *param_1,FName param_2,UTexture *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  UMaterialInstanceDynamic *this;
  
  this = TryGetDynamicMaterial(param_1,(UObject *)0x0,(UMaterialInterface *)0x0);
  if (this != (UMaterialInstanceDynamic *)0x0) {
    UMaterialInstanceDynamic::SetTextureParameterValue(this,param_2,param_3);
  }
  FSlateBrush::FSlateBrush(__return_storage_ptr__,param_1);
  pTVar1 = (param_1->ResourceHandle).Data.SharedReferenceCount.ReferenceController;
  param_1->_padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// Conv_SetTextureParameterMID @ 14a745a30

FSlateBrush * __cdecl
UMVVMSlateBrushConversionLibrary::Conv_SetTextureParameterMID
          (FSlateBrush *__return_storage_ptr__,FSlateBrush *param_1,UMaterialInterface *param_2,
          FName param_3,UTexture *param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  UMaterialInstanceDynamic *this;
  
  this = TryGetDynamicMaterial(param_1,(UObject *)0x0,param_2);
  if (this != (UMaterialInstanceDynamic *)0x0) {
    UMaterialInstanceDynamic::SetTextureParameterValue(this,param_3,param_4);
  }
  FSlateBrush::FSlateBrush(__return_storage_ptr__,param_1);
  pTVar1 = (param_1->ResourceHandle).Data.SharedReferenceCount.ReferenceController;
  param_1->_padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// Conv_SetVectorParameter @ 14a745b30

FSlateBrush * __cdecl
UMVVMSlateBrushConversionLibrary::Conv_SetVectorParameter
          (FSlateBrush *__return_storage_ptr__,FSlateBrush *param_1,FName param_2,
          FLinearColor *param_3)

{
  TReferenceControllerBase<1> *pTVar1;
  UMaterialInstanceDynamic *this;
  FLinearColor_u_0 local_18;
  
  this = TryGetDynamicMaterial(param_1,(UObject *)0x0,(UMaterialInterface *)0x0);
  if (this != (UMaterialInstanceDynamic *)0x0) {
    local_18._0_8_ = *(undefined8 *)&param_3->field0_0x0;
    local_18._8_8_ = *(undefined8 *)((longlong)&param_3->field0_0x0 + 8);
    UMaterialInstanceDynamic::SetVectorParameterValue(this,param_2,(FLinearColor *)&local_18._s_0);
  }
  FSlateBrush::FSlateBrush(__return_storage_ptr__,param_1);
  pTVar1 = (param_1->ResourceHandle).Data.SharedReferenceCount.ReferenceController;
  param_1->_padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// Conv_SetVectorParameterMID @ 14a745c40

FSlateBrush * __cdecl
UMVVMSlateBrushConversionLibrary::Conv_SetVectorParameterMID
          (FSlateBrush *__return_storage_ptr__,FSlateBrush *param_1,UMaterialInterface *param_2,
          FName param_3,FLinearColor *param_4)

{
  TReferenceControllerBase<1> *pTVar1;
  UMaterialInstanceDynamic *this;
  FLinearColor_u_0 local_18;
  
  this = TryGetDynamicMaterial(param_1,(UObject *)0x0,param_2);
  if (this != (UMaterialInstanceDynamic *)0x0) {
    local_18._0_8_ = *(undefined8 *)&param_4->field0_0x0;
    local_18._8_8_ = *(undefined8 *)((longlong)&param_4->field0_0x0 + 8);
    UMaterialInstanceDynamic::SetVectorParameterValue(this,param_3,(FLinearColor *)&local_18._s_0);
  }
  FSlateBrush::FSlateBrush(__return_storage_ptr__,param_1);
  pTVar1 = (param_1->ResourceHandle).Data.SharedReferenceCount.ReferenceController;
  param_1->_padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// Conv_SetVectorParameterMID_FColor @ 14a745d80

FSlateBrush * __cdecl
UMVVMSlateBrushConversionLibrary::Conv_SetVectorParameterMID_FColor
          (FSlateBrush *__return_storage_ptr__,FSlateBrush *param_1,UMaterialInterface *param_2,
          FName param_3,FColor param_4)

{
  TReferenceControllerBase<1> *pTVar1;
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
  FSlateBrush::FSlateBrush(__return_storage_ptr__,param_1);
  pTVar1 = (param_1->ResourceHandle).Data.SharedReferenceCount.ReferenceController;
  param_1->_padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// Conv_SetVectorParameter_FColor @ 14a745f20

FSlateBrush * __cdecl
UMVVMSlateBrushConversionLibrary::Conv_SetVectorParameter_FColor
          (FSlateBrush *__return_storage_ptr__,FSlateBrush *param_1,FName param_2,FColor param_3)

{
  TReferenceControllerBase<1> *pTVar1;
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
  FSlateBrush::FSlateBrush(__return_storage_ptr__,param_1);
  pTVar1 = (param_1->ResourceHandle).Data.SharedReferenceCount.ReferenceController;
  param_1->_padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar1);
  return __return_storage_ptr__;
}

// GetPrivateStaticClass @ 14a753a70

UClass * __cdecl UMVVMSlateBrushConversionLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMVVMSlateBrushConversionLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/ModelViewViewModel",L"MVVMSlateBrushConversionLibrary",
               &Z_Registration_Info_UClass_UMVVMSlateBrushConversionLibrary.InnerSingleton,
               StaticRegisterNativesUMVVMSlateBrushConversionLibrary,0x28,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UMVVMSlateBrushConversionLibrary>,
               InternalVTableHelperCtorCaller<UMVVMSlateBrushConversionLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMVVMSlateBrushConversionLibrary.InnerSingleton;
}

// StaticRegisterNativesUMVVMSlateBrushConversionLibrary @ 14a760150

void __cdecl
UMVVMSlateBrushConversionLibrary::StaticRegisterNativesUMVVMSlateBrushConversionLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 8;
  local_18.DataPtr = Z_Construct_UClass_UMVVMSlateBrushConversionLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// TryGetDynamicMaterial @ 14a765240

UMaterialInstanceDynamic * __cdecl
UMVVMSlateBrushConversionLibrary::TryGetDynamicMaterial
          (FSlateBrush *param_1,UObject *param_2,UMaterialInterface *param_3)

{
  int iVar1;
  UClass *pUVar2;
  UMaterialInstanceDynamic *pUVar3;
  
  pUVar3 = (UMaterialInstanceDynamic *)(param_1->ResourceObject).field0_0x0.DebugPtr;
  if (pUVar3 != (UMaterialInstanceDynamic *)0x0) {
    pUVar2 = Z_Construct_UClass_UMaterialInterface_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(pUVar3->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar2->_padding_)) goto LAB_14a76528c;
  }
  pUVar3 = (UMaterialInstanceDynamic *)0x0;
LAB_14a76528c:
  if ((param_3 == (UMaterialInterface *)0x0) &&
     (param_3 = (UMaterialInterface *)pUVar3, pUVar3 == (UMaterialInstanceDynamic *)0x0)) {
    param_3 = (UMaterialInterface *)0x0;
  }
  else {
    pUVar2 = Z_Construct_UClass_UMaterialInstanceDynamic_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(((UMaterialInstanceDynamic *)param_3)->_padding_ + 0x38) < iVar1) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(((UMaterialInstanceDynamic *)param_3)->_padding_ + 0x30) +
         (longlong)iVar1 * 8) != &pUVar2->_padding_)) {
      param_3 = (UMaterialInterface *)UMaterialInstanceDynamic::Create(param_3,param_2,(FName)0x0);
      FSlateBrush::SetResourceObject(param_1,(UObject *)param_3);
    }
  }
  return (UMaterialInstanceDynamic *)param_3;
}

// execConv_SetScalarParameter @ 14a769600

void __cdecl
UMVVMSlateBrushConversionLibrary::execConv_SetScalarParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  float fVar3;
  FName FVar4;
  FSlateBrush *pFVar5;
  UMaterialInstanceDynamic *this;
  float local_res10 [2];
  FName local_res20;
  FSlateBrush local_228;
  FSlateBrush local_178;
  FSlateBrush local_c8;
  
  FSlateBrush::FSlateBrush(&local_228);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_228,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_228);
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
  FVar4 = local_res20;
  fVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar5 = FSlateBrush::FSlateBrush(&local_c8,&local_228);
  this = TryGetDynamicMaterial(pFVar5,(UObject *)0x0,(UMaterialInterface *)0x0);
  if (this != (UMaterialInstanceDynamic *)0x0) {
    UMaterialInstanceDynamic::SetScalarParameterValue(this,FVar4,fVar3);
  }
  FSlateBrush::FSlateBrush(&local_178,pFVar5);
  pTVar2 = (pFVar5->ResourceHandle).Data.SharedReferenceCount.ReferenceController;
  pFVar5->_padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  FSlateBrush::operator=(param_3,&local_178);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_228._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_228.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return;
}

// execConv_SetScalarParameterMID @ 14a7699c0

void __cdecl
UMVVMSlateBrushConversionLibrary::execConv_SetScalarParameterMID
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  float fVar3;
  FName FVar4;
  UMaterialInterface *pUVar5;
  FSlateBrush *pFVar6;
  UMaterialInstanceDynamic *this;
  float local_res10 [4];
  FName local_res20;
  UMaterialInterface *local_248 [2];
  FSlateBrush local_238;
  FSlateBrush local_188;
  FSlateBrush local_d8;
  
  FSlateBrush::FSlateBrush(&local_238);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_238,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_238);
  }
  local_248[0] = (UMaterialInterface *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_248,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_248);
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
  pUVar5 = local_248[0];
  FVar4 = local_res20;
  fVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar6 = FSlateBrush::FSlateBrush(&local_d8,&local_238);
  this = TryGetDynamicMaterial(pFVar6,(UObject *)0x0,pUVar5);
  if (this != (UMaterialInstanceDynamic *)0x0) {
    UMaterialInstanceDynamic::SetScalarParameterValue(this,FVar4,fVar3);
  }
  FSlateBrush::FSlateBrush(&local_188,pFVar6);
  pTVar2 = (pFVar6->ResourceHandle).Data.SharedReferenceCount.ReferenceController;
  pFVar6->_padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  FSlateBrush::operator=(param_3,&local_188);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_188.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_238._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_238.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return;
}

// execConv_SetTextureParameter @ 14a769d70

void __cdecl
UMVVMSlateBrushConversionLibrary::execConv_SetTextureParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FName FVar3;
  UTexture *pUVar4;
  FSlateBrush *pFVar5;
  UMaterialInstanceDynamic *this;
  FName local_res10 [2];
  UTexture *local_res20;
  FSlateBrush local_228;
  FSlateBrush local_178;
  FSlateBrush local_c8;
  
  FSlateBrush::FSlateBrush(&local_228);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_228,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_228);
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
  pUVar4 = local_res20;
  FVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar5 = FSlateBrush::FSlateBrush(&local_c8,&local_228);
  this = TryGetDynamicMaterial(pFVar5,(UObject *)0x0,(UMaterialInterface *)0x0);
  if (this != (UMaterialInstanceDynamic *)0x0) {
    UMaterialInstanceDynamic::SetTextureParameterValue(this,FVar3,pUVar4);
  }
  FSlateBrush::FSlateBrush(&local_178,pFVar5);
  pTVar2 = (pFVar5->ResourceHandle).Data.SharedReferenceCount.ReferenceController;
  pFVar5->_padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  FSlateBrush::operator=(param_3,&local_178);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_228._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_228.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return;
}

// execConv_SetTextureParameterMID @ 14a76a120

void __cdecl
UMVVMSlateBrushConversionLibrary::execConv_SetTextureParameterMID
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FName FVar3;
  UTexture *pUVar4;
  UMaterialInterface *pUVar5;
  FSlateBrush *pFVar6;
  UMaterialInstanceDynamic *this;
  FName local_res10;
  UTexture *local_res20;
  UMaterialInterface *local_238 [2];
  FSlateBrush local_228;
  FSlateBrush local_178;
  FSlateBrush local_c8;
  
  FSlateBrush::FSlateBrush(&local_228);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_228,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_228);
  }
  local_238[0] = (UMaterialInterface *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_238,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_238);
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
  pUVar5 = local_238[0];
  pUVar4 = local_res20;
  FVar3 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar6 = FSlateBrush::FSlateBrush(&local_c8,&local_228);
  this = TryGetDynamicMaterial(pFVar6,(UObject *)0x0,pUVar5);
  if (this != (UMaterialInstanceDynamic *)0x0) {
    UMaterialInstanceDynamic::SetTextureParameterValue(this,FVar3,pUVar4);
  }
  FSlateBrush::FSlateBrush(&local_178,pFVar6);
  pTVar2 = (pFVar6->ResourceHandle).Data.SharedReferenceCount.ReferenceController;
  pFVar6->_padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  FSlateBrush::operator=(param_3,&local_178);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_228._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_228.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return;
}

// execConv_SetVectorParameter @ 14a76a4d0

void __cdecl
UMVVMSlateBrushConversionLibrary::execConv_SetVectorParameter
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FName FVar3;
  FSlateBrush *pFVar4;
  UMaterialInstanceDynamic *this;
  FName local_res10;
  FLinearColor_u_0 local_238;
  undefined8 local_228;
  undefined8 uStack_220;
  FSlateBrush local_218;
  FSlateBrush local_168;
  FSlateBrush local_b8;
  
  FSlateBrush::FSlateBrush(&local_218);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_218,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_218);
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
    FFrame::StepExplicitProperty(param_2,&local_228,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_228);
  }
  FVar3 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_238._0_8_ = local_228;
  local_238._8_8_ = uStack_220;
  pFVar4 = FSlateBrush::FSlateBrush(&local_b8,&local_218);
  this = TryGetDynamicMaterial(pFVar4,(UObject *)0x0,(UMaterialInterface *)0x0);
  if (this != (UMaterialInstanceDynamic *)0x0) {
    UMaterialInstanceDynamic::SetVectorParameterValue(this,FVar3,(FLinearColor *)&local_238._s_0);
  }
  FSlateBrush::FSlateBrush(&local_168,pFVar4);
  pTVar2 = (pFVar4->ResourceHandle).Data.SharedReferenceCount.ReferenceController;
  pFVar4->_padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  FSlateBrush::operator=(param_3,&local_168);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_168.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_218._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_218.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return;
}

// execConv_SetVectorParameterMID @ 14a76a880

void __cdecl
UMVVMSlateBrushConversionLibrary::execConv_SetVectorParameterMID
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FName FVar3;
  UMaterialInterface *pUVar4;
  FSlateBrush *pFVar5;
  UMaterialInstanceDynamic *this;
  FName local_res10;
  UMaterialInterface *local_res20;
  FLinearColor_u_0 local_248;
  undefined8 local_238;
  undefined8 uStack_230;
  FSlateBrush local_228;
  FSlateBrush local_178;
  FSlateBrush local_c8;
  
  FSlateBrush::FSlateBrush(&local_228);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_228,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_228);
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
    FFrame::StepExplicitProperty(param_2,&local_238,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_238);
  }
  pUVar4 = local_res20;
  FVar3 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_248._0_8_ = local_238;
  local_248._8_8_ = uStack_230;
  pFVar5 = FSlateBrush::FSlateBrush(&local_c8,&local_228);
  this = TryGetDynamicMaterial(pFVar5,(UObject *)0x0,pUVar4);
  if (this != (UMaterialInstanceDynamic *)0x0) {
    UMaterialInstanceDynamic::SetVectorParameterValue(this,FVar3,(FLinearColor *)&local_248._s_0);
  }
  FSlateBrush::FSlateBrush(&local_178,pFVar5);
  pTVar2 = (pFVar5->ResourceHandle).Data.SharedReferenceCount.ReferenceController;
  pFVar5->_padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  FSlateBrush::operator=(param_3,&local_178);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_228._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_228.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return;
}

// execConv_SetVectorParameterMID_FColor @ 14a76acc0

void __cdecl
UMVVMSlateBrushConversionLibrary::execConv_SetVectorParameterMID_FColor
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FName FVar3;
  UMaterialInterface *pUVar4;
  FSlateBrush *pFVar5;
  UMaterialInstanceDynamic *this;
  uint local_res10 [2];
  FName local_res20;
  UMaterialInterface *local_258 [2];
  FLinearColor_u_0 local_248;
  FSlateBrush local_238;
  FSlateBrush local_188;
  FSlateBrush local_d8;
  
  FSlateBrush::FSlateBrush(&local_238);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_238,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_238);
  }
  local_258[0] = (UMaterialInterface *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_258,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_258);
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
  pUVar4 = local_258[0];
  FVar3 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar5 = FSlateBrush::FSlateBrush(&local_d8,&local_238);
  this = TryGetDynamicMaterial(pFVar5,(UObject *)0x0,pUVar4);
  if (this != (UMaterialInstanceDynamic *)0x0) {
    local_248._s_0.R = FLinearColor::sRGBToLinearTable[local_res10[0] >> 0x10 & 0xff];
    local_248._s_0.A = (float)(local_res10[0] >> 0x18) * __real_3b808081;
    local_248._s_0.G = FLinearColor::sRGBToLinearTable[local_res10[0] >> 8 & 0xff];
    local_248._s_0.B = FLinearColor::sRGBToLinearTable[local_res10[0] & 0xff];
    UMaterialInstanceDynamic::SetVectorParameterValue(this,FVar3,(FLinearColor *)&local_248._s_0);
  }
  FSlateBrush::FSlateBrush(&local_188,pFVar5);
  pTVar2 = (pFVar5->ResourceHandle).Data.SharedReferenceCount.ReferenceController;
  pFVar5->_padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  FSlateBrush::operator=(param_3,&local_188);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_188.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_238._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_238.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return;
}

// execConv_SetVectorParameter_FColor @ 14a76b120

void __cdecl
UMVVMSlateBrushConversionLibrary::execConv_SetVectorParameter_FColor
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TReferenceControllerBase<1> *pTVar2;
  FName FVar3;
  FSlateBrush *pFVar4;
  UMaterialInstanceDynamic *this;
  uint local_res10 [2];
  FName local_res20;
  FLinearColor_u_0 local_238;
  FSlateBrush local_228;
  FSlateBrush local_178;
  FSlateBrush local_c8;
  
  FSlateBrush::FSlateBrush(&local_228);
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_228,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_228);
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
  FVar3 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar4 = FSlateBrush::FSlateBrush(&local_c8,&local_228);
  this = TryGetDynamicMaterial(pFVar4,(UObject *)0x0,(UMaterialInterface *)0x0);
  if (this != (UMaterialInstanceDynamic *)0x0) {
    local_238._s_0.R = FLinearColor::sRGBToLinearTable[local_res10[0] >> 0x10 & 0xff];
    local_238._s_0.A = (float)(local_res10[0] >> 0x18) * __real_3b808081;
    local_238._s_0.G = FLinearColor::sRGBToLinearTable[local_res10[0] >> 8 & 0xff];
    local_238._s_0.B = FLinearColor::sRGBToLinearTable[local_res10[0] & 0xff];
    UMaterialInstanceDynamic::SetVectorParameterValue(this,FVar3,(FLinearColor *)&local_238._s_0);
  }
  FSlateBrush::FSlateBrush(&local_178,pFVar4);
  pTVar2 = (pFVar4->ResourceHandle).Data.SharedReferenceCount.ReferenceController;
  pFVar4->_padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar2);
  FSlateBrush::operator=(param_3,&local_178);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_178.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  local_228._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_228.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return;
}

