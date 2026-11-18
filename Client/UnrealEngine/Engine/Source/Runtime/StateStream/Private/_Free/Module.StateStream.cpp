// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: StateStream
// Functions: 31

// `dynamic_initializer_for_'TransformStateStreamCreator'' @ 140f4bcd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x000140f4bdd7) */
/* WARNING: Removing unreachable block (ram,0x000140f4bde4) */
/* WARNING: Removing unreachable block (ram,0x000140f4bde8) */
/* WARNING: Removing unreachable block (ram,0x000140f4bdf6) */
/* WARNING: Removing unreachable block (ram,0x000140f4be03) */
/* WARNING: Removing unreachable block (ram,0x000140f4be07) */

void __cdecl _dynamic_initializer_for__TransformStateStreamCreator__(void)

{
  FStateStreamCreator *pFVar1;
  FStateStreamCreator *pFVar2;
  undefined1 auStack_98 [32];
  undefined8 local_78;
  undefined **local_68;
  code *pcStack_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined **local_38;
  code *pcStack_30;
  undefined8 local_28;
  undefined8 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  local_38 = &
             ___7__TFunction_OwnedObject_P6AXAEBUFStateStreamUnregisterContext___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  pcStack_30 = <lambda_6>::<lambda_invoker_cdecl>;
  local_68 = &
             ___7__TFunction_OwnedObject_P6AXAEBUFStateStreamRegisterContext___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  pcStack_60 = <lambda_5>::<lambda_invoker_cdecl>;
  local_50 = 0;
  local_20 = 0;
  TransformStateStreamCreator.RegisterFunction._16_8_ =
       &
       ___7__TFunction_OwnedObject_P6AXAEBUFStateStreamRegisterContext___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  TransformStateStreamCreator.RegisterFunction._24_8_ = <lambda_5>::<lambda_invoker_cdecl>;
  TransformStateStreamCreator.RegisterFunction._32_8_ = local_58;
  local_48 = 0;
  TransformStateStreamCreator.UnregisterFunction._16_4_ = 0x50a43b10;
  TransformStateStreamCreator.UnregisterFunction._20_4_ = 1;
  TransformStateStreamCreator.UnregisterFunction._24_4_ = 0x431253e0;
  TransformStateStreamCreator.UnregisterFunction._28_4_ = 1;
  TransformStateStreamCreator.UnregisterFunction._32_8_ = local_28;
  pFVar1 = FStateStreamCreator::First;
  if (FStateStreamCreator::First != (FStateStreamCreator *)0x0) {
    do {
      pFVar2 = pFVar1;
      if (1 < pFVar2->Id) break;
      pFVar1 = pFVar2->Next;
      TransformStateStreamCreator.Prev = pFVar2;
    } while (pFVar2->Next != (FStateStreamCreator *)0x0);
    if (TransformStateStreamCreator.Prev != (FStateStreamCreator *)0x0) {
      TransformStateStreamCreator.Next = (TransformStateStreamCreator.Prev)->Next;
      (TransformStateStreamCreator.Prev)->Next = &TransformStateStreamCreator;
      goto LAB_140f4bdc6;
    }
  }
  TransformStateStreamCreator.Next = FStateStreamCreator::First;
  FStateStreamCreator::First = &TransformStateStreamCreator;
LAB_140f4bdc6:
  if (TransformStateStreamCreator.Next != (FStateStreamCreator *)0x0) {
    (TransformStateStreamCreator.Next)->Prev = &TransformStateStreamCreator;
  }
  local_20 = 0;
  pcStack_30 = <lambda_6>::<lambda_invoker_cdecl>;
  local_38 = &
             ___7__TFunction_OwnedObject_P6AXAEBUFStateStreamUnregisterContext___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_48 = 0;
  local_50 = 0;
  pcStack_60 = <lambda_5>::<lambda_invoker_cdecl>;
  local_68 = &
             ___7__TFunction_OwnedObject_P6AXAEBUFStateStreamRegisterContext___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  local_78 = 0;
  atexit(_dynamic_atexit_destructor_for__TransformStateStreamCreator__);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_StateStream_Public_TransformStateStreamHandle_h__Script_StateStream_2913544004'' @ 140f4be40

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_StateStream_Public_TransformStateStreamHandle_h__Script_StateStream_2913544004__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/StateStream",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_StateStream_Public_TransformStateStreamHandle_h__Script_StateStream_Statics
             ::ScriptStructInfo,1,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_StateStream_Public_TransformStateStream_h__Script_StateStream_3119527096'' @ 140f4be80

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_StateStream_Public_TransformStateStream_h__Script_StateStream_3119527096__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/StateStream",(FClassRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_StateStream_Public_TransformStateStream_h__Script_StateStream_Statics
             ::ScriptStructInfo,2,(FEnumRegisterCompiledInInfo *)0x0,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_StateStream'' @ 140f4bec0

void __cdecl _dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_StateStream__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x21b7ca23;
  local_res8[0].DeclarationsHash = 0xb34dbbaa;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_StateStream,L"/Script/StateStream",
             &Z_Registration_Info_UPackage__Script_StateStream,local_res8);
  return;
}

// `scalar_deleting_destructor' @ 143123190

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FStateStreamRegisterContext_const_&),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<void_(__cdecl*)(FStateStreamRegisterContext_const_&),0,0> *this,
          uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXAEBUFStateStreamRegisterContext___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143123210

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<void_(__cdecl*)(FStateStreamUnregisterContext_const_&),0,0>::
_scalar_deleting_destructor_
          (TFunction_OwnedObject<void_(__cdecl*)(FStateStreamUnregisterContext_const_&),0,0> *this,
          uint param_1)

{
  this->_padding_ =
       (longlong)
       &
       ___7__TFunction_OwnedObject_P6AXAEBUFStateStreamUnregisterContext___Z_0A__0A__Function_Private_Core_UE__6B_
  ;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143124990

void * __thiscall
TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::
_scalar_deleting_destructor_
          (TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_> *this,
          uint param_1)

{
  ~TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1e0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143124b90

void * __thiscall
FTransformStateStreamImpl::_scalar_deleting_destructor_
          (FTransformStateStreamImpl *this,uint param_1)

{
  TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>::
  ~TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_>
            ((TStateStream<TStateStreamSettings<ITransformStateStream,FTransformObject>_> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x1e0);
  }
  return this;
}

// Z_Construct_UScriptStruct_FStateStreamHandle @ 143124cf0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FStateStreamHandle(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (ReturnStruct == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&ReturnStruct,&Z_Construct_UScriptStruct_FStateStreamHandle_Statics::StructParams);
  }
  if (ReturnStruct != (UScriptStruct *)0x0) {
    return ReturnStruct;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UPackage__Script_StateStream @ 143124d70

UPackage * __cdecl Z_Construct_UPackage__Script_StateStream(void)

{
  if (Z_Registration_Info_UPackage__Script_StateStream.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_StateStream.OuterSingleton,&PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_StateStream.OuterSingleton;
}

// Z_Construct_UScriptStruct_FTransformHandle @ 1431250b0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTransformHandle(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTransformHandle.InnerSingleton == (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTransformHandle.InnerSingleton,
               &Z_Construct_UScriptStruct_FTransformHandle_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTransformHandle.InnerSingleton != (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTransformHandle.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// NewStructOps @ 143125130

void * __cdecl Z_Construct_UScriptStruct_FTransformStaticState_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 4;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTransformStaticState,&UE::CoreUObject::Private::Construct<FTransformStaticState>,&UE::CoreUObject::Private::ConstructForTests<FTransformStaticState>,&UE::CoreUObject::Private::Destruct<FTransformStaticState>,&UE::CoreUObject::Private::Copy<FTransformStaticState>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 4;
    return puVar1;
  }
  return (void *)0x0;
}

// NewProp_bVisible_SetBit @ 1431251a0

void __cdecl
Z_Construct_UScriptStruct_FTransformDynamicState_Statics::NewProp_bVisible_SetBit(void *param_1)

{
  *(undefined1 *)((longlong)param_1 + 0x90) = 1;
  return;
}

// NewStructOps @ 1431251b0

void * __cdecl Z_Construct_UScriptStruct_FTransformDynamicState_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0xa0;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTransformDynamicState,&UE::CoreUObject::Private::Construct<FTransformDynamicState>,&UE::CoreUObject::Private::ConstructForTests<FTransformDynamicState>,&UE::CoreUObject::Private::Destruct<FTransformDynamicState>,&UE::CoreUObject::Private::Copy<FTransformDynamicState>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 0x10;
    return puVar1;
  }
  return (void *)0x0;
}

// NewStructOps @ 143125220

void * __cdecl Z_Construct_UScriptStruct_FTransformHandle_Statics::NewStructOps(void)

{
  undefined8 *puVar1;
  
  puVar1 = ::operator_new(0x10);
  if (puVar1 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar1 + 1) = 0x10;
    *puVar1 = &UE::CoreUObject::Private::
               TStructOpsFakeVTableInstance<FTransformHandle,&UE::CoreUObject::Private::Construct<FTransformHandle>,&UE::CoreUObject::Private::ConstructForTests<FTransformHandle>,&UE::CoreUObject::Private::Destruct<FTransformHandle>,&UE::CoreUObject::Private::Copy<FTransformHandle>_>
    ;
    *(undefined4 *)((longlong)puVar1 + 0xc) = 8;
    return puVar1;
  }
  return (void *)0x0;
}

// `scalar_deleting_destructor' @ 143125280

void * __thiscall IStateStream::_scalar_deleting_destructor_(IStateStream *this,uint param_1)

{
  *this = (IStateStream)&___7IStateStream__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// <lambda_invoker_cdecl> @ 1431252c0

void __cdecl <lambda_5>::<lambda_invoker_cdecl>(FStateStreamRegisterContext *param_1)

{
  IStateStream *pIVar1;
  
  pIVar1 = ::operator_new(0x1e0);
  if (pIVar1 == (IStateStream *)0x0) {
    pIVar1 = (IStateStream *)0x0;
  }
  else {
    pIVar1[4] = (IStateStream)0x0;
    *(undefined4 *)&pIVar1[0x1a].field_0x4 = 0;
    *(undefined4 *)&pIVar1[0x20].field_0x4 = 0;
    *(undefined4 *)&pIVar1[0x36].field_0x4 = 0;
    *(undefined4 *)&pIVar1[0x37].field_0x4 = 0;
    pIVar1[3] = (IStateStream)0x0;
    memset(pIVar1 + 5,0,0xa8);
    *(undefined4 *)(pIVar1 + 0x1a) = 0xffffffff;
    pIVar1[0x1b] = (IStateStream)0x0;
    pIVar1[0x1c] = (IStateStream)0x0;
    pIVar1[0x1d] = (IStateStream)0x0;
    pIVar1[0x1e] = (IStateStream)0x0;
    pIVar1[0x1f] = (IStateStream)0x0;
    *(undefined4 *)(pIVar1 + 0x20) = 0;
    memset(pIVar1 + 0x21,0,0xa8);
    *(undefined4 *)(pIVar1 + 0x36) = 0xffffffff;
    *pIVar1 = (IStateStream)&FTransformStateStreamImpl::_vftable__for__IStateStream__;
    pIVar1[1] = (IStateStream)&FTransformStateStreamImpl::_vftable__for__ITransformStateStream__;
    pIVar1[2] = (IStateStream)&FTransformStateStreamImpl::_vftable__for__IStateStreamHandleOwner__;
    *(undefined4 *)(pIVar1 + 0x37) = 1;
    pIVar1[0x38] = (IStateStream)0x0;
    pIVar1[0x39] = (IStateStream)0x0;
    pIVar1[0x3a] = (IStateStream)0x0;
    pIVar1[0x3b] = (IStateStream)0x0;
  }
  FStateStreamManagerImpl::Render_Register(param_1->Manager,pIVar1,true);
  return;
}

// <lambda_invoker_cdecl> @ 1431253e0

void __cdecl <lambda_6>::<lambda_invoker_cdecl>(FStateStreamUnregisterContext *param_1)

{
  return;
}

// `scalar_deleting_destructor' @ 143126230

void * __thiscall
UE::Tasks::Private::
TExecutableTask<`FStateStreamManagerImpl::Render_GarbageCollect'::__l2::<lambda_1>_>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  undefined8 *puVar1;
  undefined8 *lpTlsValue;
  
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      puVar1 = TlsGetValue(SmallTaskAllocator._0_4_);
      lpTlsValue = (undefined8 *)0x0;
      if (puVar1 == (undefined8 *)0x0) {
        puVar1 = ::operator_new(0x18);
        if (puVar1 != (undefined8 *)0x0) {
          *puVar1 = 0;
          puVar1[1] = 0;
          *(undefined4 *)(puVar1 + 2) = 0;
          lpTlsValue = puVar1;
        }
        TlsSetValue(SmallTaskAllocator._0_4_,lpTlsValue);
        puVar1 = lpTlsValue;
      }
      if (0xff < *(int *)(puVar1 + 2)) {
        if ((void **)*puVar1 != (void **)0x0) {
          TLockFreePointerListLIFOPad<void_*,64>::Push
                    ((TLockFreePointerListLIFOPad<void_*,64> *)&SmallTaskAllocator.field_0x40,
                     (void **)*puVar1);
        }
        *puVar1 = puVar1[1];
        puVar1[1] = 0;
        *(undefined4 *)(puVar1 + 2) = 0;
      }
      *(undefined8 *)this = puVar1[1];
      *(int *)(puVar1 + 2) = *(int *)(puVar1 + 2) + 1;
      puVar1[1] = this;
      return this;
    }
    __empty_global_delete(this,0x100,0x40);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143126320

void * __thiscall
UE::Tasks::Private::
TExecutableTaskBase<`FStateStreamManagerImpl::Render_GarbageCollect'::__l2::<lambda_1>,void,void>::
_scalar_deleting_destructor_(void *this,uint param_1)

{
  FTaskBase::~FTaskBase(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xe0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143126360

void * __thiscall
FStateStreamManagerImpl::_scalar_deleting_destructor_(FStateStreamManagerImpl *this,uint param_1)

{
  atomic<unsigned_int> *paVar1;
  atomic<unsigned_int> aVar2;
  int iVar3;
  longlong *plVar4;
  FTaskBase *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res10 [8];
  
  this->_padding_ = (longlong)&___7FStateStreamManagerImpl__6B_;
  iVar3 = (this->StateStreams).ArrayNum;
  pFVar6 = (this->StateStreams).AllocatorInstance.Data;
  pFVar7 = pFVar6 + (longlong)iVar3 * 0x10;
  while( true ) {
    if ((this->StateStreams).ArrayNum != iVar3) {
      `TCheckedPointerIterator<FStateStreamManagerImpl::StateStreamRec,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res10);
    }
    if (pFVar6 == pFVar7) break;
    if ((pFVar6[8] != (FScriptContainerElement)0x0) &&
       (plVar4 = *(longlong **)pFVar6, plVar4 != (longlong *)0x0)) {
      (**(code **)(*plVar4 + 0x58))(plVar4,1);
    }
    pFVar6 = pFVar6 + 0x10;
  }
  pFVar5 = (this->GarbageCollectTask).Pimpl.Reference;
  if (pFVar5 != (FTaskBase *)0x0) {
    LOCK();
    paVar1 = &pFVar5->RefCount;
    aVar2 = *paVar1;
    *paVar1 = (atomic<unsigned_int>)((int)*paVar1 + -1);
    UNLOCK();
    if (aVar2 == (atomic<unsigned_int>)0x1) {
      (**(code **)pFVar5->_padding_)(pFVar5,1);
    }
  }
  pFVar6 = (this->StateStreamsLookup).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  pFVar6 = (this->StateStreams).AllocatorInstance.Data;
  if (pFVar6 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar6);
  }
  this->_padding_ = (longlong)&___7IStateStreamManager__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x38);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143126440

void * __thiscall
FTransformObject::_scalar_deleting_destructor_(FTransformObject *this,uint param_1)

{
  undefined1 *puVar1;
  int iVar2;
  FTransformObject *pFVar3;
  code *pcVar4;
  bool bVar5;
  void *pvVar6;
  
  *(undefined ***)this = &___7FTransformObject__6B_;
  pFVar3 = (this->Parent).Reference;
  if (pFVar3 != (FTransformObject *)0x0) {
    if (*(longlong *)&this->field_0x8 == 0) {
      pFVar3->First = *(FTransformObjectListener **)&this->field_0x10;
    }
    else {
      *(FTransformObjectListener **)(*(longlong *)&this->field_0x8 + 0x10) =
           *(FTransformObjectListener **)&this->field_0x10;
    }
    if (*(longlong *)&this->field_0x10 != 0) {
      *(undefined8 *)(*(longlong *)&this->field_0x10 + 8) = *(undefined8 *)&this->field_0x8;
    }
    *(undefined8 *)&this->field_0x10 = 0;
    *(undefined8 *)&this->field_0x8 = 0;
    pFVar3 = (this->Parent).Reference;
    if (pFVar3 != (FTransformObject *)0x0) {
      (this->Parent).Reference = (FTransformObject *)0x0;
      puVar1 = &pFVar3->field_0x18;
      LOCK();
      iVar2 = *(int *)puVar1;
      *(int *)puVar1 = *(int *)puVar1 + -1;
      UNLOCK();
      if ((iVar2 == 1) && (puVar1 != (undefined1 *)0x0)) {
        (**(code **)(*(longlong *)pFVar3 + 8))(pFVar3,1);
      }
    }
  }
  if (this->First != (FTransformObjectListener *)0x0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("!First",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Private\\TransformStateStreamImpl.cpp"
                       ,0xf,L"");
    if (bVar5) {
      pcVar4 = (code *)swi(3);
      pvVar6 = (void *)(*pcVar4)();
      return pvVar6;
    }
  }
  pFVar3 = (this->Parent).Reference;
  if (pFVar3 != (FTransformObject *)0x0) {
    puVar1 = &pFVar3->field_0x18;
    LOCK();
    iVar2 = *(int *)puVar1;
    *(int *)puVar1 = *(int *)puVar1 + -1;
    UNLOCK();
    if ((iVar2 == 1) && (puVar1 != (undefined1 *)0x0)) {
      (**(code **)(*(longlong *)pFVar3 + 8))(pFVar3,1);
    }
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xb0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 143126550

void * __thiscall
IStateStreamManager::_scalar_deleting_destructor_(IStateStreamManager *this,uint param_1)

{
  *this = (IStateStreamManager)&___7IStateStreamManager__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// EmptyLinkFunctionForGeneratedCodeStateStreamHandle @ 143127800

void __cdecl EmptyLinkFunctionForGeneratedCodeStateStreamHandle(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeStateStream_init @ 143127810

void __cdecl EmptyLinkFunctionForGeneratedCodeStateStream_init(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTransformStateStream @ 143127820

void __cdecl EmptyLinkFunctionForGeneratedCodeTransformStateStream(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeTransformStateStreamHandle @ 143127830

void __cdecl EmptyLinkFunctionForGeneratedCodeTransformStateStreamHandle(void)

{
  return;
}

// StateStreamInterpolate @ 143128960

void __cdecl
StateStreamInterpolate
          (FStateStreamInterpolateContext *param_1,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_2,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_3,
          TArray<UE::Math::TTransform<double>,TSizedDefaultAllocator<32>_> *param_4)

{
  FScriptContainerElement *pFVar1;
  int *piVar2;
  uint uVar3;
  FScriptContainerElement *pFVar4;
  FScriptContainerElement *pFVar5;
  code *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  double dVar13;
  ulonglong uVar14;
  undefined8 uVar15;
  float fVar16;
  float fVar17;
  bool bVar18;
  int iVar19;
  int iVar20;
  FScriptContainerElement *pFVar21;
  uint uVar22;
  longlong lVar23;
  uint uVar24;
  uint uVar25;
  longlong lVar26;
  longlong lVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  longlong lVar30;
  ulonglong uVar31;
  ulonglong uVar32;
  double dVar33;
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined1 auVar37 [16];
  undefined1 auVar38 [16];
  double dVar43;
  undefined1 auVar39 [16];
  undefined1 auVar40 [16];
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  uint uVar44;
  uint uVar45;
  uint uVar46;
  double dVar47;
  double dVar49;
  undefined4 uVar51;
  undefined1 auVar48 [16];
  double dVar50;
  double dVar52;
  double dVar54;
  undefined1 auVar53 [16];
  double dVar55;
  undefined1 auVar56 [16];
  float fVar57;
  undefined1 auVar58 [16];
  undefined1 auVar59 [16];
  undefined4 uVar60;
  
  uVar3 = param_4->ArrayNum;
  if ((uVar3 != param_3->ArrayNum) &&
     (bVar18 = FDebug::CheckVerifyFailedImpl2
                         ("Num == From.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\StateStream\\Public\\TransformStateStreamMath.h"
                          ,0x19,L""), bVar18)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  iVar20 = param_2->ArrayNum;
  piVar2 = &param_2->ArrayNum;
  if (iVar20 < (int)uVar3) {
    iVar19 = UE::Core::Private::ReallocGrow<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                       (0x60,0x10,uVar3 - iVar20,&param_2->AllocatorInstance,piVar2,
                        &param_2->ArrayMax);
    DefaultConstructItems<UE::Math::TTransform<double>,int>
              ((param_2->AllocatorInstance).Data + (longlong)iVar19 * 0x60,uVar3 - iVar20);
  }
  else {
    if ((int)uVar3 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar3);
    }
    if ((int)uVar3 < iVar20) {
      uVar22 = iVar20 - uVar3;
      if (((int)(uVar22 | uVar3) < 0) &&
         (bVar18 = FDebug::CheckVerifyFailedImpl2
                             ("(Count >= 0) & (Index >= 0) & (Index + Count <= ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x458,
                              L"Array range out of bounds: index %lld and length %lld into an array of size %lld"
                             ), bVar18)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      if (uVar22 != 0) {
        pFVar21 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar3 * 0x60;
        iVar20 = (*piVar2 - uVar22) - uVar3;
        if (iVar20 != 0) {
          memmove(pFVar21,pFVar21 + (longlong)(int)uVar22 * 0x60,(longlong)iVar20 * 0x60);
        }
        *piVar2 = *piVar2 - uVar22;
        UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x60,0x10,&param_2->AllocatorInstance,*piVar2,&param_2->ArrayMax);
      }
    }
  }
  uVar22 = __xmm_7fffffff7fffffff7fffffff7fffffff;
  fVar17 = __real_3f800000;
  fVar16 = __real_3727c5ac;
  uVar24 = 0;
  if (uVar3 != 0) {
    lVar26 = 0;
    lVar23 = 0;
    do {
      uVar25 = ~uVar24 >> 0x1f;
      uVar44 = 0;
      if ((int)uVar24 < *piVar2) {
        uVar44 = uVar25;
      }
      if ((uVar44 == 0) &&
         (bVar18 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar21 = (param_2->AllocatorInstance).Data;
      fVar57 = (float)param_1->Factor;
      uVar44 = 0;
      if ((int)uVar24 < param_4->ArrayNum) {
        uVar44 = uVar25;
      }
      if ((uVar44 == 0) &&
         (bVar18 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar4 = (param_4->AllocatorInstance).Data;
      uVar44 = 0;
      if ((int)uVar24 < param_3->ArrayNum) {
        uVar44 = uVar25;
      }
      if ((uVar44 == 0) &&
         (bVar18 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar18)) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
      pFVar5 = (param_3->AllocatorInstance).Data;
      if (fVar16 < (float)((uint)fVar57 & uVar22)) {
        if (fVar16 < (float)((uint)(fVar57 - fVar17) & uVar22)) {
          dVar47 = (double)fVar57;
          dVar49 = (double)fVar57;
          dVar50 = (double)fVar57;
          dVar13 = (double)fVar57;
          uVar60 = (undefined4)((ulonglong)dVar13 >> 0x20);
          dVar43 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0];
          dVar54 = *(double *)(pFVar5 + lVar23 + 0x30);
          auVar34._8_4_ = SUB84(dVar13,0);
          auVar34._0_8_ = dVar50;
          auVar34._12_4_ = uVar60;
          dVar55 = *(double *)(pFVar4 + lVar23 + 0x30);
          dVar52 = (GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1] - dVar13) *
                   *(double *)(pFVar5 + lVar23 + 0x30 + 8) +
                   auVar34._8_8_ * *(double *)(pFVar4 + lVar23 + 0x30 + 8);
          auVar35._8_4_ = SUB84(dVar49,0);
          auVar35._0_8_ = dVar47;
          uVar51 = (undefined4)((ulonglong)dVar49 >> 0x20);
          auVar35._12_4_ = uVar51;
          dVar33 = (GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] - dVar49) *
                   *(double *)(pFVar5 + lVar23 + 0x20 + 8) +
                   auVar35._8_8_ * *(double *)(pFVar4 + lVar23 + 0x20 + 8);
          auVar36._8_4_ = SUB84(dVar13,0);
          auVar36._0_8_ = dVar50;
          auVar36._12_4_ = uVar60;
          auVar42._8_4_ = SUB84(dVar33,0);
          auVar42._0_8_ =
               (GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] - dVar47) *
               *(double *)(pFVar5 + lVar23 + 0x20) + dVar47 * *(double *)(pFVar4 + lVar23 + 0x20);
          auVar42._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
          *(undefined1 (*) [16])(pFVar21 + lVar23 + 0x20) = auVar42;
          auVar9._8_4_ = SUB84(dVar52,0);
          auVar9._0_8_ = (dVar43 - dVar50) * dVar54 + dVar50 * dVar55;
          auVar9._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
          *(undefined1 (*) [16])(pFVar21 + lVar23 + 0x30) = auVar9;
          dVar54 = *(double *)(pFVar4 + lVar23 + 0x50);
          dVar43 = GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0];
          dVar55 = *(double *)(pFVar5 + lVar23 + 0x50);
          dVar52 = (GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1] - dVar13) *
                   *(double *)(pFVar5 + lVar23 + 0x50 + 8) +
                   auVar36._8_8_ * *(double *)(pFVar4 + lVar23 + 0x50 + 8);
          auVar37._8_4_ = SUB84(dVar49,0);
          auVar37._0_8_ = dVar47;
          auVar37._12_4_ = uVar51;
          dVar33 = (GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] - dVar49) *
                   *(double *)(pFVar5 + lVar23 + 0x40 + 8) +
                   auVar37._8_8_ * *(double *)(pFVar4 + lVar23 + 0x40 + 8);
          auVar58._8_4_ = SUB84(dVar33,0);
          auVar58._0_8_ =
               (GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] - dVar47) *
               *(double *)(pFVar5 + lVar23 + 0x40) + dVar47 * *(double *)(pFVar4 + lVar23 + 0x40);
          auVar58._12_4_ = (int)((ulonglong)dVar33 >> 0x20);
          *(undefined1 (*) [16])(pFVar21 + lVar23 + 0x40) = auVar58;
          auVar10._8_4_ = SUB84(dVar52,0);
          auVar10._0_8_ = (dVar43 - dVar50) * dVar55 + dVar50 * dVar54;
          auVar10._12_4_ = (int)((ulonglong)dVar52 >> 0x20);
          *(undefined1 (*) [16])(pFVar21 + lVar23 + 0x50) = auVar10;
          dVar52 = 0.0 - *(double *)(pFVar5 + lVar23 + 0x10);
          dVar54 = 0.0 - *(double *)(pFVar5 + lVar23 + 0x10 + 8);
          dVar33 = *(double *)(pFVar5 + lVar23 + 0x10) * *(double *)(pFVar4 + lVar23 + 0x10) +
                   *(double *)(pFVar5 + lVar23) * *(double *)(pFVar4 + lVar23);
          dVar43 = *(double *)(pFVar5 + lVar23 + 0x10 + 8) * *(double *)(pFVar4 + lVar23 + 0x10 + 8)
                   + *(double *)(pFVar5 + lVar23 + 8) * *(double *)(pFVar4 + lVar23 + 8);
          auVar38._8_4_ = SUB84(dVar43,0);
          auVar38._0_8_ = dVar33;
          auVar38._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
          lVar27 = -(ulonglong)(0.0 <= auVar38._8_8_ + dVar33);
          lVar30 = -(ulonglong)(0.0 <= dVar33 + dVar43);
          uVar44 = (uint)lVar27;
          uVar25 = (uint)((ulonglong)lVar27 >> 0x20);
          uVar45 = (uint)lVar30;
          uVar46 = (uint)((ulonglong)lVar30 >> 0x20);
          dVar33 = 0.0 - *(double *)(pFVar5 + lVar23);
          dVar43 = 0.0 - *(double *)(pFVar5 + lVar23 + 8);
          pFVar1 = pFVar5 + lVar23;
          auVar56._0_4_ = ~uVar44 & SUB84(dVar33,0);
          auVar56._4_4_ = ~uVar25 & (uint)((ulonglong)dVar33 >> 0x20);
          auVar56._8_4_ = ~uVar45 & SUB84(dVar43,0);
          auVar56._12_4_ = ~uVar46 & (uint)((ulonglong)dVar43 >> 0x20);
          auVar7._4_4_ = uVar25 & *(uint *)(pFVar1 + 4);
          auVar7._0_4_ = uVar44 & *(uint *)pFVar1;
          auVar7._8_4_ = uVar45 & *(uint *)(pFVar1 + 8);
          auVar7._12_4_ = uVar46 & *(uint *)(pFVar1 + 0xc);
          dVar55 = SUB168(auVar56 | auVar7,0) *
                   (GlobalVectorConstants::DoubleOne.XY.m128d_f64[0] - dVar47) +
                   dVar47 * *(double *)(pFVar4 + lVar23);
          dVar47 = SUB168(auVar56 | auVar7,8) *
                   (GlobalVectorConstants::DoubleOne.XY.m128d_f64[1] - dVar49) +
                   dVar49 * *(double *)(pFVar4 + lVar23 + 8);
          pFVar5 = pFVar5 + lVar23 + 0x10;
          auVar48._0_4_ = ~uVar44 & SUB84(dVar52,0);
          auVar48._4_4_ = ~uVar25 & (uint)((ulonglong)dVar52 >> 0x20);
          auVar48._8_4_ = ~uVar45 & SUB84(dVar54,0);
          auVar48._12_4_ = ~uVar46 & (uint)((ulonglong)dVar54 >> 0x20);
          auVar11._4_4_ = uVar25 & *(uint *)(pFVar5 + 4);
          auVar11._0_4_ = uVar44 & *(uint *)pFVar5;
          auVar11._8_4_ = uVar45 & *(uint *)(pFVar5 + 8);
          auVar11._12_4_ = uVar46 & *(uint *)(pFVar5 + 0xc);
          auVar39._8_4_ = SUB84(dVar47,0);
          auVar39._0_8_ = dVar55;
          auVar39._12_4_ = (int)((ulonglong)dVar47 >> 0x20);
          dVar52 = SUB168(auVar48 | auVar11,0) *
                   (GlobalVectorConstants::DoubleOne.ZW.m128d_f64[0] - dVar50) +
                   dVar50 * *(double *)(pFVar4 + lVar23 + 0x10);
          dVar50 = SUB168(auVar48 | auVar11,8) *
                   (GlobalVectorConstants::DoubleOne.ZW.m128d_f64[1] - dVar13) +
                   dVar13 * *(double *)(pFVar4 + lVar23 + 0x10 + 8);
          dVar33 = dVar52 * dVar52 + dVar55 * dVar55;
          dVar43 = dVar50 * dVar50 + auVar39._8_8_ * dVar47;
          auVar40._8_4_ = SUB84(dVar43,0);
          auVar40._0_8_ = dVar33;
          auVar40._12_4_ = (int)((ulonglong)dVar43 >> 0x20);
          auVar41._0_8_ = auVar40._8_8_ + dVar33;
          auVar41._8_8_ = dVar33 + dVar43;
          uVar28 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[0] <=
                    auVar41._0_8_);
          uVar31 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.XY.m128d_f64[1] <=
                    auVar41._8_8_);
          uVar29 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[0] <=
                    auVar41._0_8_);
          uVar32 = -(ulonglong)
                    (GlobalVectorConstants::DoubleSmallLengthThreshold.ZW.m128d_f64[1] <=
                    auVar41._8_8_);
          auVar42 = sqrtpd(auVar41,auVar41);
          auVar58 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.XY.m128d_f64,auVar42);
          auVar42 = divpd((undefined1  [16])GlobalVectorConstants::DoubleOne.ZW.m128d_f64,auVar42);
          auVar59._0_8_ = uVar28 & (ulonglong)(auVar58._0_8_ * dVar55);
          uVar14 = uVar31 & (ulonglong)(auVar58._8_8_ * dVar47);
          auVar59._8_4_ = (undefined4)uVar14;
          auVar59._12_4_ = (undefined4)(uVar14 >> 0x20);
          auVar53._0_8_ = uVar29 & (ulonglong)(auVar42._0_8_ * dVar52);
          uVar14 = uVar32 & (ulonglong)(auVar42._8_8_ * dVar50);
          auVar53._8_4_ = (undefined4)uVar14;
          auVar53._12_4_ = (undefined4)(uVar14 >> 0x20);
          auVar12._4_4_ =
               ~(uint)(uVar28 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._4_4_;
          auVar12._0_4_ = ~(uint)uVar28 & GlobalVectorConstants::Double0001.XY.m128d_f64[0]._0_4_;
          auVar12._8_4_ = ~(uint)uVar31 & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._0_4_;
          auVar12._12_4_ =
               ~(uint)(uVar31 >> 0x20) & GlobalVectorConstants::Double0001.XY.m128d_f64[1]._4_4_;
          auVar8._4_4_ = ~(uint)(uVar29 >> 0x20) &
                         GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._4_4_;
          auVar8._0_4_ = ~(uint)uVar29 & GlobalVectorConstants::Double0001.ZW.m128d_f64[0]._0_4_;
          auVar8._8_4_ = ~(uint)uVar32 & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._0_4_;
          auVar8._12_4_ =
               ~(uint)(uVar32 >> 0x20) & GlobalVectorConstants::Double0001.ZW.m128d_f64[1]._4_4_;
          *(undefined1 (*) [16])(pFVar21 + lVar23) = auVar59 | auVar12;
          *(undefined1 (*) [16])(pFVar21 + lVar23 + 0x10) = auVar53 | auVar8;
        }
        else {
          uVar15 = *(undefined8 *)(pFVar4 + lVar23 + 8);
          *(undefined8 *)(pFVar21 + lVar23) = *(undefined8 *)(pFVar4 + lVar23);
          *(undefined8 *)(pFVar21 + lVar23 + 8) = uVar15;
          uVar15 = *(undefined8 *)(pFVar4 + lVar23 + 0x10 + 8);
          *(undefined8 *)(pFVar21 + lVar23 + 0x10) = *(undefined8 *)(pFVar4 + lVar23 + 0x10);
          *(undefined8 *)(pFVar21 + lVar23 + 0x10 + 8) = uVar15;
          uVar15 = *(undefined8 *)(pFVar4 + lVar23 + 0x20 + 8);
          *(undefined8 *)(pFVar21 + lVar23 + 0x20) = *(undefined8 *)(pFVar4 + lVar23 + 0x20);
          *(undefined8 *)(pFVar21 + lVar23 + 0x20 + 8) = uVar15;
          uVar15 = *(undefined8 *)(pFVar4 + lVar23 + 0x30 + 8);
          *(undefined8 *)(pFVar21 + lVar23 + 0x30) = *(undefined8 *)(pFVar4 + lVar23 + 0x30);
          *(undefined8 *)(pFVar21 + lVar23 + 0x30 + 8) = uVar15;
          uVar15 = *(undefined8 *)(pFVar4 + lVar23 + 0x40 + 8);
          *(undefined8 *)(pFVar21 + lVar23 + 0x40) = *(undefined8 *)(pFVar4 + lVar23 + 0x40);
          *(undefined8 *)(pFVar21 + lVar23 + 0x40 + 8) = uVar15;
          uVar15 = *(undefined8 *)(pFVar4 + lVar23 + 0x50 + 8);
          *(undefined8 *)(pFVar21 + lVar23 + 0x50) = *(undefined8 *)(pFVar4 + lVar23 + 0x50);
          *(undefined8 *)(pFVar21 + lVar23 + 0x50 + 8) = uVar15;
        }
      }
      else {
        uVar15 = *(undefined8 *)(pFVar5 + lVar23 + 8);
        *(undefined8 *)(pFVar21 + lVar23) = *(undefined8 *)(pFVar5 + lVar23);
        *(undefined8 *)(pFVar21 + lVar23 + 8) = uVar15;
        uVar15 = *(undefined8 *)(pFVar5 + lVar23 + 0x10 + 8);
        *(undefined8 *)(pFVar21 + lVar23 + 0x10) = *(undefined8 *)(pFVar5 + lVar23 + 0x10);
        *(undefined8 *)(pFVar21 + lVar23 + 0x10 + 8) = uVar15;
        uVar15 = *(undefined8 *)(pFVar5 + lVar23 + 0x20 + 8);
        *(undefined8 *)(pFVar21 + lVar23 + 0x20) = *(undefined8 *)(pFVar5 + lVar23 + 0x20);
        *(undefined8 *)(pFVar21 + lVar23 + 0x20 + 8) = uVar15;
        uVar15 = *(undefined8 *)(pFVar5 + lVar23 + 0x30 + 8);
        *(undefined8 *)(pFVar21 + lVar23 + 0x30) = *(undefined8 *)(pFVar5 + lVar23 + 0x30);
        *(undefined8 *)(pFVar21 + lVar23 + 0x30 + 8) = uVar15;
        uVar15 = *(undefined8 *)(pFVar5 + lVar23 + 0x40 + 8);
        *(undefined8 *)(pFVar21 + lVar23 + 0x40) = *(undefined8 *)(pFVar5 + lVar23 + 0x40);
        *(undefined8 *)(pFVar21 + lVar23 + 0x40 + 8) = uVar15;
        uVar15 = *(undefined8 *)(pFVar5 + lVar23 + 0x50 + 8);
        *(undefined8 *)(pFVar21 + lVar23 + 0x50) = *(undefined8 *)(pFVar5 + lVar23 + 0x50);
        *(undefined8 *)(pFVar21 + lVar23 + 0x50 + 8) = uVar15;
      }
      uVar24 = uVar24 + 1;
      lVar26 = lVar26 + 1;
      lVar23 = lVar23 + 0x60;
    } while (lVar26 != (int)uVar3);
  }
  return;
}

// Z_Construct_UScriptStruct_FTransformDynamicState @ 143128f90

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTransformDynamicState(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTransformDynamicState.InnerSingleton ==
      (UScriptStruct *)0x0) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTransformDynamicState.InnerSingleton,
               &Z_Construct_UScriptStruct_FTransformDynamicState_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTransformDynamicState.InnerSingleton !=
      (UScriptStruct *)0x0) {
    return Z_Registration_Info_UScriptStruct_FTransformDynamicState.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// Z_Construct_UScriptStruct_FTransformStaticState @ 143129010

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UScriptStruct * __cdecl Z_Construct_UScriptStruct_FTransformStaticState(void)

{
  FString *pFVar1;
  wchar_t *pwVar2;
  FString local_28 [2];
  
  if (Z_Registration_Info_UScriptStruct_FTransformStaticState.InnerSingleton == (UScriptStruct *)0x0
     ) {
    UECodeGen_Private::ConstructUScriptStruct
              (&Z_Registration_Info_UScriptStruct_FTransformStaticState.InnerSingleton,
               &Z_Construct_UScriptStruct_FTransformStaticState_Statics::StructParams);
  }
  if (Z_Registration_Info_UScriptStruct_FTransformStaticState.InnerSingleton != (UScriptStruct *)0x0
     ) {
    return Z_Registration_Info_UScriptStruct_FTransformStaticState.InnerSingleton;
  }
  pFVar1 = GetTypeName<UScriptStruct>(local_28);
  if ((pFVar1->Data).ArrayNum == 0) {
    pwVar2 = L"";
  }
  else {
    pwVar2 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(L"nullptr",pwVar2);
}

// `dynamic_atexit_destructor_for_'TransformStateStreamCreator'' @ 150360260

void __cdecl _dynamic_atexit_destructor_for__TransformStateStreamCreator__(void)

{
  FStateStreamCreator *pFVar1;
  longlong *plVar2;
  
  if (TransformStateStreamCreator.Next != (FStateStreamCreator *)0x0) {
    (TransformStateStreamCreator.Next)->Prev = TransformStateStreamCreator.Prev;
  }
  pFVar1 = TransformStateStreamCreator.Next;
  if (TransformStateStreamCreator.Prev != (FStateStreamCreator *)0x0) {
    (TransformStateStreamCreator.Prev)->Next = TransformStateStreamCreator.Next;
    pFVar1 = FStateStreamCreator::First;
  }
  FStateStreamCreator::First = pFVar1;
  TransformStateStreamCreator.Next = (FStateStreamCreator *)0x0;
  TransformStateStreamCreator.Prev = (FStateStreamCreator *)0x0;
  if (TransformStateStreamCreator.UnregisterFunction._0_8_ != 0) {
    plVar2 = (longlong *)&TransformStateStreamCreator.UnregisterFunction.field_0x10;
    if (TransformStateStreamCreator.UnregisterFunction._40_8_ != 0) {
      plVar2 = (longlong *)TransformStateStreamCreator.UnregisterFunction._40_8_;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (TransformStateStreamCreator.RegisterFunction._0_8_ == 0) {
    return;
  }
  plVar2 = (longlong *)&TransformStateStreamCreator.RegisterFunction.field_0x10;
  if (TransformStateStreamCreator.RegisterFunction._40_8_ != 0) {
    plVar2 = (longlong *)TransformStateStreamCreator.RegisterFunction._40_8_;
  }
                    /* WARNING: Could not recover jumptable at 0x0001503602f1. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x10))();
  return;
}

