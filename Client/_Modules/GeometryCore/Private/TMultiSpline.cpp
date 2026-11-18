// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryCore
// Functions: 8

// TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_> @ 143566c40

TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_> * __thiscall
UE::Geometry::Spline::
TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
          (TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
           *this)

{
  uint uVar1;
  ForAnyElementType _Src;
  uint *puVar2;
  longlong lVar3;
  FString local_68;
  FString local_58;
  FString local_48;
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  TSplineInterface<UE::Math::TVector<double>_>::TSplineInterface<UE::Math::TVector<double>_>
            ((TSplineInterface<UE::Math::TVector<double>_> *)this);
  this->_padding_ =
       (longlong)
       &
       ___7__TSplineWrapper_V__TTangentBezierSpline_U__TVector_N_Math_UE___Spline_Geometry_UE___Spline_Geometry_UE__6B_
  ;
  TTangentBezierSpline<UE::Math::TVector<double>_>::TTangentBezierSpline<UE::Math::TVector<double>_>
            ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_);
  this->_padding_ =
       (longlong)
       &
       ___7__TSelfRegisteringSpline_V__TMultiSpline_V__TTangentBezierSpline_U__TVector_N_Math_UE___Spline_Geometry_UE___Spline_Geometry_UE__U__TVector_N_Math_4__Spline_Geometry_UE__6B_
  ;
  if (`protected:___cdecl_UE::Geometry::Spline::TSelfRegisteringSpline<UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>,UE::Math::TVector<double>_>::TSelfRegisteringSpline<UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>,UE::Math::TVector<double>_>(void)___ptr64'
      ::__l2::bRegistered == false) {
    `protected:___cdecl_UE::Geometry::Spline::TSelfRegisteringSpline<UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>,UE::Math::TVector<double>_>::TSelfRegisteringSpline<UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>,UE::Math::TVector<double>_>(void)___ptr64'
    ::__l2::bRegistered = true;
    puVar2 = GetStaticTypeId();
    uVar1 = *puVar2;
    ::FString::FString(&local_58,L"TangentBezier");
    ::FString::PrintfImpl(&local_48,L"MultiSpline.%s");
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
    _Src.Data = TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.AllocatorInstance.Data
    ;
    lVar3 = (longlong)TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.ArrayNum;
    local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_68.Data.ArrayNum = TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.ArrayNum;
    if (TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.ArrayNum == 0) {
      local_68.Data.ArrayMax = 0;
    }
    else {
      Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.ArrayNum,0,
                 (ForAnyElementType *)&local_68,
                 TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.ArrayNum,
                 &local_68.Data.ArrayMax);
      memcpy(local_68.Data.AllocatorInstance.Data,_Src.Data,lVar3 * 2);
    }
    local_10 = 0;
    local_28 = &
               ___7__TFunction_OwnedObject_P6A_AV__TUniquePtr_V__TMultiSpline_V__TTangentBezierSpline_U__TVector_N_Math_UE___Spline_Geometry_UE___Spline_Geometry_UE__U__TDefaultDelete_V__TMultiSpline_V__TTangentBezierSpline_U__TVector_N_Math_UE___Spline_Geometry_UE___Spline_Geometry_UE______XZ_0A__0A__Function_Private_Core_UE__6B_
    ;
    local_20 = `UE::Geometry::Spline::
               TSelfRegisteringSpline<UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>,UE::Math::TVector<double>_>
               ::RegisterType'::__l2::<lambda_1>::<lambda_invoker_cdecl>;
    local_38[0] = Core::Private::Function::
                  TFunctionRefCaller<TUniquePtr<UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>,TDefaultDelete<UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>_>_>_(__cdecl*)(void),TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>_>
                  ::Call;
    FSplineTypeRegistry::RegisterType
              (uVar1,&local_48,&local_68,
               (TFunction<TUniquePtr<UE::Geometry::Spline::ISplineInterface,TDefaultDelete<UE::Geometry::Spline::ISplineInterface>_>___cdecl(void)>
                *)local_38);
    if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_68.Data.AllocatorInstance.Data);
    }
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  this->_padding_ =
       (longlong)
       &
       _vftable__for__UE__Geometry__Spline__TSplineWrapper<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>__
  ;
  this->_padding_ =
       (longlong)
       &
       _vftable__for__UE__Geometry__Spline__TSelfRegisteringSpline<UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>,UE::Math::TVector<double>_>__
  ;
  *(undefined8 *)&this->Children = 0;
  *(undefined8 *)&(this->Children).field_0x8 = 0;
  *(undefined8 *)&(this->Children).field_0x20 = 0;
  *(undefined4 *)&(this->Children).field_0x28 = 0;
  *(undefined4 *)&(this->Children).field_0x2c = 0x80;
  *(undefined4 *)&(this->Children).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->Children).field_0x34 = 0;
  *(undefined8 *)&(this->Children).field_0x40 = 0;
  *(undefined4 *)&(this->Children).field_0x48 = 0;
  return this;
}

// operator== @ 143569950

bool __thiscall
UE::Geometry::Spline::
TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::operator==
          (TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
           *this,TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
                 *param_1)

{
  FName *pFVar1;
  longlong *plVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  undefined1 uVar6;
  char cVar7;
  ForAnyElementType FVar8;
  TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
  *pTVar9;
  ulonglong uVar10;
  ForAnyElementType FVar11;
  undefined1 local_res8 [8];
  TArray<FName,TSizedDefaultAllocator<32>_> local_48;
  TArray<FName,TSizedDefaultAllocator<32>_> local_38;
  
  bVar5 = TTangentBezierSpline<UE::Math::TVector<double>_>::operator==
                    ((TTangentBezierSpline<UE::Math::TVector<double>_> *)&this->_padding_,
                     (TTangentBezierSpline<UE::Math::TVector<double>_> *)&param_1->_padding_);
  if (!bVar5) {
    return false;
  }
  local_38.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.ArrayNum = 0;
  local_38.ArrayMax = 0;
  TMapBase<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>_>
              *)&this->Children,&local_38);
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  TMapBase<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>_>
              *)&param_1->Children,&local_48);
  iVar4 = local_38.ArrayNum;
  uVar10 = (ulonglong)local_38.ArrayNum;
  if (local_38.ArrayNum == local_48.ArrayNum) {
    pFVar1 = (FName *)(local_38.AllocatorInstance.Data + uVar10 * 8);
    FVar11.Data = local_38.AllocatorInstance.Data;
    while( true ) {
      if ((int)uVar10 != iVar4) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8)
        ;
      }
      if ((FName *)FVar11.Data == pFVar1) {
        bVar5 = true;
        goto LAB_143569ae9;
      }
      if ((FName *)local_48.AllocatorInstance.Data ==
          (FName *)(local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 8)) break;
      FVar8.Data = local_48.AllocatorInstance.Data;
      while (*(FName *)FVar8.Data != *(FName *)FVar11.Data) {
        FVar8.Data = FVar8.Data + 8;
        if ((FName *)FVar8.Data ==
            (FName *)(local_48.AllocatorInstance.Data + (longlong)local_48.ArrayNum * 8))
        goto LAB_143569ae7;
      }
      pTVar9 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                       *)&this->Children,*(FName *)FVar11.Data);
      if ((pTVar9 == (TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
                      *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x27b,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      plVar2 = *(longlong **)&pTVar9->field_0x18;
      pTVar9 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
               ::Find((TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                       *)&param_1->Children,*(FName *)FVar11.Data);
      if ((pTVar9 == (TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
                      *)0x0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("Pair != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                             ,0x27b,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        uVar6 = (*pcVar3)();
        return (bool)uVar6;
      }
      if (((plVar2 == (longlong *)0x0) || (*(longlong *)&pTVar9->field_0x18 == 0)) ||
         (cVar7 = (**(code **)(*plVar2 + 0x18))(plVar2), cVar7 == '\0')) break;
      uVar10 = local_38._8_8_ & 0xffffffff;
      FVar11.Data = FVar11.Data + 8;
    }
  }
LAB_143569ae7:
  bVar5 = false;
LAB_143569ae9:
  if ((FName *)local_48.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  if ((FName *)local_38.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_38.AllocatorInstance.Data);
  }
  return bVar5;
}

// Clear @ 14357a900

void __thiscall
UE::Geometry::Spline::
TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::Clear
          (TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
           *this)

{
  FName *pFVar1;
  int iVar2;
  TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
  *pTVar3;
  ulonglong uVar4;
  undefined1 *puVar5;
  ForAnyElementType FVar6;
  undefined1 local_res8 [8];
  TArray<FName,TSizedDefaultAllocator<32>_> local_28;
  
  (**(code **)(this->_padding_ + 8))(&this->_padding_);
  local_28.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.ArrayNum = 0;
  local_28.ArrayMax = 0;
  TMapBase<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>_>
  ::GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>_>
              *)&this->Children,&local_28);
  iVar2 = local_28.ArrayNum;
  uVar4 = (ulonglong)local_28.ArrayNum;
  pFVar1 = (FName *)(local_28.AllocatorInstance.Data + uVar4 * 8);
  FVar6.Data = local_28.AllocatorInstance.Data;
  while( true ) {
    if ((int)uVar4 != iVar2) {
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res8);
    }
    if ((FName *)FVar6.Data == pFVar1) break;
    pTVar3 = TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
             ::Find((TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                     *)&this->Children,*(FName *)FVar6.Data);
    puVar5 = &pTVar3->field_0x8;
    if (pTVar3 == (TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>
                   *)0x0) {
      puVar5 = (undefined1 *)0x0;
    }
    if (puVar5 != (undefined1 *)0x0) {
      (**(code **)(**(longlong **)(puVar5 + 0x10) + 8))();
    }
    uVar4 = local_28._8_8_ & 0xffffffff;
    FVar6.Data = FVar6.Data + 8;
  }
  if ((FName *)local_28.AllocatorInstance.Data != (FName *)0x0) {
    FMemory::Free(local_28.AllocatorInstance.Data);
  }
  return;
}

// GetImplementationName @ 1435b1150

FString * __thiscall
UE::Geometry::Spline::
TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
GetImplementationName
          (TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
           *this,FString *__return_storage_ptr__)

{
  FString local_18;
  
  ::FString::FString(&local_18,L"TangentBezier");
  ::FString::PrintfImpl(__return_storage_ptr__,L"MultiSpline.%s");
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetStaticTypeId @ 1435b2df0

uint * __cdecl
UE::Geometry::Spline::
TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::
GetStaticTypeId(void)

{
  wchar_t *pwVar1;
  ForAnyElementType FVar2;
  FString local_28;
  FString local_18;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::GetStaticTypeId(void)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::GetStaticTypeId(void)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::GetStaticTypeId(void)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    pwVar1 = L"";
    if (TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.ArrayNum != 0) {
      pwVar1 = (wchar_t *)
               TSplineValueTypeTraits<UE::Math::TVector<double>_>::Name.Data.AllocatorInstance;
    }
    ::FString::FString(&local_18,L"TangentBezier");
    ::FString::PrintfImpl(&local_28,L"MultiSpline.%s");
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
    FVar2.Data = (FScriptContainerElement *)L"";
    if (local_28.Data.ArrayNum != 0) {
      FVar2.Data = local_28.Data.AllocatorInstance.Data;
    }
    `public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::GetStaticTypeId(void)'
    ::__l2::CachedTypeId = FSplineTypeId::GenerateTypeId((wchar_t *)FVar2.Data,pwVar1);
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
    _Init_thread_footer(&`public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::GetStaticTypeId(void)'
                         ::__l2::_thread_safe_static_guard_0__);
    return &`public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::GetStaticTypeId(void)'
            ::__l2::CachedTypeId;
  }
  return &`public:_static_unsigned_int_const&___ptr64___cdecl_UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::GetStaticTypeId(void)'
          ::__l2::CachedTypeId;
}

// GetTypeId @ 1435b5290

uint __thiscall
UE::Geometry::Spline::
TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::GetTypeId
          (TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
           *this)

{
  uint *puVar1;
  
  puVar1 = GetStaticTypeId();
  return *puVar1;
}

// IsEqual @ 1435ba220

bool __thiscall
UE::Geometry::Spline::
TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::IsEqual
          (TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
           *this,ISplineInterface *param_1)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  
  pcVar1 = *(code **)(this->_padding_ + 0x48);
  iVar3 = (**(code **)((longlong)*param_1 + 0x48))(param_1);
  iVar4 = (*pcVar1)(this);
  if (iVar3 == iVar4) {
    uVar2 = (**(code **)(this->_padding_ + 0x98))(this,param_1);
  }
  else {
    uVar2 = 0;
  }
  return (bool)uVar2;
}

// Serialize @ 1435c0f10

bool __thiscall
UE::Geometry::Spline::
TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::Serialize
          (TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>
           *this,FArchive *param_1)

{
  bool bVar1;
  char cVar2;
  
  bVar1 = TSplineInterface<UE::Math::TVector<double>_>::Serialize
                    ((TSplineInterface<UE::Math::TVector<double>_> *)this,param_1);
  if (bVar1) {
    cVar2 = (**(code **)(this->_padding_ + 0x60))(&this->_padding_,param_1);
    if (cVar2 != '\0') {
      TSetPrivateFriend::
      Serialize<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                (param_1,(TSet<TTuple<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline>,TDefaultMapHashableKeyFuncs<FName,UE::Geometry::Spline::TMultiSpline<UE::Geometry::Spline::TTangentBezierSpline<UE::Math::TVector<double>_>_>::FChildSpline,0>,FDefaultSetAllocator>
                          *)&this->Children);
      return true;
    }
  }
  return false;
}

