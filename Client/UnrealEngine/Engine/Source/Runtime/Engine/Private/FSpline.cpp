// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 78

// StaticStruct @ 147a0ee20

UScriptStruct * __cdecl FSpline::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FSpline.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Engine();
    Z_Registration_Info_UScriptStruct_FSpline.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FSpline,(UObject *)pUVar1,L"Spline");
  }
  return Z_Registration_Info_UScriptStruct_FSpline.OuterSingleton;
}

// AddAttributeValue<float> @ 147a11e90

int __thiscall
FSpline::AddAttributeValue<float>(FSpline *this,float param_1,float *param_2,FName param_3)

{
  FNewSpline *this_00;
  int iVar1;
  
  this_00 = (this->NewData).Object;
  if ((this_00 != (FNewSpline *)0x0) && (this->CurrentImplementation == '\x02')) {
    iVar1 = FNewSpline::AddAttributeValue<float>(this_00,param_3,param_2,param_1);
    return iVar1;
  }
  return -1;
}

// AddAttributeValue<UE::Math::TVector<double>_> @ 147a12590

int __thiscall
FSpline::AddAttributeValue<UE::Math::TVector<double>_>
          (FSpline *this,float param_1,TVector<double> *param_2,FName param_3)

{
  FNewSpline *this_00;
  int iVar1;
  
  this_00 = (this->NewData).Object;
  if ((this_00 != (FNewSpline *)0x0) && (this->CurrentImplementation == '\x02')) {
    iVar1 = FNewSpline::AddAttributeValue<UE::Math::TVector<double>_>
                      (this_00,param_3,param_2,param_1);
    return iVar1;
  }
  return -1;
}

// CreateAttributeChannel<float> @ 147a132f0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FSpline::CreateAttributeChannel<float>(FSpline *this,FName param_1)

{
  FNewSpline *this_00;
  ForAnyElementType _Src;
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  TTangentBezierSpline<float> *pTVar4;
  longlong lVar5;
  FName local_res10;
  FString local_68;
  FString local_58;
  code *local_48 [2];
  undefined **local_38;
  code *local_30;
  undefined8 local_20;
  
  this_00 = (this->NewData).Object;
  if ((this_00 != (FNewSpline *)0x0) && (this->CurrentImplementation == '\x02')) {
    local_res10 = param_1;
    ::FString::FString(&local_58,L"TangentBezier");
    uVar2 = UE::Geometry::Spline::FSplineTypeRegistry::GetTypeId
                      (&local_58,&UE::Geometry::Spline::TSplineValueTypeTraits<float>::Name);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    if (uVar2 == 0) {
      puVar3 = UE::Geometry::Spline::TTangentBezierSpline<float>::GetStaticTypeId();
      uVar2 = *puVar3;
      ::FString::FString(&local_58,L"TangentBezier");
      _Src = UE::Geometry::Spline::TSplineValueTypeTraits<float>::Name.Data.AllocatorInstance;
      lVar5 = (longlong)UE::Geometry::Spline::TSplineValueTypeTraits<float>::Name.Data.ArrayNum;
      local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_68.Data.ArrayNum =
           UE::Geometry::Spline::TSplineValueTypeTraits<float>::Name.Data.ArrayNum;
      if (UE::Geometry::Spline::TSplineValueTypeTraits<float>::Name.Data.ArrayNum == 0) {
        local_68.Data.ArrayMax =
             UE::Geometry::Spline::TSplineValueTypeTraits<float>::Name.Data.ArrayNum;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,UE::Geometry::Spline::TSplineValueTypeTraits<float>::Name.Data.ArrayNum,0,
                   (ForAnyElementType *)&local_68,
                   UE::Geometry::Spline::TSplineValueTypeTraits<float>::Name.Data.ArrayNum,
                   &local_68.Data.ArrayMax);
        memcpy(local_68.Data.AllocatorInstance.Data,_Src.Data,lVar5 * 2);
      }
      local_20 = 0;
      local_38 = &
                 ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr_V__TTangentBezierSpline_M_Spline_Geometry_UE__U__TDefaultDelete_V__TTangentBezierSpline_M_Spline_Geometry_UE______XZ_0A__0A__Function_Private_Core_UE__6B_
      ;
      local_30 = `UE::Geometry::Spline::
                 TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                 ::CreateAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<float>_>'::__l5
                 ::<lambda_1>::<lambda_invoker_cdecl>;
      local_48[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<TUniquePtr<UE::Geometry::Spline::TTangentBezierSpline<float>,TDefaultDelete<UE::Geometry::Spline::TTangentBezierSpline<float>_>_>_(__cdecl*)(void),TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>_>
                    ::Call;
      bVar1 = UE::Geometry::Spline::FSplineTypeRegistry::RegisterType
                        (uVar2,&local_58,&local_68,
                         (TFunction<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl(void)>
                          *)local_48);
      if (!bVar1) {
        if (1 < (byte)UE::Geometry::Spline::LogSpline._0_1_) {
          UE::Logging::Private::BasicLog<2>
                    ((FStaticBasicLogRecord *)
                     &`public:_class_UE::Geometry::Spline::TTangentBezierSpline<float>*___ptr64___cdecl_UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::CreateAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<float>_>(FName_const&___ptr64)___ptr64'
                      ::__l9::LOG_Static,(FLogCategoryBase *)&UE::Geometry::Spline::LogSpline);
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (local_58.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
          return false;
        }
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
        return false;
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
    }
    ::FString::FString(&local_58,L"TangentBezier");
    UE::Geometry::Spline::
    TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
    CreateAttributeChannelInternal<float>
              ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                *)this_00,&local_res10,&local_58);
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    pTVar4 = UE::Geometry::Spline::
             TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
             GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<float>_>
                       ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                         *)this_00,local_res10);
    if (pTVar4 != (TTangentBezierSpline<float> *)0x0) {
      (**(code **)(pTVar4->_padding_ + 0x70))(pTVar4,1);
      (**(code **)(pTVar4->_padding_ + 0x78))(pTVar4,1);
      return true;
    }
  }
  return false;
}

// CreateAttributeChannel<UE::Math::TVector<double>_> @ 147a13520

bool __thiscall
FSpline::CreateAttributeChannel<UE::Math::TVector<double>_>(FSpline *this,FName param_1)

{
  FNewSpline *this_00;
  TTangentBezierSpline<UE::Math::TVector<double>_> *pTVar1;
  FName local_res10 [3];
  
  this_00 = (this->NewData).Object;
  if ((this_00 != (FNewSpline *)0x0) && (this->CurrentImplementation == '\x02')) {
    local_res10[0] = param_1;
    pTVar1 = UE::Geometry::Spline::
             TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
             CreateAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                       ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                         *)this_00,local_res10);
    if (pTVar1 != (TTangentBezierSpline<UE::Math::TVector<double>_> *)0x0) {
      (**(code **)(pTVar1->_padding_ + 0x70))(pTVar1,1);
      (**(code **)(pTVar1->_padding_ + 0x78))(pTVar1,1);
      return true;
    }
  }
  return false;
}

// EvaluateAttribute<float> @ 147a16780

/* WARNING: Type propagation algorithm not settling */

float __thiscall FSpline::EvaluateAttribute<float>(FSpline *this,float param_1,FName param_2)

{
  EOutOfBoundsHandlingMode EVar1;
  FNewSpline *this_00;
  code *UNRECOVERED_JUMPTABLE;
  TSplineInterface<float> *pTVar2;
  float *pfVar3;
  float fVar4;
  float fVar5;
  float local_res8;
  float local_resc;
  
  this_00 = (this->NewData).Object;
  if ((this_00 == (FNewSpline *)0x0) || (this->CurrentImplementation != '\x02')) {
    return 0.0;
  }
  fVar4 = FNewSpline::ToInternalSplineSpace(this_00,param_1);
  pTVar2 = UE::Geometry::Spline::
           TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
           GetAttributeChannel<float>
                     ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                       *)this_00,param_2);
  if (pTVar2 == (TSplineInterface<float> *)0x0) {
    return 0.0;
  }
  fVar4 = UE::Geometry::Spline::
          TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
          MapParameterToChildSpace
                    ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                      *)this_00,param_2,fVar4);
  pfVar3 = (float *)(**(code **)(pTVar2->_padding_ + 0x30))(pTVar2,&local_res8);
  if (pfVar3[1] <= *pfVar3 && *pfVar3 != pfVar3[1]) {
    return 0.0;
  }
  UNRECOVERED_JUMPTABLE = *(code **)(pTVar2->_padding_ + 0x90);
  (**(code **)(pTVar2->_padding_ + 0x30))(pTVar2,&local_res8);
  if (local_res8 <= fVar4) {
    fVar5 = fVar4;
    if (fVar4 <= local_resc) goto LAB_147a1687f;
    EVar1 = pTVar2->PostInfinityMode;
    fVar5 = local_resc;
  }
  else {
    EVar1 = pTVar2->PreInfinityMode;
    fVar5 = local_res8;
  }
  if (EVar1 == Zero) {
    fVar5 = 0.0;
  }
  else if ((EVar1 != Constant) && (fVar5 = fVar4, EVar1 == Cycle)) {
    fVar4 = FGenericPlatformMath::Fmod(fVar4 - local_res8,local_resc - local_res8);
    fVar5 = fVar4 + local_res8;
  }
LAB_147a1687f:
                    /* WARNING: Could not recover jumptable at 0x000147a1689c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar4 = (float)(*UNRECOVERED_JUMPTABLE)(pTVar2,fVar5);
  return fVar4;
}

// EvaluateAttribute<UE::Math::TVector<double>_> @ 147a168c0

TVector<double> * __thiscall
FSpline::EvaluateAttribute<UE::Math::TVector<double>_>
          (FSpline *this,TVector<double> *__return_storage_ptr__,float param_1,FName param_2)

{
  FNewSpline *this_00;
  TSplineInterface<UE::Math::TVector<double>_> *this_01;
  float fVar1;
  
  this_00 = (this->NewData).Object;
  if ((this_00 != (FNewSpline *)0x0) && (this->CurrentImplementation == '\x02')) {
    fVar1 = FNewSpline::ToInternalSplineSpace(this_00,param_1);
    this_01 = UE::Geometry::Spline::
              TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
              ::GetAttributeChannel<UE::Math::TVector<double>_>
                        ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                          *)this_00,param_2);
    if (this_01 == (TSplineInterface<UE::Math::TVector<double>_> *)0x0) {
      (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
      return __return_storage_ptr__;
    }
    fVar1 = UE::Geometry::Spline::
            TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
            MapParameterToChildSpace
                      ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                        *)this_00,param_2,fVar1);
    UE::Geometry::Spline::TSplineInterface<UE::Math::TVector<double>_>::Evaluate
              (this_01,__return_storage_ptr__,fVar1);
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  return __return_storage_ptr__;
}

// GetAttributeParameter<float> @ 147a18dc0

float __thiscall FSpline::GetAttributeParameter<float>(FSpline *this,int param_1,FName *param_2)

{
  FNewSpline *this_00;
  float fVar1;
  
  this_00 = (this->NewData).Object;
  if ((this_00 != (FNewSpline *)0x0) && (this->CurrentImplementation == '\x02')) {
    fVar1 = FNewSpline::GetAttributeParameter<float>(this_00,param_2,param_1);
    return fVar1;
  }
  return 0.0;
}

// GetAttributeParameter<UE::Math::TVector<double>_> @ 147a18ea0

float __thiscall
FSpline::GetAttributeParameter<UE::Math::TVector<double>_>(FSpline *this,int param_1,FName *param_2)

{
  FNewSpline *this_00;
  float fVar1;
  
  this_00 = (this->NewData).Object;
  if ((this_00 != (FNewSpline *)0x0) && (this->CurrentImplementation == '\x02')) {
    fVar1 = FNewSpline::GetAttributeParameter<UE::Math::TVector<double>_>(this_00,param_2,param_1);
    return fVar1;
  }
  return 0.0;
}

// GetAttributeValue<float> @ 147a18f10

float __thiscall FSpline::GetAttributeValue<float>(FSpline *this,int param_1,FName *param_2)

{
  FNewSpline *this_00;
  TTangentBezierSpline<float> *this_01;
  float fVar1;
  
  this_00 = (this->NewData).Object;
  if ((this_00 != (FNewSpline *)0x0) && (this->CurrentImplementation == '\x02')) {
    this_01 = UE::Geometry::Spline::
              TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
              ::GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<float>_>
                        ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                          *)this_00,*param_2);
    if (this_01 != (TTangentBezierSpline<float> *)0x0) {
      fVar1 = UE::Geometry::Spline::TTangentBezierSpline<float>::GetValue(this_01,param_1);
      return fVar1;
    }
  }
  return 0.0;
}

// GetAttributeValue<UE::Math::TVector<double>_> @ 147a19020

TVector<double> * __thiscall
FSpline::GetAttributeValue<UE::Math::TVector<double>_>
          (FSpline *this,TVector<double> *__return_storage_ptr__,int param_1,FName *param_2)

{
  FNewSpline *this_00;
  TTangentBezierSpline<UE::Math::TVector<double>_> *this_01;
  
  this_00 = (this->NewData).Object;
  if ((this_00 != (FNewSpline *)0x0) && (this->CurrentImplementation == '\x02')) {
    this_01 = UE::Geometry::Spline::
              TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
              ::
              GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                        ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                          *)this_00,*param_2);
    if (this_01 != (TTangentBezierSpline<UE::Math::TVector<double>_> *)0x0) {
      UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetValue
                (this_01,__return_storage_ptr__,param_1);
      return __return_storage_ptr__;
    }
    (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  return __return_storage_ptr__;
}

// NumAttributeValues<float> @ 147a1c620

int __thiscall FSpline::NumAttributeValues<float>(FSpline *this,FName param_1)

{
  FNewSpline *this_00;
  int iVar1;
  TTangentBezierSpline<float> *this_01;
  
  this_00 = (this->NewData).Object;
  if ((this_00 != (FNewSpline *)0x0) && (this->CurrentImplementation == '\x02')) {
    this_01 = UE::Geometry::Spline::
              TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
              ::GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<float>_>
                        ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                          *)this_00,param_1);
    if (this_01 != (TTangentBezierSpline<float> *)0x0) {
      iVar1 = UE::Geometry::Spline::TTangentBezierSpline<float>::GetNumPoints(this_01);
      return iVar1;
    }
  }
  return 0;
}

// NumAttributeValues<UE::Math::TVector<double>_> @ 147a1c690

int __thiscall FSpline::NumAttributeValues<UE::Math::TVector<double>_>(FSpline *this,FName param_1)

{
  FNewSpline *this_00;
  int iVar1;
  TTangentBezierSpline<UE::Math::TVector<double>_> *this_01;
  
  this_00 = (this->NewData).Object;
  if ((this_00 != (FNewSpline *)0x0) && (this->CurrentImplementation == '\x02')) {
    this_01 = UE::Geometry::Spline::
              TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
              ::
              GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                        ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                          *)this_00,param_1);
    if (this_01 != (TTangentBezierSpline<UE::Math::TVector<double>_> *)0x0) {
      iVar1 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                        (this_01);
      return iVar1;
    }
  }
  return 0;
}

// RemoveAttributeValue<float> @ 147a1ca90

void __thiscall FSpline::RemoveAttributeValue<float>(FSpline *this,int param_1,FName param_2)

{
  FNewSpline *this_00;
  int iVar1;
  TTangentBezierSpline<float> *this_01;
  TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
  *pTVar2;
  undefined1 *puVar3;
  float fVar4;
  float local_res8;
  float fStackX_c;
  FName local_res20;
  
  this_00 = (this->NewData).Object;
  if (this_00 == (FNewSpline *)0x0) {
    return;
  }
  if (this->CurrentImplementation != '\x02') {
    return;
  }
  local_res20 = param_2;
  this_01 = UE::Geometry::Spline::
            TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
            GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<float>_>
                      ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                        *)this_00,param_2);
  if (this_01 == (TTangentBezierSpline<float> *)0x0) {
    return;
  }
  iVar1 = UE::Geometry::Spline::TTangentBezierSpline<float>::GetNumPoints(this_01);
  if (1 < iVar1) {
    if (param_1 == 0) {
      UE::Geometry::Spline::
      TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
      GetMappedChildSpace((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                           *)this_00,(FName)&local_res8);
      fVar4 = FNewSpline::GetAttributeParameter<float>(this_00,&local_res20,1);
      local_res8 = FNewSpline::ToInternalSplineSpace(this_00,fVar4);
    }
    else {
      iVar1 = UE::Geometry::Spline::TTangentBezierSpline<float>::GetNumPoints(this_01);
      if (param_1 != iVar1 + -1) goto LAB_147a1cb8e;
      UE::Geometry::Spline::
      TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
      GetMappedChildSpace((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                           *)this_00,(FName)&local_res8);
      fVar4 = FNewSpline::GetAttributeParameter<float>(this_00,&local_res20,param_1 + -1);
      fStackX_c = FNewSpline::ToInternalSplineSpace(this_00,fVar4);
    }
    pTVar2 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                     *)&this_00->_padding_,param_2);
    puVar3 = &pTVar2->field_0x8;
    if (pTVar2 == (TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
                   *)0x0) {
      puVar3 = (undefined1 *)0x0;
    }
    if (puVar3 != (undefined1 *)0x0) {
      *puVar3 = 1;
      *(ulonglong *)(puVar3 + 4) = CONCAT44(fStackX_c,local_res8);
    }
  }
LAB_147a1cb8e:
  UE::Geometry::Spline::TTangentBezierSpline<float>::RemovePoint(this_01,param_1);
  return;
}

// RemoveAttributeValue<UE::Math::TVector<double>_> @ 147a1ccc0

void __thiscall
FSpline::RemoveAttributeValue<UE::Math::TVector<double>_>(FSpline *this,int param_1,FName param_2)

{
  FNewSpline *this_00;
  int iVar1;
  TTangentBezierSpline<UE::Math::TVector<double>_> *this_01;
  TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
  *pTVar2;
  undefined1 *puVar3;
  float fVar4;
  float local_res8;
  float fStackX_c;
  FName local_res20;
  
  this_00 = (this->NewData).Object;
  if (this_00 == (FNewSpline *)0x0) {
    return;
  }
  if (this->CurrentImplementation != '\x02') {
    return;
  }
  local_res20 = param_2;
  this_01 = UE::Geometry::Spline::
            TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
            GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                      ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                        *)this_00,param_2);
  if (this_01 == (TTangentBezierSpline<UE::Math::TVector<double>_> *)0x0) {
    return;
  }
  iVar1 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                    (this_01);
  if (1 < iVar1) {
    if (param_1 == 0) {
      UE::Geometry::Spline::
      TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
      GetMappedChildSpace((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                           *)this_00,(FName)&local_res8);
      fVar4 = FNewSpline::GetAttributeParameter<UE::Math::TVector<double>_>(this_00,&local_res20,1);
      local_res8 = FNewSpline::ToInternalSplineSpace(this_00,fVar4);
    }
    else {
      iVar1 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                        (this_01);
      if (param_1 != iVar1 + -1) goto LAB_147a1cdbe;
      UE::Geometry::Spline::
      TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
      GetMappedChildSpace((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                           *)this_00,(FName)&local_res8);
      fVar4 = FNewSpline::GetAttributeParameter<UE::Math::TVector<double>_>
                        (this_00,&local_res20,param_1 + -1);
      fStackX_c = FNewSpline::ToInternalSplineSpace(this_00,fVar4);
    }
    pTVar2 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                     *)&this_00->_padding_,param_2);
    puVar3 = &pTVar2->field_0x8;
    if (pTVar2 == (TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
                   *)0x0) {
      puVar3 = (undefined1 *)0x0;
    }
    if (puVar3 != (undefined1 *)0x0) {
      *puVar3 = 1;
      *(ulonglong *)(puVar3 + 4) = CONCAT44(fStackX_c,local_res8);
    }
  }
LAB_147a1cdbe:
  UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::RemovePoint
            (this_01,param_1);
  return;
}

// SetAttributeParameter<float> @ 147a1f3c0

int __thiscall
FSpline::SetAttributeParameter<float>(FSpline *this,int param_1,float param_2,FName *param_3)

{
  FNewSpline *this_00;
  int iVar1;
  
  this_00 = (this->NewData).Object;
  if ((this_00 != (FNewSpline *)0x0) && (this->CurrentImplementation == '\x02')) {
    iVar1 = FNewSpline::SetAttributeParameter<float>(this_00,param_3,param_1,param_2);
    return iVar1;
  }
  return param_1;
}

// SetAttributeParameter<UE::Math::TVector<double>_> @ 147a20360

int __thiscall
FSpline::SetAttributeParameter<UE::Math::TVector<double>_>
          (FSpline *this,int param_1,float param_2,FName *param_3)

{
  FNewSpline *this_00;
  int iVar1;
  
  this_00 = (this->NewData).Object;
  if ((this_00 != (FNewSpline *)0x0) && (this->CurrentImplementation == '\x02')) {
    iVar1 = FNewSpline::SetAttributeParameter<UE::Math::TVector<double>_>
                      (this_00,param_3,param_1,param_2);
    return iVar1;
  }
  return param_1;
}

// SetAttributeValue<float> @ 147a204d0

void __thiscall
FSpline::SetAttributeValue<float>(FSpline *this,int param_1,float *param_2,FName *param_3)

{
  FNewSpline *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  TTangentBezierSpline<float> *this_01;
  float fVar5;
  TTangentBezierControlPoint<float> local_48;
  uint local_2c;
  
  this_00 = (this->NewData).Object;
  if (((this_00 != (FNewSpline *)0x0) && (this->CurrentImplementation == '\x02')) &&
     (this_01 = UE::Geometry::Spline::
                TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                ::GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<float>_>
                          ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                            *)this_00,*param_3), this_01 != (TTangentBezierSpline<float> *)0x0)) {
    iVar3 = UE::Geometry::Spline::TTangentBezierSpline<float>::GetNumPoints(this_01);
    if ((param_1 < 0) || (iVar3 <= param_1)) {
      local_48.TangentIn = 0.0;
      local_48.TangentOut = 0.0;
      local_48._12_4_ = local_48._12_4_ & 0xffffff00;
    }
    else {
      UE::Geometry::Spline::TTangentBezierSpline<float>::GetValue(this_01,param_1);
      fVar5 = UE::Geometry::Spline::TTangentBezierSpline<float>::GetTangentIn(this_01,param_1);
      local_48.TangentOut =
           UE::Geometry::Spline::TTangentBezierSpline<float>::GetTangentOut(this_01,param_1);
      if (param_1 < (this_01->TangentModes).ArrayNum) {
        uVar4 = 0;
        if (param_1 < (this_01->TangentModes).ArrayNum) {
          uVar4 = (uint)~param_1 >> 0x1f;
        }
        if ((uVar4 == 0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_2c = CONCAT31(local_2c._1_3_,(this_01->TangentModes).AllocatorInstance.Data[param_1]);
      }
      else {
        local_2c = local_2c & 0xffffff00;
      }
      local_48.TangentIn = fVar5;
      local_48._12_4_ = local_2c;
    }
    local_48.Position = *param_2;
    UE::Geometry::Spline::TTangentBezierSpline<float>::ModifyPoint(this_01,param_1,&local_48);
  }
  return;
}

// SetAttributeValue<UE::Math::TVector<double>_> @ 147a20a10

void __thiscall
FSpline::SetAttributeValue<UE::Math::TVector<double>_>
          (FSpline *this,int param_1,TVector<double> *param_2,FName *param_3)

{
  FNewSpline *this_00;
  
  this_00 = (this->NewData).Object;
  if ((this_00 != (FNewSpline *)0x0) && (this->CurrentImplementation == '\x02')) {
    FNewSpline::SetAttributeValue<UE::Math::TVector<double>_>(this_00,*param_3,param_2,param_1);
    return;
  }
  return;
}

// FSpline @ 147a26d20

FSpline * __thiscall FSpline::FSpline(FSpline *this,FSpline *param_1)

{
  FSpline(this);
  operator=(this,param_1);
  return this;
}

// FSpline @ 147a26d60

FSpline * __thiscall FSpline::FSpline(FSpline *this)

{
  TSharedPtr<FLegacySpline,1> *pTVar1;
  TSharedPtr<FNewSpline,1> *pTVar2;
  uchar uVar3;
  TSharedRef<FNewSpline,1> *pTVar4;
  TSharedRef<FLegacySpline,1> *pTVar5;
  FSharedReferencer<1> FVar6;
  FNewSpline *local_48;
  FSharedReferencer<1> local_40;
  FLegacySpline *local_38;
  FSharedReferencer<1> local_30;
  TSharedRef<FNewSpline,1> local_28;
  
  uVar3 = (uchar)UE::Spline::GImplementation;
  this->CurrentImplementation = (uchar)UE::Spline::GImplementation;
  (this->CachedUpdateSplineParams).LoopPosition = 0.0;
  pTVar1 = &this->LegacyData;
  this->Version = 0xffffffff;
  pTVar2 = &this->NewData;
  (this->CachedUpdateSplineParams).bClosedLoop = false;
  (this->CachedUpdateSplineParams).bStationaryEndpoints = false;
  (this->CachedUpdateSplineParams).ReparamStepsPerSegment = 10;
  (this->CachedUpdateSplineParams).bLoopPositionOverride = false;
  (this->CachedUpdateSplineParams).Scale3D.field0_0x0._s_0.X = 1.0;
  (this->CachedUpdateSplineParams).Scale3D.field0_0x0._s_0.Y = 1.0;
  (this->CachedUpdateSplineParams).Scale3D.field0_0x0._s_0.Z = 1.0;
  pTVar1->Object = (FLegacySpline *)0x0;
  (this->LegacyData).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  pTVar2->Object = (FNewSpline *)0x0;
  (this->NewData).SharedReferenceCount.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (uVar3 == '\x01') {
    pTVar5 = MakeShared<FLegacySpline,1>((TSharedRef<FLegacySpline,1> *)&local_28);
    FVar6.ReferenceController = (pTVar5->SharedReferenceCount).ReferenceController;
    local_38 = pTVar5->Object;
    if (FVar6.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (FVar6.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(FVar6.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    local_30.ReferenceController = FVar6.ReferenceController;
    if (pTVar1 != (TSharedPtr<FLegacySpline,1> *)&local_38) {
      pTVar1->Object = local_38;
      local_38 = (FLegacySpline *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->LegacyData).SharedReferenceCount,&local_30);
      FVar6.ReferenceController = local_30.ReferenceController;
    }
  }
  else {
    if (uVar3 != '\x02') {
      return this;
    }
    pTVar4 = MakeShared<FNewSpline,1>(&local_28);
    local_40.ReferenceController = (pTVar4->SharedReferenceCount).ReferenceController;
    local_48 = pTVar4->Object;
    if (local_40.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      (local_40.ReferenceController)->SharedReferenceCount =
           (atomic<int>)((int)(local_40.ReferenceController)->SharedReferenceCount + 1);
      UNLOCK();
    }
    FVar6.ReferenceController = local_40.ReferenceController;
    if (pTVar2 != (TSharedPtr<FNewSpline,1> *)&local_48) {
      pTVar2->Object = local_48;
      local_48 = (FNewSpline *)0x0;
      SharedPointerInternals::FSharedReferencer<1>::operator=
                (&(this->NewData).SharedReferenceCount,&local_40);
      FVar6.ReferenceController = local_40.ReferenceController;
    }
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FVar6.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_28.SharedReferenceCount.ReferenceController);
  return this;
}

// ~FSpline @ 147a2a1e0

void __thiscall FSpline::~FSpline(FSpline *this)

{
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NewData).SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->LegacyData).SharedReferenceCount.ReferenceController);
  return;
}

// operator= @ 147a2b560

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FSpline * __thiscall FSpline::operator=(FSpline *this,FSpline *param_1)

{
  uchar uVar1;
  void *pvVar2;
  code *pcVar3;
  bool bVar4;
  BOOLEAN BVar5;
  bool bVar6;
  FNewSpline *pFVar7;
  FSpline *pFVar8;
  FLegacySpline *pFVar9;
  longlong lVar10;
  bool bVar11;
  undefined1 auStackY_468 [32];
  void *local_428;
  undefined8 uStack_420;
  undefined8 local_418;
  void *pvStack_410;
  undefined8 local_408;
  undefined8 uStack_400;
  void *local_3f8;
  undefined8 uStack_3f0;
  undefined8 local_3e8;
  void *pvStack_3e0;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined4 local_3c8;
  undefined1 local_3c0 [24];
  ForAnyElementType local_3a8;
  int local_3a0;
  int local_39c [3];
  void *local_390 [3];
  ForAnyElementType local_378;
  int local_370;
  int local_36c [5];
  undefined1 local_358 [240];
  void *local_268;
  undefined4 local_260;
  void *local_258;
  undefined8 local_250;
  undefined1 local_248;
  undefined4 local_244;
  FMutex local_240;
  undefined8 local_23c;
  FPlatformRWLock local_230;
  void *local_228;
  undefined8 local_220;
  undefined1 local_218;
  undefined4 local_214;
  void *local_210;
  undefined8 local_208;
  undefined1 local_200;
  undefined4 local_1fc;
  void *local_1f8;
  undefined8 local_1f0;
  undefined1 local_1e8;
  undefined4 local_1e4;
  FMutex local_1e0;
  undefined8 local_1dc;
  int local_1d4;
  FNewSpline local_1c8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_468;
  uVar1 = param_1->CurrentImplementation;
  this->CurrentImplementation = uVar1;
  local_3c8 = 0;
  if (uVar1 == '\x01') {
    if ((param_1->LegacyData).Object == (FLegacySpline *)0x0) {
      pFVar9 = (FLegacySpline *)&local_428;
      local_408 = 0;
      bVar4 = false;
      bVar11 = true;
      uStack_400 = 0;
      local_418 = 0;
      pvStack_410 = (void *)0x0;
      local_3f8 = (void *)0x0;
      uStack_3f0 = 0;
      local_3e8 = 0;
      pvStack_3e0 = (void *)0x0;
      local_3d8 = 0;
      uStack_3d0 = 0;
      local_428 = (void *)0x0;
      uStack_420 = 0;
    }
    else {
      pFVar9 = TSharedPtr<FLegacySpline,1>::operator*<FLegacySpline>(&param_1->LegacyData);
      FInterpCurveVector::FInterpCurveVector((FInterpCurveVector *)local_3c0,&pFVar9->PositionCurve)
      ;
      local_3a8.Data = (FScriptContainerElement *)0x0;
      local_3a0 = *(int *)&(pFVar9->RotationCurve).field_0x8;
      lVar10 = (longlong)local_3a0;
      pvVar2 = *(void **)&pFVar9->RotationCurve;
      if (local_3a0 == 0) {
        local_39c[0] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x80,0x10,local_3a0,0,&local_3a8,local_3a0,local_39c);
        memcpy(local_3a8.Data,pvVar2,lVar10 << 7);
      }
      local_39c[1]._0_1_ = (pFVar9->RotationCurve).field_0x10;
      local_39c[2] = *(int *)&(pFVar9->RotationCurve).field_0x14;
      FInterpCurveVector::FInterpCurveVector((FInterpCurveVector *)local_390,&pFVar9->ScaleCurve);
      local_378.Data = (FScriptContainerElement *)0x0;
      local_370 = *(int *)&(pFVar9->ReparamTable).field_0x8;
      lVar10 = (longlong)local_370;
      pvVar2 = *(void **)&pFVar9->ReparamTable;
      if (local_370 == 0) {
        local_36c[0] = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x14,4,local_370,0,&local_378,local_370,local_36c);
        memcpy(local_378.Data,pvVar2,lVar10 * 0x14);
      }
      local_36c[1]._0_1_ = (pFVar9->ReparamTable).field_0x10;
      bVar4 = true;
      bVar11 = false;
      local_36c[2] = *(int *)&(pFVar9->ReparamTable).field_0x14;
      pFVar9 = (FLegacySpline *)local_3c0;
    }
    if (((this->LegacyData).Object == (FLegacySpline *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar6)) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FSpline *)(*pcVar3)();
      return pFVar8;
    }
    FLegacySpline::operator=((this->LegacyData).Object,pFVar9);
    if (bVar11) {
      if (pvStack_3e0 != (void *)0x0) {
        FMemory::Free(pvStack_3e0);
      }
      if (local_3f8 != (void *)0x0) {
        FMemory::Free(local_3f8);
      }
      if (pvStack_410 != (void *)0x0) {
        FMemory::Free(pvStack_410);
      }
      if (local_428 != (void *)0x0) {
        FMemory::Free(local_428);
      }
    }
    if (!bVar4) goto LAB_147a2ba30;
    if (local_378.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_378.Data);
    }
    if (local_390[0] != (void *)0x0) {
      FMemory::Free(local_390[0]);
    }
    if (local_3a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_3a8.Data);
    }
  }
  else {
    if (uVar1 != '\x02') goto LAB_147a2ba30;
    bVar11 = (param_1->NewData).Object == (FNewSpline *)0x0;
    if (bVar11) {
      pFVar7 = FNewSpline::FNewSpline(&local_1c8);
    }
    else {
      pFVar7 = TSharedPtr<FNewSpline,1>::operator*<FNewSpline>(&param_1->NewData);
      UE::Geometry::Spline::
      TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
      TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                  *)local_358);
      local_258 = (void *)0x0;
      local_358._0_8_ =
           &FNewSpline::
            _vftable__for__UE__Geometry__Spline__TSplineWrapper<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>__
      ;
      local_250 = 0;
      local_358._168_8_ =
           &FNewSpline::
            _vftable__for__UE__Geometry__Spline__TSelfRegisteringSpline<UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>,UE::Math::TVector<double>_>__
      ;
      local_248 = 0;
      local_230.Mutex.Mutex.Ptr = (FWindowsSharedMutex)(SRWLOCK)0x0;
      local_218 = 0;
      local_214 = 0;
      local_200 = 0;
      local_1fc = 0;
      local_1e8 = 0;
      local_1e4 = 0;
      local_1e0.State = (atomic<unsigned_char>)0x0;
      local_244 = 0;
      local_240.State = (atomic<unsigned_char>)0x0;
      local_23c._0_4_ = 1;
      local_23c._4_4_ = 0;
      local_228 = (void *)0x0;
      local_220 = 0;
      local_210 = (void *)0x0;
      local_208 = 0;
      local_1f8 = (void *)0x0;
      local_1f0 = 0;
      local_1dc._0_4_ = 1;
      local_1dc._4_4_ = 0;
      local_1d4 = 10;
      FNewSpline::operator=((FNewSpline *)local_358,pFVar7);
      FNewSpline::ValidateRotScale((FNewSpline *)local_358);
      pFVar7 = (FNewSpline *)local_358;
    }
    if (((this->NewData).Object == (FNewSpline *)0x0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      pFVar8 = (FSpline *)(*pcVar3)();
      return pFVar8;
    }
    FNewSpline::operator=((this->NewData).Object,pFVar7);
    if (bVar11) {
      FNewSpline::~FNewSpline(&local_1c8);
      goto LAB_147a2ba30;
    }
    if (local_1f8 != (void *)0x0) {
      FMemory::Free(local_1f8);
    }
    if (local_210 != (void *)0x0) {
      FMemory::Free(local_210);
    }
    if (local_228 != (void *)0x0) {
      FMemory::Free(local_228);
    }
    BVar5 = TryAcquireSRWLockExclusive((PSRWLOCK)&local_230);
    if (BVar5 == '\0') {
      bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("!IsLocked()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                          ,0x48,L"Destroying a lock that is still held!");
      if (bVar11) {
        pcVar3 = (code *)swi(3);
        pFVar8 = (FSpline *)(*pcVar3)();
        return pFVar8;
      }
    }
    else {
      ReleaseSRWLockExclusive((PSRWLOCK)&local_230);
    }
    if (local_258 != (void *)0x0) {
      FMemory::Free(local_258);
    }
    local_260 = 0;
    if (local_268 != (void *)0x0) {
      FMemory::Free(local_268);
    }
    TSparseArray<TSparseSetElement<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::
    ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                *)(local_358 + 0xb0));
    if ((void *)local_358._144_8_ != (void *)0x0) {
      FMemory::Free((void *)local_358._144_8_);
    }
    if ((void *)local_358._88_8_ != (void *)0x0) {
      FMemory::Free((void *)local_358._88_8_);
    }
    local_3c0._0_8_ = local_358._56_8_;
    if ((void *)local_358._72_8_ != (void *)0x0) {
      FMemory::Free((void *)local_358._72_8_);
      local_3c0._0_8_ = local_358._56_8_;
    }
  }
  if ((void *)local_3c0._0_8_ != (void *)0x0) {
    FMemory::Free((void *)local_3c0._0_8_);
  }
LAB_147a2ba30:
  this->Version = this->Version + 1;
  return this;
}

// operator= @ 147a2ba70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FSpline * __thiscall FSpline::operator=(FSpline *this,FSplineCurves *param_1)

{
  int iVar1;
  void *_Src;
  code *pcVar2;
  bool bVar3;
  FNewSpline *pFVar4;
  FSpline *pFVar5;
  undefined1 auStackY_268 [32];
  undefined1 local_228 [24];
  void *pvStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  void *local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  ForAnyElementType FStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  FNewSpline local_1c8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_268;
  if (this->CurrentImplementation == '\x01') {
    local_208 = 0;
    uStack_200 = 0;
    local_228._16_8_ = 0;
    pvStack_210 = (void *)0x0;
    local_1f8 = (void *)0x0;
    uStack_1f0 = 0;
    local_1e8 = 0;
    FStack_1e0.Data = (FScriptContainerElement *)0x0;
    local_1d8 = 0;
    uStack_1d0 = 0;
    local_228._0_8_ = (void *)0x0;
    local_228._8_8_ = 0;
    FInterpCurveVector::operator=((FInterpCurveVector *)local_228,&param_1->Position);
    FInterpCurveQuat::operator=((FInterpCurveQuat *)&pvStack_210,&param_1->Rotation);
    FInterpCurveVector::operator=((FInterpCurveVector *)&local_1f8,&param_1->Scale);
    if ((FInterpCurveFloat *)&FStack_1e0 != &param_1->ReparamTable) {
      iVar1 = *(int *)&(param_1->ReparamTable).field_0x8;
      _Src = *(void **)&param_1->ReparamTable;
      local_1d8._0_4_ = iVar1;
      if ((iVar1 == 0) && (local_1d8._4_4_ == 0)) {
        local_1d8 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x14,4,iVar1,local_1d8._4_4_,&FStack_1e0,iVar1,(int *)((longlong)&local_1d8 + 4))
        ;
        if (iVar1 != 0) {
          memcpy(FStack_1e0.Data,_Src,(longlong)iVar1 * 0x14);
        }
      }
    }
    uStack_1d0._4_4_ = *(undefined4 *)&(param_1->ReparamTable).field_0x14;
    uStack_1d0._0_1_ = (param_1->ReparamTable).field_0x10;
    if (((this->LegacyData).Object == (FLegacySpline *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FSpline *)(*pcVar2)();
      return pFVar5;
    }
    FLegacySpline::operator=((this->LegacyData).Object,(FLegacySpline *)local_228);
    if (FStack_1e0.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_1e0.Data);
    }
    if (local_1f8 != (void *)0x0) {
      FMemory::Free(local_1f8);
    }
    if (pvStack_210 != (void *)0x0) {
      FMemory::Free(pvStack_210);
    }
    if ((void *)local_228._0_8_ != (void *)0x0) {
      FMemory::Free((void *)local_228._0_8_);
    }
  }
  else if (this->CurrentImplementation == '\x02') {
    pFVar4 = FNewSpline::FNewSpline(&local_1c8,param_1);
    if (((this->NewData).Object == (FNewSpline *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x44d,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pFVar5 = (FSpline *)(*pcVar2)();
      return pFVar5;
    }
    FNewSpline::operator=((this->NewData).Object,pFVar4);
    FNewSpline::~FNewSpline(&local_1c8);
  }
  this->Version = this->Version + 1;
  return this;
}

// operator== @ 147a2c750

bool __thiscall FSpline::operator==(FSpline *this,FSpline *param_1)

{
  char cVar1;
  int iVar2;
  code *UNRECOVERED_JUMPTABLE;
  bool bVar3;
  undefined1 uVar4;
  FLegacySpline *pFVar5;
  FLegacySpline *pFVar6;
  FNewSpline *pFVar7;
  FNewSpline *pFVar8;
  
  if (this->CurrentImplementation == param_1->CurrentImplementation) {
    if (((this->LegacyData).Object == (FLegacySpline *)0x0) ||
       ((param_1->LegacyData).Object == (FLegacySpline *)0x0)) {
      if (((this->NewData).Object != (FNewSpline *)0x0) &&
         ((param_1->NewData).Object != (FNewSpline *)0x0)) {
        pFVar7 = TSharedPtr<FNewSpline,1>::operator*<FNewSpline>(&this->NewData);
        UNRECOVERED_JUMPTABLE = *(code **)(pFVar7->_padding_ + 0x98);
        pFVar8 = TSharedPtr<FNewSpline,1>::operator*<FNewSpline>(&param_1->NewData);
                    /* WARNING: Could not recover jumptable at 0x000147a2c881. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar4 = (*UNRECOVERED_JUMPTABLE)(pFVar7,pFVar8);
        return (bool)uVar4;
      }
    }
    else {
      pFVar5 = TSharedPtr<FLegacySpline,1>::operator*<FLegacySpline>(&this->LegacyData);
      pFVar6 = TSharedPtr<FLegacySpline,1>::operator*<FLegacySpline>(&param_1->LegacyData);
      iVar2 = *(int *)&(pFVar5->PositionCurve).field_0x8;
      if (iVar2 == *(int *)&(pFVar6->PositionCurve).field_0x8) {
        bVar3 = CompareItems<FInterpCurvePoint<UE::Math::TVector<double>_>,int>
                          (*(FInterpCurvePoint<UE::Math::TVector<double>_> **)&pFVar5->PositionCurve
                           ,*(FInterpCurvePoint<UE::Math::TVector<double>_> **)
                             &pFVar6->PositionCurve,iVar2);
        if ((((bVar3) &&
             (cVar1 = (pFVar5->PositionCurve).field_0x10,
             cVar1 == (pFVar6->PositionCurve).field_0x10)) &&
            ((cVar1 == '\0' ||
             (*(float *)&(pFVar6->PositionCurve).field_0x14 ==
              *(float *)&(pFVar5->PositionCurve).field_0x14)))) &&
           (iVar2 = *(int *)&(pFVar5->RotationCurve).field_0x8,
           iVar2 == *(int *)&(pFVar6->RotationCurve).field_0x8)) {
          bVar3 = CompareItems<FInterpCurvePoint<UE::Math::TQuat<double>_>,int>
                            (*(FInterpCurvePoint<UE::Math::TQuat<double>_> **)&pFVar5->RotationCurve
                             ,*(FInterpCurvePoint<UE::Math::TQuat<double>_> **)
                               &pFVar6->RotationCurve,iVar2);
          if (((bVar3) &&
              (cVar1 = (pFVar5->RotationCurve).field_0x10,
              cVar1 == (pFVar6->RotationCurve).field_0x10)) &&
             ((cVar1 == '\0' ||
              (*(float *)&(pFVar6->RotationCurve).field_0x14 ==
               *(float *)&(pFVar5->RotationCurve).field_0x14)))) {
            bVar3 = ::operator==((FInterpCurve<UE::Math::TVector<double>_> *)&pFVar5->ScaleCurve,
                                 (FInterpCurve<UE::Math::TVector<double>_> *)&pFVar6->ScaleCurve);
            if (bVar3) {
              return true;
            }
          }
        }
      }
    }
  }
  return false;
}

// AddPoint @ 147a30f40

void __thiscall FSpline::AddPoint(FSpline *this,FSplinePoint *param_1)

{
  uint uVar1;
  float fVar2;
  FLegacySpline *this_00;
  code *pcVar3;
  uint uVar4;
  bool bVar5;
  uint uVar6;
  EInterpCurveMode EVar7;
  TQuat<double> *pTVar8;
  uint uVar9;
  int iVar10;
  FInterpCurvePoint<UE::Math::TVector<double>_> local_178;
  FInterpCurvePoint<UE::Math::TVector<double>_> local_120;
  FInterpCurvePoint<UE::Math::TQuat<double>_> local_c8;
  TQuat<double> local_48;
  
  if (this->CurrentImplementation == '\x01') {
    if (((this->LegacyData).Object == (FLegacySpline *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    this_00 = (this->LegacyData).Object;
    iVar10 = 0;
    fVar2 = param_1->InputKey;
    uVar9 = *(uint *)&(this_00->PositionCurve).field_0x8;
    while (uVar4 = uVar9, 0 < (int)uVar4) {
      uVar9 = uVar4 >> 1;
      uVar1 = uVar9 + iVar10;
      uVar6 = 0;
      if ((int)uVar1 < *(int *)&(this_00->PositionCurve).field_0x8) {
        uVar6 = ~uVar1 >> 0x1f;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (*(float *)(*(FScriptContainerElement **)&this_00->PositionCurve +
                    (longlong)(int)uVar1 * 0x58) <= fVar2) {
        iVar10 = uVar1 + 1;
        uVar9 = uVar4 + (-1 - uVar9);
      }
    }
    EVar7 = ConvertSplinePointTypeToInterpCurveMode((uint)(param_1->Type).Value);
    local_178.OutVal.field0_0x0._s_0.X = (param_1->Position).field0_0x0._s_0.X;
    local_178.OutVal.field0_0x0._s_0.Y = (param_1->Position).field0_0x0._s_0.Y;
    local_178.InVal = param_1->InputKey;
    local_178.OutVal.field0_0x0._s_0.Z = (param_1->Position).field0_0x0._s_0.Z;
    local_178.InterpMode.Value = (uchar)EVar7;
    local_178.ArriveTangent.field0_0x0._s_0.X = (param_1->ArriveTangent).field0_0x0._s_0.X;
    local_178.ArriveTangent.field0_0x0._s_0.Y = (param_1->ArriveTangent).field0_0x0._s_0.Y;
    local_178.ArriveTangent.field0_0x0._s_0.Z = (param_1->ArriveTangent).field0_0x0._s_0.Z;
    local_178.LeaveTangent.field0_0x0._s_0.X = (param_1->LeaveTangent).field0_0x0._s_0.X;
    local_178.LeaveTangent.field0_0x0._s_0.Y = (param_1->LeaveTangent).field0_0x0._s_0.Y;
    local_178.LeaveTangent.field0_0x0._s_0.Z = (param_1->LeaveTangent).field0_0x0._s_0.Z;
    TArray<FInterpCurvePoint<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>::Insert
              ((TArray<FInterpCurvePoint<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_> *)
               this_00,&local_178,iVar10);
    pTVar8 = UE::Math::TRotator<double>::Quaternion(&param_1->Rotation,&local_48);
    local_c8.InVal = param_1->InputKey;
    local_c8.OutVal.X = pTVar8->X;
    local_c8.OutVal.Y = pTVar8->Y;
    local_c8.OutVal.Z = pTVar8->Z;
    local_c8.OutVal.W = pTVar8->W;
    local_c8.ArriveTangent.Z = UE::Math::TQuat<double>::Identity.Z;
    local_c8.ArriveTangent.W = UE::Math::TQuat<double>::Identity.W;
    local_c8.LeaveTangent.Z = UE::Math::TQuat<double>::Identity.Z;
    local_c8.LeaveTangent.W = UE::Math::TQuat<double>::Identity.W;
    local_c8.ArriveTangent.X = UE::Math::TQuat<double>::Identity.X;
    local_c8.ArriveTangent.Y = UE::Math::TQuat<double>::Identity.Y;
    local_c8.LeaveTangent.X = UE::Math::TQuat<double>::Identity.X;
    local_c8.LeaveTangent.Y = UE::Math::TQuat<double>::Identity.Y;
    local_c8.InterpMode.Value = '\x01';
    TArray<FInterpCurvePoint<UE::Math::TQuat<double>_>,TSizedDefaultAllocator<32>_>::Insert
              ((TArray<FInterpCurvePoint<UE::Math::TQuat<double>_>,TSizedDefaultAllocator<32>_> *)
               &this_00->RotationCurve,&local_c8,iVar10);
    local_120.OutVal.field0_0x0._s_0.X = (param_1->Scale).field0_0x0._s_0.X;
    local_120.OutVal.field0_0x0._s_0.Y = (param_1->Scale).field0_0x0._s_0.Y;
    local_120.InVal = param_1->InputKey;
    local_120.OutVal.field0_0x0._s_0.Z = (param_1->Scale).field0_0x0._s_0.Z;
    local_120.InterpMode.Value = '\x01';
    local_120.ArriveTangent.field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_120.ArriveTangent.field0_0x0._s_0.Y =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_120.LeaveTangent.field0_0x0._s_0.X =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
    local_120.LeaveTangent.field0_0x0._s_0.Y =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
    local_120.ArriveTangent.field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_120.LeaveTangent.field0_0x0._s_0.Z =
         UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    TArray<FInterpCurvePoint<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_>::Insert
              ((TArray<FInterpCurvePoint<UE::Math::TVector<double>_>,TSizedDefaultAllocator<32>_> *)
               &this_00->ScaleCurve,&local_120,iVar10);
  }
  else if (this->CurrentImplementation == '\x02') {
    if (((this->NewData).Object == (FNewSpline *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FNewSpline::AddPoint((this->NewData).Object,param_1);
    return;
  }
  return;
}

// Evaluate @ 147a42820

TVector<double> * __thiscall
FSpline::Evaluate(FSpline *this,TVector<double> *__return_storage_ptr__,float param_1)

{
  FNewSpline *this_00;
  code *pcVar1;
  bool bVar2;
  TVector<double> *pTVar3;
  FLegacySpline *this_01;
  TVector<double>_u_0 *pTVar4;
  float fVar5;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_30;
  
  if (this->CurrentImplementation == '\x01') {
    if ((this->LegacyData).Object == (FLegacySpline *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TVector<double> *)(*pcVar1)();
        return pTVar3;
      }
    }
    this_01 = (this->LegacyData).Object;
    pTVar4 = &local_30;
    local_30._s_0.Z = 0.0;
    local_30._s_0.X = 0.0;
    local_30._s_0.Y = 0.0;
  }
  else {
    if (this->CurrentImplementation != '\x02') {
      (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
      return __return_storage_ptr__;
    }
    if ((this->NewData).Object == (FNewSpline *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TVector<double> *)(*pcVar1)();
        return pTVar3;
      }
    }
    this_00 = (this->NewData).Object;
    if (UE::Spline::GUseLegacyPositionEvaluation == false) {
      fVar5 = FNewSpline::ToInternalSplineSpace(this_00,param_1);
      UE::Geometry::Spline::TSplineInterface<UE::Math::TVector<double>_>::Evaluate
                ((TSplineInterface<UE::Math::TVector<double>_> *)this_00,__return_storage_ptr__,
                 fVar5);
      return __return_storage_ptr__;
    }
    FNewSpline::RebuildLegacyCurves(this_00);
    this_01 = (FLegacySpline *)&this_00->PositionCurve;
    local_48._s_0.Z = 0.0;
    pTVar4 = &local_48;
    local_48._s_0.X = 0.0;
    local_48._s_0.Y = 0.0;
  }
  FInterpCurve<UE::Math::TVector<double>_>::Eval
            ((FInterpCurve<UE::Math::TVector<double>_> *)this_01,__return_storage_ptr__,param_1,
             (TVector<double> *)&pTVar4->_s_0);
  return __return_storage_ptr__;
}

// EvaluateDerivative @ 147a42a50

TVector<double> * __thiscall
FSpline::EvaluateDerivative(FSpline *this,TVector<double> *__return_storage_ptr__,float param_1)

{
  double dVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  TVector<double> *pTVar9;
  TVector<double> *pTVar10;
  FNewSpline *this_00;
  FLegacySpline *this_01;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 extraout_var [12];
  float fVar13;
  double dVar14;
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar18 [16];
  undefined4 in_XMM2_Db;
  double dVar19;
  double dVar20;
  float fVar21;
  float fVar22;
  float local_res20 [2];
  int local_b8 [4];
  TVector<double>_u_0 local_a8;
  TVector<double>_u_0 local_88 [4];
  undefined1 auVar17 [16];
  
  if (UE::Spline::GApproximateTangents) {
    iVar5 = GetNumControlPoints(this);
    fVar21 = (float)(iVar5 + -1);
    fVar13 = param_1 + __real_38d1b717;
    if (fVar21 <= param_1 + __real_38d1b717) {
      fVar13 = fVar21;
    }
    fVar22 = param_1 - __real_38d1b717;
    if (fVar21 <= param_1 - __real_38d1b717) {
      fVar22 = fVar21;
    }
    if (fVar13 <= 0.0) {
      fVar13 = 0.0;
    }
    if (fVar22 <= 0.0) {
      fVar22 = 0.0;
    }
    pTVar9 = Evaluate(this,(TVector<double> *)&local_a8._s_0,fVar13);
    pTVar10 = Evaluate(this,(TVector<double> *)&local_88[0]._s_0,fVar22);
    dVar14 = __real_3ff0000000000000 / (double)(fVar13 - fVar22);
    dVar20 = ((pTVar9->field0_0x0)._s_0.X - (pTVar10->field0_0x0)._s_0.X) * dVar14;
    dVar1 = ((pTVar9->field0_0x0)._s_0.Y - (pTVar10->field0_0x0)._s_0.Y) * dVar14;
    dVar14 = ((pTVar9->field0_0x0)._s_0.Z - (pTVar10->field0_0x0)._s_0.Z) * dVar14;
    dVar19 = dVar1 * dVar1 + dVar20 * dVar20 + dVar14 * dVar14;
    uVar2 = dVar20;
    uVar3 = dVar1;
    uVar4 = dVar14;
    if ((dVar19 != __real_3ff0000000000000) &&
       (uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X,
       uVar3 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y,
       uVar4 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,
       __real_3e45798ee0000000 <= dVar19)) {
      dVar19 = __real_3ff0000000000000 / SQRT(dVar19);
      uVar2 = dVar20 * dVar19;
      uVar3 = dVar1 * dVar19;
      uVar4 = dVar14 * dVar19;
    }
    iVar6 = GetNumControlPoints(this);
    iVar5 = iVar6 + -1;
    if ((int)param_1 < iVar6 + -1) {
      iVar5 = (int)param_1;
    }
    iVar7 = GetNumControlPoints(this);
    iVar6 = iVar7 + -1;
    if ((int)(param_1 + __real_3f800000) < iVar7 + -1) {
      iVar6 = (int)(param_1 + __real_3f800000);
    }
    iVar7 = 0;
    if (0 < iVar5) {
      iVar7 = iVar5;
    }
    pTVar9 = GetInTangent(this,(TVector<double> *)&local_88[0]._s_0,iVar7);
    iVar5 = 0;
    if (0 < iVar6) {
      iVar5 = iVar6;
    }
    dVar20 = (pTVar9->field0_0x0)._s_0.X;
    dVar1 = (pTVar9->field0_0x0)._s_0.Y;
    dVar14 = (pTVar9->field0_0x0)._s_0.Z;
    auVar11._0_8_ = dVar20 * dVar20;
    auVar11._8_8_ = 0;
    auVar15._0_8_ = dVar1 * dVar1 + auVar11._0_8_ + dVar14 * dVar14;
    auVar15._8_8_ = 0;
    auVar11 = sqrtpd(auVar11,auVar15);
    pTVar9 = GetInTangent(this,(TVector<double> *)&local_88[0]._s_0,iVar5);
    dVar20 = (pTVar9->field0_0x0)._s_0.Y;
    dVar1 = (pTVar9->field0_0x0)._s_0.X;
    dVar14 = (pTVar9->field0_0x0)._s_0.Z;
    auVar12._0_8_ = dVar1 * dVar1;
    auVar12._8_8_ = 0;
    auVar16._0_8_ = dVar20 * dVar20 + auVar12._0_8_ + dVar14 * dVar14;
    auVar16._8_8_ = 0;
    auVar12 = sqrtpd(auVar12,auVar16);
    auVar18._4_4_ = in_XMM2_Db;
    auVar18._0_4_ = param_1;
    iVar5 = (int)param_1;
    fVar13 = param_1;
    if ((iVar5 != -0x80000000) && ((float)iVar5 != param_1)) {
      auVar18._8_4_ = in_XMM2_Db;
      auVar18._12_4_ = in_XMM2_Db;
      auVar17._8_8_ = auVar18._8_8_;
      auVar17._4_4_ = param_1;
      auVar17._0_4_ = param_1;
      uVar8 = movmskps((int)pTVar9,auVar17);
      fVar13 = (float)(int)(iVar5 - (uVar8 & 1));
    }
    dVar20 = (double)(((float)auVar12._0_8_ - (float)auVar11._0_8_) * (param_1 - fVar13) +
                     (float)auVar11._0_8_);
    (__return_storage_ptr__->field0_0x0)._s_0.Y = dVar20 * (double)uVar3;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = dVar20 * (double)uVar4;
    (__return_storage_ptr__->field0_0x0)._s_0.X = dVar20 * (double)uVar2;
  }
  else if (this->CurrentImplementation == '\x01') {
    this_01 = TSharedPtr<FLegacySpline,1>::operator->(&this->LegacyData);
    local_a8._s_0.Z = 0.0;
    local_a8._s_0.X = 0.0;
    local_a8._s_0.Y = 0.0;
    FInterpCurve<UE::Math::TVector<double>_>::EvalDerivative
              ((FInterpCurve<UE::Math::TVector<double>_> *)this_01,__return_storage_ptr__,param_1,
               (TVector<double> *)&local_a8._s_0);
  }
  else if (this->CurrentImplementation == '\x02') {
    this_00 = TSharedPtr<FNewSpline,1>::operator->(&this->NewData);
    fVar13 = FNewSpline::ToInternalSplineSpace(this_00,param_1);
    (**(code **)(this_00->_padding_ + 200))
              (&this_00->_padding_,local_88,CONCAT44(extraout_var._0_4_,fVar13));
    if ((double)local_88[0]._0_8_ == 0.0) {
      (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
    }
    else {
      UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::
      MapGlobalParameterToLocalSegment
                ((TPolyBezierSpline<UE::Math::TVector<double>_> *)&this_00->_padding_,fVar13,
                 local_b8,local_res20);
      local_a8._s_0.X = (double)local_88;
      local_a8._8_4_ = 4;
      UE::Geometry::Spline::Math::TBezierDerivativeCalculator<UE::Math::TVector<double>,1>::Compute
                (__return_storage_ptr__,
                 (TArrayView<UE::Math::TVector<double>_const_*_const,int> *)&local_a8._s_0,
                 local_res20[0],__real_3f800000);
    }
  }
  else {
    (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  }
  return __return_storage_ptr__;
}

// EvaluateRotation @ 147a43230

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

TQuat<double> * __thiscall
FSpline::EvaluateRotation(FSpline *this,TQuat<double> *__return_storage_ptr__,float param_1)

{
  EOutOfBoundsHandlingMode EVar1;
  FNewSpline *this_00;
  code *pcVar2;
  bool bVar3;
  TQuat<double> *pTVar4;
  TSplineInterface<UE::Math::TQuat<double>_> *pTVar5;
  float *pfVar6;
  float fVar7;
  float fVar8;
  float local_res8;
  float local_resc;
  undefined1 local_res20 [8];
  TQuat<double> local_58;
  TQuat<double> local_38;
  
  if (this->CurrentImplementation == '\x01') {
    if (((this->LegacyData).Object == (FLegacySpline *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TQuat<double> *)(*pcVar2)();
      return pTVar4;
    }
    local_38.X = 0.0;
    local_38.Y = 0.0;
    local_38.Z = ___xmm_3ff00000000000000000000000000000;
    local_38.W = _UNK_15061cbc8;
    FInterpCurve<UE::Math::TQuat<double>_>::Eval
              ((FInterpCurve<UE::Math::TQuat<double>_> *)&((this->LegacyData).Object)->RotationCurve
               ,__return_storage_ptr__,param_1,&local_38);
    return __return_storage_ptr__;
  }
  if (this->CurrentImplementation != '\x02') {
    __return_storage_ptr__->X = 0.0;
    __return_storage_ptr__->Y = 0.0;
    __return_storage_ptr__->Z = 0.0;
    __return_storage_ptr__->W = 0.0;
    return __return_storage_ptr__;
  }
  if (((this->NewData).Object == (FNewSpline *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    pTVar4 = (TQuat<double> *)(*pcVar2)();
    return pTVar4;
  }
  this_00 = (this->NewData).Object;
  if (UE::Spline::GUseLegacyRotationEvaluation != false) {
    FNewSpline::RebuildLegacyCurves(this_00);
    local_58.Z = ___xmm_3ff00000000000000000000000000000;
    local_58.W = _UNK_15061cbc8;
    local_58.X = 0.0;
    local_58.Y = 0.0;
    FInterpCurve<UE::Math::TQuat<double>_>::Eval
              ((FInterpCurve<UE::Math::TQuat<double>_> *)&this_00->RotationCurve,
               __return_storage_ptr__,param_1,&local_58);
    return __return_storage_ptr__;
  }
  fVar7 = FNewSpline::ToInternalSplineSpace(this_00,param_1);
  pTVar5 = UE::Geometry::Spline::
           TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
           GetAttributeChannel<UE::Math::TQuat<double>_>
                     ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                       *)this_00,FNewSpline::RotationAttrName);
  if (pTVar5 == (TSplineInterface<UE::Math::TQuat<double>_> *)0x0) {
LAB_147a43411:
    __return_storage_ptr__->X = 0.0;
    __return_storage_ptr__->Y = 0.0;
    __return_storage_ptr__->Z = 0.0;
    __return_storage_ptr__->W = 0.0;
    return __return_storage_ptr__;
  }
  fVar7 = UE::Geometry::Spline::
          TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
          MapParameterToChildSpace
                    ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                      *)this_00,FNewSpline::RotationAttrName,fVar7);
  pfVar6 = (float *)(**(code **)(pTVar5->_padding_ + 0x30))(pTVar5,local_res20);
  if (pfVar6[1] <= *pfVar6 && *pfVar6 != pfVar6[1]) goto LAB_147a43411;
  pcVar2 = *(code **)(pTVar5->_padding_ + 0x90);
  (**(code **)(pTVar5->_padding_ + 0x30))(pTVar5,&local_res8);
  if (local_res8 <= fVar7) {
    fVar8 = fVar7;
    if (fVar7 <= local_resc) goto LAB_147a433f7;
    EVar1 = pTVar5->PostInfinityMode;
    fVar8 = local_resc;
  }
  else {
    EVar1 = pTVar5->PreInfinityMode;
    fVar8 = local_res8;
  }
  if (EVar1 == Zero) {
    (*pcVar2)(pTVar5,__return_storage_ptr__,0);
    return __return_storage_ptr__;
  }
  if ((EVar1 != Constant) && (fVar8 = fVar7, EVar1 == Cycle)) {
    fVar7 = FGenericPlatformMath::Fmod(fVar7 - local_res8,local_resc - local_res8);
    (*pcVar2)(pTVar5,__return_storage_ptr__,fVar7 + local_res8);
    return __return_storage_ptr__;
  }
LAB_147a433f7:
  (*pcVar2)(pTVar5,__return_storage_ptr__,fVar8);
  return __return_storage_ptr__;
}

// EvaluateScale @ 147a435b0

TVector<double> * __thiscall
FSpline::EvaluateScale(FSpline *this,TVector<double> *__return_storage_ptr__,float param_1)

{
  FNewSpline *this_00;
  code *pcVar1;
  bool bVar2;
  TVector<double> *pTVar3;
  TSplineInterface<UE::Math::TVector<double>_> *this_01;
  FInterpCurve<UE::Math::TVector<double>_> *this_02;
  TVector<double>_u_0 *pTVar4;
  float fVar5;
  TVector<double>_u_0 local_48;
  TVector<double>_u_0 local_30;
  
  if (this->CurrentImplementation == '\x01') {
    if ((this->LegacyData).Object == (FLegacySpline *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TVector<double> *)(*pcVar1)();
        return pTVar3;
      }
    }
    pTVar4 = &local_30;
    this_02 = (FInterpCurve<UE::Math::TVector<double>_> *)&((this->LegacyData).Object)->ScaleCurve;
    local_30._s_0.Z = 0.0;
    local_30._s_0.X = 0.0;
    local_30._s_0.Y = 0.0;
  }
  else {
    if (this->CurrentImplementation != '\x02') {
      (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
      return __return_storage_ptr__;
    }
    if ((this->NewData).Object == (FNewSpline *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TVector<double> *)(*pcVar1)();
        return pTVar3;
      }
    }
    this_00 = (this->NewData).Object;
    if (UE::Spline::GUseLegacyScaleEvaluation == false) {
      fVar5 = FNewSpline::ToInternalSplineSpace(this_00,param_1);
      this_01 = UE::Geometry::Spline::
                TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                ::GetAttributeChannel<UE::Math::TVector<double>_>
                          ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                            *)this_00,FNewSpline::ScaleAttrName);
      if (this_01 == (TSplineInterface<UE::Math::TVector<double>_> *)0x0) {
        (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
        (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
        (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
        return __return_storage_ptr__;
      }
      fVar5 = UE::Geometry::Spline::
              TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
              ::MapParameterToChildSpace
                        ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                          *)this_00,FNewSpline::ScaleAttrName,fVar5);
      UE::Geometry::Spline::TSplineInterface<UE::Math::TVector<double>_>::Evaluate
                (this_01,__return_storage_ptr__,fVar5);
      return __return_storage_ptr__;
    }
    FNewSpline::RebuildLegacyCurves(this_00);
    this_02 = (FInterpCurve<UE::Math::TVector<double>_> *)&this_00->ScaleCurve;
    local_48._s_0.Z = 0.0;
    pTVar4 = &local_48;
    local_48._s_0.X = 0.0;
    local_48._s_0.Y = 0.0;
  }
  FInterpCurve<UE::Math::TVector<double>_>::Eval
            (this_02,__return_storage_ptr__,param_1,(TVector<double> *)&pTVar4->_s_0);
  return __return_storage_ptr__;
}

// ExportTextItem @ 147a43f60

bool __thiscall
FSpline::ExportTextItem
          (FSpline *this,FString *param_1,FSpline *param_2,UObject *param_3,int param_4,
          UObject *param_5)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  ForAnyElementType FVar3;
  FString local_f8;
  FString local_e8;
  FString local_d8;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_c8;
  FArchiveState local_b8;
  undefined8 local_28;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_20;
  undefined8 local_18;
  
  local_c8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_c8.ArrayNum = 0;
  local_c8.ArrayMax = 0;
  local_f8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_b8._padding_ = 0;
  local_b8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
  local_b8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
  local_b8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
  local_b8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
  local_b8._40_8_ = 0;
  local_b8.ArSerializingDefaults = 0;
  local_b8.ArPortFlags = 0;
  local_b8.ArMaxSerializeSize = 0;
  local_b8.ArUEVer.FileVersionUE4 = 0;
  local_b8.ArUEVer.FileVersionUE5 = 0;
  local_b8.ArLicenseeUEVer = 0;
  local_b8.ArEngineVer.Major = 0;
  local_b8.ArEngineVer.Minor = 0;
  local_b8.ArEngineVer.Patch = 0;
  local_b8.ArEngineVer._6_2_ = 0;
  local_b8.ArEngineVer.Changelist = 0;
  local_b8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
  local_b8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
  local_b8.SavePackageData = (FArchiveSavePackageData *)0x0;
  local_b8.SerializedProperty = (FProperty *)0x0;
  local_b8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
  local_b8.bCustomVersionsAreReset = false;
  local_b8._129_7_ = 0;
  local_b8.NextProxy = (FArchiveState *)0x0;
  FArchiveState::FArchiveState(&local_b8);
  local_28 = 0;
  local_b8._padding_ = (longlong)&___7__TMemoryWriterBase_V__TSizedDefaultAllocator__0CA_____6B_;
  local_20 = &local_c8;
  local_18 = 0;
  FArchiveState::SetIsSaving(&local_b8,true);
  (**(code **)(local_b8._padding_ + 0x108))(&local_b8,0);
  local_b8._padding_ = (longlong)&___7FMemoryWriter__6B_;
  SerializeSave(this,(FArchive *)&local_b8);
  if (UE::Spline::GEncodeAsHex == false) {
    FBase64::Encode(&local_f8,&local_c8,Standard);
    iVar2 = iswalpha(0x2f);
    if (iVar2 == 0) {
      ::FString::ReplaceCharInlineCaseSensitive(&local_f8,L'/',L'-');
    }
    else {
      ::FString::ReplaceCharInlineIgnoreCase(&local_f8,L'/',L'-');
    }
    ::FString::PrintfImpl(&local_d8,L"SplineData SplineDataLen=%d SplineData=%s\r\n");
    FVar3.Data = local_d8.Data.AllocatorInstance.Data;
    if (param_1 != &local_d8) {
      pFVar1 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_1->Data).AllocatorInstance.Data = local_d8.Data.AllocatorInstance.Data;
      (param_1->Data).ArrayNum = local_d8.Data.ArrayNum;
      (param_1->Data).ArrayMax = local_d8.Data.ArrayMax;
      local_d8.Data.ArrayNum = 0;
      local_d8.Data.ArrayMax = 0;
      local_d8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar3.Data = (FScriptContainerElement *)0x0;
    }
  }
  else {
    ::FString::FromHexBlob(&local_f8,(uchar *)local_c8.AllocatorInstance.Data,local_c8.ArrayNum);
    ::FString::PrintfImpl(&local_e8,L"SplineData SplineDataLen=%d SplineData=%s\r\n");
    FVar3.Data = local_e8.Data.AllocatorInstance.Data;
    if (param_1 != &local_e8) {
      pFVar1 = (param_1->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (param_1->Data).AllocatorInstance.Data = local_e8.Data.AllocatorInstance.Data;
      (param_1->Data).ArrayNum = local_e8.Data.ArrayNum;
      (param_1->Data).ArrayMax = local_e8.Data.ArrayMax;
      local_e8.Data.ArrayNum = 0;
      local_e8.Data.ArrayMax = 0;
      local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      FVar3.Data = (FScriptContainerElement *)0x0;
    }
  }
  if (FVar3.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FVar3.Data);
  }
  if (local_f8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_f8.Data.AllocatorInstance.Data);
  }
  FArchive::~FArchive((FArchive *)&local_b8);
  if (local_c8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_c8.AllocatorInstance.Data);
  }
  return true;
}

// FindNearest @ 147a46540

float __thiscall FSpline::FindNearest(FSpline *this,TVector<double> *param_1,float *param_2)

{
  FNewSpline *pFVar1;
  code *pcVar2;
  bool bVar3;
  float fVar4;
  
  if (this->CurrentImplementation == '\x01') {
    if ((this->LegacyData).Object == (FLegacySpline *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        fVar4 = (float)(*pcVar2)();
        return fVar4;
      }
    }
    fVar4 = FInterpCurve<UE::Math::TVector<double>_>::FindNearest
                      ((FInterpCurve<UE::Math::TVector<double>_> *)(this->LegacyData).Object,param_1
                       ,param_2);
    return fVar4;
  }
  if (this->CurrentImplementation != '\x02') {
    return 0.0;
  }
  if ((this->NewData).Object == (FNewSpline *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      fVar4 = (float)(*pcVar2)();
      return fVar4;
    }
  }
  pFVar1 = (this->NewData).Object;
                    /* WARNING: Could not recover jumptable at 0x000147a465c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  fVar4 = (float)(**(code **)(pFVar1->_padding_ + 0x68))(pFVar1,param_1,param_2);
  return fVar4;
}

// FindNearestOnSegment @ 147a46960

float __thiscall
FSpline::FindNearestOnSegment(FSpline *this,TVector<double> *param_1,int param_2,float *param_3)

{
  FNewSpline *pFVar1;
  FLegacySpline *this_00;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  float fVar5;
  float local_res8 [2];
  
  if (this->CurrentImplementation == '\x01') {
    if (((this->LegacyData).Object == (FLegacySpline *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      fVar5 = (float)(*pcVar2)();
      return fVar5;
    }
    this_00 = (this->LegacyData).Object;
    if (param_2 < 0) {
      return 0.0;
    }
    iVar4 = *(int *)&(this_00->PositionCurve).field_0x8;
  }
  else {
    if (this->CurrentImplementation != '\x02') {
      return 0.0;
    }
    if (((this->NewData).Object == (FNewSpline *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      fVar5 = (float)(*pcVar2)();
      return fVar5;
    }
    pFVar1 = (this->NewData).Object;
    if (UE::Spline::GFallbackFindNearest == false) {
      fVar5 = UE::Geometry::Spline::TPolyBezierSpline<UE::Math::TVector<double>_>::
              FindNearestOnSegment
                        ((TPolyBezierSpline<UE::Math::TVector<double>_> *)&pFVar1->_padding_,param_1
                         ,param_2,param_3);
      iVar4 = (**(code **)(pFVar1->_padding_ + 0xb0))(&pFVar1->_padding_,fVar5,local_res8);
      return (float)((int)(iVar4 + (iVar4 >> 0x1f & 3U)) >> 2) + local_res8[0];
    }
    this_00 = (FLegacySpline *)&pFVar1->PositionCurve;
    if (param_2 < 0) {
      return 0.0;
    }
    iVar4 = *(int *)&(pFVar1->PositionCurve).field_0x8;
  }
  if (iVar4 <= param_2) {
    return 0.0;
  }
  fVar5 = FInterpCurve<UE::Math::TVector<double>_>::FindNearestOnSegment
                    ((FInterpCurve<UE::Math::TVector<double>_> *)this_00,param_1,param_2,param_3);
  return fVar5;
}

// GetDistanceAtParameter @ 147a50950

float __thiscall FSpline::GetDistanceAtParameter(FSpline *this,float param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (this->CurrentImplementation == '\x01') {
    if ((this->LegacyData).Object == (FLegacySpline *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        fVar3 = (float)(*pcVar1)();
        return fVar3;
      }
    }
    fVar3 = FLegacySpline::GetDistanceAtParameter((this->LegacyData).Object,param_1);
    return fVar3;
  }
  if (this->CurrentImplementation != '\x02') {
    return 0.0;
  }
  if ((this->NewData).Object == (FNewSpline *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  fVar3 = FNewSpline::GetDistanceAtParameter((this->NewData).Object,param_1);
  return fVar3;
}

// GetFloatPropertyChannels @ 147a50d60

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
FSpline::GetFloatPropertyChannels
          (FSpline *this,TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  FNewSpline *this_00;
  FScriptContainerElement *pFVar1;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar2;
  TArray<FName,TSizedDefaultAllocator<32>_> local_18;
  
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  this_00 = (this->NewData).Object;
  if ((this_00 != (FNewSpline *)0x0) && (this->CurrentImplementation == '\x02')) {
    pTVar2 = UE::Geometry::Spline::
             TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
             GetAttributeChannelNamesByValueType<float>
                       ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                         *)this_00,&local_18);
    if (__return_storage_ptr__ != pTVar2) {
      pFVar1 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      (__return_storage_ptr__->AllocatorInstance).Data = (pTVar2->AllocatorInstance).Data;
      (pTVar2->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
      __return_storage_ptr__->ArrayNum = pTVar2->ArrayNum;
      __return_storage_ptr__->ArrayMax = pTVar2->ArrayMax;
      pTVar2->ArrayNum = 0;
      pTVar2->ArrayMax = 0;
    }
    if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.AllocatorInstance.Data);
    }
  }
  return __return_storage_ptr__;
}

// GetInTangent @ 147a51170

TVector<double> * __thiscall
FSpline::GetInTangent(FSpline *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  FNewSpline *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TVector<double> *pTVar5;
  
  if (this->CurrentImplementation == '\x01') {
    if ((this->LegacyData).Object == (FLegacySpline *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TVector<double> *)(*pcVar2)();
        return pTVar5;
      }
    }
    FLegacySpline::GetInTangent((this->LegacyData).Object,__return_storage_ptr__,param_1);
    return __return_storage_ptr__;
  }
  if (this->CurrentImplementation == '\x02') {
    if ((this->NewData).Object == (FNewSpline *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TVector<double> *)(*pcVar2)();
        return pTVar5;
      }
    }
    if (-1 < param_1) {
      pFVar1 = (this->NewData).Object;
      iVar4 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                        ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&pFVar1->_padding_);
      if (param_1 < iVar4) {
        UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetTangentIn
                  ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&pFVar1->_padding_,
                   __return_storage_ptr__,param_1);
        return __return_storage_ptr__;
      }
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  return __return_storage_ptr__;
}

// GetLocation @ 147a52920

TVector<double> * __thiscall
FSpline::GetLocation(FSpline *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  FNewSpline *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TVector<double> *pTVar5;
  
  if (this->CurrentImplementation == '\x01') {
    if ((this->LegacyData).Object == (FLegacySpline *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TVector<double> *)(*pcVar2)();
        return pTVar5;
      }
    }
    FLegacySpline::GetLocation((this->LegacyData).Object,__return_storage_ptr__,param_1);
    return __return_storage_ptr__;
  }
  if (this->CurrentImplementation == '\x02') {
    if ((this->NewData).Object == (FNewSpline *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TVector<double> *)(*pcVar2)();
        return pTVar5;
      }
    }
    if (-1 < param_1) {
      pFVar1 = (this->NewData).Object;
      iVar4 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                        ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&pFVar1->_padding_);
      if (param_1 < iVar4) {
        UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetValue
                  ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&pFVar1->_padding_,
                   __return_storage_ptr__,param_1);
        return __return_storage_ptr__;
      }
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  return __return_storage_ptr__;
}

// GetNumControlPoints @ 147a53f10

int __thiscall FSpline::GetNumControlPoints(FSpline *this)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  
  if (this->CurrentImplementation == '\x01') {
    if ((this->LegacyData).Object == (FLegacySpline *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        iVar3 = (*pcVar1)();
        return iVar3;
      }
    }
    return *(int *)&(((this->LegacyData).Object)->PositionCurve).field_0x8;
  }
  if (this->CurrentImplementation != '\x02') {
    return 0;
  }
  if ((this->NewData).Object == (FNewSpline *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      iVar3 = (*pcVar1)();
      return iVar3;
    }
  }
  iVar3 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                    ((TTangentBezierSpline<UE::Math::TVector<double>_> *)
                     &((this->NewData).Object)->_padding_);
  return iVar3;
}

// GetNumSegments @ 147a54090

int __thiscall FSpline::GetNumSegments(FSpline *this)

{
  FLegacySpline *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  
  if (this->CurrentImplementation != '\x01') {
    if (this->CurrentImplementation != '\x02') {
      return 0;
    }
    if ((this->NewData).Object == (FNewSpline *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x000147a540eb. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar4 = (**(code **)(((this->NewData).Object)->_padding_ + 0x50))();
    return iVar4;
  }
  if ((this->LegacyData).Object == (FLegacySpline *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  pFVar1 = (this->LegacyData).Object;
  if ((pFVar1->PositionCurve).field_0x10 != '\0') {
    if (pFVar1 == (FLegacySpline *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        iVar4 = (*pcVar2)();
        return iVar4;
      }
    }
    return *(int *)&(((this->LegacyData).Object)->PositionCurve).field_0x8;
  }
  if (pFVar1 == (FLegacySpline *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      iVar4 = (*pcVar2)();
      return iVar4;
    }
  }
  iVar4 = *(int *)&(((this->LegacyData).Object)->PositionCurve).field_0x8 + -1;
  if (iVar4 < 0) {
    iVar4 = 0;
  }
  return iVar4;
}

// GetOrientation @ 147a547a0

TQuat<double> * __thiscall
FSpline::GetOrientation(FSpline *this,TQuat<double> *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  TQuat<double> *pTVar3;
  float fVar4;
  
  if (this->CurrentImplementation == '\x01') {
    if ((this->LegacyData).Object == (FLegacySpline *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TQuat<double> *)(*pcVar1)();
        return pTVar3;
      }
    }
    fVar4 = FLegacySpline::GetParameterAtIndex((this->LegacyData).Object,param_1);
  }
  else if (this->CurrentImplementation == '\x02') {
    if ((this->NewData).Object == (FNewSpline *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pTVar3 = (TQuat<double> *)(*pcVar1)();
        return pTVar3;
      }
    }
    fVar4 = FNewSpline::GetParameterAtIndex((this->NewData).Object,param_1);
  }
  else {
    fVar4 = 0.0;
  }
  GetOrientation(this,__return_storage_ptr__,fVar4);
  return __return_storage_ptr__;
}

// GetOrientation @ 147a54870

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TQuat<double> * __thiscall
FSpline::GetOrientation(FSpline *this,TQuat<double> *__return_storage_ptr__,float param_1)

{
  undefined1 auVar1 [12];
  undefined8 uVar2;
  ulonglong uVar3;
  TMatrix<double> *this_00;
  ulonglong uVar4;
  ulonglong uVar5;
  double dVar6;
  double dVar8;
  undefined1 auVar7 [16];
  double dVar9;
  undefined1 auVar10 [16];
  undefined8 uVar12;
  undefined1 auVar11 [16];
  double dVar13;
  undefined1 in_XMM4 [16];
  undefined1 auVar14 [16];
  double dVar15;
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  uint uVar18;
  uint uVar19;
  undefined1 auStack_188 [32];
  TVector<double>_u_0 local_168;
  undefined1 local_148 [16];
  undefined1 local_138 [16];
  TVector<double>_u_0 local_128;
  TMatrix<double> local_108;
  ulonglong local_88;
  
  local_88 = __security_cookie.value ^ (ulonglong)auStack_188;
  EvaluateRotation(this,(TQuat<double> *)local_148,param_1);
  dVar9 = __real_3e45798ee0000000;
  dVar6 = (double)local_138._0_8_ * (double)local_138._0_8_ +
          (double)local_148._0_8_ * (double)local_148._0_8_;
  dVar8 = (double)local_138._8_8_ * (double)local_138._8_8_ +
          (double)local_148._8_8_ * (double)local_148._8_8_;
  dVar15 = dVar8 + dVar6;
  dVar6 = dVar6 + dVar8;
  auVar14._8_4_ = SUB84(dVar6,0);
  auVar14._0_8_ = dVar15;
  auVar14._12_4_ = (int)((ulonglong)dVar6 >> 0x20);
  auVar14 = sqrtpd(in_XMM4,auVar14);
  uVar4 = -(ulonglong)(__real_3e45798ee0000000 <= dVar15);
  uVar5 = -(ulonglong)(__real_3e45798ee0000000 <= dVar6);
  uVar18 = (uint)(uVar4 >> 0x20);
  uVar19 = (uint)(uVar5 >> 0x20);
  auVar16 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar14);
  auVar17._0_8_ = uVar4 & (ulonglong)(auVar16._0_8_ * (double)local_148._0_8_);
  uVar3 = uVar5 & (ulonglong)(auVar16._8_8_ * (double)local_148._8_8_);
  auVar17._8_4_ = (undefined4)uVar3;
  auVar17._12_4_ = (undefined4)(uVar3 >> 0x20);
  auVar16._0_4_ = ~(uint)uVar4 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[0],0);
  auVar16._4_4_ =
       ~uVar18 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[0] >> 0x20);
  auVar16._8_4_ = ~(uint)uVar5 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
  auVar16._12_4_ =
       ~uVar19 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
  local_148 = auVar17 | auVar16;
  auVar14 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar14);
  auVar10._0_4_ = ~(uint)uVar4 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[2],0);
  auVar10._4_4_ =
       ~uVar18 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[2] >> 0x20);
  auVar10._8_4_ = ~(uint)uVar5 & SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
  auVar10._12_4_ =
       ~uVar19 & (uint)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
  auVar7._0_8_ = (ulonglong)(auVar14._0_8_ * (double)local_138._0_8_) & uVar4;
  uVar5 = (ulonglong)(auVar14._8_8_ * (double)local_138._8_8_) & uVar5;
  auVar7._8_4_ = (undefined4)uVar5;
  auVar7._12_4_ = (undefined4)(uVar5 >> 0x20);
  auVar10 = auVar10 | auVar7;
  local_138 = auVar10;
  EvaluateDerivative(this,(TVector<double> *)&local_168._s_0,param_1);
  uVar12 = auVar10._8_8_;
  dVar15 = (double)CONCAT44(local_168._12_4_,local_168._8_4_);
  dVar6 = (double)CONCAT44(local_168._4_4_,local_168._0_4_);
  dVar8 = dVar15 * dVar15 + dVar6 * dVar6 + local_168._s_0.Z * local_168._s_0.Z;
  if (dVar8 != __real_3ff0000000000000) {
    local_168._0_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_;
    local_168._4_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_;
    local_168._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
    local_168._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
    uVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    if (dVar8 < dVar9) goto LAB_147a549eb;
    dVar9 = __real_3ff0000000000000 / SQRT(dVar8);
    uVar12 = 0;
    local_168._s_0.Z = local_168._s_0.Z * dVar9;
    dVar6 = dVar6 * dVar9;
    dVar15 = dVar15 * dVar9;
  }
  local_168._0_4_ = SUB84(dVar6,0);
  local_168._4_4_ = (int)((ulonglong)dVar6 >> 0x20);
  local_168._8_4_ = SUB84(dVar15,0);
  local_168._12_4_ = (int)((ulonglong)dVar15 >> 0x20);
  uVar2 = local_168._s_0.Z;
LAB_147a549eb:
  dVar13 = local_138._0_8_;
  auVar1._4_8_ = uVar12;
  auVar1._0_4_ = local_138._4_4_;
  auVar11._0_8_ = auVar1._0_8_ << 0x20;
  auVar11._8_4_ = local_138._8_4_;
  auVar11._12_4_ = local_138._12_4_;
  dVar8 = auVar11._8_8_;
  dVar9 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z * (double)local_148._8_8_ -
          UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y * dVar13;
  dVar9 = dVar9 + dVar9;
  dVar6 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X * dVar13 -
          UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z * (double)local_148._0_8_;
  dVar6 = dVar6 + dVar6;
  dVar15 = UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y * (double)local_148._0_8_ -
           UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X * (double)local_148._8_8_;
  dVar15 = dVar15 + dVar15;
  local_128._s_0.X =
       (dVar15 * (double)local_148._8_8_ - dVar6 * dVar13) +
       dVar9 * dVar8 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.X;
  local_128._s_0.Y =
       (dVar9 * dVar13 - dVar15 * (double)local_148._0_8_) +
       dVar6 * dVar8 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Y;
  local_128._s_0.Z =
       (dVar6 * (double)local_148._0_8_ - dVar9 * (double)local_148._8_8_) +
       dVar15 * dVar8 + UE::Math::TVector<double>::UpVector.field0_0x0._s_0.Z;
  local_168._s_0.Z = (double)uVar2;
  this_00 = UE::Math::TRotationMatrix<double>::MakeFromXZ
                      (&local_108,(TVector<double> *)&local_168._s_0,
                       (TVector<double> *)&local_128._s_0);
  UE::Math::TMatrix<double>::ToQuat(this_00,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// GetOutTangent @ 147a54c90

TVector<double> * __thiscall
FSpline::GetOutTangent(FSpline *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  FNewSpline *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TVector<double> *pTVar5;
  
  if (this->CurrentImplementation == '\x01') {
    if ((this->LegacyData).Object == (FLegacySpline *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TVector<double> *)(*pcVar2)();
        return pTVar5;
      }
    }
    FLegacySpline::GetOutTangent((this->LegacyData).Object,__return_storage_ptr__,param_1);
    return __return_storage_ptr__;
  }
  if (this->CurrentImplementation == '\x02') {
    if ((this->NewData).Object == (FNewSpline *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        pTVar5 = (TVector<double> *)(*pcVar2)();
        return pTVar5;
      }
    }
    if (-1 < param_1) {
      pFVar1 = (this->NewData).Object;
      iVar4 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                        ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&pFVar1->_padding_);
      if (param_1 < iVar4) {
        UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetTangentOut
                  ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&pFVar1->_padding_,
                   __return_storage_ptr__,param_1);
        return __return_storage_ptr__;
      }
    }
  }
  (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
  (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
  return __return_storage_ptr__;
}

// GetParameterAtDistance @ 147a55540

float __thiscall FSpline::GetParameterAtDistance(FSpline *this,float param_1)

{
  FNewSpline *this_00;
  code *pcVar1;
  bool bVar2;
  float fVar3;
  float local_res8 [2];
  float local_res18 [4];
  
  if (this->CurrentImplementation == '\x01') {
    if ((this->LegacyData).Object == (FLegacySpline *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        fVar3 = (float)(*pcVar1)();
        return fVar3;
      }
    }
    local_res18[0] = 0.0;
    fVar3 = FInterpCurve<float>::Eval
                      ((FInterpCurve<float> *)&((this->LegacyData).Object)->ReparamTable,param_1,
                       local_res18);
    return fVar3;
  }
  if (this->CurrentImplementation != '\x02') {
    return 0.0;
  }
  if ((this->NewData).Object == (FNewSpline *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  this_00 = (this->NewData).Object;
  FNewSpline::UpdateReparamTable(this_00);
  AcquireSRWLockShared((PSRWLOCK)&this_00->ReparamTableRWLock);
  local_res8[0] = 0.0;
  fVar3 = FInterpCurve<float>::Eval
                    ((FInterpCurve<float> *)&this_00->ReparamTable,param_1,local_res8);
  ReleaseSRWLockShared((PSRWLOCK)&this_00->ReparamTableRWLock);
  return fVar3;
}

// GetParameterAtIndex @ 147a557a0

float __thiscall FSpline::GetParameterAtIndex(FSpline *this,int param_1)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (this->CurrentImplementation == '\x01') {
    if ((this->LegacyData).Object == (FLegacySpline *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        fVar3 = (float)(*pcVar1)();
        return fVar3;
      }
    }
    fVar3 = FLegacySpline::GetParameterAtIndex((this->LegacyData).Object,param_1);
    return fVar3;
  }
  if (this->CurrentImplementation != '\x02') {
    return 0.0;
  }
  if ((this->NewData).Object == (FNewSpline *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      fVar3 = (float)(*pcVar1)();
      return fVar3;
    }
  }
  fVar3 = FNewSpline::GetParameterAtIndex((this->NewData).Object,param_1);
  return fVar3;
}

// GetPoint @ 147a56520

FSplinePoint * __thiscall
FSpline::GetPoint(FSpline *this,FSplinePoint *__return_storage_ptr__,int param_1)

{
  code *pcVar1;
  bool bVar2;
  FSplinePoint *pFVar3;
  
  if (this->CurrentImplementation == '\x01') {
    if ((this->LegacyData).Object == (FLegacySpline *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FSplinePoint *)(*pcVar1)();
        return pFVar3;
      }
    }
    FLegacySpline::GetPoint((this->LegacyData).Object,__return_storage_ptr__,param_1);
    return __return_storage_ptr__;
  }
  if (this->CurrentImplementation != '\x02') {
    (__return_storage_ptr__->Type).Value = '\x01';
    __return_storage_ptr__->InputKey = 0.0;
    (__return_storage_ptr__->Position).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->Position).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->Position).field0_0x0._s_0.Z = 0.0;
    (__return_storage_ptr__->ArriveTangent).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->ArriveTangent).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->ArriveTangent).field0_0x0._s_0.Z = 0.0;
    (__return_storage_ptr__->LeaveTangent).field0_0x0._s_0.X = 0.0;
    (__return_storage_ptr__->LeaveTangent).field0_0x0._s_0.Y = 0.0;
    (__return_storage_ptr__->LeaveTangent).field0_0x0._s_0.Z = 0.0;
    (__return_storage_ptr__->Rotation).Pitch = 0.0;
    (__return_storage_ptr__->Rotation).Yaw = 0.0;
    (__return_storage_ptr__->Rotation).Roll = 0.0;
    (__return_storage_ptr__->Scale).field0_0x0._s_0.X = 1.0;
    (__return_storage_ptr__->Scale).field0_0x0._s_0.Y = 1.0;
    (__return_storage_ptr__->Scale).field0_0x0._s_0.Z = 1.0;
    return __return_storage_ptr__;
  }
  if ((this->NewData).Object == (FNewSpline *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FSplinePoint *)(*pcVar1)();
      return pFVar3;
    }
  }
  FNewSpline::GetPoint((this->NewData).Object,__return_storage_ptr__,param_1);
  return __return_storage_ptr__;
}

// GetRotation @ 147a57d00

TQuat<double> * __thiscall
FSpline::GetRotation(FSpline *this,TQuat<double> *__return_storage_ptr__,int param_1)

{
  FNewSpline *this_00;
  code *pcVar1;
  double dVar2;
  bool bVar3;
  int iVar4;
  TQuat<double> *pTVar5;
  TTangentBezierSpline<UE::Math::TQuat<double>_> *this_01;
  
  if (this->CurrentImplementation == '\x01') {
    if ((this->LegacyData).Object == (FLegacySpline *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TQuat<double> *)(*pcVar1)();
        return pTVar5;
      }
    }
    FLegacySpline::GetRotation((this->LegacyData).Object,__return_storage_ptr__,param_1);
    return __return_storage_ptr__;
  }
  if (this->CurrentImplementation != '\x02') {
LAB_147a57d29:
    __return_storage_ptr__->X = 0.0;
    __return_storage_ptr__->Y = 0.0;
    __return_storage_ptr__->Z = 0.0;
    __return_storage_ptr__->W = 0.0;
    return __return_storage_ptr__;
  }
  if ((this->NewData).Object == (FNewSpline *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TQuat<double> *)(*pcVar1)();
      return pTVar5;
    }
  }
  if (-1 < param_1) {
    this_00 = (this->NewData).Object;
    iVar4 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                      ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this_00->_padding_);
    if (param_1 < iVar4) {
      this_01 = UE::Geometry::Spline::
                TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                ::
                GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>_>
                          ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                            *)this_00,FNewSpline::RotationAttrName);
      if (this_01 != (TTangentBezierSpline<UE::Math::TQuat<double>_> *)0x0) {
        UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::GetValue
                  (this_01,__return_storage_ptr__,param_1);
        return __return_storage_ptr__;
      }
      goto LAB_147a57d29;
    }
  }
  dVar2 = UE::Math::TQuat<double>::Identity.Y;
  __return_storage_ptr__->X = UE::Math::TQuat<double>::Identity.X;
  __return_storage_ptr__->Y = dVar2;
  dVar2 = UE::Math::TQuat<double>::Identity.W;
  __return_storage_ptr__->Z = UE::Math::TQuat<double>::Identity.Z;
  __return_storage_ptr__->W = dVar2;
  return __return_storage_ptr__;
}

// GetScale @ 147a57fb0

TVector<double> * __thiscall
FSpline::GetScale(FSpline *this,TVector<double> *__return_storage_ptr__,int param_1)

{
  FNewSpline *this_00;
  code *pcVar1;
  undefined8 uVar2;
  bool bVar3;
  int iVar4;
  TVector<double> *pTVar5;
  TTangentBezierSpline<UE::Math::TVector<double>_> *this_01;
  
  if (this->CurrentImplementation == '\x01') {
    if ((this->LegacyData).Object == (FLegacySpline *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar1 = (code *)swi(3);
        pTVar5 = (TVector<double> *)(*pcVar1)();
        return pTVar5;
      }
    }
    FLegacySpline::GetScale((this->LegacyData).Object,__return_storage_ptr__,param_1);
    return __return_storage_ptr__;
  }
  if (this->CurrentImplementation != '\x02') {
    (__return_storage_ptr__->field0_0x0)._s_0.X = 1.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Y = 1.0;
    (__return_storage_ptr__->field0_0x0)._s_0.Z = 1.0;
    return __return_storage_ptr__;
  }
  if ((this->NewData).Object == (FNewSpline *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TVector<double> *)(*pcVar1)();
      return pTVar5;
    }
  }
  if (-1 < param_1) {
    this_00 = (this->NewData).Object;
    iVar4 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                      ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this_00->_padding_);
    if (param_1 < iVar4) {
      this_01 = UE::Geometry::Spline::
                TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                ::
                GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                          ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                            *)this_00,FNewSpline::ScaleAttrName);
      if (this_01 != (TTangentBezierSpline<UE::Math::TVector<double>_> *)0x0) {
        UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetValue
                  (this_01,__return_storage_ptr__,param_1);
        return __return_storage_ptr__;
      }
      (__return_storage_ptr__->field0_0x0)._s_0.X = 0.0;
      (__return_storage_ptr__->field0_0x0)._s_0.Y = 0.0;
      (__return_storage_ptr__->field0_0x0)._s_0.Z = 0.0;
      return __return_storage_ptr__;
    }
  }
  uVar2 = UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Y;
  (__return_storage_ptr__->field0_0x0)._s_0.X =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.X;
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (double)uVar2;
  (__return_storage_ptr__->field0_0x0)._s_0.Z =
       UE::Math::TVector<double>::OneVector.field0_0x0._s_0.Z;
  return __return_storage_ptr__;
}

// GetSegmentLength @ 147a58bc0

float __thiscall
FSpline::GetSegmentLength(FSpline *this,int param_1,float param_2,TVector<double> *param_3)

{
  code *pcVar1;
  bool bVar2;
  float fVar3;
  
  if (this->CurrentImplementation == '\x01') {
    if ((this->LegacyData).Object == (FLegacySpline *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        fVar3 = (float)(*pcVar1)();
        return fVar3;
      }
    }
    fVar3 = FLegacySpline::GetSegmentLength((this->LegacyData).Object,param_1,param_2,param_3);
  }
  else if (this->CurrentImplementation == '\x02') {
    if ((this->NewData).Object == (FNewSpline *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        fVar3 = (float)(*pcVar1)();
        return fVar3;
      }
    }
    fVar3 = FNewSpline::GetSegmentLength((this->NewData).Object,param_1,param_2,param_3);
  }
  else {
    fVar3 = 0.0;
  }
  return fVar3;
}

// GetSplineInterface @ 147a591b0

TSharedPtr<UE::Geometry::Spline::TSplineInterface<UE::Math::TVector<double>_>,1> * __thiscall
FSpline::GetSplineInterface
          (FSpline *this,
          TSharedPtr<UE::Geometry::Spline::TSplineInterface<UE::Math::TVector<double>_>,1>
          *__return_storage_ptr__)

{
  TReferenceControllerBase<1> *pTVar1;
  
  if (this->CurrentImplementation == '\x02') {
    __return_storage_ptr__->Object =
         (TSplineInterface<UE::Math::TVector<double>_> *)(this->NewData).Object;
    pTVar1 = (this->NewData).SharedReferenceCount.ReferenceController;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar1;
    if (pTVar1 != (TReferenceControllerBase<1> *)0x0) {
      LOCK();
      pTVar1->SharedReferenceCount = (atomic<int>)((int)pTVar1->SharedReferenceCount + 1);
      UNLOCK();
      return __return_storage_ptr__;
    }
  }
  else {
    __return_storage_ptr__->Object = (TSplineInterface<UE::Math::TVector<double>_> *)0x0;
    (__return_storage_ptr__->SharedReferenceCount).ReferenceController =
         (TReferenceControllerBase<1> *)0x0;
  }
  return __return_storage_ptr__;
}

// GetSplineLength @ 147a592b0

float __thiscall FSpline::GetSplineLength(FSpline *this)

{
  FNewSpline *this_00;
  FLegacySpline *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  float fVar6;
  
  if (this->CurrentImplementation == '\x01') {
    if ((this->LegacyData).Object == (FLegacySpline *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        fVar6 = (float)(*pcVar2)();
        return fVar6;
      }
    }
    pFVar1 = (this->LegacyData).Object;
    iVar4 = *(int *)&(pFVar1->ReparamTable).field_0x8;
    if (0 < iVar4) {
      uVar5 = 0;
      if ((int)(iVar4 - 1U) < iVar4) {
        uVar5 = ~(iVar4 - 1U) >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          fVar6 = (float)(*pcVar2)();
          return fVar6;
        }
      }
      return *(float *)(*(longlong *)&pFVar1->ReparamTable + -0x14 +
                       (longlong)*(int *)&(pFVar1->ReparamTable).field_0x8 * 0x14);
    }
  }
  else if (this->CurrentImplementation == '\x02') {
    if ((this->NewData).Object == (FNewSpline *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        fVar6 = (float)(*pcVar2)();
        return fVar6;
      }
    }
    this_00 = (this->NewData).Object;
    iVar4 = (**(code **)(this_00->_padding_ + 0x50))(this_00);
    fVar6 = FNewSpline::GetDistanceAtParameter(this_00,(float)iVar4);
    return fVar6;
  }
  return 0.0;
}

// GetSplinePointType @ 147a594c0

EInterpCurveMode __thiscall FSpline::GetSplinePointType(FSpline *this,int param_1)

{
  FNewSpline *pFVar1;
  code *pcVar2;
  bool bVar3;
  ETangentMode EVar4;
  EInterpCurveMode EVar5;
  int iVar6;
  
  if (this->CurrentImplementation == '\x01') {
    if ((this->LegacyData).Object == (FLegacySpline *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
    }
    EVar5 = FLegacySpline::GetSplinePointType((this->LegacyData).Object,param_1);
    return EVar5;
  }
  if (this->CurrentImplementation == '\x02') {
    if ((this->NewData).Object == (FNewSpline *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        EVar5 = (*pcVar2)();
        return EVar5;
      }
    }
    if (-1 < param_1) {
      pFVar1 = (this->NewData).Object;
      iVar6 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                        ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&pFVar1->_padding_);
      if (param_1 < iVar6) {
        EVar4 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::
                GetTangentMode((TTangentBezierSpline<UE::Math::TVector<double>_> *)
                               &pFVar1->_padding_,param_1);
        EVar5 = ConvertTangentModeToInterpCurveMode(EVar4);
        return EVar5;
      }
    }
  }
  return CIM_Unknown;
}

// GetSplinePointsPosition @ 147a595a0

FInterpCurveVector * __thiscall FSpline::GetSplinePointsPosition(FSpline *this)

{
  code *pcVar1;
  bool bVar2;
  FInterpCurveVector *pFVar3;
  
  if (this->CurrentImplementation == '\x01') {
    if ((this->LegacyData).Object == (FLegacySpline *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FInterpCurveVector *)(*pcVar1)();
        return pFVar3;
      }
    }
    return &((this->LegacyData).Object)->PositionCurve;
  }
  if (this->CurrentImplementation != '\x02') {
    return &PositionCurve;
  }
  if ((this->NewData).Object == (FNewSpline *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FInterpCurveVector *)(*pcVar1)();
      return pFVar3;
    }
  }
  FNewSpline::RebuildLegacyCurves((this->NewData).Object);
  if ((this->NewData).Object == (FNewSpline *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FInterpCurveVector *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &((this->NewData).Object)->PositionCurve;
}

// GetSplinePointsRotation @ 147a59680

FInterpCurveQuat * __thiscall FSpline::GetSplinePointsRotation(FSpline *this)

{
  code *pcVar1;
  bool bVar2;
  FInterpCurveQuat *pFVar3;
  
  if (this->CurrentImplementation == '\x01') {
    if ((this->LegacyData).Object == (FLegacySpline *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FInterpCurveQuat *)(*pcVar1)();
        return pFVar3;
      }
    }
    return &((this->LegacyData).Object)->RotationCurve;
  }
  if (this->CurrentImplementation != '\x02') {
    return &RotationCurve;
  }
  if ((this->NewData).Object == (FNewSpline *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FInterpCurveQuat *)(*pcVar1)();
      return pFVar3;
    }
  }
  FNewSpline::RebuildLegacyCurves((this->NewData).Object);
  if ((this->NewData).Object == (FNewSpline *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FInterpCurveQuat *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &((this->NewData).Object)->RotationCurve;
}

// GetSplinePointsScale @ 147a59760

FInterpCurveVector * __thiscall FSpline::GetSplinePointsScale(FSpline *this)

{
  code *pcVar1;
  bool bVar2;
  FInterpCurveVector *pFVar3;
  
  if (this->CurrentImplementation == '\x01') {
    if ((this->LegacyData).Object == (FLegacySpline *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        pFVar3 = (FInterpCurveVector *)(*pcVar1)();
        return pFVar3;
      }
    }
    return &((this->LegacyData).Object)->ScaleCurve;
  }
  if (this->CurrentImplementation != '\x02') {
    return &ScaleCurve;
  }
  if ((this->NewData).Object == (FNewSpline *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FInterpCurveVector *)(*pcVar1)();
      return pFVar3;
    }
  }
  FNewSpline::RebuildLegacyCurves((this->NewData).Object);
  if ((this->NewData).Object == (FNewSpline *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x458,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      pFVar3 = (FInterpCurveVector *)(*pcVar1)();
      return pFVar3;
    }
  }
  return &((this->NewData).Object)->ScaleCurve;
}

// GetVectorPropertyChannels @ 147a5bee0

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
FSpline::GetVectorPropertyChannels
          (FSpline *this,TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  int iVar1;
  FNewSpline *this_00;
  FScriptContainerElement *pFVar2;
  FName *pFVar3;
  code *pcVar4;
  bool bVar5;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar6;
  FName FVar7;
  ulonglong uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar12;
  ulonglong uVar13;
  TArray<FName,TSizedDefaultAllocator<32>_> local_38;
  ulonglong uVar11;
  
  uVar8 = 0;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  this_00 = (this->NewData).Object;
  if ((this_00 == (FNewSpline *)0x0) || (this->CurrentImplementation != '\x02')) {
    return __return_storage_ptr__;
  }
  pTVar6 = UE::Geometry::Spline::
           TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
           GetAttributeChannelNamesByValueType<UE::Math::TVector<double>_>
                     ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                       *)this_00,&local_38);
  if (__return_storage_ptr__ != pTVar6) {
    pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
    if (pFVar2 != (FScriptContainerElement *)0x0) {
      FMemory::Free(pFVar2);
    }
    (__return_storage_ptr__->AllocatorInstance).Data = (pTVar6->AllocatorInstance).Data;
    (pTVar6->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
    __return_storage_ptr__->ArrayNum = pTVar6->ArrayNum;
    __return_storage_ptr__->ArrayMax = pTVar6->ArrayMax;
    pTVar6->ArrayNum = 0;
    pTVar6->ArrayMax = 0;
  }
  if (local_38.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  if (((this->NewData).Object == (FNewSpline *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar6;
  }
  pFVar2 = (__return_storage_ptr__->AllocatorInstance).Data;
  if (((pFVar2 < (FScriptContainerElement *)0x155201fc1) &&
      (&FNewSpline::ScaleAttrName <
       (FName *)(pFVar2 + (longlong)__return_storage_ptr__->ArrayMax * 8))) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar5)) {
    pcVar4 = (code *)swi(3);
    pTVar6 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar4)();
    return pTVar6;
  }
  iVar1 = __return_storage_ptr__->ArrayNum;
  if (iVar1 == 0) {
    return __return_storage_ptr__;
  }
  pFVar3 = (FName *)(__return_storage_ptr__->AllocatorInstance).Data;
  bVar5 = *pFVar3 != FNewSpline::ScaleAttrName;
  FVar7 = FNewSpline::ScaleAttrName;
  uVar11 = uVar8;
  uVar13 = uVar8;
  do {
    uVar9 = (uint)uVar11;
    uVar10 = uVar9;
    do {
      uVar8 = uVar8 + 1;
      uVar10 = uVar10 + 1;
      uVar11 = (ulonglong)uVar10;
      if ((longlong)iVar1 <= (longlong)uVar8) break;
    } while (bVar5 == (pFVar3[uVar8] != FVar7));
    if (bVar5 != false) {
      uVar12 = (uint)uVar13;
      if (uVar12 != uVar9) {
        memmove(pFVar3 + (int)uVar12,pFVar3 + (int)uVar9,(longlong)(int)(uVar10 - uVar9) << 3);
        FVar7 = FNewSpline::ScaleAttrName;
      }
      uVar13 = (ulonglong)(uVar12 + (uVar10 - uVar9));
    }
    bVar5 = (bool)(bVar5 ^ 1);
    if ((longlong)iVar1 <= (longlong)uVar8) {
      __return_storage_ptr__->ArrayNum = (int)uVar13;
      return __return_storage_ptr__;
    }
  } while( true );
}

// HasAttributeChannel @ 147a5c2c0

bool __thiscall FSpline::HasAttributeChannel(FSpline *this,FName param_1)

{
  FNewSpline *pFVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  
  pFVar1 = (this->NewData).Object;
  if ((pFVar1 == (FNewSpline *)0x0) || (this->CurrentImplementation != '\x02')) {
    return false;
  }
  uVar2 = ::GetTypeHash(param_1.ComparisonIndex.Value);
  if ((int)pFVar1->_padding_ != *(int *)((longlong)&pFVar1->_padding_ + 4)) {
    plVar4 = (longlong *)pFVar1->_padding_;
    if ((longlong *)pFVar1->_padding_ == (longlong *)0x0) {
      plVar4 = &pFVar1->_padding_;
    }
    iVar3 = *(int *)((longlong)plVar4 +
                    (ulonglong)((int)pFVar1->_padding_ - 1U & param_1.Number + uVar2) * 4);
    if (iVar3 != -1) {
      do {
        if (*(FName *)(pFVar1->_padding_ + (longlong)iVar3 * 0x28) == param_1) goto LAB_147a5c35c;
        iVar3 = *(int *)(pFVar1->_padding_ + 0x20 + (longlong)iVar3 * 0x28);
      } while (iVar3 != -1);
    }
  }
  iVar3 = -1;
LAB_147a5c35c:
  return iVar3 != -1;
}

// ImportTextItem @ 147a5c830

bool __thiscall
FSpline::ImportTextItem
          (FSpline *this,wchar_t **param_1,int param_2,UObject *param_3,FOutputDevice *param_4)

{
  wchar_t wVar1;
  wchar_t *pwVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  wchar_t wVar6;
  wchar_t *pwVar7;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> local_e8;
  FString local_d8;
  FArchiveState local_c8;
  undefined8 local_38;
  TArray<unsigned_char,TSizedDefaultAllocator<32>_> *local_30;
  undefined8 local_28;
  
  bVar3 = FParse::Command(param_1,L"SplineData",true);
  if (!bVar3) {
    return true;
  }
  pwVar2 = *param_1;
  if (pwVar2 == (wchar_t *)0x0) {
    return true;
  }
  wVar1 = *pwVar2;
  bVar3 = false;
  while( true ) {
    if (wVar1 == L'\0') {
      return true;
    }
    pwVar7 = pwVar2 + 1;
    wVar6 = wVar1 + L'￠';
    if (0x19 < (ushort)(wVar1 + L'ﾟ')) {
      wVar6 = wVar1;
    }
    if (((!bVar3) && (wVar6 == L'S')) &&
       (iVar4 = FGenericPlatformStricmp::Strnicmp(pwVar7,L"plineDataLen=",0xd), iVar4 == 0)) break;
    if (((ushort)(wVar6 + L'﾿') < 0x1a) || ((ushort)(wVar6 + L'￐') < 10)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    wVar1 = *pwVar7;
    pwVar2 = pwVar7;
  }
  if (pwVar2 == (wchar_t *)0x0) {
    return true;
  }
  *param_1 = pwVar2 + 0xe;
  uVar5 = _wtoi(pwVar2 + 0xe);
  pwVar2 = *param_1;
  if (pwVar2 == (wchar_t *)0x0) {
    return true;
  }
  wVar1 = *pwVar2;
  bVar3 = false;
  if (wVar1 == L'\0') {
    return true;
  }
  while( true ) {
    pwVar7 = pwVar2 + 1;
    wVar6 = wVar1 + L'￠';
    if (0x19 < (ushort)(wVar1 + L'ﾟ')) {
      wVar6 = wVar1;
    }
    if (((!bVar3) && (wVar6 == L'S')) &&
       (iVar4 = FGenericPlatformStricmp::Strnicmp(pwVar7,L"plineData=",10), iVar4 == 0)) break;
    if (((ushort)(wVar6 + L'﾿') < 0x1a) || ((ushort)(wVar6 + L'￐') < 10)) {
      bVar3 = true;
    }
    else {
      bVar3 = false;
    }
    wVar1 = *pwVar7;
    pwVar2 = pwVar7;
    if (wVar1 == L'\0') {
      return true;
    }
  }
  if (pwVar2 == (wchar_t *)0x0) {
    return true;
  }
  *param_1 = pwVar2 + 0xb;
  ::FString::ConstructFromPtrSize(&local_d8,pwVar2 + 0xb,uVar5);
  iVar4 = iswalpha(0x2d);
  if (iVar4 == 0) {
    ::FString::ReplaceCharInlineCaseSensitive(&local_d8,L'-',L'/');
  }
  else {
    ::FString::ReplaceCharInlineIgnoreCase(&local_d8,L'-',L'/');
  }
  local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_e8.ArrayNum = 0;
  local_e8.ArrayMax = 0;
  if (UE::Spline::GEncodeAsHex == false) {
    bVar3 = FBase64::Decode(&local_d8,&local_e8,Standard);
  }
  else {
    if ((int)uVar5 < 1) {
      if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar5);
      }
    }
    else {
      iVar4 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (1,1,uVar5,&local_e8.AllocatorInstance,&local_e8.ArrayNum,&local_e8.ArrayMax
                        );
      memset(local_e8.AllocatorInstance.Data + iVar4,0,(longlong)(int)uVar5);
    }
    bVar3 = ::FString::ToHexBlob(&local_d8,(uchar *)local_e8.AllocatorInstance.Data,uVar5);
  }
  if (bVar3 != false) {
    local_c8._padding_ = 0;
    local_c8.ActiveFPLB = (FFastPathLoadBuffer *)0x0;
    local_c8.InlineFPLB.StartFastPathLoadBuffer = (uchar *)0x0;
    local_c8.InlineFPLB.EndFastPathLoadBuffer = (uchar *)0x0;
    local_c8.InlineFPLB.OriginalFastPathLoadBuffer = (uchar *)0x0;
    local_c8._40_8_ = 0;
    local_c8.ArSerializingDefaults = 0;
    local_c8.ArPortFlags = 0;
    local_c8.ArMaxSerializeSize = 0;
    local_c8.ArUEVer.FileVersionUE4 = 0;
    local_c8.ArUEVer.FileVersionUE5 = 0;
    local_c8.ArLicenseeUEVer = 0;
    local_c8.ArEngineVer.Major = 0;
    local_c8.ArEngineVer.Minor = 0;
    local_c8.ArEngineVer.Patch = 0;
    local_c8.ArEngineVer._6_2_ = 0;
    local_c8.ArEngineVer.Changelist = 0;
    local_c8.CustomVersionContainer = (FCustomVersionContainer *)0x0;
    local_c8.ArCustomPropertyList = (FCustomPropertyListNode *)0x0;
    local_c8.SavePackageData = (FArchiveSavePackageData *)0x0;
    local_c8.SerializedProperty = (FProperty *)0x0;
    local_c8.SerializedPropertyChain = (FArchiveSerializedPropertyChain *)0x0;
    local_c8.bCustomVersionsAreReset = false;
    local_c8._129_7_ = 0;
    local_c8.NextProxy = (FArchiveState *)0x0;
    FArchiveState::FArchiveState(&local_c8);
    local_38 = 0;
    local_c8._padding_ = (longlong)&___7FMemoryReader__6B_;
    local_30 = &local_e8;
    local_28 = 0x7fffffffffffffff;
    FArchiveState::SetIsLoading(&local_c8,true);
    (**(code **)(local_c8._padding_ + 0x108))(&local_c8,0);
    SerializeLoad(this,(FArchive *)&local_c8);
    FArchive::~FArchive((FArchive *)&local_c8);
  }
  if (local_e8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_e8.AllocatorInstance.Data);
  }
  if (local_d8.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return true;
  }
  FMemory::Free(local_d8.Data.AllocatorInstance.Data);
  return true;
}

// InsertPoint @ 147a60da0

void __thiscall FSpline::InsertPoint(FSpline *this,FSplinePoint *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  
  if (this->CurrentImplementation == '\x01') {
    if ((this->LegacyData).Object == (FLegacySpline *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FLegacySpline::InsertPoint((this->LegacyData).Object,param_1,param_2);
  }
  else if (this->CurrentImplementation == '\x02') {
    if ((this->NewData).Object == (FNewSpline *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FNewSpline::InsertPoint((this->NewData).Object,param_1,param_2);
    return;
  }
  return;
}

// IsClosedLoop @ 147a62f70

bool __thiscall FSpline::IsClosedLoop(FSpline *this)

{
  return (this->CachedUpdateSplineParams).bClosedLoop;
}

// IsEnabledStatic @ 147a63020

bool __cdecl FSpline::IsEnabledStatic(void)

{
  return UE::Spline::GImplementation != 0;
}

// RemoveAttributeChannel @ 147a7abf0

bool __thiscall FSpline::RemoveAttributeChannel(FSpline *this,FName param_1)

{
  FNewSpline *pFVar1;
  uint uVar2;
  int iVar3;
  FName local_res8;
  FName local_res10;
  
  pFVar1 = (this->NewData).Object;
  if ((pFVar1 != (FNewSpline *)0x0) && (this->CurrentImplementation == '\x02')) {
    if ((int)pFVar1->_padding_ != *(int *)((longlong)&pFVar1->_padding_ + 4)) {
      local_res8 = param_1;
      local_res10 = param_1;
      uVar2 = ::GetTypeHash(param_1.ComparisonIndex.Value);
      iVar3 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
              ::RemoveImpl<FName>((TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                                   *)&pFVar1->_padding_,local_res10.Number + uVar2,&local_res8);
      return 0 < iVar3;
    }
    return false;
  }
  return false;
}

// RemovePoint @ 147a7bc60

void __thiscall FSpline::RemovePoint(FSpline *this,int param_1)

{
  FNewSpline *this_00;
  code *pcVar1;
  bool bVar2;
  int iVar3;
  TTangentBezierSpline<UE::Math::TVector<double>_> *this_01;
  TTangentBezierSpline<UE::Math::TQuat<double>_> *this_02;
  TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
  *pTVar4;
  undefined1 *puVar5;
  
  if (this->CurrentImplementation == '\x01') {
    if ((this->LegacyData).Object == (FLegacySpline *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    FLegacySpline::RemovePoint((this->LegacyData).Object,param_1);
    return;
  }
  if (this->CurrentImplementation == '\x02') {
    if ((this->NewData).Object == (FNewSpline *)0x0) {
      bVar2 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    this_00 = (this->NewData).Object;
    FNewSpline::ValidateRotScale(this_00);
    if (-1 < param_1) {
      iVar3 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                        ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this_00->_padding_);
      if (param_1 < iVar3) {
        UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::RemovePoint
                  ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this_00->_padding_,param_1);
        this_01 = UE::Geometry::Spline::
                  TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                  ::
                  GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                            ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                              *)this_00,FNewSpline::ScaleAttrName);
        UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::RemovePoint
                  (this_01,param_1);
        UE::Geometry::Spline::TBSpline<UE::Math::TVector<double>,3>::SetCustomKnots
                  ((TBSpline<UE::Math::TVector<double>,3> *)&this_01->_padding_,
                   (TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_> *)
                   &this_00->_padding_);
        UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::UpdateTangents
                  (this_01);
        this_02 = UE::Geometry::Spline::
                  TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                  ::
                  GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>_>
                            ((TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                              *)this_00,FNewSpline::RotationAttrName);
        UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::RemovePoint
                  (this_02,param_1);
        UE::Geometry::Spline::TBSpline<UE::Math::TQuat<double>,3>::SetCustomKnots
                  ((TBSpline<UE::Math::TQuat<double>,3> *)&this_02->_padding_,
                   (TArray<UE::Geometry::Spline::FKnot,TSizedDefaultAllocator<32>_> *)
                   &this_00->_padding_);
        UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::UpdateTangents
                  (this_02);
        FNewSpline::MarkLegacyCurvesDirty(this_00);
      }
    }
    pTVar4 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                     *)&this_00->_padding_,FNewSpline::ScaleAttrName);
    puVar5 = &pTVar4->field_0x8;
    if (pTVar4 == (TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
                   *)0x0) {
      puVar5 = (undefined1 *)0x0;
    }
    if (puVar5 != (undefined1 *)0x0) {
      *(undefined4 *)(puVar5 + 4) = 0;
      *(undefined4 *)(puVar5 + 8) = 0x3f800000;
      *puVar5 = 0;
    }
    pTVar4 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                     *)&this_00->_padding_,FNewSpline::RotationAttrName);
    puVar5 = &pTVar4->field_0x8;
    if (pTVar4 == (TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
                   *)0x0) {
      puVar5 = (undefined1 *)0x0;
    }
    if (puVar5 != (undefined1 *)0x0) {
      *(undefined4 *)(puVar5 + 4) = 0;
      *(undefined4 *)(puVar5 + 8) = 0x3f800000;
      *puVar5 = 0;
    }
    FNewSpline::ValidateRotScale(this_00);
  }
  return;
}

// Reset @ 147a83600

void __thiscall FSpline::Reset(FSpline *this)

{
  undefined1 *puVar1;
  int iVar2;
  FNewSpline *pFVar3;
  FLegacySpline *pFVar4;
  code *pcVar5;
  bool bVar6;
  FInterpCurveVector *pFVar7;
  int *piVar8;
  ForAnyElementType local_18 [2];
  
  if (this->CurrentImplementation == '\x01') {
    if (((this->LegacyData).Object == (FLegacySpline *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar4 = (this->LegacyData).Object;
    *(undefined4 *)&(pFVar4->PositionCurve).field_0x8 = 0;
    if (*(int *)&(pFVar4->PositionCurve).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,0,(ForAnyElementType *)pFVar4,0,(int *)&(pFVar4->PositionCurve).field_0xc);
    }
    *(undefined4 *)&(pFVar4->RotationCurve).field_0x8 = 0;
    if (*(int *)&(pFVar4->RotationCurve).field_0xc < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x80,0x10,0,(ForAnyElementType *)&pFVar4->RotationCurve,0,
                 (int *)&(pFVar4->RotationCurve).field_0xc);
    }
    pFVar7 = &pFVar4->ScaleCurve;
    piVar8 = (int *)&(pFVar4->ScaleCurve).field_0xc;
    *(undefined4 *)&(pFVar4->ScaleCurve).field_0x8 = 0;
    if (-1 < *(int *)&(pFVar4->ScaleCurve).field_0xc) {
      return;
    }
  }
  else {
    if (this->CurrentImplementation != '\x02') {
      return;
    }
    if (((this->NewData).Object == (FNewSpline *)0x0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar3 = (this->NewData).Object;
    (**(code **)(pFVar3->_padding_ + 8))(pFVar3);
    if ((ForAnyElementType *)&pFVar3->_padding_ != local_18) {
      iVar2 = *(int *)((longlong)&pFVar3->_padding_ + 4);
      piVar8 = (int *)((longlong)&pFVar3->_padding_ + 4);
      *(undefined4 *)&pFVar3->_padding_ = 0;
      if (iVar2 == 0) {
        *piVar8 = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (1,1,0,iVar2,(ForAnyElementType *)&pFVar3->_padding_,0,piVar8);
      }
    }
    puVar1 = &(pFVar3->PositionCurve).field_0xc;
    *(undefined4 *)&(pFVar3->PositionCurve).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,0,(ForAnyElementType *)&pFVar3->PositionCurve,0,(int *)puVar1);
    }
    puVar1 = &(pFVar3->RotationCurve).field_0xc;
    *(undefined4 *)&(pFVar3->RotationCurve).field_0x8 = 0;
    if (*(int *)puVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x80,0x10,0,(ForAnyElementType *)&pFVar3->RotationCurve,0,(int *)puVar1);
    }
    pFVar7 = &pFVar3->ScaleCurve;
    piVar8 = (int *)&(pFVar3->ScaleCurve).field_0xc;
    *(undefined4 *)&(pFVar3->ScaleCurve).field_0x8 = 0;
    if (*piVar8 == 0) {
      return;
    }
  }
  UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x58,8,0,(ForAnyElementType *)pFVar7,0,piVar8);
  return;
}

// ResetRotation @ 147a83b60

void __thiscall FSpline::ResetRotation(FSpline *this)

{
  undefined1 *puVar1;
  double *pdVar2;
  uint uVar3;
  FLegacySpline *pFVar4;
  longlong lVar5;
  code *pcVar6;
  double dVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  
  if (this->CurrentImplementation == '\x01') {
    if (((this->LegacyData).Object == (FLegacySpline *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar4 = (this->LegacyData).Object;
    uVar3 = *(uint *)&(pFVar4->PositionCurve).field_0x8;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    puVar1 = &(pFVar4->RotationCurve).field_0xc;
    *(undefined4 *)&(pFVar4->RotationCurve).field_0x8 = 0;
    if (*(int *)&(pFVar4->RotationCurve).field_0xc < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x80,0x10,uVar3,(ForAnyElementType *)&pFVar4->RotationCurve,0,(int *)puVar1);
    }
    iVar11 = *(int *)&(pFVar4->RotationCurve).field_0x8;
    if (iVar11 < *(int *)&(pFVar4->PositionCurve).field_0x8) {
      do {
        iVar9 = *(int *)&(pFVar4->RotationCurve).field_0x8;
        if (iVar9 == *(int *)puVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x1080,(ForAnyElementType *)&pFVar4->RotationCurve,(int *)puVar1);
        }
        *(int *)&(pFVar4->RotationCurve).field_0x8 = iVar9 + 1;
        iVar12 = iVar11 + 1;
        lVar5 = *(longlong *)&pFVar4->RotationCurve;
        lVar10 = (longlong)iVar9 * 0x80;
        *(float *)(lVar10 + lVar5) = (float)iVar11;
        dVar7 = UE::Math::TQuat<double>::Identity.Y;
        pdVar2 = (double *)(lVar10 + 0x10 + lVar5);
        *pdVar2 = UE::Math::TQuat<double>::Identity.X;
        pdVar2[1] = dVar7;
        dVar7 = UE::Math::TQuat<double>::Identity.W;
        pdVar2 = (double *)(lVar10 + 0x20 + lVar5);
        *pdVar2 = UE::Math::TQuat<double>::Identity.Z;
        pdVar2[1] = dVar7;
        dVar7 = UE::Math::TQuat<double>::Identity.Y;
        pdVar2 = (double *)(lVar10 + 0x30 + lVar5);
        *pdVar2 = UE::Math::TQuat<double>::Identity.X;
        pdVar2[1] = dVar7;
        dVar7 = UE::Math::TQuat<double>::Identity.W;
        pdVar2 = (double *)(lVar10 + 0x40 + lVar5);
        *pdVar2 = UE::Math::TQuat<double>::Identity.Z;
        pdVar2[1] = dVar7;
        dVar7 = UE::Math::TQuat<double>::Identity.Y;
        pdVar2 = (double *)(lVar10 + 0x50 + lVar5);
        *pdVar2 = UE::Math::TQuat<double>::Identity.X;
        pdVar2[1] = dVar7;
        dVar7 = UE::Math::TQuat<double>::Identity.W;
        pdVar2 = (double *)(lVar10 + 0x60 + lVar5);
        *pdVar2 = UE::Math::TQuat<double>::Identity.Z;
        pdVar2[1] = dVar7;
        *(undefined1 *)(lVar10 + 0x70 + lVar5) = 1;
        iVar11 = iVar12;
      } while (iVar12 < *(int *)&(pFVar4->PositionCurve).field_0x8);
    }
  }
  else if (this->CurrentImplementation == '\x02') {
    if (((this->NewData).Object == (FNewSpline *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FNewSpline::ResetRotation((this->NewData).Object);
    return;
  }
  return;
}

// ResetScale @ 147a83f50

void __thiscall FSpline::ResetScale(FSpline *this)

{
  undefined1 *puVar1;
  double *pdVar2;
  uint uVar3;
  FLegacySpline *pFVar4;
  longlong lVar5;
  code *pcVar6;
  undefined8 uVar7;
  bool bVar8;
  int iVar9;
  longlong lVar10;
  int iVar11;
  int iVar12;
  
  if (this->CurrentImplementation == '\x01') {
    if (((this->LegacyData).Object == (FLegacySpline *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    pFVar4 = (this->LegacyData).Object;
    uVar3 = *(uint *)&(pFVar4->PositionCurve).field_0x8;
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    puVar1 = &(pFVar4->ScaleCurve).field_0xc;
    *(undefined4 *)&(pFVar4->ScaleCurve).field_0x8 = 0;
    if (*(int *)&(pFVar4->ScaleCurve).field_0xc < (int)uVar3) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x58,8,uVar3,(ForAnyElementType *)&pFVar4->ScaleCurve,0,(int *)puVar1);
    }
    iVar11 = *(int *)&(pFVar4->ScaleCurve).field_0x8;
    if (iVar11 < *(int *)&(pFVar4->PositionCurve).field_0x8) {
      do {
        iVar9 = *(int *)&(pFVar4->ScaleCurve).field_0x8;
        if (iVar9 == *(int *)puVar1) {
          iVar9 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x858,(ForAnyElementType *)&pFVar4->ScaleCurve,(int *)puVar1);
        }
        *(int *)&(pFVar4->ScaleCurve).field_0x8 = iVar9 + 1;
        iVar12 = iVar11 + 1;
        lVar10 = (longlong)iVar9 * 0x58;
        lVar5 = *(longlong *)&pFVar4->ScaleCurve;
        *(float *)(lVar10 + lVar5) = (float)iVar11;
        *(undefined8 *)(lVar10 + 8 + lVar5) = 0x3ff0000000000000;
        *(undefined8 *)(lVar10 + 0x10 + lVar5) = 0x3ff0000000000000;
        *(undefined8 *)(lVar10 + 0x18 + lVar5) = 0x3ff0000000000000;
        uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        pdVar2 = (double *)(lVar10 + 0x20 + lVar5);
        *pdVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        pdVar2[1] = (double)uVar7;
        *(double *)(lVar10 + 0x30 + lVar5) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
        ;
        uVar7 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Y;
        pdVar2 = (double *)(lVar10 + 0x38 + lVar5);
        *pdVar2 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.X;
        pdVar2[1] = (double)uVar7;
        *(double *)(lVar10 + 0x48 + lVar5) = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z
        ;
        *(undefined1 *)(lVar10 + 0x50 + lVar5) = 1;
        iVar11 = iVar12;
      } while (iVar12 < *(int *)&(pFVar4->PositionCurve).field_0x8);
    }
  }
  else if (this->CurrentImplementation == '\x02') {
    if (((this->NewData).Object == (FNewSpline *)0x0) &&
       (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    FNewSpline::ResetScale((this->NewData).Object);
    return;
  }
  return;
}

// Serialize @ 147a885e0

bool __thiscall FSpline::Serialize(FSpline *this,FArchive *param_1)

{
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FFortniteMainBranchObjectVersion::GUID);
  if ((param_1->field_0x28 & 1) != 0) {
    SerializeLoad(this,param_1);
    return true;
  }
  SerializeSave(this,param_1);
  return true;
}

// SerializeLoad @ 147a8a200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FSpline::SerializeLoad(FSpline *this,FArchive *param_1)

{
  TSharedPtr<FLegacySpline,1> *this_00;
  uchar uVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  TSharedRef<FLegacySpline,1> *pTVar5;
  FLegacySpline *pFVar6;
  TReferenceControllerBase<1> *pTVar7;
  TSharedRef<FNewSpline,1> *pTVar8;
  TReferenceControllerBase<1> *pTVar9;
  FNewSpline *pFVar10;
  TSharedPtr<FNewSpline,1> *this_01;
  undefined1 auStack_4d8 [32];
  char local_4b8 [8];
  FNewSpline *local_4b0;
  FSharedReferencer<1> FStack_4a8;
  FNewSpline *local_4a0;
  FSharedReferencer<1> FStack_498;
  TSharedPtr<FLegacySpline,1> local_490;
  TSharedPtr<FNewSpline,1> local_480;
  void *local_468;
  undefined8 local_460;
  undefined1 local_458;
  undefined4 local_454;
  void *local_450;
  undefined8 local_448;
  undefined1 local_440;
  undefined4 local_43c;
  void *local_438;
  undefined8 local_430;
  undefined1 local_428;
  undefined4 local_424;
  void *local_420;
  undefined8 local_418;
  undefined1 local_410;
  undefined4 local_40c;
  void *local_408;
  undefined8 local_400;
  undefined1 local_3f8;
  undefined4 local_3f4;
  void *local_3f0;
  undefined8 local_3e8;
  undefined1 local_3e0;
  undefined4 local_3dc;
  void *local_3d8;
  undefined8 local_3d0;
  undefined1 local_3c8;
  undefined4 local_3c4;
  void *local_3c0;
  undefined8 local_3b8;
  undefined1 local_3b0;
  undefined4 local_3ac;
  FUpdateSplineParams local_3a8;
  TSharedRef<FLegacySpline,1> local_380;
  TSharedRef<FNewSpline,1> local_370;
  FNewSpline local_358;
  FNewSpline local_1c8;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_4d8;
  plVar2 = *(longlong **)&param_1->field_0x8;
  if ((char *)plVar2[1] < (char *)*plVar2 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_4b8);
  }
  else {
    local_4b8[0] = *(char *)*plVar2;
    *plVar2 = *plVar2 + 1;
  }
  if (local_4b8[0] != '\0') {
    uVar1 = this->CurrentImplementation;
    if (local_4b8[0] == '\x01') {
      if (uVar1 == '\x01') {
        pTVar5 = MakeShared<FLegacySpline,1>(&local_380);
        local_490.SharedReferenceCount.ReferenceController =
             (pTVar5->SharedReferenceCount).ReferenceController;
        local_490.Object = pTVar5->Object;
        if (local_490.SharedReferenceCount.ReferenceController != (TReferenceControllerBase<1> *)0x0
           ) {
          LOCK();
          (local_490.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
               (atomic<int>)
               ((int)(local_490.SharedReferenceCount.ReferenceController)->SharedReferenceCount + 1)
          ;
          UNLOCK();
        }
        this_00 = &this->LegacyData;
        if (this_00 != &local_490) {
          this_00->Object = local_490.Object;
          local_490.Object = (FLegacySpline *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->LegacyData).SharedReferenceCount,&local_490.SharedReferenceCount);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_490.SharedReferenceCount.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (local_380.SharedReferenceCount.ReferenceController);
        pFVar6 = TSharedPtr<FLegacySpline,1>::operator*<FLegacySpline>(this_00);
        ::operator<<(param_1,pFVar6);
      }
      else if (uVar1 == '\x02') {
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
        local_468 = (void *)0x0;
        local_460 = 0;
        local_458 = 0;
        local_454 = 0;
        local_450 = (void *)0x0;
        local_448 = 0;
        local_440 = 0;
        local_43c = 0;
        local_438 = (void *)0x0;
        local_430 = 0;
        local_428 = 0;
        local_424 = 0;
        local_420 = (void *)0x0;
        local_418 = 0;
        local_410 = 0;
        local_40c = 0;
        ::operator<<(param_1,(FLegacySpline *)&local_468);
        pTVar7 = ::operator_new(0x198);
        if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
          local_4b0 = ___xmm_00000000000000000000000000000010;
          pFVar10 = (FNewSpline *)&DAT_00000010;
          FStack_4a8.ReferenceController = _UNK_150651568;
        }
        else {
          pTVar7->SharedReferenceCount = (atomic<int>)0x1;
          pTVar7->WeakReferenceCount = (atomic<int>)0x1;
          pTVar7->_padding_ =
               (longlong)
               &___7__TIntrusiveReferenceController_VFNewSpline___00_SharedPointerInternals__6B_;
          FNewSpline::FNewSpline((FNewSpline *)(pTVar7 + 1),(FLegacySpline *)&local_468);
          pFVar10 = (FNewSpline *)(pTVar7 + 1);
          if ((pFVar10 == (FNewSpline *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("InObject != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x246,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          LOCK();
          pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
          UNLOCK();
          FStack_4a8.ReferenceController = pTVar7;
          pTVar9 = pTVar7;
          local_4b0 = pFVar10;
        }
        if (&this->NewData != (TSharedPtr<FNewSpline,1> *)&local_4b0) {
          (this->NewData).Object = pFVar10;
          local_4b0 = (FNewSpline *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->NewData).SharedReferenceCount,&FStack_4a8);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_4a8.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
        if (local_420 != (void *)0x0) {
          FMemory::Free(local_420);
        }
        if (local_438 != (void *)0x0) {
          FMemory::Free(local_438);
        }
        if (local_450 != (void *)0x0) {
          FMemory::Free(local_450);
        }
        if (local_468 != (void *)0x0) {
          FMemory::Free(local_468);
        }
      }
      else if (uVar1 == '\0') {
        local_408 = (void *)0x0;
        local_400 = 0;
        local_3f8 = 0;
        local_3f4 = 0;
        local_3f0 = (void *)0x0;
        local_3e8 = 0;
        local_3e0 = 0;
        local_3dc = 0;
        local_3d8 = (void *)0x0;
        local_3d0 = 0;
        local_3c8 = 0;
        local_3c4 = 0;
        local_3c0 = (void *)0x0;
        local_3b8 = 0;
        local_3b0 = 0;
        local_3ac = 0;
        ::operator<<(param_1,(FLegacySpline *)&local_408);
        if (local_3c0 != (void *)0x0) {
          FMemory::Free(local_3c0);
        }
        if (local_3d8 != (void *)0x0) {
          FMemory::Free(local_3d8);
        }
        if (local_3f0 != (void *)0x0) {
          FMemory::Free(local_3f0);
        }
        if (local_408 != (void *)0x0) {
          FMemory::Free(local_408);
        }
      }
    }
    else {
      if (uVar1 == '\x01') {
        FNewSpline::FNewSpline(&local_358);
        (**(code **)(local_358._padding_ + 0x60))(&local_358,param_1);
        pTVar7 = ::operator_new(0x70);
        pTVar9 = (TReferenceControllerBase<1> *)0x0;
        if (pTVar7 == (TReferenceControllerBase<1> *)0x0) {
          local_4a0 = ___xmm_00000000000000000000000000000010;
          pFVar10 = (FNewSpline *)&DAT_00000010;
          FStack_498.ReferenceController = _UNK_150651568;
        }
        else {
          pTVar7->SharedReferenceCount = (atomic<int>)0x1;
          pTVar7->WeakReferenceCount = (atomic<int>)0x1;
          pTVar7->_padding_ =
               (longlong)
               &___7__TIntrusiveReferenceController_VFLegacySpline___00_SharedPointerInternals__6B_;
          pTVar7[1]._padding_ = 0;
          pTVar7[1].SharedReferenceCount = (atomic<int>)0x0;
          pTVar7[1].WeakReferenceCount = (atomic<int>)0x0;
          pTVar7[2]._padding_ = 0;
          pTVar7[2].SharedReferenceCount = (atomic<int>)0x0;
          pTVar7[2].WeakReferenceCount = (atomic<int>)0x0;
          pTVar7[3]._padding_ = 0;
          pTVar7[3].SharedReferenceCount = (atomic<int>)0x0;
          pTVar7[3].WeakReferenceCount = (atomic<int>)0x0;
          pTVar7[4]._padding_ = 0;
          pTVar7[4].SharedReferenceCount = (atomic<int>)0x0;
          pTVar7[4].WeakReferenceCount = (atomic<int>)0x0;
          pTVar7[5]._padding_ = 0;
          pTVar7[5].SharedReferenceCount = (atomic<int>)0x0;
          pTVar7[5].WeakReferenceCount = (atomic<int>)0x0;
          pTVar7[6]._padding_ = 0;
          pTVar7[6].SharedReferenceCount = (atomic<int>)0x0;
          pTVar7[6].WeakReferenceCount = (atomic<int>)0x0;
          *(undefined4 *)((longlong)&pTVar7[2]._padding_ + 4) = 0;
          pTVar7[3].WeakReferenceCount = (atomic<int>)0x0;
          *(undefined4 *)((longlong)&pTVar7[5]._padding_ + 4) = 0;
          pTVar7[6].WeakReferenceCount = (atomic<int>)0x0;
          FInterpCurveVector::operator=((FInterpCurveVector *)(pTVar7 + 1),&local_358.PositionCurve)
          ;
          FInterpCurveQuat::operator=
                    ((FInterpCurveQuat *)&pTVar7[2].SharedReferenceCount,&local_358.RotationCurve);
          FInterpCurveVector::operator=((FInterpCurveVector *)(pTVar7 + 4),&local_358.ScaleCurve);
          local_3a8.bClosedLoop = SUB81(pTVar7[2]._padding_,0);
          local_3a8.Scale3D.field0_0x0._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
          local_3a8.Scale3D.field0_0x0._s_0.Y = _UNK_150689688;
          local_3a8.bStationaryEndpoints = false;
          local_3a8.Scale3D.field0_0x0._s_0.Z = __real_3ff0000000000000;
          local_3a8.ReparamStepsPerSegment = 10;
          local_3a8.bLoopPositionOverride = false;
          local_3a8.LoopPosition = 0.0;
          FLegacySpline::UpdateSpline((FLegacySpline *)(pTVar7 + 1),&local_3a8);
          FInterpCurve<UE::Math::TVector<double>_>::AutoSetTangents
                    ((FInterpCurve<UE::Math::TVector<double>_> *)(pTVar7 + 1),0.0,false);
          pFVar10 = (FNewSpline *)(pTVar7 + 1);
          if ((pFVar10 == (FNewSpline *)0x0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("InObject != nullptr",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                                 ,0x246,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          LOCK();
          pTVar7->SharedReferenceCount = (atomic<int>)((int)pTVar7->SharedReferenceCount + 1);
          UNLOCK();
          FStack_498.ReferenceController = pTVar7;
          pTVar9 = pTVar7;
          local_4a0 = pFVar10;
        }
        if (&this->LegacyData != (TSharedPtr<FLegacySpline,1> *)&local_4a0) {
          (this->LegacyData).Object = (FLegacySpline *)pFVar10;
          local_4a0 = (FNewSpline *)0x0;
          SharedPointerInternals::FSharedReferencer<1>::operator=
                    (&(this->LegacyData).SharedReferenceCount,&FStack_498);
        }
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                  (FStack_498.ReferenceController);
        SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar9);
        pFVar10 = &local_358;
      }
      else {
        if (uVar1 == '\x02') {
          pTVar8 = MakeShared<FNewSpline,1>(&local_370);
          local_480.SharedReferenceCount.ReferenceController =
               (pTVar8->SharedReferenceCount).ReferenceController;
          local_480.Object = pTVar8->Object;
          if (local_480.SharedReferenceCount.ReferenceController !=
              (TReferenceControllerBase<1> *)0x0) {
            LOCK();
            (local_480.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
                 (atomic<int>)
                 ((int)(local_480.SharedReferenceCount.ReferenceController)->SharedReferenceCount +
                 1);
            UNLOCK();
          }
          this_01 = &this->NewData;
          if (this_01 != &local_480) {
            this_01->Object = local_480.Object;
            local_480.Object = (FNewSpline *)0x0;
            SharedPointerInternals::FSharedReferencer<1>::operator=
                      (&(this->NewData).SharedReferenceCount,&local_480.SharedReferenceCount);
          }
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_480.SharedReferenceCount.ReferenceController);
          SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                    (local_370.SharedReferenceCount.ReferenceController);
          pFVar10 = TSharedPtr<FNewSpline,1>::operator*<FNewSpline>(this_01);
          (**(code **)(pFVar10->_padding_ + 0x60))(pFVar10,param_1);
          return;
        }
        if (uVar1 != '\0') {
          return;
        }
        FNewSpline::FNewSpline(&local_1c8);
        (**(code **)(local_1c8._padding_ + 0x60))(&local_1c8,param_1);
        pFVar10 = &local_1c8;
      }
      FNewSpline::~FNewSpline(pFVar10);
    }
  }
  return;
}

// SerializeSave @ 147a8a7d0

void __thiscall FSpline::SerializeSave(FSpline *this,FArchive *param_1)

{
  longlong *plVar1;
  FNewSpline *pFVar2;
  code *pcVar3;
  bool bVar4;
  uchar local_res8 [8];
  
  local_res8[0] = this->CurrentImplementation;
  plVar1 = *(longlong **)&param_1->field_0x8;
  if ((uchar *)plVar1[1] < (uchar *)*plVar1 + 1) {
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
  }
  else {
    local_res8[0] = *(uchar *)*plVar1;
    *plVar1 = *plVar1 + 1;
  }
  if (this->CurrentImplementation == '\x01') {
    if ((this->LegacyData).Object == (FLegacySpline *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    ::operator<<(param_1,(this->LegacyData).Object);
    return;
  }
  if (this->CurrentImplementation == '\x02') {
    if ((this->NewData).Object == (FNewSpline *)0x0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x44d,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    pFVar2 = (this->NewData).Object;
    (**(code **)(pFVar2->_padding_ + 0x60))(pFVar2,param_1);
  }
  return;
}

// SetClosedLoop @ 147a8bd50

void __thiscall FSpline::SetClosedLoop(FSpline *this,bool param_1)

{
  double dVar1;
  FNewSpline *this_00;
  code *pcVar2;
  bool bVar3;
  
  (this->CachedUpdateSplineParams).bClosedLoop = param_1;
  if (this->CurrentImplementation == '\x01') {
    if ((this->LegacyData).Object == (FLegacySpline *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FLegacySpline::UpdateSpline((this->LegacyData).Object,&this->CachedUpdateSplineParams);
  }
  else if (this->CurrentImplementation == '\x02') {
    if ((this->NewData).Object == (FNewSpline *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this_00 = (this->NewData).Object;
    (**(code **)(this_00->_padding_ + 0x38))(this_00,(this->CachedUpdateSplineParams).bClosedLoop);
    *(bool *)&this_00->_padding_ = (this->CachedUpdateSplineParams).bStationaryEndpoints;
    UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::UpdateTangents
              ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this_00->_padding_);
    this_00->ReparamStepsPerSegment = (this->CachedUpdateSplineParams).ReparamStepsPerSegment;
    FNewSpline::UpdateSpline(this_00);
  }
  (this->CachedUpdateSplineParams).bClosedLoop = (this->CachedUpdateSplineParams).bClosedLoop;
  (this->CachedUpdateSplineParams).bStationaryEndpoints =
       (this->CachedUpdateSplineParams).bStationaryEndpoints;
  *(undefined2 *)&(this->CachedUpdateSplineParams).field_0x2 =
       *(undefined2 *)&(this->CachedUpdateSplineParams).field_0x2;
  (this->CachedUpdateSplineParams).ReparamStepsPerSegment =
       (this->CachedUpdateSplineParams).ReparamStepsPerSegment;
  (this->CachedUpdateSplineParams).bLoopPositionOverride =
       (this->CachedUpdateSplineParams).bLoopPositionOverride;
  *(undefined3 *)&(this->CachedUpdateSplineParams).field_0x9 =
       *(undefined3 *)&(this->CachedUpdateSplineParams).field_0x9;
  (this->CachedUpdateSplineParams).LoopPosition = (this->CachedUpdateSplineParams).LoopPosition;
  dVar1 = (this->CachedUpdateSplineParams).Scale3D.field0_0x0._s_0.Y;
  (this->CachedUpdateSplineParams).Scale3D.field0_0x0._s_0.X =
       (this->CachedUpdateSplineParams).Scale3D.field0_0x0._s_0.X;
  (this->CachedUpdateSplineParams).Scale3D.field0_0x0._s_0.Y = dVar1;
  dVar1 = (this->CachedUpdateSplineParams).Scale3D.field0_0x0._s_0.Z;
  this->Version = this->Version + 1;
  (this->CachedUpdateSplineParams).Scale3D.field0_0x0._s_0.Z = dVar1;
  return;
}

// SetInTangent @ 147a8f060

void __thiscall FSpline::SetInTangent(FSpline *this,int param_1,TVector<double> *param_2)

{
  uint *puVar1;
  FChangeStamp *this_00;
  double *pdVar2;
  atomic<unsigned_char> aVar3;
  double dVar4;
  FNewSpline *this_01;
  FLegacySpline *pFVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  
  if (this->CurrentImplementation == '\x01') {
    if (((this->LegacyData).Object == (FLegacySpline *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar5 = (this->LegacyData).Object;
    if ((-1 < param_1) && (param_1 < *(int *)&(pFVar5->PositionCurve).field_0x8)) {
      lVar6 = *(longlong *)&pFVar5->PositionCurve;
      dVar8 = (param_2->field0_0x0)._s_0.Y;
      dVar4 = (param_2->field0_0x0)._s_0.Z;
      lVar12 = (longlong)param_1 * 0x58;
      pdVar2 = (double *)(lVar12 + 0x20 + lVar6);
      *pdVar2 = (param_2->field0_0x0)._s_0.X;
      pdVar2[1] = dVar8;
      *(double *)(lVar12 + 0x30 + lVar6) = dVar4;
      uVar11 = 0;
      if (param_1 < *(int *)&(pFVar5->PositionCurve).field_0x8) {
        uVar11 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(undefined1 *)(*(longlong *)&pFVar5->PositionCurve + 0x50 + lVar12) = 3;
    }
  }
  else if (this->CurrentImplementation == '\x02') {
    if (((this->NewData).Object == (FNewSpline *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    this_01 = (this->NewData).Object;
    if ((-1 < param_1) &&
       (iVar10 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::
                 GetNumPoints((TTangentBezierSpline<UE::Math::TVector<double>_> *)
                              &this_01->_padding_), param_1 < iVar10)) {
      UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::SetPointTangentMode
                ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this_01->_padding_,param_1,
                 User);
      UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::SetTangentIn
                ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this_01->_padding_,param_1,
                 param_2);
      this_00 = &this_01->ReparamTableNextVersion;
      LOCK();
      bVar9 = (this_00->Mutex).State == (atomic<unsigned_char>)0x0;
      if (bVar9) {
        (this_00->Mutex).State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar9) {
        UE::FMutex::LockSlow(&this_00->Mutex);
      }
      puVar1 = &(this_01->ReparamTableNextVersion).Value;
      *puVar1 = *puVar1 + 1;
      LOCK();
      aVar3 = (this_00->Mutex).State;
      (this_00->Mutex).State = (atomic<unsigned_char>)((char)(this_00->Mutex).State + -1);
      UNLOCK();
      if (((byte)aVar3 & 2) != 0) {
        UE::FMutex::WakeWaitingThread(&this_00->Mutex);
      }
      FNewSpline::MarkLegacyCurvesDirty(this_01);
    }
  }
  return;
}

// SetLocation @ 147a90260

void __thiscall FSpline::SetLocation(FSpline *this,int param_1,TVector<double> *param_2)

{
  uint *puVar1;
  FChangeStamp *this_00;
  undefined4 *puVar2;
  atomic<unsigned_char> aVar3;
  double dVar4;
  FNewSpline *this_01;
  FLegacySpline *pFVar5;
  longlong lVar6;
  code *pcVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  bool bVar12;
  int iVar13;
  TVector<double> *pTVar14;
  TVector<double> *pTVar15;
  TVector<double>_u_0 local_98;
  double local_80;
  double dStack_78;
  double local_70;
  double local_68;
  double dStack_60;
  double local_58;
  ETangentMode local_50;
  TVector<double> local_48;
  TVector<double> local_30;
  
  if (this->CurrentImplementation == '\x01') {
    if (((this->LegacyData).Object == (FLegacySpline *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar5 = (this->LegacyData).Object;
    if ((-1 < param_1) && (param_1 < *(int *)&(pFVar5->PositionCurve).field_0x8)) {
      uVar8 = *(undefined4 *)&param_2->field0_0x0;
      uVar9 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
      uVar10 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
      uVar11 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
      dVar4 = (param_2->field0_0x0)._s_0.Z;
      if ((param_1 < 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar6 = *(longlong *)&pFVar5->PositionCurve;
      puVar2 = (undefined4 *)((longlong)param_1 * 0x58 + 8 + lVar6);
      *puVar2 = uVar8;
      puVar2[1] = uVar9;
      puVar2[2] = uVar10;
      puVar2[3] = uVar11;
      *(double *)((longlong)param_1 * 0x58 + 0x18 + lVar6) = dVar4;
      return;
    }
  }
  else if (this->CurrentImplementation == '\x02') {
    if (((this->NewData).Object == (FNewSpline *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    this_01 = (this->NewData).Object;
    if ((-1 < param_1) &&
       (iVar13 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::
                 GetNumPoints((TTangentBezierSpline<UE::Math::TVector<double>_> *)
                              &this_01->_padding_), param_1 < iVar13)) {
      pTVar14 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetTangentIn
                          ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this_01->_padding_,
                           &local_48,param_1);
      pTVar15 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::
                GetTangentOut((TTangentBezierSpline<UE::Math::TVector<double>_> *)
                              &this_01->_padding_,&local_30,param_1);
      local_50 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::
                 GetTangentMode((TTangentBezierSpline<UE::Math::TVector<double>_> *)
                                &this_01->_padding_,param_1);
      local_98._s_0.X = (param_2->field0_0x0)._s_0.X;
      local_98._s_0.Y = (param_2->field0_0x0)._s_0.Y;
      local_98._s_0.Z = (param_2->field0_0x0)._s_0.Z;
      local_80 = (pTVar14->field0_0x0)._s_0.X;
      dStack_78 = (pTVar14->field0_0x0)._s_0.Y;
      local_70 = (pTVar14->field0_0x0)._s_0.Z;
      local_68 = (pTVar15->field0_0x0)._s_0.X;
      dStack_60 = (pTVar15->field0_0x0)._s_0.Y;
      local_58 = (pTVar15->field0_0x0)._s_0.Z;
      UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::ModifyPoint
                ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this_01->_padding_,param_1,
                 (TTangentBezierControlPoint<UE::Math::TVector<double>_> *)&local_98._s_0);
      this_00 = &this_01->ReparamTableNextVersion;
      LOCK();
      bVar12 = (this_00->Mutex).State == (atomic<unsigned_char>)0x0;
      if (bVar12) {
        (this_00->Mutex).State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar12) {
        UE::FMutex::LockSlow(&this_00->Mutex);
      }
      puVar1 = &(this_01->ReparamTableNextVersion).Value;
      *puVar1 = *puVar1 + 1;
      LOCK();
      aVar3 = (this_00->Mutex).State;
      (this_00->Mutex).State = (atomic<unsigned_char>)((char)(this_00->Mutex).State + -1);
      UNLOCK();
      if (((byte)aVar3 & 2) != 0) {
        UE::FMutex::WakeWaitingThread(&this_00->Mutex);
      }
      FNewSpline::MarkLegacyCurvesDirty(this_01);
    }
  }
  return;
}

// SetOrientation @ 147a90710

void __thiscall FSpline::SetOrientation(FSpline *this,int param_1,TQuat<double> *param_2)

{
  double *pdVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  FNewSpline *pFVar4;
  FLegacySpline *pFVar5;
  longlong lVar6;
  code *pcVar7;
  undefined1 auVar8 [16];
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  undefined8 uVar14;
  undefined1 auVar15 [16];
  bool bVar16;
  int iVar17;
  uint uVar18;
  float fVar19;
  double dVar20;
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  TVector<double>_u_0 local_1e8;
  double local_1d0;
  double local_1c8;
  double local_1c0;
  TVector<double>_u_0 local_1b8;
  undefined1 local_198 [16];
  double local_188;
  TVector<double>_u_0 local_178;
  TVector<double>_u_0 local_160;
  TVector<double> local_148;
  double local_130;
  TVector<double>_u_0 local_118;
  TQuat<double> local_f8;
  TQuat<double> local_d8 [6];
  
  if (param_1 < 0) {
    return;
  }
  iVar17 = GetNumControlPoints(this);
  if (iVar17 <= param_1) {
    return;
  }
  if (this->CurrentImplementation == '\x01') {
    if (((this->LegacyData).Object == (FLegacySpline *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    fVar19 = FLegacySpline::GetParameterAtIndex((this->LegacyData).Object,param_1);
  }
  else if (this->CurrentImplementation == '\x02') {
    if (((this->NewData).Object == (FNewSpline *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    fVar19 = FNewSpline::GetParameterAtIndex((this->NewData).Object,param_1);
  }
  else {
    fVar19 = 0.0;
  }
  GetOrientation(this,local_d8,fVar19);
  dVar26 = __real_3ff0000000000000;
  dVar11 = param_2->X;
  dVar20 = param_2->Y;
  uVar2 = param_2->Z;
  uVar3 = param_2->W;
  local_d8[0].Z = local_d8[0].Z * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[0];
  local_d8[0].W = local_d8[0].W * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.ZW.m128d_f64[1];
  local_d8[0].X = local_d8[0].X * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[0];
  local_d8[0].Y = local_d8[0].Y * GlobalVectorConstants::DOUBLE_QINV_SIGN_MASK.XY.m128d_f64[1];
  auVar23._8_4_ = (int)uVar3;
  auVar23._0_8_ = uVar3;
  auVar23._12_4_ = (int)((ulonglong)uVar3 >> 0x20);
  auVar21._8_4_ = (int)uVar2;
  auVar21._0_8_ = uVar2;
  auVar21._12_4_ = (int)((ulonglong)uVar2 >> 0x20);
  dVar12 = dVar11 * local_d8[0].W * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[0]
           + (double)uVar3 * local_d8[0].X +
           dVar20 * local_d8[0].Z * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[0]
           + (double)uVar2 * local_d8[0].Y *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[0];
  dVar13 = dVar11 * local_d8[0].Z * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.XY.m128d_f64[1]
           + auVar23._8_8_ * local_d8[0].Y +
           dVar20 * local_d8[0].W * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.XY.m128d_f64[1]
           + auVar21._8_8_ * local_d8[0].X *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.XY.m128d_f64[1];
  local_118._s_0.Z = __real_3ff0000000000000;
  local_118._s_0.X = 0.0;
  local_118._s_0.Y = 0.0;
  dVar10 = dVar11 * local_d8[0].Y * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[0]
           + (double)uVar3 * local_d8[0].Z +
           dVar20 * local_d8[0].X * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[0]
           + (double)uVar2 * local_d8[0].W *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[0];
  dVar11 = dVar11 * local_d8[0].X * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK0.ZW.m128d_f64[1]
           + (double)uVar3 * local_d8[0].W +
           dVar20 * local_d8[0].Y * GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK1.ZW.m128d_f64[1]
           + (double)uVar2 * local_d8[0].Z *
             GlobalVectorConstants::DOUBLE_QMULTI_SIGN_MASK2.ZW.m128d_f64[1];
  UE::Math::TQuat<double>::RotateVector(param_2,&local_148,(TVector<double> *)&local_118._s_0);
  UE::Math::TQuat<double>::FindBetweenVectors
            (&local_f8,&UE::Math::TVector<double>::UpVector,&local_148);
  if (this->CurrentImplementation == '\x01') {
    if (((this->LegacyData).Object == (FLegacySpline *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar5 = (this->LegacyData).Object;
    if (param_1 < *(int *)&(pFVar5->RotationCurve).field_0x8) {
      uVar18 = 0;
      if (param_1 < *(int *)&(pFVar5->RotationCurve).field_0x8) {
        uVar18 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar18 == 0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar16)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      lVar6 = *(longlong *)&pFVar5->RotationCurve;
      pdVar1 = (double *)((longlong)param_1 * 0x80 + 0x10 + lVar6);
      *pdVar1 = local_f8.X;
      pdVar1[1] = local_f8.Y;
      pdVar1 = (double *)((longlong)param_1 * 0x80 + 0x20 + lVar6);
      *pdVar1 = local_f8.Z;
      pdVar1[1] = local_f8.W;
    }
  }
  else if (this->CurrentImplementation == '\x02') {
    if (((this->NewData).Object == (FNewSpline *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar4 = (this->NewData).Object;
    iVar17 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                       ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&pFVar4->_padding_);
    if (param_1 < iVar17) {
      FNewSpline::ValidateRotScale(pFVar4);
      FNewSpline::SetAttributeValue<UE::Math::TQuat<double>_>
                (pFVar4,FNewSpline::RotationAttrName,&local_f8,param_1);
      FNewSpline::MarkLegacyCurvesDirty(pFVar4);
    }
  }
  GetInTangent(this,(TVector<double> *)&local_1b8._s_0,param_1);
  dVar27 = (double)CONCAT44(local_1b8._12_4_,local_1b8._8_4_);
  dVar24 = (double)CONCAT44(local_1b8._4_4_,local_1b8._0_4_);
  uVar28 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
  uVar29 = (undefined4)((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
  dVar9 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                           UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
  auVar15._8_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_;
  auVar15._0_8_ = dVar9;
  auVar15._12_4_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_;
  auVar22._8_8_ = 0;
  auVar22._0_8_ = __real_3e45798ee0000000;
  dVar20 = dVar27 * dVar27 + dVar24 * dVar24 + local_1b8._s_0.Z * local_1b8._s_0.Z;
  if (dVar20 == dVar26) {
    local_188 = local_1b8._s_0.Z;
    dVar9 = dVar24;
  }
  else if (__real_3e45798ee0000000 <= dVar20) {
    auVar22._8_8_ = 0;
    auVar22._0_8_ = dVar20;
    local_130 = dVar26 / SQRT(dVar20);
    dVar9 = dVar24 * local_130;
    dVar27 = dVar27 * local_130;
    local_1b8._s_0.Z = local_1b8._s_0.Z * local_130;
  }
  else {
    auVar22._8_8_ = 0;
    auVar22._0_8_ = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    local_188 = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
    dVar27 = auVar15._8_8_;
    local_1b8._s_0.Z = UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z;
  }
  auVar8._8_8_ = 0;
  auVar8._0_8_ = dVar20;
  auVar23 = sqrtpd(auVar22,auVar8);
  local_198._8_4_ = SUB84(dVar11,0);
  local_198._0_8_ = dVar11;
  local_198._12_4_ = (int)((ulonglong)dVar11 >> 0x20);
  dVar20 = dVar13 * local_1b8._s_0.Z - dVar10 * dVar27;
  dVar20 = dVar20 + dVar20;
  dVar25 = dVar10 * dVar9 - dVar12 * local_1b8._s_0.Z;
  dVar25 = dVar25 + dVar25;
  dVar24 = dVar12 * dVar27 - dVar13 * dVar9;
  dVar24 = dVar24 + dVar24;
  local_1d0 = (dVar13 * dVar24 - dVar10 * dVar25) + dVar11 * dVar20 + dVar9;
  local_1c8 = (dVar10 * dVar20 - dVar12 * dVar24) + dVar11 * dVar25 + dVar27;
  local_1c0 = (dVar12 * dVar25 - dVar13 * dVar20) + dVar11 * dVar24 + local_1b8._s_0.Z;
  if (this->CurrentImplementation == '\x01') {
    if (((this->LegacyData).Object == (FLegacySpline *)0x0) &&
       (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar16)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    FLegacySpline::GetOutTangent
              ((this->LegacyData).Object,(TVector<double> *)&local_1e8._s_0,param_1);
LAB_147a90cd4:
    uVar28 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
    uVar29 = (undefined4)
             ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
  }
  else {
    if (this->CurrentImplementation == '\x02') {
      if (((this->NewData).Object == (FNewSpline *)0x0) &&
         (bVar16 = ::FDebug::CheckVerifyFailedImpl2
                             ("IsValid()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                              ,0x458,L""), bVar16)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      pFVar4 = (this->NewData).Object;
      iVar17 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                         ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&pFVar4->_padding_);
      if (param_1 < iVar17) {
        UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetTangentOut
                  ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&pFVar4->_padding_,
                   (TVector<double> *)&local_1e8._s_0,param_1);
        goto LAB_147a90cd4;
      }
      uVar28 = SUB84(UE::Math::TVector<double>::ZeroVector.field0_0x0._s_0.Z,0);
      uVar29 = (undefined4)
               ((ulonglong)UE::Math::TVector<double>::ZeroVector.field0_0x0._16_8_ >> 0x20);
    }
    local_1e8._0_4_ = 0;
    local_1e8._4_4_ = 0;
    local_1e8._8_4_ = 0;
    local_1e8._12_4_ = 0;
    local_1e8._s_0.X = 0.0;
    local_1e8._s_0.Y = 0.0;
    local_1e8._s_0.Z = 0.0;
  }
  dVar20 = (double)CONCAT44(local_1e8._4_4_,local_1e8._0_4_);
  dVar11 = (double)CONCAT44(local_1e8._12_4_,local_1e8._8_4_);
  dVar27 = (double)CONCAT44(local_1e8._12_4_,local_1e8._8_4_) * dVar11 +
           dVar20 * (double)CONCAT44(local_1e8._4_4_,local_1e8._0_4_) +
           local_1e8._s_0.Z * local_1e8._s_0.Z;
  uVar14 = local_1e8._s_0.Z;
  if (dVar27 != dVar26) {
    if (__real_3e45798ee0000000 <= dVar27) {
      dVar26 = dVar26 / SQRT(dVar27);
      dVar11 = (double)CONCAT44(local_1e8._12_4_,local_1e8._8_4_) * dVar26;
      dVar20 = (double)CONCAT44(local_1e8._4_4_,local_1e8._0_4_) * dVar26;
      uVar14 = local_1e8._s_0.Z * dVar26;
    }
    else {
      dVar11 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._12_4_,
                                UE::Math::TVector<double>::ZeroVector.field0_0x0._8_4_);
      dVar20 = (double)CONCAT44(UE::Math::TVector<double>::ZeroVector.field0_0x0._4_4_,
                                UE::Math::TVector<double>::ZeroVector.field0_0x0._0_4_);
      uVar14 = CONCAT44(uVar29,uVar28);
    }
  }
  dVar24 = (double)uVar14 * dVar13 - dVar11 * dVar10;
  dVar24 = dVar24 + dVar24;
  dVar9 = dVar20 * dVar10 - (double)uVar14 * dVar12;
  dVar9 = dVar9 + dVar9;
  dVar26 = dVar11 * dVar12 - dVar20 * dVar13;
  dVar25 = (double)(float)auVar23._0_8_;
  dVar26 = dVar26 + dVar26;
  local_178._s_0.X = local_1d0 * dVar25;
  local_178._s_0.Y = local_1c8 * dVar25;
  local_178._s_0.Z = local_1c0 * dVar25;
  SetInTangent(this,param_1,(TVector<double> *)&local_178._s_0);
  dVar27 = (double)(float)SQRT(dVar27);
  local_160._s_0.X =
       ((dVar13 * dVar26 - dVar10 * dVar9) + (double)local_198._0_8_ * dVar24 + dVar20) * dVar27;
  local_160._s_0.Y =
       ((dVar10 * dVar24 - dVar12 * dVar26) + (double)local_198._0_8_ * dVar9 + dVar11) * dVar27;
  local_160._s_0.Z =
       ((dVar12 * dVar9 - dVar13 * dVar24) + (double)local_198._0_8_ * dVar26 + (double)uVar14) *
       dVar27;
  SetOutTangent(this,param_1,(TVector<double> *)&local_160._s_0);
  return;
}

// SetOutTangent @ 147a91080

void __thiscall FSpline::SetOutTangent(FSpline *this,int param_1,TVector<double> *param_2)

{
  uint *puVar1;
  FChangeStamp *this_00;
  double *pdVar2;
  atomic<unsigned_char> aVar3;
  double dVar4;
  FNewSpline *this_01;
  FLegacySpline *pFVar5;
  longlong lVar6;
  code *pcVar7;
  double dVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  longlong lVar12;
  
  if (this->CurrentImplementation == '\x01') {
    if (((this->LegacyData).Object == (FLegacySpline *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    pFVar5 = (this->LegacyData).Object;
    if ((-1 < param_1) && (param_1 < *(int *)&(pFVar5->PositionCurve).field_0x8)) {
      lVar6 = *(longlong *)&pFVar5->PositionCurve;
      dVar8 = (param_2->field0_0x0)._s_0.Y;
      dVar4 = (param_2->field0_0x0)._s_0.Z;
      lVar12 = (longlong)param_1 * 0x58;
      pdVar2 = (double *)(lVar12 + 0x38 + lVar6);
      *pdVar2 = (param_2->field0_0x0)._s_0.X;
      pdVar2[1] = dVar8;
      *(double *)(lVar12 + 0x48 + lVar6) = dVar4;
      uVar11 = 0;
      if (param_1 < *(int *)&(pFVar5->PositionCurve).field_0x8) {
        uVar11 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar9)) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
      *(undefined1 *)(*(longlong *)&pFVar5->PositionCurve + 0x50 + lVar12) = 3;
    }
  }
  else if (this->CurrentImplementation == '\x02') {
    if (((this->NewData).Object == (FNewSpline *)0x0) &&
       (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar9)) {
      pcVar7 = (code *)swi(3);
      (*pcVar7)();
      return;
    }
    this_01 = (this->NewData).Object;
    if ((-1 < param_1) &&
       (iVar10 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::
                 GetNumPoints((TTangentBezierSpline<UE::Math::TVector<double>_> *)
                              &this_01->_padding_), param_1 < iVar10)) {
      UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::SetPointTangentMode
                ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this_01->_padding_,param_1,
                 User);
      UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::SetTangentOut
                ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this_01->_padding_,param_1,
                 param_2);
      this_00 = &this_01->ReparamTableNextVersion;
      LOCK();
      bVar9 = (this_00->Mutex).State == (atomic<unsigned_char>)0x0;
      if (bVar9) {
        (this_00->Mutex).State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar9) {
        UE::FMutex::LockSlow(&this_00->Mutex);
      }
      puVar1 = &(this_01->ReparamTableNextVersion).Value;
      *puVar1 = *puVar1 + 1;
      LOCK();
      aVar3 = (this_00->Mutex).State;
      (this_00->Mutex).State = (atomic<unsigned_char>)((char)(this_00->Mutex).State + -1);
      UNLOCK();
      if (((byte)aVar3 & 2) != 0) {
        UE::FMutex::WakeWaitingThread(&this_00->Mutex);
      }
      FNewSpline::MarkLegacyCurvesDirty(this_01);
    }
  }
  return;
}

// SetRotation @ 147a924e0

void __thiscall FSpline::SetRotation(FSpline *this,int param_1,TQuat<double> *param_2)

{
  undefined4 *puVar1;
  double *pdVar2;
  FLegacySpline *pFVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  double dVar10;
  double dVar11;
  bool bVar12;
  uint uVar13;
  
  if (this->CurrentImplementation == '\x01') {
    if (((this->LegacyData).Object == (FLegacySpline *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar3 = (this->LegacyData).Object;
    if ((-1 < param_1) && (param_1 < *(int *)&(pFVar3->RotationCurve).field_0x8)) {
      uVar6 = *(undefined4 *)&param_2->X;
      uVar7 = *(undefined4 *)((longlong)&param_2->X + 4);
      uVar8 = *(undefined4 *)&param_2->Y;
      uVar9 = *(undefined4 *)((longlong)&param_2->Y + 4);
      dVar10 = param_2->Z;
      dVar11 = param_2->W;
      uVar13 = 0;
      if (param_1 < *(int *)&(pFVar3->RotationCurve).field_0x8) {
        uVar13 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar13 == 0) &&
         (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar12)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar4 = *(longlong *)&pFVar3->RotationCurve;
      puVar1 = (undefined4 *)((longlong)param_1 * 0x80 + 0x10 + lVar4);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      pdVar2 = (double *)((longlong)param_1 * 0x80 + 0x20 + lVar4);
      *pdVar2 = dVar10;
      pdVar2[1] = dVar11;
    }
  }
  else if (this->CurrentImplementation == '\x02') {
    if (((this->NewData).Object == (FNewSpline *)0x0) &&
       (bVar12 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar12)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FNewSpline::SetRotation((this->NewData).Object,param_1,param_2);
    return;
  }
  return;
}

// SetScale @ 147a92740

void __thiscall FSpline::SetScale(FSpline *this,int param_1,TVector<double> *param_2)

{
  undefined4 *puVar1;
  double dVar2;
  FLegacySpline *pFVar3;
  longlong lVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  bool bVar10;
  uint uVar11;
  
  if (this->CurrentImplementation == '\x01') {
    if (((this->LegacyData).Object == (FLegacySpline *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    pFVar3 = (this->LegacyData).Object;
    if ((-1 < param_1) && (param_1 < *(int *)&(pFVar3->ScaleCurve).field_0x8)) {
      uVar6 = *(undefined4 *)&param_2->field0_0x0;
      uVar7 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 4);
      uVar8 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 8);
      uVar9 = *(undefined4 *)((longlong)&param_2->field0_0x0 + 0xc);
      dVar2 = (param_2->field0_0x0)._s_0.Z;
      uVar11 = 0;
      if (param_1 < *(int *)&(pFVar3->ScaleCurve).field_0x8) {
        uVar11 = (uint)~param_1 >> 0x1f;
      }
      if ((uVar11 == 0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar10)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      lVar4 = *(longlong *)&pFVar3->ScaleCurve;
      puVar1 = (undefined4 *)((longlong)param_1 * 0x58 + 8 + lVar4);
      *puVar1 = uVar6;
      puVar1[1] = uVar7;
      puVar1[2] = uVar8;
      puVar1[3] = uVar9;
      *(double *)((longlong)param_1 * 0x58 + 0x18 + lVar4) = dVar2;
    }
  }
  else if (this->CurrentImplementation == '\x02') {
    if (((this->NewData).Object == (FNewSpline *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("IsValid()",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                            ,0x458,L""), bVar10)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FNewSpline::SetScale((this->NewData).Object,param_1,param_2);
    return;
  }
  return;
}

// SetSplinePointType @ 147a929a0

void __thiscall FSpline::SetSplinePointType(FSpline *this,int param_1,EInterpCurveMode param_2)

{
  uint *puVar1;
  FChangeStamp *this_00;
  atomic<unsigned_char> aVar2;
  FNewSpline *this_01;
  FLegacySpline *pFVar3;
  code *pcVar4;
  bool bVar5;
  ETangentMode EVar6;
  int iVar7;
  
  if (this->CurrentImplementation == '\x01') {
    if (((this->LegacyData).Object == (FLegacySpline *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    pFVar3 = (this->LegacyData).Object;
    if ((-1 < param_1) && (param_1 < *(int *)&(pFVar3->PositionCurve).field_0x8)) {
      if ((param_1 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      *(char *)((longlong)param_1 * 0x58 + 0x50 + *(longlong *)&pFVar3->PositionCurve) =
           (char)param_2;
      return;
    }
  }
  else if (this->CurrentImplementation == '\x02') {
    if (((this->NewData).Object == (FNewSpline *)0x0) &&
       (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar5)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    this_01 = (this->NewData).Object;
    if ((-1 < param_1) &&
       (iVar7 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::GetNumPoints
                          ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this_01->_padding_),
       param_1 < iVar7)) {
      EVar6 = ConvertInterpCurveModeToTangentMode(param_2);
      UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::SetPointTangentMode
                ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this_01->_padding_,param_1,
                 EVar6);
      this_00 = &this_01->ReparamTableNextVersion;
      LOCK();
      bVar5 = (this_00->Mutex).State == (atomic<unsigned_char>)0x0;
      if (bVar5) {
        (this_00->Mutex).State = (atomic<unsigned_char>)0x1;
      }
      UNLOCK();
      if (!bVar5) {
        UE::FMutex::LockSlow(&this_00->Mutex);
      }
      puVar1 = &(this_01->ReparamTableNextVersion).Value;
      *puVar1 = *puVar1 + 1;
      LOCK();
      aVar2 = (this_00->Mutex).State;
      (this_00->Mutex).State = (atomic<unsigned_char>)((char)(this_00->Mutex).State + -1);
      UNLOCK();
      if (((byte)aVar2 & 2) != 0) {
        UE::FMutex::WakeWaitingThread(&this_00->Mutex);
      }
      FNewSpline::MarkLegacyCurvesDirty(this_01);
    }
  }
  return;
}

// UpdateSpline @ 147a9e1b0

void __thiscall FSpline::UpdateSpline(FSpline *this,FUpdateSplineParams *param_1)

{
  double dVar1;
  FNewSpline *this_00;
  code *pcVar2;
  undefined2 uVar3;
  int iVar4;
  bool bVar5;
  undefined3 uVar6;
  float fVar7;
  bool bVar8;
  
  if (this->CurrentImplementation == '\x01') {
    if ((this->LegacyData).Object == (FLegacySpline *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FLegacySpline::UpdateSpline((this->LegacyData).Object,param_1);
  }
  else if (this->CurrentImplementation == '\x02') {
    if ((this->NewData).Object == (FNewSpline *)0x0) {
      bVar8 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar8) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this_00 = (this->NewData).Object;
    (**(code **)(this_00->_padding_ + 0x38))(this_00,param_1->bClosedLoop);
    *(bool *)&this_00->_padding_ = param_1->bStationaryEndpoints;
    UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::UpdateTangents
              ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this_00->_padding_);
    this_00->ReparamStepsPerSegment = param_1->ReparamStepsPerSegment;
    FNewSpline::UpdateSpline(this_00);
  }
  bVar8 = param_1->bStationaryEndpoints;
  uVar3 = *(undefined2 *)&param_1->field_0x2;
  iVar4 = param_1->ReparamStepsPerSegment;
  bVar5 = param_1->bLoopPositionOverride;
  uVar6 = *(undefined3 *)&param_1->field_0x9;
  fVar7 = param_1->LoopPosition;
  (this->CachedUpdateSplineParams).bClosedLoop = param_1->bClosedLoop;
  (this->CachedUpdateSplineParams).bStationaryEndpoints = bVar8;
  *(undefined2 *)&(this->CachedUpdateSplineParams).field_0x2 = uVar3;
  (this->CachedUpdateSplineParams).ReparamStepsPerSegment = iVar4;
  (this->CachedUpdateSplineParams).bLoopPositionOverride = bVar5;
  *(undefined3 *)&(this->CachedUpdateSplineParams).field_0x9 = uVar6;
  (this->CachedUpdateSplineParams).LoopPosition = fVar7;
  dVar1 = (param_1->Scale3D).field0_0x0._s_0.Y;
  (this->CachedUpdateSplineParams).Scale3D.field0_0x0._s_0.X = (param_1->Scale3D).field0_0x0._s_0.X;
  (this->CachedUpdateSplineParams).Scale3D.field0_0x0._s_0.Y = dVar1;
  dVar1 = (param_1->Scale3D).field0_0x0._s_0.Z;
  this->Version = this->Version + 1;
  (this->CachedUpdateSplineParams).Scale3D.field0_0x0._s_0.Z = dVar1;
  return;
}

// UpdateSpline @ 147a9e2b0

void __thiscall FSpline::UpdateSpline(FSpline *this)

{
  double dVar1;
  FNewSpline *this_00;
  code *pcVar2;
  bool bVar3;
  
  if (this->CurrentImplementation == '\x01') {
    if ((this->LegacyData).Object == (FLegacySpline *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    FLegacySpline::UpdateSpline((this->LegacyData).Object,&this->CachedUpdateSplineParams);
  }
  else if (this->CurrentImplementation == '\x02') {
    if ((this->NewData).Object == (FNewSpline *)0x0) {
      bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("IsValid()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                         ,0x458,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    this_00 = (this->NewData).Object;
    (**(code **)(this_00->_padding_ + 0x38))(this_00,(this->CachedUpdateSplineParams).bClosedLoop);
    *(bool *)&this_00->_padding_ = (this->CachedUpdateSplineParams).bStationaryEndpoints;
    UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::UpdateTangents
              ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this_00->_padding_);
    this_00->ReparamStepsPerSegment = (this->CachedUpdateSplineParams).ReparamStepsPerSegment;
    FNewSpline::UpdateSpline(this_00);
  }
  (this->CachedUpdateSplineParams).bClosedLoop = (this->CachedUpdateSplineParams).bClosedLoop;
  (this->CachedUpdateSplineParams).bStationaryEndpoints =
       (this->CachedUpdateSplineParams).bStationaryEndpoints;
  *(undefined2 *)&(this->CachedUpdateSplineParams).field_0x2 =
       *(undefined2 *)&(this->CachedUpdateSplineParams).field_0x2;
  (this->CachedUpdateSplineParams).ReparamStepsPerSegment =
       (this->CachedUpdateSplineParams).ReparamStepsPerSegment;
  (this->CachedUpdateSplineParams).bLoopPositionOverride =
       (this->CachedUpdateSplineParams).bLoopPositionOverride;
  *(undefined3 *)&(this->CachedUpdateSplineParams).field_0x9 =
       *(undefined3 *)&(this->CachedUpdateSplineParams).field_0x9;
  (this->CachedUpdateSplineParams).LoopPosition = (this->CachedUpdateSplineParams).LoopPosition;
  dVar1 = (this->CachedUpdateSplineParams).Scale3D.field0_0x0._s_0.Y;
  (this->CachedUpdateSplineParams).Scale3D.field0_0x0._s_0.X =
       (this->CachedUpdateSplineParams).Scale3D.field0_0x0._s_0.X;
  (this->CachedUpdateSplineParams).Scale3D.field0_0x0._s_0.Y = dVar1;
  dVar1 = (this->CachedUpdateSplineParams).Scale3D.field0_0x0._s_0.Z;
  this->Version = this->Version + 1;
  (this->CachedUpdateSplineParams).Scale3D.field0_0x0._s_0.Z = dVar1;
  return;
}

