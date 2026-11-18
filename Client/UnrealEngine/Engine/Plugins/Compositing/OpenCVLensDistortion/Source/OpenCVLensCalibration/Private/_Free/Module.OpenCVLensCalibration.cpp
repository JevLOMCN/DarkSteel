// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: OpenCVLensCalibration
// Functions: 37

// UnitVectors'' @ 1413e0350

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl `dynamic_initializer_for_'FOpenCVHelper::UnitVectors__(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  ForAnyElementType FVar7;
  
  uVar6 = _UNK_1508ffb28;
  uVar5 = ___xmm_bff00000000000000000000000000000;
  uVar4 = _UNK_15076c6f8;
  uVar3 = ___xmm_bff00000000000003ff0000000000000;
  uVar2 = _UNK_150689518;
  uVar1 = ___xmm_00000000000000003ff0000000000000;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,6,0,&FOpenCVHelper::UnitVectors.AllocatorInstance,6,
             &FOpenCVHelper::UnitVectors.ArrayMax);
  FVar7 = FOpenCVHelper::UnitVectors.AllocatorInstance;
  *(undefined8 *)FOpenCVHelper::UnitVectors.AllocatorInstance.Data = uVar1;
  *(undefined8 *)(FVar7.Data + 8) = uVar2;
  *(undefined8 *)(FVar7.Data + 0x10) = 0;
  *(undefined8 *)(FVar7.Data + 0x18) = 0;
  *(undefined8 *)(FVar7.Data + 0x20) = uVar1;
  *(undefined8 *)(FVar7.Data + 0x28) = uVar2;
  *(undefined8 *)(FVar7.Data + 0x30) = 0;
  *(undefined8 *)(FVar7.Data + 0x38) = 0;
  *(undefined8 *)(FVar7.Data + 0x40) = uVar3;
  *(undefined8 *)(FVar7.Data + 0x48) = uVar4;
  *(undefined8 *)(FVar7.Data + 0x50) = 0;
  *(undefined8 *)(FVar7.Data + 0x58) = 0;
  *(undefined8 *)(FVar7.Data + 0x60) = uVar5;
  *(undefined8 *)(FVar7.Data + 0x68) = uVar6;
  *(undefined8 *)(FVar7.Data + 0x70) = 0;
  *(undefined8 *)(FVar7.Data + 0x78) = 0;
  *(undefined8 *)(FVar7.Data + 0x80) = uVar5;
  *(undefined8 *)(FVar7.Data + 0x88) = uVar6;
  atexit(`dynamic_atexit_destructor_for_'FOpenCVHelper::UnitVectors__);
  return;
}

// `dynamic_initializer_for_'LogOpenCVLensCalibration'' @ 1413e0480

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogOpenCVLensCalibration__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogOpenCVLensCalibration,L"LogOpenCVLensCalibration",Verbose,All);
  atexit(_dynamic_atexit_destructor_for__LogOpenCVLensCalibration__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantOpenCVLensCalibration'' @ 1413e04c0

void __cdecl _dynamic_initializer_for__ModuleRegistrantOpenCVLensCalibration__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "OpenCVLensCalibration";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"OpenCVLensCalibration",0x15);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FOpenCVLensCalibrationModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensCalibration_Private_OpenCVLensCalibrator_h__Script_OpenCVLensCalibration_1183924089'' @ 1413e0510

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensCalibration_Private_OpenCVLensCalibrator_h__Script_OpenCVLensCalibration_1183924089__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/OpenCVLensCalibration",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Compositing_OpenCVLensDistortion_Source_OpenCVLensCalibration_Private_OpenCVLensCalibrator_h__Script_OpenCVLensCalibration_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_OpenCVLensCalibration'' @ 1413e0550

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_OpenCVLensCalibration__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0xc7c022c1;
  local_res8[0].DeclarationsHash = 0x5e7ab26e;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_OpenCVLensCalibration,L"/Script/OpenCVLensCalibration",
             &Z_Registration_Info_UPackage__Script_OpenCVLensCalibration,local_res8);
  return;
}

// Z_Construct_UPackage__Script_OpenCVLensCalibration @ 14d7e30f0

UPackage * __cdecl Z_Construct_UPackage__Script_OpenCVLensCalibration(void)

{
  if (Z_Registration_Info_UPackage__Script_OpenCVLensCalibration.OuterSingleton == (UPackage *)0x0)
  {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_OpenCVLensCalibration.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_OpenCVLensCalibration.OuterSingleton;
}

// Z_Construct_UClass_UOpenCVLensCalibrator_NoRegister @ 14d7e3130

UClass * __cdecl Z_Construct_UClass_UOpenCVLensCalibrator_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UOpenCVLensCalibrator.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/OpenCVLensCalibration",L"OpenCVLensCalibrator",
               &Z_Registration_Info_UClass_UOpenCVLensCalibrator.InnerSingleton,
               UOpenCVLensCalibrator::StaticRegisterNativesUOpenCVLensCalibrator,0x90,8,
               CLASS_Intrinsic,CASTCLASS_None,L"Engine",InternalConstructor<UOpenCVLensCalibrator>,
               InternalVTableHelperCtorCaller<UOpenCVLensCalibrator>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UOpenCVLensCalibrator.InnerSingleton;
}

// Z_Construct_UClass_UOpenCVLensCalibrator @ 14d7e3290

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_UOpenCVLensCalibrator(void)

{
  if (Z_Registration_Info_UClass_UOpenCVLensCalibrator.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_UOpenCVLensCalibrator.OuterSingleton,
               &Z_Construct_UClass_UOpenCVLensCalibrator_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_UOpenCVLensCalibrator.OuterSingleton;
}

// NewProp_ReturnValue_SetBit @ 14d7e32d0

void __cdecl
Z_Construct_UFunction_UOpenCVLensCalibrator_CalculateLensParameters_Statics::
NewProp_ReturnValue_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x58) = 1;
  return;
}

// Z_Construct_UFunction_UOpenCVLensCalibrator_CalculateLensParameters @ 14d7e32e0

UFunction * __cdecl Z_Construct_UFunction_UOpenCVLensCalibrator_CalculateLensParameters(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UOpenCVLensCalibrator_CalculateLensParameters_Statics::
                FuncParams);
  }
  return ReturnFunction;
}

// NewProp_bUseFisheyeModel_SetBit @ 14d7e3320

void __cdecl
Z_Construct_UFunction_UOpenCVLensCalibrator_CreateCalibrator_Statics::
NewProp_bUseFisheyeModel_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0xc) = 1;
  return;
}

// Z_Construct_UFunction_UOpenCVLensCalibrator_CreateCalibrator @ 14d7e3330

UFunction * __cdecl Z_Construct_UFunction_UOpenCVLensCalibrator_CreateCalibrator(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UOpenCVLensCalibrator_CreateCalibrator_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14d7e3370

void __cdecl
Z_Construct_UFunction_UOpenCVLensCalibrator_FeedImage_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x10) = 1;
  return;
}

// Z_Construct_UFunction_UOpenCVLensCalibrator_FeedImage @ 14d7e3380

UFunction * __cdecl Z_Construct_UFunction_UOpenCVLensCalibrator_FeedImage(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UOpenCVLensCalibrator_FeedImage_Statics::FuncParams);
  }
  return ReturnFunction;
}

// NewProp_ReturnValue_SetBit @ 14d7e33c0

void __cdecl
Z_Construct_UFunction_UOpenCVLensCalibrator_FeedRenderTarget_Statics::NewProp_ReturnValue_SetBit
          (void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 8) = 1;
  return;
}

// Z_Construct_UFunction_UOpenCVLensCalibrator_FeedRenderTarget @ 14d7e33d0

UFunction * __cdecl Z_Construct_UFunction_UOpenCVLensCalibrator_FeedRenderTarget(void)

{
  if (ReturnFunction == (UFunction *)0x0) {
    UECodeGen_Private::ConstructUFunction
              (&ReturnFunction,
               &Z_Construct_UFunction_UOpenCVLensCalibrator_FeedRenderTarget_Statics::FuncParams);
  }
  return ReturnFunction;
}

// `scalar_deleting_destructor' @ 14d7e3410

void * __thiscall
IOpenCVLensCalibrationModule::_scalar_deleting_destructor_
          (IOpenCVLensCalibrationModule *this,uint param_1)

{
  *this = (IOpenCVLensCalibrationModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14d7e3450

void * __thiscall
FOpenCVLensCalibrationModule::_scalar_deleting_destructor_
          (FOpenCVLensCalibrationModule *this,uint param_1)

{
  *this = (FOpenCVLensCalibrationModule)IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// _InputArray<cv::Point3_<float>_> @ 14d7e3490

_InputArray * __thiscall
cv::_InputArray::_InputArray<cv::Point3_<float>_>
          (_InputArray *this,
          vector<std::vector<cv::Point3_<float>,std::allocator<cv::Point3_<float>_>_>,std::allocator<std::vector<cv::Point3_<float>,std::allocator<cv::Point3_<float>_>_>_>_>
          *param_1)

{
  this->flags = -0x7efbffeb;
  (this->sz).width = 0;
  (this->sz).height = 0;
  this->obj = param_1;
  return this;
}

// InternalConstructor<UOpenCVLensCalibrator> @ 14d7e34b0

void __cdecl InternalConstructor<UOpenCVLensCalibrator>(FObjectInitializer *param_1)

{
  UObject *this;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this,param_1);
    *(undefined ***)this = &___7UOpenCVLensCalibrator__6B_;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)(this + 2) = 0;
    *(undefined8 *)&this[2].field_0x8 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined8 *)&this[2].field_0x18 = 0;
    *(undefined8 *)&this[2].field_0x20 = 0;
    *(undefined8 *)(this + 3) = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
  }
  return;
}

// InternalVTableHelperCtorCaller<UOpenCVLensCalibrator> @ 14d7e3510

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<UOpenCVLensCalibrator>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = UOpenCVLensCalibrator::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7UOpenCVLensCalibrator__6B_;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 2) = 0;
    *(undefined8 *)&pUVar1[2].field_0x8 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined8 *)&pUVar1[2].field_0x18 = 0;
    *(undefined8 *)&pUVar1[2].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 3) = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// NewObject<UOpenCVLensCalibrator> @ 14d7e35e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UOpenCVLensCalibrator * __cdecl NewObject<UOpenCVLensCalibrator>(UObject *param_1)

{
  UClass *pUVar1;
  UOpenCVLensCalibrator *pUVar2;
  longlong *plVar3;
  undefined1 auStack_b8 [32];
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_b8;
  FObjectInitializer::AssertIfInConstructor
            (param_1,
             L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
            );
  pUVar1 = UOpenCVLensCalibrator::StaticClass();
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_98,pUVar1);
  local_98._8_8_ = param_1;
  pUVar2 = (UOpenCVLensCalibrator *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_98);
  if (local_98._64_8_ != 0) {
    plVar3 = (longlong *)(local_98 + 0x50);
    if ((longlong *)local_98._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_98._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// _Copy_memmove<cv::Point3_<float>_*,cv::Point3_<float>_*> @ 14d7e3680

Point3_<float> * __cdecl
std::_Copy_memmove<cv::Point3_<float>_*,cv::Point3_<float>_*>
          (Point3_<float> *param_1,Point3_<float> *param_2,Point3_<float> *param_3)

{
  memmove(param_3,param_1,(longlong)param_2 - (longlong)param_1);
  return (Point3_<float> *)(((longlong)param_2 - (longlong)param_1) + (longlong)param_3);
}

// _Copy_memmove_tail<cv::Point3_<float>_*> @ 14d7e36c0

Point3_<float> * __cdecl
std::_Copy_memmove_tail<cv::Point3_<float>_*>
          (char *param_1,Point3_<float> *param_2,ulong64 param_3,ulong64 param_4)

{
  memmove(param_2,param_1,param_3);
  return (Point3_<float> *)((longlong)&param_2->x + param_3);
}

// _Emplace_reallocate<cv::Point3_<float>_> @ 14d7e36f0

Point3_<float> * __thiscall
std::vector<cv::Point3_<float>,std::allocator<cv::Point3_<float>_>_>::
_Emplace_reallocate<cv::Point3_<float>_>
          (vector<cv::Point3_<float>,std::allocator<cv::Point3_<float>_>_> *this,
          Point3_<float> *param_1,Point3_<float> *param_2)

{
  ulonglong uVar1;
  ulonglong uVar2;
  Point3_<float> *pPVar3;
  Point3_<float> *_Src;
  float fVar4;
  Point3_<float> *_Dst;
  Point3_<float> *pPVar5;
  longlong lVar6;
  ulonglong uVar7;
  size_t _Size;
  longlong lVar8;
  
  pPVar3 = (this->_Mypair)._Myval2._Myfirst;
  lVar6 = ((longlong)param_1 - (longlong)pPVar3) / 6 +
          ((longlong)param_1 - (longlong)pPVar3 >> 0x3f);
  lVar8 = (lVar6 >> 1) - (lVar6 >> 0x3f);
  lVar6 = ((longlong)(this->_Mypair)._Myval2._Mylast - (longlong)pPVar3) / 0xc;
  if (lVar6 == 0x1555555555555555) {
                    /* WARNING: Subroutine does not return */
    _Xlength();
  }
  uVar1 = lVar6 + 1;
  uVar2 = ((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pPVar3) / 0xc;
  if (0x1555555555555555 - (uVar2 >> 1) < uVar2) {
    uVar7 = 0x1555555555555555;
  }
  else {
    uVar2 = (uVar2 >> 1) + uVar2;
    uVar7 = uVar1;
    if (uVar1 <= uVar2) {
      uVar7 = uVar2;
    }
    if (0x1555555555555555 < uVar7) {
                    /* WARNING: Subroutine does not return */
      _Throw_bad_array_new_length();
    }
  }
  _Dst = _Allocate<16,std::_Default_allocate_traits>(uVar7 * 0xc);
  fVar4 = param_2->y;
  _Dst[lVar8].x = param_2->x;
  _Dst[lVar8].y = fVar4;
  pPVar3 = _Dst + lVar8;
  pPVar3->z = param_2->z;
  pPVar5 = (this->_Mypair)._Myval2._Mylast;
  _Src = (this->_Mypair)._Myval2._Myfirst;
  if (param_1 == pPVar5) {
    _Size = (longlong)pPVar5 - (longlong)_Src;
    pPVar5 = _Dst;
    param_1 = _Src;
  }
  else {
    memmove(_Dst,_Src,(longlong)param_1 - (longlong)_Src);
    pPVar5 = pPVar3 + 1;
    _Size = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)param_1;
  }
  memmove(pPVar5,param_1,_Size);
  _Change_array(this,_Dst,uVar1,uVar7);
  return pPVar3;
}

// _Resize_reallocate<std::vector<cv::Point3_<float>,std::allocator<cv::Point3_<float>_>_>_> @ 14d7e3860

void __thiscall
std::
vector<std::vector<cv::Point3_<float>,std::allocator<cv::Point3_<float>_>_>,std::allocator<std::vector<cv::Point3_<float>,std::allocator<cv::Point3_<float>_>_>_>_>
::_Resize_reallocate<std::vector<cv::Point3_<float>,std::allocator<cv::Point3_<float>_>_>_>
          (vector<std::vector<cv::Point3_<float>,std::allocator<cv::Point3_<float>_>_>,std::allocator<std::vector<cv::Point3_<float>,std::allocator<cv::Point3_<float>_>_>_>_>
           *this,ulong64 param_1,
          vector<cv::Point3_<float>,std::allocator<cv::Point3_<float>_>_> *param_2)

{
  ulonglong uVar1;
  Point3_<float> *pPVar2;
  Point3_<float> *pPVar3;
  ulonglong uVar4;
  vector<cv::Point3_<float>,std::allocator<cv::Point3_<float>_>_> *pvVar5;
  vector<cv::Point3_<float>,std::allocator<cv::Point3_<float>_>_> *pvVar6;
  longlong lVar7;
  ulong64 uVar8;
  vector<cv::Point3_<float>,std::allocator<cv::Point3_<float>_>_> *pvVar9;
  Point3_<float> *pPVar10;
  Point3_<float> **ppPVar11;
  
  if (0xaaaaaaaaaaaaaaa < param_1) {
                    /* WARNING: Subroutine does not return */
    _Xlength();
  }
  lVar7 = (longlong)(this->_Mypair)._Myval2._Mylast - (longlong)(this->_Mypair)._Myval2._Myfirst;
  lVar7 = lVar7 / 6 + (lVar7 >> 0x3f);
  lVar7 = (lVar7 >> 2) - (lVar7 >> 0x3f);
  uVar1 = ((longlong)(this->_Mypair)._Myval2._Myend - (longlong)(this->_Mypair)._Myval2._Myfirst) /
          0x18;
  if (0xaaaaaaaaaaaaaaa - (uVar1 >> 1) < uVar1) {
    uVar4 = 0xaaaaaaaaaaaaaaa;
  }
  else {
    uVar1 = (uVar1 >> 1) + uVar1;
    uVar4 = param_1;
    if ((param_1 <= uVar1) && (uVar4 = uVar1, 0xaaaaaaaaaaaaaaa < uVar1)) {
                    /* WARNING: Subroutine does not return */
      _Throw_bad_array_new_length();
    }
  }
  pvVar5 = _Allocate<16,std::_Default_allocate_traits>(uVar4 * 0x18);
  _Uninitialized_fill_n<std::allocator<std::vector<cv::Point3_<float>,std::allocator<cv::Point3_<float>_>_>_>_>
            (pvVar5 + lVar7,param_1 - lVar7,param_2,
             (allocator<std::vector<cv::Point3_<float>,std::allocator<cv::Point3_<float>_>_>_> *)
             this);
  pvVar9 = (this->_Mypair)._Myval2._Mylast;
  pvVar6 = (this->_Mypair)._Myval2._Myfirst;
  if (pvVar6 != pvVar9) {
    ppPVar11 = &(pvVar5->_Mypair)._Myval2._Myend;
    do {
      pPVar2 = (pvVar6->_Mypair)._Myval2._Myend;
      pPVar10 = (pvVar6->_Mypair)._Myval2._Mylast;
      pPVar3 = (pvVar6->_Mypair)._Myval2._Myfirst;
      (pvVar6->_Mypair)._Myval2._Myend = (Point3_<float> *)0x0;
      (pvVar6->_Mypair)._Myval2._Mylast = (Point3_<float> *)0x0;
      (pvVar6->_Mypair)._Myval2._Myfirst = (Point3_<float> *)0x0;
      pvVar6 = pvVar6 + 1;
      ((_Vector_val<std::_Simple_types<cv::Point3_<float>_>_> *)(ppPVar11 + -2))->_Myfirst = pPVar3;
      ppPVar11[-1] = pPVar10;
      *ppPVar11 = pPVar2;
      ppPVar11 = ppPVar11 + 3;
    } while (pvVar6 != pvVar9);
  }
  pvVar9 = (this->_Mypair)._Myval2._Myfirst;
  if (pvVar9 != (vector<cv::Point3_<float>,std::allocator<cv::Point3_<float>_>_> *)0x0) {
    pvVar6 = (this->_Mypair)._Myval2._Mylast;
    for (; pvVar9 != pvVar6; pvVar9 = pvVar9 + 1) {
      vector<cv::Point3_<float>,std::allocator<cv::Point3_<float>_>_>::_Tidy(pvVar9);
    }
    pPVar2 = (Point3_<float> *)(this->_Mypair)._Myval2._Myfirst;
    uVar8 = (((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pPVar2) / 0x18) * 0x18;
    pPVar10 = pPVar2;
    if (0xfff < uVar8) {
      pPVar10 = *(Point3_<float> **)((longlong)(pPVar2 + -1) + 4);
      uVar8 = uVar8 + 0x27;
      if (0x1f < (ulonglong)((longlong)pPVar2 + (-8 - (longlong)pPVar10))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pPVar10,uVar8);
  }
  (this->_Mypair)._Myval2._Myfirst = pvVar5;
  (this->_Mypair)._Myval2._Mylast = pvVar5 + param_1;
  (this->_Mypair)._Myval2._Myend = pvVar5 + uVar4;
  return;
}

// _Uninitialized_fill_n<std::allocator<std::vector<cv::Point3_<float>,std::allocator<cv::Point3_<float>_>_>_>_> @ 14d7e3a60

vector<cv::Point3_<float>,std::allocator<cv::Point3_<float>_>_> * __cdecl
std::
_Uninitialized_fill_n<std::allocator<std::vector<cv::Point3_<float>,std::allocator<cv::Point3_<float>_>_>_>_>
          (vector<cv::Point3_<float>,std::allocator<cv::Point3_<float>_>_> *param_1,ulong64 param_2,
          vector<cv::Point3_<float>,std::allocator<cv::Point3_<float>_>_> *param_3,
          allocator<std::vector<cv::Point3_<float>,std::allocator<cv::Point3_<float>_>_>_> *param_4)

{
  Point3_<float> *_Src;
  ulonglong uVar1;
  Point3_<float> *_Dst;
  size_t _Size;
  
  do {
    if (param_2 == 0) {
      return param_1;
    }
    (param_1->_Mypair)._Myval2._Myfirst = (Point3_<float> *)0x0;
    (param_1->_Mypair)._Myval2._Mylast = (Point3_<float> *)0x0;
    (param_1->_Mypair)._Myval2._Myend = (Point3_<float> *)0x0;
    uVar1 = ((longlong)(param_3->_Mypair)._Myval2._Mylast -
            (longlong)(param_3->_Mypair)._Myval2._Myfirst) / 0xc;
    if (uVar1 != 0) {
      if (0x1555555555555555 < uVar1) {
                    /* WARNING: Subroutine does not return */
        vector<cv::Point3_<float>,std::allocator<cv::Point3_<float>_>_>::_Xlength();
      }
      _Dst = _Allocate<16,std::_Default_allocate_traits>(uVar1 * 0xc);
      (param_1->_Mypair)._Myval2._Myfirst = _Dst;
      (param_1->_Mypair)._Myval2._Mylast = _Dst;
      (param_1->_Mypair)._Myval2._Myend = _Dst + uVar1;
      _Src = (param_3->_Mypair)._Myval2._Myfirst;
      _Size = (longlong)(param_3->_Mypair)._Myval2._Mylast - (longlong)_Src;
      memmove(_Dst,_Src,_Size);
      (param_1->_Mypair)._Myval2._Mylast = _Dst + (longlong)_Size / 0xc;
    }
    param_1 = param_1 + 1;
    param_2 = param_2 - 1;
  } while( true );
}

// `scalar_deleting_destructor' @ 14d7e3c10

void * __thiscall
UOpenCVLensCalibrator::_scalar_deleting_destructor_(UOpenCVLensCalibrator *this,uint param_1)

{
  this->_padding_ = (longlong)&___7UOpenCVLensCalibrator__6B_;
  std::vector<cv::Point3_<float>,std::allocator<cv::Point3_<float>_>_>::_Tidy(&this->BoardPoints);
  std::
  vector<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>,std::allocator<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_>_>
  ::
  ~vector<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>,std::allocator<std::vector<cv::Point_<float>,std::allocator<cv::Point_<float>_>_>_>_>
            (&this->ImagePoints);
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x90);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeOpenCVLensCalibration_init @ 14d7e4ea0

void __cdecl EmptyLinkFunctionForGeneratedCodeOpenCVLensCalibration_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeOpenCVLensCalibrator @ 14d7e4eb0

void __cdecl EmptyLinkFunctionForGeneratedCodeOpenCVLensCalibrator(void)

{
  return;
}

// _Change_array @ 14d7e60c0

void __thiscall
std::vector<cv::Point3_<float>,std::allocator<cv::Point3_<float>_>_>::_Change_array
          (vector<cv::Point3_<float>,std::allocator<cv::Point3_<float>_>_> *this,
          Point3_<float> *param_1,ulong64 param_2,ulong64 param_3)

{
  Point3_<float> *pPVar1;
  Point3_<float> *pPVar2;
  ulong64 uVar3;
  
  pPVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (pPVar1 != (Point3_<float> *)0x0) {
    uVar3 = (((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pPVar1) / 0xc) * 0xc;
    pPVar2 = pPVar1;
    if (0xfff < uVar3) {
      pPVar2 = *(Point3_<float> **)&pPVar1[-1].y;
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)pPVar1 + (-8 - (longlong)pPVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pPVar2,uVar3);
  }
  (this->_Mypair)._Myval2._Myfirst = param_1;
  (this->_Mypair)._Myval2._Mylast = param_1 + param_2;
  (this->_Mypair)._Myval2._Myend = param_1 + param_3;
  return;
}

// _Tidy @ 14d7e6190

void __thiscall
std::vector<cv::Point3_<float>,std::allocator<cv::Point3_<float>_>_>::_Tidy
          (vector<cv::Point3_<float>,std::allocator<cv::Point3_<float>_>_> *this)

{
  Point3_<float> *pPVar1;
  Point3_<float> *pPVar2;
  ulong64 uVar3;
  
  pPVar1 = (this->_Mypair)._Myval2._Myfirst;
  if (pPVar1 != (Point3_<float> *)0x0) {
    uVar3 = (((longlong)(this->_Mypair)._Myval2._Myend - (longlong)pPVar1) / 0xc) * 0xc;
    pPVar2 = pPVar1;
    if (0xfff < uVar3) {
      pPVar2 = *(Point3_<float> **)&pPVar1[-1].y;
      uVar3 = uVar3 + 0x27;
      if (0x1f < (ulonglong)((longlong)pPVar1 + (-8 - (longlong)pPVar2))) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
    }
    ::operator_delete(pPVar2,uVar3);
    (this->_Mypair)._Myval2._Myfirst = (Point3_<float> *)0x0;
    (this->_Mypair)._Myval2._Mylast = (Point3_<float> *)0x0;
    (this->_Mypair)._Myval2._Myend = (Point3_<float> *)0x0;
  }
  return;
}

// _Xlength @ 14d7e6230

void __cdecl std::vector<cv::Point3_<float>,std::allocator<cv::Point3_<float>_>_>::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// _Xlength @ 14d7e6250

void __cdecl
std::
vector<std::vector<cv::Point3_<float>,std::allocator<cv::Point3_<float>_>_>,std::allocator<std::vector<cv::Point3_<float>,std::allocator<cv::Point3_<float>_>_>_>_>
::_Xlength(void)

{
  _Xlength_error("vector too long");
  return;
}

// IMPLEMENT_MODULE_OpenCVLensCalibration @ 14d7e6ed0

void __cdecl IMPLEMENT_MODULE_OpenCVLensCalibration(void)

{
  return;
}

// UnitVectors'' @ 15045a370

void __cdecl `dynamic_atexit_destructor_for_'FOpenCVHelper::UnitVectors__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FOpenCVHelper::UnitVectors.AllocatorInstance.Data;
  if (FOpenCVHelper::UnitVectors.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (FOpenCVHelper::UnitVectors.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'LogOpenCVLensCalibration'' @ 15045a390

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogOpenCVLensCalibration__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogOpenCVLensCalibration);
  return;
}

