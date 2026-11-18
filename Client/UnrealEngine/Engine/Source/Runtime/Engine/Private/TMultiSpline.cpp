// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 21

// <lambda_invoker_cdecl> @ 147a10d00

TUniquePtr<UE::Geometry::Spline::TTangentBezierSpline<float>,TDefaultDelete<UE::Geometry::Spline::TTangentBezierSpline<float>_>_>
 __cdecl `UE::Geometry::Spline::
         TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
         CreateAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<float>_>'::__l5::
         <lambda_1>::<lambda_invoker_cdecl>(void)

{
  TTangentBezierSpline<float> *pTVar1;
  TTangentBezierSpline<float> *in_RCX;
  
  pTVar1 = ::operator_new(0x98);
  if (pTVar1 != (TTangentBezierSpline<float> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    *(undefined8 *)&pTVar1->Tension = 0;
    (pTVar1->TangentModes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar1->TangentModes).ArrayNum = 0;
    (pTVar1->TangentModes).ArrayMax = 0;
    *(undefined8 *)&pTVar1->bStationaryEndpoint = 0;
    pTVar1 = UE::Geometry::Spline::TTangentBezierSpline<float>::TTangentBezierSpline<float>(pTVar1);
    in_RCX->_padding_ = (longlong)pTVar1;
    return (TUniquePtr<UE::Geometry::Spline::TTangentBezierSpline<float>,TDefaultDelete<UE::Geometry::Spline::TTangentBezierSpline<float>_>_>
            )in_RCX;
  }
  in_RCX->_padding_ = 0;
  return (TUniquePtr<UE::Geometry::Spline::TTangentBezierSpline<float>,TDefaultDelete<UE::Geometry::Spline::TTangentBezierSpline<float>_>_>
          )in_RCX;
}

// <lambda_invoker_cdecl> @ 147a10d80

TUniquePtr<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>,TDefaultDelete<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>_>_>
 __cdecl `UE::Geometry::Spline::
         TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
         CreateAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>_>'
         ::__l5::<lambda_1>::<lambda_invoker_cdecl>(void)

{
  TTangentBezierSpline<UE::Math::TQuat<double>_> *pTVar1;
  TTangentBezierSpline<UE::Math::TQuat<double>_> *in_RCX;
  
  pTVar1 = ::operator_new(0x98);
  if (pTVar1 != (TTangentBezierSpline<UE::Math::TQuat<double>_> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    *(undefined8 *)&pTVar1->Tension = 0;
    (pTVar1->TangentModes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar1->TangentModes).ArrayNum = 0;
    (pTVar1->TangentModes).ArrayMax = 0;
    *(undefined8 *)&pTVar1->bStationaryEndpoint = 0;
    pTVar1 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>::
             TTangentBezierSpline<UE::Math::TQuat<double>_>(pTVar1);
    in_RCX->_padding_ = (longlong)pTVar1;
    return (TUniquePtr<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>,TDefaultDelete<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>_>_>
            )in_RCX;
  }
  in_RCX->_padding_ = 0;
  return (TUniquePtr<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>,TDefaultDelete<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>_>_>
          )in_RCX;
}

// <lambda_invoker_cdecl> @ 147a10e00

TUniquePtr<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>,TDefaultDelete<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>_>
 __cdecl `UE::Geometry::Spline::
         TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
         CreateAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>'
         ::__l5::<lambda_1>::<lambda_invoker_cdecl>(void)

{
  TTangentBezierSpline<UE::Math::TVector<double>_> *pTVar1;
  TTangentBezierSpline<UE::Math::TVector<double>_> *in_RCX;
  
  pTVar1 = ::operator_new(0x98);
  if (pTVar1 != (TTangentBezierSpline<UE::Math::TVector<double>_> *)0x0) {
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    pTVar1->_padding_ = 0;
    *(undefined8 *)&pTVar1->Tension = 0;
    (pTVar1->TangentModes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    (pTVar1->TangentModes).ArrayNum = 0;
    (pTVar1->TangentModes).ArrayMax = 0;
    *(undefined8 *)&pTVar1->bStationaryEndpoint = 0;
    pTVar1 = UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>::
             TTangentBezierSpline<UE::Math::TVector<double>_>(pTVar1);
    in_RCX->_padding_ = (longlong)pTVar1;
    return (TUniquePtr<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>,TDefaultDelete<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>_>
            )in_RCX;
  }
  in_RCX->_padding_ = 0;
  return (TUniquePtr<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>,TDefaultDelete<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>_>
          )in_RCX;
}

// CreateAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>_> @ 147a13590

/* WARNING: Enum "Type": Some values do not have unique names */

TTangentBezierSpline<UE::Math::TQuat<double>_> * __thiscall
UE::Geometry::Spline::
TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
CreateAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>_>
          (TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
           *this,FName *param_1)

{
  ForAnyElementType _Src;
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  TTangentBezierSpline<UE::Math::TQuat<double>_> *pTVar4;
  longlong lVar5;
  FString local_68;
  FString local_58;
  code *local_48 [2];
  undefined **local_38;
  code *local_30;
  undefined8 local_20;
  
  ::FString::FString(&local_58,L"TangentBezier");
  uVar2 = FSplineTypeRegistry::GetTypeId
                    (&local_58,&TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (uVar2 == 0) {
    puVar3 = TTangentBezierSpline<UE::Math::TQuat<double>_>::GetStaticTypeId();
    uVar2 = *puVar3;
    ::FString::FString(&local_58,L"TangentBezier");
    _Src = TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name.Data.AllocatorInstance;
    lVar5 = (longlong)TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name.Data.ArrayNum;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name.Data.ArrayNum;
    if (TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name.Data.ArrayNum == 0) {
      local_68.Data.ArrayMax = TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name.Data.ArrayNum;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name.Data.ArrayNum,0,
                 (ForAnyElementType *)&local_68,
                 TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name.Data.ArrayNum,
                 &local_68.Data.ArrayMax);
      memcpy(local_68.Data.AllocatorInstance.Data,_Src.Data,lVar5 * 2);
    }
    local_20 = 0;
    local_38 = &
               ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr_V__TTangentBezierSpline_U__TQuat_N_Math_UE___Spline_Geometry_UE__U__TDefaultDelete_V__TTangentBezierSpline_U__TQuat_N_Math_UE___Spline_Geometry_UE______XZ_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_30 = `UE::Geometry::Spline::
               TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
               ::
               CreateAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>_>'
               ::__l5::<lambda_1>::<lambda_invoker_cdecl>;
    local_48[0] = Core::Private::Function::
                  TFunctionRefCaller<TUniquePtr<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>,TDefaultDelete<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>_>_>_(__cdecl*)(void),TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>_>
                  ::Call;
    bVar1 = FSplineTypeRegistry::RegisterType
                      (uVar2,&local_58,&local_68,
                       (TFunction<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl(void)>
                        *)local_48);
    if (!bVar1) {
      if (1 < (byte)Spline::LogSpline._0_1_) {
        Logging::Private::BasicLog<2>
                  (&`public:_class_UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>*___ptr64___cdecl_UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::CreateAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>_>(FName_const&___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      return (TTangentBezierSpline<UE::Math::TQuat<double>_> *)0x0;
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  ::FString::FString(&local_58,L"TangentBezier");
  CreateAttributeChannelInternal<UE::Math::TQuat<double>_>(this,param_1,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pTVar4 = GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>_>
                     (this,*param_1);
  return pTVar4;
}

// CreateAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_> @ 147a13780

/* WARNING: Enum "Type": Some values do not have unique names */

TTangentBezierSpline<UE::Math::TVector<double>_> * __thiscall
UE::Geometry::Spline::
TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
CreateAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
          (TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
           *this,FName *param_1)

{
  ForAnyElementType _Src;
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  TTangentBezierSpline<UE::Math::TVector<double>_> *pTVar4;
  longlong lVar5;
  FString local_68;
  FString local_58;
  code *local_48 [2];
  undefined **local_38;
  code *local_30;
  undefined8 local_20;
  
  ::FString::FString(&local_58,L"TangentBezier");
  uVar2 = FSplineTypeRegistry::GetTypeId
                    (&local_58,&TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  if (uVar2 == 0) {
    puVar3 = TTangentBezierSpline<UE::Math::TVector<double>_>::GetStaticTypeId();
    uVar2 = *puVar3;
    ::FString::FString(&local_58,L"TangentBezier");
    _Src = TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.AllocatorInstance;
    lVar5 = (longlong)TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.ArrayNum;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.ArrayNum;
    if (TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.ArrayNum == 0) {
      local_68.Data.ArrayMax =
           TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.ArrayNum;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.ArrayNum,0,
                 (ForAnyElementType *)&local_68,
                 TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.ArrayNum,
                 &local_68.Data.ArrayMax);
      memcpy(local_68.Data.AllocatorInstance.Data,_Src.Data,lVar5 * 2);
    }
    local_20 = 0;
    local_38 = &
               ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr_V__TTangentBezierSpline_U__TVector_N_Math_UE___Spline_Geometry_UE__U__TDefaultDelete_V__TTangentBezierSpline_U__TVector_N_Math_UE___Spline_Geometry_UE______XZ_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_30 = `UE::Geometry::Spline::
               TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
               ::
               CreateAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>'
               ::__l5::<lambda_1>::<lambda_invoker_cdecl>;
    local_48[0] = Core::Private::Function::
                  TFunctionRefCaller<TUniquePtr<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>,TDefaultDelete<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>_>_(__cdecl*)(void),TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>_>
                  ::Call;
    bVar1 = FSplineTypeRegistry::RegisterType
                      (uVar2,&local_58,&local_68,
                       (TFunction<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl(void)>
                        *)local_48);
    if (!bVar1) {
      if (1 < (byte)Spline::LogSpline._0_1_) {
        Logging::Private::BasicLog<2>
                  (&`public:_class_UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>*___ptr64___cdecl_UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::CreateAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>(FName_const&___ptr64)___ptr64'
                    ::__l9::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
      }
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_58.Data.AllocatorInstance.Data);
      }
      return (TTangentBezierSpline<UE::Math::TVector<double>_> *)0x0;
    }
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  ::FString::FString(&local_58,L"TangentBezier");
  CreateAttributeChannelInternal<UE::Math::TVector<double>_>(this,param_1,&local_58);
  if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data.AllocatorInstance.Data);
  }
  pTVar4 = GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                     (this,*param_1);
  return pTVar4;
}

// CreateAttributeChannelInternal<float> @ 147a13970

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Geometry::Spline::
TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
CreateAttributeChannelInternal<float>
          (TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
           *this,FName *param_1,FString *param_2)

{
  TMap<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>_>
  *this_00;
  longlong **pplVar1;
  FName FVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 *puVar9;
  bool bVar10;
  TKeyInitializer<FName_const_&> local_res8;
  FName *local_res10;
  longlong *local_38;
  FString local_30;
  
  FVar2 = *param_1;
  this_00 = &this->Children;
  uVar5 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  if (*(int *)&(this->Children).field_0x8 != *(int *)&(this->Children).field_0x34) {
    puVar9 = *(undefined1 **)&(this->Children).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->Children).field_0x38;
    }
    iVar6 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(this->Children).field_0x48 - 1U & FVar2.Number + uVar5) * 4
                    );
    if (iVar6 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar6 * 0x28) == FVar2) {
          if ((byte)Spline::LogSpline._0_1_ < 3) {
            return false;
          }
          ::FName::ToString(param_1,&local_30);
          Logging::Private::BasicLog<3>
                    (&`private:_bool___cdecl_UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::CreateAttributeChannelInternal<float>(FName_const&___ptr64,FString_const&___ptr64)___ptr64'
                      ::__l6::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
          if (local_30.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return false;
          }
          FMemory::Free(local_30.Data.AllocatorInstance.Data);
          return false;
        }
        iVar6 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x20 + (longlong)iVar6 * 0x28);
      } while (iVar6 != -1);
    }
  }
  uVar5 = FSplineTypeRegistry::GetTypeId(param_2,&TSplineValueTypeTraits<float>::Name);
  if (uVar5 == 0) {
    if (1 < (byte)Spline::LogSpline._0_1_) {
      Logging::Private::BasicLog<2>
                (&`private:_bool___cdecl_UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::CreateAttributeChannelInternal<float>(FName_const&___ptr64,FString_const&___ptr64)___ptr64'
                  ::__l18::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
    }
    return false;
  }
  FSplineTypeRegistry::CreateSpline((uint)&local_38);
  if (local_38 == (longlong *)0x0) {
    if (1 < (byte)Spline::LogSpline._0_1_) {
      ::FName::ToString(param_1,&local_30);
      Logging::Private::BasicLog<2>
                (&`private:_bool___cdecl_UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::CreateAttributeChannelInternal<float>(FName_const&___ptr64,FString_const&___ptr64)___ptr64'
                  ::__l30::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
LAB_147a13bbd:
      if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    puVar7 = (undefined8 *)(**(code **)(*local_38 + 0x20))(local_38,&local_30);
    iVar6 = *(int *)(puVar7 + 1);
    if (iVar6 == TSplineValueTypeTraits<float>::Name.Data.ArrayNum) {
      if (iVar6 < 2) {
        bVar10 = false;
      }
      else {
        iVar6 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)*puVar7,
                           (wchar_t *)
                           TSplineValueTypeTraits<float>::Name.Data.AllocatorInstance.Data);
        bVar10 = iVar6 != 0;
      }
    }
    else {
      bVar10 = TSplineValueTypeTraits<float>::Name.Data.ArrayNum + iVar6 != 1;
    }
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    if (!bVar10) {
      local_res10 = param_1;
      TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<FName_const_&>_>
                ((TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                  *)this_00,&local_res8,(bool *)&local_res10);
      lVar8 = (longlong)(int)local_res8.Key;
      lVar3 = *(longlong *)&this_00->field_0x0;
      pplVar1 = (longlong **)(lVar3 + (lVar8 * 5 + 3) * 8);
      if (pplVar1 != &local_38) {
        plVar4 = *pplVar1;
        *pplVar1 = local_38;
        local_38 = (longlong *)0x0;
        if (plVar4 != (longlong *)0x0) {
          (**(code **)*plVar4)(plVar4,1);
        }
      }
      *(undefined1 *)(lVar3 + 8 + lVar8 * 0x28) = 0;
      *(undefined4 *)(lVar3 + 0xc + lVar8 * 0x28) = 0;
      *(undefined4 *)(lVar3 + 0x10 + lVar8 * 0x28) = 0x3f800000;
      bVar10 = true;
      goto LAB_147a13c4c;
    }
    if (1 < (byte)Spline::LogSpline._0_1_) {
      (**(code **)(*local_38 + 0x20))(local_38,&local_30);
      Logging::Private::BasicLog<2>
                (&`private:_bool___cdecl_UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::CreateAttributeChannelInternal<float>(FName_const&___ptr64,FString_const&___ptr64)___ptr64'
                  ::__l42::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
      goto LAB_147a13bbd;
    }
  }
  bVar10 = false;
LAB_147a13c4c:
  if (local_38 != (longlong *)0x0) {
    (**(code **)*local_38)(local_38,1);
  }
  return bVar10;
}

// CreateAttributeChannelInternal<UE::Math::TQuat<double>_> @ 147a13c80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Geometry::Spline::
TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
CreateAttributeChannelInternal<UE::Math::TQuat<double>_>
          (TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
           *this,FName *param_1,FString *param_2)

{
  TMap<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>_>
  *this_00;
  longlong **pplVar1;
  FName FVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 *puVar9;
  bool bVar10;
  TKeyInitializer<FName_const_&> local_res8;
  FName *local_res10;
  longlong *local_38;
  FString local_30;
  
  FVar2 = *param_1;
  this_00 = &this->Children;
  uVar5 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  if (*(int *)&(this->Children).field_0x8 != *(int *)&(this->Children).field_0x34) {
    puVar9 = *(undefined1 **)&(this->Children).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->Children).field_0x38;
    }
    iVar6 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(this->Children).field_0x48 - 1U & FVar2.Number + uVar5) * 4
                    );
    if (iVar6 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar6 * 0x28) == FVar2) {
          if ((byte)Spline::LogSpline._0_1_ < 3) {
            return false;
          }
          ::FName::ToString(param_1,&local_30);
          Logging::Private::BasicLog<3>
                    (&`private:_bool___cdecl_UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::CreateAttributeChannelInternal<UE::Math::TQuat<double>_>(FName_const&___ptr64,FString_const&___ptr64)___ptr64'
                      ::__l6::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
          if (local_30.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return false;
          }
          FMemory::Free(local_30.Data.AllocatorInstance.Data);
          return false;
        }
        iVar6 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x20 + (longlong)iVar6 * 0x28);
      } while (iVar6 != -1);
    }
  }
  uVar5 = FSplineTypeRegistry::GetTypeId
                    (param_2,&TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name);
  if (uVar5 == 0) {
    if (1 < (byte)Spline::LogSpline._0_1_) {
      Logging::Private::BasicLog<2>
                (&`private:_bool___cdecl_UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::CreateAttributeChannelInternal<UE::Math::TQuat<double>_>(FName_const&___ptr64,FString_const&___ptr64)___ptr64'
                  ::__l18::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
    }
    return false;
  }
  FSplineTypeRegistry::CreateSpline((uint)&local_38);
  if (local_38 == (longlong *)0x0) {
    if (1 < (byte)Spline::LogSpline._0_1_) {
      ::FName::ToString(param_1,&local_30);
      Logging::Private::BasicLog<2>
                (&`private:_bool___cdecl_UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::CreateAttributeChannelInternal<UE::Math::TQuat<double>_>(FName_const&___ptr64,FString_const&___ptr64)___ptr64'
                  ::__l30::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
LAB_147a13ecd:
      if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    puVar7 = (undefined8 *)(**(code **)(*local_38 + 0x20))(local_38,&local_30);
    iVar6 = *(int *)(puVar7 + 1);
    if (iVar6 == TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name.Data.ArrayNum) {
      if (iVar6 < 2) {
        bVar10 = false;
      }
      else {
        iVar6 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)*puVar7,
                           (wchar_t *)
                           TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name.Data.
                           AllocatorInstance.Data);
        bVar10 = iVar6 != 0;
      }
    }
    else {
      bVar10 = TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name.Data.ArrayNum + iVar6 != 1;
    }
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    if (!bVar10) {
      local_res10 = param_1;
      TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<FName_const_&>_>
                ((TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                  *)this_00,&local_res8,(bool *)&local_res10);
      lVar8 = (longlong)(int)local_res8.Key;
      lVar3 = *(longlong *)&this_00->field_0x0;
      pplVar1 = (longlong **)(lVar3 + (lVar8 * 5 + 3) * 8);
      if (pplVar1 != &local_38) {
        plVar4 = *pplVar1;
        *pplVar1 = local_38;
        local_38 = (longlong *)0x0;
        if (plVar4 != (longlong *)0x0) {
          (**(code **)*plVar4)(plVar4,1);
        }
      }
      *(undefined1 *)(lVar3 + 8 + lVar8 * 0x28) = 0;
      *(undefined4 *)(lVar3 + 0xc + lVar8 * 0x28) = 0;
      *(undefined4 *)(lVar3 + 0x10 + lVar8 * 0x28) = 0x3f800000;
      bVar10 = true;
      goto LAB_147a13f5c;
    }
    if (1 < (byte)Spline::LogSpline._0_1_) {
      (**(code **)(*local_38 + 0x20))(local_38,&local_30);
      Logging::Private::BasicLog<2>
                (&`private:_bool___cdecl_UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::CreateAttributeChannelInternal<UE::Math::TQuat<double>_>(FName_const&___ptr64,FString_const&___ptr64)___ptr64'
                  ::__l42::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
      goto LAB_147a13ecd;
    }
  }
  bVar10 = false;
LAB_147a13f5c:
  if (local_38 != (longlong *)0x0) {
    (**(code **)*local_38)(local_38,1);
  }
  return bVar10;
}

// CreateAttributeChannelInternal<UE::Math::TVector<double>_> @ 147a13f90

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UE::Geometry::Spline::
TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
CreateAttributeChannelInternal<UE::Math::TVector<double>_>
          (TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
           *this,FName *param_1,FString *param_2)

{
  TMap<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>_>
  *this_00;
  longlong **pplVar1;
  FName FVar2;
  longlong lVar3;
  longlong *plVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  longlong lVar8;
  undefined1 *puVar9;
  bool bVar10;
  TKeyInitializer<FName_const_&> local_res8;
  FName *local_res10;
  longlong *local_38;
  FString local_30;
  
  FVar2 = *param_1;
  this_00 = &this->Children;
  uVar5 = ::GetTypeHash(FVar2.ComparisonIndex.Value);
  if (*(int *)&(this->Children).field_0x8 != *(int *)&(this->Children).field_0x34) {
    puVar9 = *(undefined1 **)&(this->Children).field_0x40;
    if (puVar9 == (undefined1 *)0x0) {
      puVar9 = &(this->Children).field_0x38;
    }
    iVar6 = *(int *)(puVar9 + (ulonglong)
                              (*(int *)&(this->Children).field_0x48 - 1U & FVar2.Number + uVar5) * 4
                    );
    if (iVar6 != -1) {
      do {
        if (*(FName *)(*(longlong *)&this_00->field_0x0 + (longlong)iVar6 * 0x28) == FVar2) {
          if ((byte)Spline::LogSpline._0_1_ < 3) {
            return false;
          }
          ::FName::ToString(param_1,&local_30);
          Logging::Private::BasicLog<3>
                    (&`private:_bool___cdecl_UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::CreateAttributeChannelInternal<UE::Math::TVector<double>_>(FName_const&___ptr64,FString_const&___ptr64)___ptr64'
                      ::__l6::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
          if (local_30.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return false;
          }
          FMemory::Free(local_30.Data.AllocatorInstance.Data);
          return false;
        }
        iVar6 = *(int *)(*(longlong *)&this_00->field_0x0 + 0x20 + (longlong)iVar6 * 0x28);
      } while (iVar6 != -1);
    }
  }
  uVar5 = FSplineTypeRegistry::GetTypeId
                    (param_2,&TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name);
  if (uVar5 == 0) {
    if (1 < (byte)Spline::LogSpline._0_1_) {
      Logging::Private::BasicLog<2>
                (&`private:_bool___cdecl_UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::CreateAttributeChannelInternal<UE::Math::TVector<double>_>(FName_const&___ptr64,FString_const&___ptr64)___ptr64'
                  ::__l18::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
    }
    return false;
  }
  FSplineTypeRegistry::CreateSpline((uint)&local_38);
  if (local_38 == (longlong *)0x0) {
    if (1 < (byte)Spline::LogSpline._0_1_) {
      ::FName::ToString(param_1,&local_30);
      Logging::Private::BasicLog<2>
                (&`private:_bool___cdecl_UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::CreateAttributeChannelInternal<UE::Math::TVector<double>_>(FName_const&___ptr64,FString_const&___ptr64)___ptr64'
                  ::__l30::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
LAB_147a141dd:
      if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_30.Data.AllocatorInstance.Data);
      }
    }
  }
  else {
    puVar7 = (undefined8 *)(**(code **)(*local_38 + 0x20))(local_38,&local_30);
    iVar6 = *(int *)(puVar7 + 1);
    if (iVar6 == TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.ArrayNum) {
      if (iVar6 < 2) {
        bVar10 = false;
      }
      else {
        iVar6 = FGenericPlatformStricmp::Stricmp
                          ((wchar_t *)*puVar7,
                           (wchar_t *)
                           TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.
                           AllocatorInstance.Data);
        bVar10 = iVar6 != 0;
      }
    }
    else {
      bVar10 = TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.ArrayNum + iVar6 != 1;
    }
    if (local_30.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_30.Data.AllocatorInstance.Data);
    }
    if (!bVar10) {
      local_res10 = param_1;
      TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
      ::Emplace<TKeyInitializer<FName_const_&>_>
                ((TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                  *)this_00,&local_res8,(bool *)&local_res10);
      lVar8 = (longlong)(int)local_res8.Key;
      lVar3 = *(longlong *)&this_00->field_0x0;
      pplVar1 = (longlong **)(lVar3 + (lVar8 * 5 + 3) * 8);
      if (pplVar1 != &local_38) {
        plVar4 = *pplVar1;
        *pplVar1 = local_38;
        local_38 = (longlong *)0x0;
        if (plVar4 != (longlong *)0x0) {
          (**(code **)*plVar4)(plVar4,1);
        }
      }
      *(undefined1 *)(lVar3 + 8 + lVar8 * 0x28) = 0;
      *(undefined4 *)(lVar3 + 0xc + lVar8 * 0x28) = 0;
      *(undefined4 *)(lVar3 + 0x10 + lVar8 * 0x28) = 0x3f800000;
      bVar10 = true;
      goto LAB_147a1426c;
    }
    if (1 < (byte)Spline::LogSpline._0_1_) {
      (**(code **)(*local_38 + 0x20))(local_38,&local_30);
      Logging::Private::BasicLog<2>
                (&`private:_bool___cdecl_UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::CreateAttributeChannelInternal<UE::Math::TVector<double>_>(FName_const&___ptr64,FString_const&___ptr64)___ptr64'
                  ::__l42::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
      goto LAB_147a141dd;
    }
  }
  bVar10 = false;
LAB_147a1426c:
  if (local_38 != (longlong *)0x0) {
    (**(code **)*local_38)(local_38,1);
  }
  return bVar10;
}

// GetAttributeChannel<float> @ 147a18160

/* WARNING: Enum "Type": Some values do not have unique names */

TSplineInterface<float> * __thiscall
UE::Geometry::Spline::
TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
GetAttributeChannel<float>
          (TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
           *this,FName param_1)

{
  TSplineInterface<float> *pTVar1;
  ForAnyElementType _Src;
  int iVar2;
  TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
  *pTVar3;
  longlong lVar4;
  undefined1 *puVar5;
  bool bVar6;
  FName local_res10;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  wchar_t *local_28;
  int local_20;
  FString local_18;
  
  local_res10 = param_1;
  pTVar3 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                   *)&this->Children,param_1);
  _Src = TSplineValueTypeTraits<float>::Name.Data.AllocatorInstance;
  puVar5 = &pTVar3->field_0x8;
  if (pTVar3 == (TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
                 *)0x0) {
    puVar5 = (undefined1 *)0x0;
  }
  if ((puVar5 != (undefined1 *)0x0) && (*(longlong *)(puVar5 + 0x10) != 0)) {
    lVar4 = (longlong)TSplineValueTypeTraits<float>::Name.Data.ArrayNum;
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30 = TSplineValueTypeTraits<float>::Name.Data.ArrayNum;
    if (TSplineValueTypeTraits<float>::Name.Data.ArrayNum == 0) {
      local_2c = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,TSplineValueTypeTraits<float>::Name.Data.ArrayNum,0,&local_38,
                 TSplineValueTypeTraits<float>::Name.Data.ArrayNum,&local_2c);
      memcpy(local_38.Data,_Src.Data,lVar4 * 2);
    }
    (**(code **)(**(longlong **)(puVar5 + 0x10) + 0x20))(*(longlong **)(puVar5 + 0x10),&local_28);
    if (local_30 == local_20) {
      if (local_30 < 2) goto LAB_147a182f0;
      iVar2 = FGenericPlatformStricmp::Stricmp((wchar_t *)local_38.Data,local_28);
      bVar6 = iVar2 == 0;
    }
    else {
      bVar6 = local_20 + local_30 == 1;
    }
    if (bVar6) {
LAB_147a182f0:
      pTVar1 = *(TSplineInterface<float> **)(puVar5 + 0x10);
      if (local_28 != (wchar_t *)0x0) {
        FMemory::Free(local_28);
      }
      if (local_38.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data);
      }
      return pTVar1;
    }
    if (2 < (byte)Spline::LogSpline._0_1_) {
      ::FName::ToString(&local_res10,&local_18);
      Logging::Private::BasicLog<3>
                (&`public:_class_UE::Geometry::Spline::TSplineInterface<float>*___ptr64___cdecl_UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::GetAttributeChannel<float>(FName)const___ptr64'
                  ::__l12::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    if (local_28 != (wchar_t *)0x0) {
      FMemory::Free(local_28);
    }
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data);
    }
  }
  return (TSplineInterface<float> *)0x0;
}

// GetAttributeChannel<UE::Math::TQuat<double>_> @ 147a18330

/* WARNING: Enum "Type": Some values do not have unique names */

TSplineInterface<UE::Math::TQuat<double>_> * __thiscall
UE::Geometry::Spline::
TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
GetAttributeChannel<UE::Math::TQuat<double>_>
          (TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
           *this,FName param_1)

{
  TSplineInterface<UE::Math::TQuat<double>_> *pTVar1;
  ForAnyElementType _Src;
  int iVar2;
  TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
  *pTVar3;
  longlong lVar4;
  undefined1 *puVar5;
  bool bVar6;
  FName local_res10;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  wchar_t *local_28;
  int local_20;
  FString local_18;
  
  local_res10 = param_1;
  pTVar3 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                   *)&this->Children,param_1);
  _Src = TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name.Data.AllocatorInstance;
  puVar5 = &pTVar3->field_0x8;
  if (pTVar3 == (TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
                 *)0x0) {
    puVar5 = (undefined1 *)0x0;
  }
  if ((puVar5 != (undefined1 *)0x0) && (*(longlong *)(puVar5 + 0x10) != 0)) {
    lVar4 = (longlong)TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name.Data.ArrayNum;
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30 = TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name.Data.ArrayNum;
    if (TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name.Data.ArrayNum == 0) {
      local_2c = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name.Data.ArrayNum,0,
                 &local_38,TSplineValueTypeTraits<UE::Math::TQuat<double>_>::Name.Data.ArrayNum,
                 &local_2c);
      memcpy(local_38.Data,_Src.Data,lVar4 * 2);
    }
    (**(code **)(**(longlong **)(puVar5 + 0x10) + 0x20))(*(longlong **)(puVar5 + 0x10),&local_28);
    if (local_30 == local_20) {
      if (local_30 < 2) goto LAB_147a184c0;
      iVar2 = FGenericPlatformStricmp::Stricmp((wchar_t *)local_38.Data,local_28);
      bVar6 = iVar2 == 0;
    }
    else {
      bVar6 = local_20 + local_30 == 1;
    }
    if (bVar6) {
LAB_147a184c0:
      pTVar1 = *(TSplineInterface<UE::Math::TQuat<double>_> **)(puVar5 + 0x10);
      if (local_28 != (wchar_t *)0x0) {
        FMemory::Free(local_28);
      }
      if (local_38.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data);
      }
      return pTVar1;
    }
    if (2 < (byte)Spline::LogSpline._0_1_) {
      ::FName::ToString(&local_res10,&local_18);
      Logging::Private::BasicLog<3>
                (&`public:_class_UE::Geometry::Spline::TSplineInterface<UE::Math::TQuat<double>_>*___ptr64___cdecl_UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::GetAttributeChannel<UE::Math::TQuat<double>_>(FName)const___ptr64'
                  ::__l12::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    if (local_28 != (wchar_t *)0x0) {
      FMemory::Free(local_28);
    }
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data);
    }
  }
  return (TSplineInterface<UE::Math::TQuat<double>_> *)0x0;
}

// GetAttributeChannel<UE::Math::TVector<double>_> @ 147a18500

/* WARNING: Enum "Type": Some values do not have unique names */

TSplineInterface<UE::Math::TVector<double>_> * __thiscall
UE::Geometry::Spline::
TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
GetAttributeChannel<UE::Math::TVector<double>_>
          (TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
           *this,FName param_1)

{
  TSplineInterface<UE::Math::TVector<double>_> *pTVar1;
  ForAnyElementType _Src;
  int iVar2;
  TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
  *pTVar3;
  longlong lVar4;
  undefined1 *puVar5;
  bool bVar6;
  FName local_res10;
  ForAnyElementType local_38;
  int local_30;
  int local_2c;
  wchar_t *local_28;
  int local_20;
  FString local_18;
  
  local_res10 = param_1;
  pTVar3 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                   *)&this->Children,param_1);
  _Src = TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.AllocatorInstance;
  puVar5 = &pTVar3->field_0x8;
  if (pTVar3 == (TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
                 *)0x0) {
    puVar5 = (undefined1 *)0x0;
  }
  if ((puVar5 != (undefined1 *)0x0) && (*(longlong *)(puVar5 + 0x10) != 0)) {
    lVar4 = (longlong)TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.ArrayNum;
    local_38.Data = (FScriptContainerElement *)0x0;
    local_30 = TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.ArrayNum;
    if (TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.ArrayNum == 0) {
      local_2c = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.ArrayNum,0,
                 &local_38,TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.ArrayNum,
                 &local_2c);
      memcpy(local_38.Data,_Src.Data,lVar4 * 2);
    }
    (**(code **)(**(longlong **)(puVar5 + 0x10) + 0x20))(*(longlong **)(puVar5 + 0x10),&local_28);
    if (local_30 == local_20) {
      if (local_30 < 2) goto LAB_147a18690;
      iVar2 = FGenericPlatformStricmp::Stricmp((wchar_t *)local_38.Data,local_28);
      bVar6 = iVar2 == 0;
    }
    else {
      bVar6 = local_20 + local_30 == 1;
    }
    if (bVar6) {
LAB_147a18690:
      pTVar1 = *(TSplineInterface<UE::Math::TVector<double>_> **)(puVar5 + 0x10);
      if (local_28 != (wchar_t *)0x0) {
        FMemory::Free(local_28);
      }
      if (local_38.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_38.Data);
      }
      return pTVar1;
    }
    if (2 < (byte)Spline::LogSpline._0_1_) {
      ::FName::ToString(&local_res10,&local_18);
      Logging::Private::BasicLog<3>
                (&`public:_class_UE::Geometry::Spline::TSplineInterface<UE::Math::TVector<double>_>*___ptr64___cdecl_UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::GetAttributeChannel<UE::Math::TVector<double>_>(FName)const___ptr64'
                  ::__l12::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    if (local_28 != (wchar_t *)0x0) {
      FMemory::Free(local_28);
    }
    if (local_38.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data);
    }
  }
  return (TSplineInterface<UE::Math::TVector<double>_> *)0x0;
}

// GetAttributeChannelNamesByValueType<float> @ 147a186d0

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::Spline::
TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
GetAttributeChannelNamesByValueType<float>
          (TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
           *this,TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong *plVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  TMap<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>_>
  *pTVar8;
  TMap<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>_>
  *pTVar9;
  bool bVar10;
  int iVar11;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar12;
  undefined8 *puVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  TMap<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>_>
  *local_res20;
  void *local_b8 [2];
  TMap<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>_>
  *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TMap<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>_>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  puVar1 = &(this->Children).field_0x10;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_res20 = &this->Children;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar11 = *(int *)&(this->Children).field_0x28;
  uStack_9c = 1;
  iStack_a0 = 0;
  local_88 = 0;
  iStack_8c = iStack_a0;
  if (iVar11 != 0) {
    puVar18 = *(uint **)&(this->Children).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar16 = *puVar18;
    local_88 = 0;
    iStack_a0 = 0;
    while (uVar16 == 0) {
      lVar14 = (longlong)iStack_a0;
      local_88 = local_88 + 0x20;
      iStack_a0 = iStack_a0 + 1;
      iStack_8c = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_147a1877e;
      uVar16 = puVar18[lVar14 + 1];
    }
    uStack_9c = -uVar16 & uVar16;
    uVar3 = (ulonglong)uStack_9c * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_res10 = (int)lVar14;
    iStack_8c = local_88 + -1 + local_res10;
    if (iVar11 < iStack_8c) {
      iStack_8c = iVar11;
    }
  }
LAB_147a1877e:
  iStack_80 = *(int *)&(this->Children).field_0x8 - *(int *)&(this->Children).field_0x34;
  uVar16 = *(uint *)&(this->Children).field_0x28;
  uStack_90 = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uStack_9c,iStack_a0);
  uVar19 = uVar16 & 0xffffffe0;
  TStack_70.CurrentBitIndex = iStack_8c;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar16 >> 5;
  TStack_70._28_4_ = iStack_8c;
  TStack_70.BaseBitIndex = local_88;
  uStack_50 = CONCAT44(uStack_7c,iStack_80);
  local_a8 = local_res20;
  local_98 = puVar1;
  iStack_84 = iStack_8c;
  local_78 = local_res20;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar11 < (int)uVar16)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    pTVar12 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
    return pTVar12;
  }
  pTVar8 = local_res20;
  uVar4 = *(uint *)&(this->Children).field_0x28;
  if (uVar16 != uVar4) {
    puVar17 = *(undefined1 **)&(this->Children).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar15 * 4);
    while (uVar16 == 0) {
      lVar14 = (longlong)iVar15;
      uVar19 = uVar19 + 0x20;
      iVar15 = iVar15 + 1;
      uVar16 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_147a18890;
      uVar16 = *(uint *)(puVar17 + lVar14 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_res18 = (int)lVar14;
    uVar16 = local_res18 + -1 + uVar19;
    if ((int)uVar4 < (int)uVar16) {
      uVar16 = uVar4;
    }
  }
LAB_147a18890:
  while( true ) {
    pTVar9 = local_78;
    if (*(int *)&local_78->field_0x8 - *(int *)&local_78->field_0x34 != (int)uStack_50) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar16) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == pTVar8))
    break;
    lVar14 = *(longlong *)pTVar9;
    pFVar2 = (FScriptContainerElement *)(lVar14 + (longlong)TStack_70.CurrentBitIndex * 0x28);
    plVar5 = *(longlong **)(lVar14 + 0x18 + (longlong)TStack_70.CurrentBitIndex * 0x28);
    puVar13 = (undefined8 *)(**(code **)(*plVar5 + 0x20))(plVar5,local_b8);
    iVar11 = *(int *)(puVar13 + 1);
    if (iVar11 == TSplineValueTypeTraits<float>::Name.Data.ArrayNum) {
      if (iVar11 < 2) {
        bVar10 = true;
      }
      else {
        iVar11 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)*puVar13,
                            (wchar_t *)
                            TSplineValueTypeTraits<float>::Name.Data.AllocatorInstance.Data);
        bVar10 = iVar11 == 0;
      }
    }
    else {
      bVar10 = TSplineValueTypeTraits<float>::Name.Data.ArrayNum + iVar11 == 1;
    }
    if (local_b8[0] != (void *)0x0) {
      FMemory::Free(local_b8[0]);
    }
    if (bVar10) {
      pFVar6 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar6 <= pFVar2) && (pFVar2 < pFVar6 + (longlong)__return_storage_ptr__->ArrayMax * 8))
         && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar10)) {
        pcVar7 = (code *)swi(3);
        pTVar12 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
        return pTVar12;
      }
      iVar11 = __return_storage_ptr__->ArrayNum;
      if (iVar11 == __return_storage_ptr__->ArrayMax) {
        iVar11 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&__return_storage_ptr__->AllocatorInstance,
                            &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar11 + 1;
      *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar11 * 8) =
           *(undefined8 *)pFVar2;
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return __return_storage_ptr__;
}

// GetAttributeChannelNamesByValueType<UE::Math::TVector<double>_> @ 147a189f0

TArray<FName,TSizedDefaultAllocator<32>_> * __thiscall
UE::Geometry::Spline::
TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
GetAttributeChannelNamesByValueType<UE::Math::TVector<double>_>
          (TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
           *this,TArray<FName,TSizedDefaultAllocator<32>_> *__return_storage_ptr__)

{
  undefined1 *puVar1;
  FScriptContainerElement *pFVar2;
  ulonglong uVar3;
  uint uVar4;
  longlong *plVar5;
  FScriptContainerElement *pFVar6;
  code *pcVar7;
  TMap<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>_>
  *pTVar8;
  TMap<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>_>
  *pTVar9;
  bool bVar10;
  int iVar11;
  TArray<FName,TSizedDefaultAllocator<32>_> *pTVar12;
  undefined8 *puVar13;
  longlong lVar14;
  int iVar15;
  uint uVar16;
  undefined1 *puVar17;
  uint *puVar18;
  uint uVar19;
  undefined1 local_res8 [8];
  int local_res10;
  int local_res18;
  TMap<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>_>
  *local_res20;
  void *local_b8 [2];
  TMap<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>_>
  *local_a8;
  int iStack_a0;
  uint uStack_9c;
  undefined1 *local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  undefined4 uStack_7c;
  TMap<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>_>
  *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  undefined8 uStack_50;
  
  puVar1 = &(this->Children).field_0x10;
  (__return_storage_ptr__->AllocatorInstance).Data = (FScriptContainerElement *)0x0;
  local_res20 = &this->Children;
  __return_storage_ptr__->ArrayNum = 0;
  __return_storage_ptr__->ArrayMax = 0;
  iVar11 = *(int *)&(this->Children).field_0x28;
  uStack_9c = 1;
  iStack_a0 = 0;
  local_88 = 0;
  iStack_8c = iStack_a0;
  if (iVar11 != 0) {
    puVar18 = *(uint **)&(this->Children).field_0x20;
    if (puVar18 == (uint *)0x0) {
      puVar18 = (uint *)puVar1;
    }
    uVar16 = *puVar18;
    local_88 = 0;
    iStack_a0 = 0;
    while (uVar16 == 0) {
      lVar14 = (longlong)iStack_a0;
      local_88 = local_88 + 0x20;
      iStack_a0 = iStack_a0 + 1;
      iStack_8c = iVar11;
      if ((int)(iVar11 + -1 + (iVar11 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_a0) goto LAB_147a18a9e;
      uVar16 = puVar18[lVar14 + 1];
    }
    uStack_9c = -uVar16 & uVar16;
    uVar3 = (ulonglong)uStack_9c * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_res10 = (int)lVar14;
    iStack_8c = local_88 + -1 + local_res10;
    if (iVar11 < iStack_8c) {
      iStack_8c = iVar11;
    }
  }
LAB_147a18a9e:
  iStack_80 = *(int *)&(this->Children).field_0x8 - *(int *)&(this->Children).field_0x34;
  uVar16 = *(uint *)&(this->Children).field_0x28;
  uStack_90 = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uStack_9c,iStack_a0);
  uVar19 = uVar16 & 0xffffffe0;
  TStack_70.CurrentBitIndex = iStack_8c;
  TStack_70.UnvisitedBitMask = 0xffffffff;
  iVar15 = (int)uVar16 >> 5;
  TStack_70._28_4_ = iStack_8c;
  TStack_70.BaseBitIndex = local_88;
  uStack_50 = CONCAT44(uStack_7c,iStack_80);
  local_a8 = local_res20;
  local_98 = puVar1;
  iStack_84 = iStack_8c;
  local_78 = local_res20;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)puVar1;
  if ((((int)uVar16 < 0) || (iVar11 < (int)uVar16)) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    pTVar12 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
    return pTVar12;
  }
  pTVar8 = local_res20;
  uVar4 = *(uint *)&(this->Children).field_0x28;
  if (uVar16 != uVar4) {
    puVar17 = *(undefined1 **)&(this->Children).field_0x20;
    if (puVar17 == (undefined1 *)0x0) {
      puVar17 = puVar1;
    }
    uVar16 = -1 << ((byte)uVar16 & 0x1f) & *(uint *)(puVar17 + (longlong)iVar15 * 4);
    while (uVar16 == 0) {
      lVar14 = (longlong)iVar15;
      uVar19 = uVar19 + 0x20;
      iVar15 = iVar15 + 1;
      uVar16 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar15) goto LAB_147a18bb0;
      uVar16 = *(uint *)(puVar17 + lVar14 * 4 + 4);
    }
    uVar3 = (ulonglong)(-uVar16 & uVar16) * 2 + 1;
    lVar14 = 0x3f;
    if (uVar3 != 0) {
      for (; uVar3 >> lVar14 == 0; lVar14 = lVar14 + -1) {
      }
    }
    local_res18 = (int)lVar14;
    uVar16 = local_res18 + -1 + uVar19;
    if ((int)uVar4 < (int)uVar16) {
      uVar16 = uVar4;
    }
  }
LAB_147a18bb0:
  while( true ) {
    pTVar9 = local_78;
    if (*(int *)&local_78->field_0x8 - *(int *)&local_78->field_0x34 != (int)uStack_50) {
      local_res8[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForConstIterator::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if (((TStack_70.CurrentBitIndex == uVar16) &&
        (TStack_70.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar1)) && (pTVar9 == pTVar8))
    break;
    lVar14 = *(longlong *)pTVar9;
    pFVar2 = (FScriptContainerElement *)(lVar14 + (longlong)TStack_70.CurrentBitIndex * 0x28);
    plVar5 = *(longlong **)(lVar14 + 0x18 + (longlong)TStack_70.CurrentBitIndex * 0x28);
    puVar13 = (undefined8 *)(**(code **)(*plVar5 + 0x20))(plVar5,local_b8);
    iVar11 = *(int *)(puVar13 + 1);
    if (iVar11 == TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.ArrayNum) {
      if (iVar11 < 2) {
        bVar10 = true;
      }
      else {
        iVar11 = FGenericPlatformStricmp::Stricmp
                           ((wchar_t *)*puVar13,
                            (wchar_t *)
                            TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.
                            AllocatorInstance.Data);
        bVar10 = iVar11 == 0;
      }
    }
    else {
      bVar10 = TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.ArrayNum + iVar11 == 1;
    }
    if (local_b8[0] != (void *)0x0) {
      FMemory::Free(local_b8[0]);
    }
    if (bVar10) {
      pFVar6 = (__return_storage_ptr__->AllocatorInstance).Data;
      if (((pFVar6 <= pFVar2) && (pFVar2 < pFVar6 + (longlong)__return_storage_ptr__->ArrayMax * 8))
         && (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar10)) {
        pcVar7 = (code *)swi(3);
        pTVar12 = (TArray<FName,TSizedDefaultAllocator<32>_> *)(*pcVar7)();
        return pTVar12;
      }
      iVar11 = __return_storage_ptr__->ArrayNum;
      if (iVar11 == __return_storage_ptr__->ArrayMax) {
        iVar11 = Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                           (0x408,&__return_storage_ptr__->AllocatorInstance,
                            &__return_storage_ptr__->ArrayMax);
      }
      __return_storage_ptr__->ArrayNum = iVar11 + 1;
      *(undefined8 *)((__return_storage_ptr__->AllocatorInstance).Data + (longlong)iVar11 * 8) =
           *(undefined8 *)pFVar2;
    }
    TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
  }
  return __return_storage_ptr__;
}

// GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<float>_> @ 147a1a4b0

/* WARNING: Enum "Type": Some values do not have unique names */

TTangentBezierSpline<float> * __thiscall
UE::Geometry::Spline::
TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<float>_>
          (TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
           *this,FName param_1)

{
  TTangentBezierSpline<float> *pTVar1;
  int iVar2;
  TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
  *pTVar3;
  undefined1 *puVar4;
  bool bVar5;
  FName local_res10;
  wchar_t *local_38;
  int local_30;
  FString local_28;
  FString local_18;
  
  local_res10 = param_1;
  pTVar3 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                   *)&this->Children,param_1);
  puVar4 = &pTVar3->field_0x8;
  if (pTVar3 == (TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
                 *)0x0) {
    puVar4 = (undefined1 *)0x0;
  }
  if ((puVar4 != (undefined1 *)0x0) && (*(longlong *)(puVar4 + 0x10) != 0)) {
    ::FString::FString(&local_28,L"TangentBezier");
    (**(code **)(**(longlong **)(puVar4 + 0x10) + 0x28))(*(longlong **)(puVar4 + 0x10),&local_38);
    if (local_28.Data.ArrayNum == local_30) {
      if (local_28.Data.ArrayNum < 2) goto LAB_147a1a5f6;
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_28.Data.AllocatorInstance.Data,local_38);
      bVar5 = iVar2 == 0;
    }
    else {
      bVar5 = local_30 + local_28.Data.ArrayNum == 1;
    }
    if (bVar5) {
LAB_147a1a5f6:
      pTVar1 = *(TTangentBezierSpline<float> **)(puVar4 + 0x10);
      if (local_38 != (wchar_t *)0x0) {
        FMemory::Free(local_38);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      return pTVar1;
    }
    if (2 < (byte)Spline::LogSpline._0_1_) {
      ::FName::ToString(&local_res10,&local_18);
      Logging::Private::BasicLog<3>
                (&`public:_class_UE::Geometry::Spline::TTangentBezierSpline<float>*___ptr64___cdecl_UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<float>_>(FName)const___ptr64'
                  ::__l12::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    if (local_38 != (wchar_t *)0x0) {
      FMemory::Free(local_38);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return (TTangentBezierSpline<float> *)0x0;
}

// GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>_> @ 147a1a630

/* WARNING: Enum "Type": Some values do not have unique names */

TTangentBezierSpline<UE::Math::TQuat<double>_> * __thiscall
UE::Geometry::Spline::
TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>_>
          (TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
           *this,FName param_1)

{
  TTangentBezierSpline<UE::Math::TQuat<double>_> *pTVar1;
  int iVar2;
  TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
  *pTVar3;
  undefined1 *puVar4;
  bool bVar5;
  FName local_res10;
  wchar_t *local_38;
  int local_30;
  FString local_28;
  FString local_18;
  
  local_res10 = param_1;
  pTVar3 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                   *)&this->Children,param_1);
  puVar4 = &pTVar3->field_0x8;
  if (pTVar3 == (TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
                 *)0x0) {
    puVar4 = (undefined1 *)0x0;
  }
  if ((puVar4 != (undefined1 *)0x0) && (*(longlong *)(puVar4 + 0x10) != 0)) {
    ::FString::FString(&local_28,L"TangentBezier");
    (**(code **)(**(longlong **)(puVar4 + 0x10) + 0x28))(*(longlong **)(puVar4 + 0x10),&local_38);
    if (local_28.Data.ArrayNum == local_30) {
      if (local_28.Data.ArrayNum < 2) goto LAB_147a1a776;
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_28.Data.AllocatorInstance.Data,local_38);
      bVar5 = iVar2 == 0;
    }
    else {
      bVar5 = local_30 + local_28.Data.ArrayNum == 1;
    }
    if (bVar5) {
LAB_147a1a776:
      pTVar1 = *(TTangentBezierSpline<UE::Math::TQuat<double>_> **)(puVar4 + 0x10);
      if (local_38 != (wchar_t *)0x0) {
        FMemory::Free(local_38);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      return pTVar1;
    }
    if (2 < (byte)Spline::LogSpline._0_1_) {
      ::FName::ToString(&local_res10,&local_18);
      Logging::Private::BasicLog<3>
                (&`public:_class_UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>*___ptr64___cdecl_UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TQuat<double>_>_>(FName)const___ptr64'
                  ::__l12::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    if (local_38 != (wchar_t *)0x0) {
      FMemory::Free(local_38);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return (TTangentBezierSpline<UE::Math::TQuat<double>_> *)0x0;
}

// GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_> @ 147a1a7b0

/* WARNING: Enum "Type": Some values do not have unique names */

TTangentBezierSpline<UE::Math::TVector<double>_> * __thiscall
UE::Geometry::Spline::
TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
          (TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
           *this,FName param_1)

{
  TTangentBezierSpline<UE::Math::TVector<double>_> *pTVar1;
  int iVar2;
  TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
  *pTVar3;
  undefined1 *puVar4;
  bool bVar5;
  FName local_res10;
  wchar_t *local_38;
  int local_30;
  FString local_28;
  FString local_18;
  
  local_res10 = param_1;
  pTVar3 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                   *)&this->Children,param_1);
  puVar4 = &pTVar3->field_0x8;
  if (pTVar3 == (TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
                 *)0x0) {
    puVar4 = (undefined1 *)0x0;
  }
  if ((puVar4 != (undefined1 *)0x0) && (*(longlong *)(puVar4 + 0x10) != 0)) {
    ::FString::FString(&local_28,L"TangentBezier");
    (**(code **)(**(longlong **)(puVar4 + 0x10) + 0x28))(*(longlong **)(puVar4 + 0x10),&local_38);
    if (local_28.Data.ArrayNum == local_30) {
      if (local_28.Data.ArrayNum < 2) goto LAB_147a1a8f6;
      iVar2 = FGenericPlatformStricmp::Stricmp
                        ((wchar_t *)local_28.Data.AllocatorInstance.Data,local_38);
      bVar5 = iVar2 == 0;
    }
    else {
      bVar5 = local_30 + local_28.Data.ArrayNum == 1;
    }
    if (bVar5) {
LAB_147a1a8f6:
      pTVar1 = *(TTangentBezierSpline<UE::Math::TVector<double>_> **)(puVar4 + 0x10);
      if (local_38 != (wchar_t *)0x0) {
        FMemory::Free(local_38);
      }
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
      return pTVar1;
    }
    if (2 < (byte)Spline::LogSpline._0_1_) {
      ::FName::ToString(&local_res10,&local_18);
      Logging::Private::BasicLog<3>
                (&`public:_class_UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>*___ptr64___cdecl_UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::GetTypedAttributeChannel<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>(FName)const___ptr64'
                  ::__l12::LOG_Static,(FLogCategoryBase *)&Spline::LogSpline);
      if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_18.Data.AllocatorInstance.Data);
      }
    }
    if (local_38 != (wchar_t *)0x0) {
      FMemory::Free(local_38);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  return (TTangentBezierSpline<UE::Math::TVector<double>_> *)0x0;
}

// ~TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_> @ 147a28830

void __thiscall
UE::Geometry::Spline::
TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
~TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
          (TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
           *this)

{
  void *pvVar1;
  
  *(undefined4 *)&(this->Children).field_0x48 = 0;
  pvVar1 = *(void **)&(this->Children).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->Children);
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  if ((void *)this->_padding_ != (void *)0x0) {
    FMemory::Free((void *)this->_padding_);
  }
  return;
}

// GetMappedChildSpace @ 147a52d90

TInterval1<float> __thiscall
UE::Geometry::Spline::
TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
GetMappedChildSpace(TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                    *this,FName param_1)

{
  TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
  *pTVar1;
  FChildSpline *this_00;
  FName in_R8;
  undefined1 local_res8 [8];
  
  pTVar1 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                   *)&this->Children,in_R8);
  this_00 = (FChildSpline *)&pTVar1->field_0x8;
  if (pTVar1 == (TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
                 *)0x0) {
    this_00 = (FChildSpline *)0x0;
  }
  if (this_00 != (FChildSpline *)0x0) {
    (**(code **)(this->_padding_ + 0x30))(&this->_padding_,local_res8);
    FChildSpline::GetParentSpaceRange(this_00,(TInterval1<float> *)param_1);
    return (TInterval1<float>)param_1;
  }
  *(undefined4 *)param_1 = 0x7f7fffff;
  *(undefined4 *)((longlong)param_1 + 4) = 0xff7fffff;
  return (TInterval1<float>)param_1;
}

// MapParameterFromChildSpace @ 147a64cd0

float __thiscall
UE::Geometry::Spline::
TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
MapParameterFromChildSpace
          (TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
           *this,FName param_1,float param_2)

{
  longlong *plVar1;
  TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
  *pTVar2;
  float *pfVar3;
  char *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_res8;
  float local_resc;
  undefined1 local_res20 [8];
  
  pTVar2 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                   *)&this->Children,param_1);
  pcVar4 = &pTVar2->field_0x8;
  if (pTVar2 == (TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
                 *)0x0) {
    pcVar4 = (char *)0x0;
  }
  if (pcVar4 == (char *)0x0) {
    return 0.0;
  }
  pfVar3 = (float *)(**(code **)(this->_padding_ + 0x30))(&this->_padding_,local_res20);
  plVar1 = *(longlong **)(pcVar4 + 0x10);
  if (plVar1 == (longlong *)0x0) {
    return 0.0;
  }
  (**(code **)(*plVar1 + 0x30))(plVar1,&local_res8);
  if (local_resc < local_res8) {
    return 0.0;
  }
  if (*pcVar4 == '\0') {
    fVar5 = (__real_3f800000 - *(float *)(pcVar4 + 8)) * *pfVar3 +
            *(float *)(pcVar4 + 8) * pfVar3[1];
    fVar7 = (__real_3f800000 - *(float *)(pcVar4 + 4)) * *pfVar3 +
            *(float *)(pcVar4 + 4) * pfVar3[1];
  }
  else {
    fVar5 = __real_ff7fffff;
    fVar7 = __real_7f7fffff;
    if (*pcVar4 == '\x01') {
      fVar5 = *(float *)(pcVar4 + 8);
      fVar7 = *(float *)(pcVar4 + 4);
    }
  }
  fVar6 = __real_3f000000;
  if (local_res8 != local_resc) {
    fVar6 = (param_2 - local_res8) / (local_resc - local_res8);
  }
  return (__real_3f800000 - fVar6) * fVar7 + fVar5 * fVar6;
}

// MapParameterToChildSpace @ 147a64e50

float __thiscall
UE::Geometry::Spline::
TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
MapParameterToChildSpace
          (TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
           *this,FName param_1,float param_2)

{
  longlong *plVar1;
  TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
  *pTVar2;
  float *pfVar3;
  char *pcVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float local_res8;
  float local_resc;
  undefined1 local_res20 [8];
  
  pTVar2 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                   *)&this->Children,param_1);
  pcVar4 = &pTVar2->field_0x8;
  if (pTVar2 == (TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
                 *)0x0) {
    pcVar4 = (char *)0x0;
  }
  if (pcVar4 == (char *)0x0) {
    return 0.0;
  }
  pfVar3 = (float *)(**(code **)(this->_padding_ + 0x30))(&this->_padding_,local_res20);
  plVar1 = *(longlong **)(pcVar4 + 0x10);
  if (plVar1 == (longlong *)0x0) {
    return 0.0;
  }
  (**(code **)(*plVar1 + 0x30))(plVar1,&local_res8);
  if (local_resc < local_res8) {
    return 0.0;
  }
  if (*pcVar4 == '\0') {
    fVar6 = (__real_3f800000 - *(float *)(pcVar4 + 4)) * *pfVar3 +
            *(float *)(pcVar4 + 4) * pfVar3[1];
    fVar5 = (__real_3f800000 - *(float *)(pcVar4 + 8)) * *pfVar3 +
            *(float *)(pcVar4 + 8) * pfVar3[1];
LAB_147a64f72:
    fVar7 = __real_3f000000;
    if (fVar6 == fVar5) goto LAB_147a64f0a;
  }
  else {
    fVar5 = __real_ff7fffff;
    fVar6 = __real_7f7fffff;
    if (*pcVar4 == '\x01') {
      fVar6 = *(float *)(pcVar4 + 4);
      fVar5 = *(float *)(pcVar4 + 8);
      goto LAB_147a64f72;
    }
  }
  fVar7 = (param_2 - fVar6) / (fVar5 - fVar6);
LAB_147a64f0a:
  return (__real_3f800000 - fVar7) * local_res8 + fVar7 * local_resc;
}

// SetAttributeChannelRange @ 147a8a8c0

bool __thiscall
UE::Geometry::Spline::
TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
SetAttributeChannelRange
          (TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
           *this,FName param_1,TInterval1<float> *param_2,EMappingRangeSpace param_3)

{
  TInterval1<float> TVar1;
  TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
  *pTVar2;
  EMappingRangeSpace *pEVar3;
  
  pTVar2 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                   *)&this->Children,param_1);
  pEVar3 = &pTVar2->field_0x8;
  if (pTVar2 == (TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
                 *)0x0) {
    pEVar3 = (EMappingRangeSpace *)0x0;
  }
  if (pEVar3 == (EMappingRangeSpace *)0x0) {
    return false;
  }
  TVar1 = *param_2;
  *pEVar3 = param_3;
  *(TInterval1<float> *)(pEVar3 + 4) = TVar1;
  return true;
}

