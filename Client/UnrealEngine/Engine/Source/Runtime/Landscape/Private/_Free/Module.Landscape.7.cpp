// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Landscape
// Functions: 9

// ParameterName'' @ 14107db20

void __cdecl
`dynamic_initializer_for_'UMaterialExpressionLandscapeVisibilityMask::ParameterName__(void)

{
  ::FName::FName(&UMaterialExpressionLandscapeVisibilityMask::ParameterName,
                 "__LANDSCAPE_VISIBILITY__");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeVisibilityMask_h__Script_Landscape_1740397412'' @ 14107db40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeVisibilityMask_h__Script_Landscape_1740397412__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/Landscape",
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_Landscape_Classes_Materials_MaterialExpressionLandscapeVisibilityMask_h__Script_Landscape_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// Z_Construct_UClass_UMaterialExpressionLandscapeVisibilityMask @ 145fcb880

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UMaterialExpressionLandscapeVisibilityMask(void)

{
  if (Z_Registration_Info_UClass_UMaterialExpressionLandscapeVisibilityMask.OuterSingleton ==
      (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UMaterialExpressionLandscapeVisibilityMask.OuterSingleton
               ,&Z_Construct_UClass_UMaterialExpressionLandscapeVisibilityMask_Statics::ClassParams)
    ;
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLandscapeVisibilityMask.OuterSingleton;
}

// InternalConstructor<UMaterialExpressionLandscapeVisibilityMask> @ 145fcb8c0

void __cdecl
InternalConstructor<UMaterialExpressionLandscapeVisibilityMask>(FObjectInitializer *param_1)

{
  UMaterialExpression *this;
  ulonglong uVar1;
  
  this = (UMaterialExpression *)param_1->Obj;
  if (this != (UMaterialExpression *)0x0) {
    UMaterialExpression::UMaterialExpression(this,param_1);
    uVar1 = (ulonglong)_tls_index;
    this->_padding_ = (longlong)&___7UMaterialExpressionLandscapeVisibilityMask__6B_;
    if (*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + uVar1 * 8) + 0x9d4c) < _TSS0) {
      _Init_thread_header(&_TSS0);
      if (_TSS0 == -1) {
        FText::AsLocalizable_Advanced_LocText
                  (&ConstructorStatics.NAME_Landscape,L"Landscape",L"Landscape",L"Landscape");
        atexit(`UMaterialExpressionLandscapeVisibilityMask::
               UMaterialExpressionLandscapeVisibilityMask'::__l2::
               _dynamic_atexit_destructor_for__ConstructorStatics__);
        _Init_thread_footer(&_TSS0);
        return;
      }
    }
  }
  return;
}

// InternalVTableHelperCtorCaller<UMaterialExpressionLandscapeVisibilityMask> @ 145fcb970

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
InternalVTableHelperCtorCaller<UMaterialExpressionLandscapeVisibilityMask>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  UMaterialExpression *this;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UMaterialExpressionLandscapeVisibilityMask::GetPrivateStaticClass();
  this = (UMaterialExpression *)
         StaticAllocateObject
                   (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                    Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                    (FGCReconstructionGuard *)0x0);
  if (this != (UMaterialExpression *)0x0) {
    UMaterialExpression::UMaterialExpression(this,param_1);
    this->_padding_ = (longlong)&___7UMaterialExpressionLandscapeVisibilityMask__6B_;
    return (UObject *)this;
  }
  return (UObject *)0x0;
}

// `scalar_deleting_destructor' @ 145fcbb20

void * __thiscall
UMaterialExpressionLandscapeVisibilityMask::_scalar_deleting_destructor_
          (UMaterialExpressionLandscapeVisibilityMask *this,uint param_1)

{
  *(undefined ***)this = &___7UMaterialExpressionLandscapeVisibilityMask__6B_;
  UMaterialExpression::~UMaterialExpression((UMaterialExpression *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0xb0);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeMaterialExpressionLandscapeVisibilityMask @ 145fcbb90

void __cdecl EmptyLinkFunctionForGeneratedCodeMaterialExpressionLandscapeVisibilityMask(void)

{
  return;
}

// Z_Construct_UClass_UMaterialExpressionLandscapeVisibilityMask_NoRegister @ 145fcbd20

UClass * __cdecl Z_Construct_UClass_UMaterialExpressionLandscapeVisibilityMask_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UMaterialExpressionLandscapeVisibilityMask.InnerSingleton ==
      (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Landscape",L"MaterialExpressionLandscapeVisibilityMask",
               &Z_Registration_Info_UClass_UMaterialExpressionLandscapeVisibilityMask.InnerSingleton
               ,UMaterialExpressionLandscapeVisibilityMask::
                StaticRegisterNativesUMaterialExpressionLandscapeVisibilityMask,0xb0,8,
               CLASS_Intrinsic|CLASS_Optional|CLASS_Config,CASTCLASS_None,L"MaterialExpressions",
               InternalConstructor<UMaterialExpressionLandscapeVisibilityMask>,
               InternalVTableHelperCtorCaller<UMaterialExpressionLandscapeVisibilityMask>,local_res8
               ,UMaterialExpression::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UMaterialExpressionLandscapeVisibilityMask.InnerSingleton;
}

// `dynamic_atexit_destructor_for_'ConstructorStatics'' @ 1503d6410

void __cdecl
`UMaterialExpressionLandscapeVisibilityMask::UMaterialExpressionLandscapeVisibilityMask'::__l2::
_dynamic_atexit_destructor_for__ConstructorStatics__(void)

{
  if (::ConstructorStatics.NAME_Landscape.TextData.Reference != (ITextData *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001503d641f. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)((longlong)*::ConstructorStatics.NAME_Landscape.TextData.Reference + 0x10))();
    return;
  }
  return;
}

