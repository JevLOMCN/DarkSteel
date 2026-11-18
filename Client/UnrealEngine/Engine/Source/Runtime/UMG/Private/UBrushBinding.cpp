// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: UMG
// Functions: 10

// StaticClass @ 1468ddc60

UClass * __cdecl UBrushBinding::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBrushBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"BrushBinding",
               &Z_Registration_Info_UClass_UBrushBinding.InnerSingleton,
               StaticRegisterNativesUBrushBinding,0x78,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UBrushBinding>,InternalVTableHelperCtorCaller<UBrushBinding>,
               local_res8,UPropertyBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBrushBinding.InnerSingleton;
}

// UBrushBinding @ 146900a10

UBrushBinding * __thiscall UBrushBinding::UBrushBinding(UBrushBinding *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UPropertyBinding__6B_;
  this->_padding_ = 0;
  FCachedPropertyPath::FCachedPropertyPath((FCachedPropertyPath *)&this->_padding_);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UBrushBinding__6B_;
  (this->bConversion).bIsSet = false;
  return this;
}

// UBrushBinding @ 146900a70

UBrushBinding * __thiscall UBrushBinding::UBrushBinding(UBrushBinding *this)

{
  UObject::UObject((UObject *)this);
  this->_padding_ = (longlong)&___7UPropertyBinding__6B_;
  this->_padding_ = 0;
  FCachedPropertyPath::FCachedPropertyPath((FCachedPropertyPath *)&this->_padding_);
  this->_padding_ = 0;
  this->_padding_ = (longlong)&___7UBrushBinding__6B_;
  (this->bConversion).bIsSet = false;
  return this;
}

// ~UBrushBinding @ 146904640

void __thiscall UBrushBinding::~UBrushBinding(UBrushBinding *this)

{
  this->_padding_ = (longlong)&___7UPropertyBinding__6B_;
  FCachedPropertyPath::~FCachedPropertyPath((FCachedPropertyPath *)&this->_padding_);
  UObject::~UObject((UObject *)this);
  return;
}

// GetPrivateStaticClass @ 146921ab0

UClass * __cdecl UBrushBinding::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UBrushBinding.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/UMG",L"BrushBinding",
               &Z_Registration_Info_UClass_UBrushBinding.InnerSingleton,
               StaticRegisterNativesUBrushBinding,0x78,8,CLASS_Intrinsic,CASTCLASS_None,L"Engine",
               InternalConstructor<UBrushBinding>,InternalVTableHelperCtorCaller<UBrushBinding>,
               local_res8,UPropertyBinding::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UBrushBinding.InnerSingleton;
}

// GetValue @ 1469273b0

FSlateBrush * __thiscall
UBrushBinding::GetValue(UBrushBinding *this,FSlateBrush *__return_storage_ptr__)

{
  TOptional<UBrushBinding::EConversion> *pTVar1;
  longlong *this_00;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  UObject *pUVar5;
  UObject *pUVar6;
  UFunction *pUVar7;
  void *pvVar8;
  UClass *pUVar9;
  FSlateBrush *pFVar10;
  FProperty *local_res8;
  UTexture2D *local_res18;
  TVector2<float>_u_0 local_res20;
  char local_1a8;
  undefined2 local_1a7 [3];
  FPropertyPathResolver local_1a0;
  FSlateBrush *local_198;
  FProperty **local_190;
  FSlateBrush local_188;
  undefined **local_d8 [20];
  TReferenceControllerBase<1> *local_38;
  
  pUVar5 = FWeakObjectPtr::Get((FWeakObjectPtr *)&this->_padding_);
  if (pUVar5 != (UObject *)0x0) {
    pTVar1 = &this->bConversion;
    if (((this->bConversion).bIsSet == false) || (pTVar1->TypedValue == None)) {
      FSlateBrush::FSlateBrush(&local_188);
      this_00 = &this->_padding_;
      bVar4 = FCachedPropertyPath::IsFullyResolved((FCachedPropertyPath *)this_00);
      if (bVar4) {
        pUVar6 = FCachedPropertyPath::GetCachedContainer((FCachedPropertyPath *)this_00);
        if ((pUVar5 != pUVar6) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InContainer == InPropertyPath.GetCachedContainer()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                               ,0x18b,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar10 = (FSlateBrush *)(*pcVar3)();
          return pFVar10;
        }
        bVar4 = FCachedPropertyPath::IsResolved((FCachedPropertyPath *)this_00);
        if ((!bVar4) &&
           (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                              ("InPropertyPath.IsResolved()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\PropertyPath\\Public\\PropertyPathHelpers.h"
                               ,0x18c,L""), bVar4)) {
          pcVar3 = (code *)swi(3);
          pFVar10 = (FSlateBrush *)(*pcVar3)();
          return pFVar10;
        }
        pUVar7 = FCachedPropertyPath::GetCachedFunction((FCachedPropertyPath *)this_00);
        if (pUVar7 == (UFunction *)0x0) {
          pvVar8 = FCachedPropertyPath::GetCachedAddress((FCachedPropertyPath *)this_00);
          bVar4 = false;
          if (pvVar8 != (void *)0x0) {
            bVar4 = PropertyPathHelpersInternal::FGetValueFastHelper<FSlateBrush>::GetValue
                              ((FCachedPropertyPath *)this_00,&local_188,&local_res8);
          }
        }
        else {
          pUVar7 = FCachedPropertyPath::GetCachedFunction((FCachedPropertyPath *)this_00);
          bVar4 = PropertyPathHelpersInternal::FCallGetterFunctionHelper<FSlateBrush,UObject>::
                  CallGetterFunction(pUVar5,pUVar7,&local_188);
        }
      }
      else {
        local_1a0 = (FPropertyPathResolver)
                    &___7__FInternalGetterResolver_UFSlateBrush___PropertyPathHelpersInternal__6B_;
        local_198 = &local_188;
        local_190 = &local_res8;
        bVar4 = PropertyPathHelpersInternal::ResolvePropertyPath
                          (pUVar5,(FCachedPropertyPath *)this_00,&local_1a0);
      }
      if (bVar4 != false) {
        if ((TOptional<UBrushBinding::EConversion> *)&local_1a8 != pTVar1) {
          pTVar1->TypedValue = None;
          pTVar1->bIsSet = true;
        }
        FSlateBrush::FSlateBrush(__return_storage_ptr__,&local_188);
        local_188._padding_ = (longlong)&___7FSlateBrush__6B_;
        local_38 = local_188.ResourceHandle.Data.SharedReferenceCount.ReferenceController;
        goto LAB_146927611;
      }
      local_188._padding_ = (longlong)&___7FSlateBrush__6B_;
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_188.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
    }
    if (((((this->bConversion).bIsSet == false) || (pTVar1->TypedValue == Texture)) &&
        (bVar4 = FDynamicPropertyPath::GetValue<UObject_*>
                           ((FDynamicPropertyPath *)&this->_padding_,pUVar5,(UObject **)&local_res18
                           ), bVar4)) && (local_res18 != (UTexture2D *)0x0)) {
      pUVar9 = Z_Construct_UClass_UTexture2D_NoRegister();
      iVar2 = (int)pUVar9->_padding_;
      if ((iVar2 <= *(int *)(local_res18->_padding_ + 0x38)) &&
         ((longlong *)
          *(undefined1 **)(*(longlong *)(local_res18->_padding_ + 0x30) + (longlong)iVar2 * 8) ==
          &pUVar9->_padding_)) {
        pTVar1 = &this->bConversion;
        if ((TOptional<UBrushBinding::EConversion> *)local_1a7 != pTVar1) {
          pTVar1->TypedValue = Texture;
          pTVar1->bIsSet = true;
        }
        pUVar9 = Z_Construct_UClass_UWidgetBlueprintLibrary_NoRegister();
        if ((pUVar9->ClassDefaultObject).field0_0x0.DebugPtr == (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper(pUVar9);
        }
        UWidgetBlueprintLibrary::MakeBrushFromTexture(__return_storage_ptr__,local_res18,0,0);
        return __return_storage_ptr__;
      }
    }
  }
  local_res20 = UE::Math::TVector2<float>::ZeroVector.field0_0x0;
  pFVar10 = (FSlateBrush *)
            FSlateNoResource::FSlateNoResource
                      ((FSlateNoResource *)local_d8,(FDeprecateVector2DParameter *)&local_res20._s_0
                      );
  FSlateBrush::FSlateBrush(__return_storage_ptr__,pFVar10);
  local_d8[0] = &___7FSlateBrush__6B_;
LAB_146927611:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_38);
  return __return_storage_ptr__;
}

// IsSupportedDestination @ 14692cf10

bool __thiscall UBrushBinding::IsSupportedDestination(UBrushBinding *this,FProperty *param_1)

{
  UScriptStruct *pUVar1;
  
  if ((param_1 != (FProperty *)0x0) && ((*(uint *)(param_1->_padding_ + 0x18) >> 0x14 & 1) != 0)) {
    pUVar1 = FSlateBrush::StaticStruct();
    if ((UScriptStruct *)param_1[1]._padding_ == (UScriptStruct *)0x0) {
      return pUVar1 == (UScriptStruct *)0x0;
    }
    return (UScriptStruct *)param_1[1]._padding_ == pUVar1;
  }
  return false;
}

// IsSupportedSource @ 14692d2b0

bool __thiscall UBrushBinding::IsSupportedSource(UBrushBinding *this,FProperty *param_1)

{
  int iVar1;
  longlong lVar2;
  UClass *pUVar3;
  UScriptStruct *pUVar4;
  
  if ((param_1 == (FProperty *)0x0) || ((*(uint *)(param_1->_padding_ + 0x18) >> 0x10 & 1) == 0)) {
    if ((param_1 != (FProperty *)0x0) && ((*(uint *)(param_1->_padding_ + 0x18) >> 0x14 & 1) != 0))
    {
      pUVar4 = FSlateBrush::StaticStruct();
      if ((UScriptStruct *)param_1[1]._padding_ == (UScriptStruct *)0x0) {
        return pUVar4 == (UScriptStruct *)0x0;
      }
      return (UScriptStruct *)param_1[1]._padding_ == pUVar4;
    }
  }
  else {
    lVar2 = param_1[1]._padding_;
    pUVar3 = Z_Construct_UClass_UTexture2D_NoRegister();
    if (pUVar3 != (UClass *)0x0) {
      iVar1 = (int)pUVar3->_padding_;
      if ((iVar1 <= *(int *)(lVar2 + 0x38)) &&
         ((longlong *)*(undefined1 **)(*(longlong *)(lVar2 + 0x30) + (longlong)iVar1 * 8) ==
          &pUVar3->_padding_)) {
        return true;
      }
    }
  }
  return false;
}

// StaticRegisterNativesUBrushBinding @ 1469456b0

void __cdecl UBrushBinding::StaticRegisterNativesUBrushBinding(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 1;
  local_18.DataPtr = Z_Construct_UClass_UBrushBinding_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetValue @ 1469529c0

void __cdecl UBrushBinding::execGetValue(UObject *param_1,FFrame *param_2,void *param_3)

{
  FSlateBrush *pFVar1;
  FSlateBrush local_b8;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pFVar1 = GetValue((UBrushBinding *)param_1,&local_b8);
  FSlateBrush::operator=(param_3,pFVar1);
  local_b8._padding_ = (longlong)&___7FSlateBrush__6B_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_b8.ResourceHandle.Data.SharedReferenceCount.ReferenceController);
  return;
}

