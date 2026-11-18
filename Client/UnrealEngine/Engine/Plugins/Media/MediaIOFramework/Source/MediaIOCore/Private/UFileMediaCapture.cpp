// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MediaIOCore
// Functions: 11

// StaticClass @ 14d77c830

UClass * __cdecl UFileMediaCapture::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFileMediaCapture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaIOCore",L"FileMediaCapture",
               &Z_Registration_Info_UClass_UFileMediaCapture.InnerSingleton,
               StaticRegisterNativesUFileMediaCapture,0x330,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UFileMediaCapture>,
               InternalVTableHelperCtorCaller<UFileMediaCapture>,local_res8,
               UMediaCapture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFileMediaCapture.InnerSingleton;
}

// <lambda_1> @ 14d7890e0

<lambda_1> * __thiscall
`UFileMediaCapture::CacheMediaOutputValues'::__l2::<lambda_1>::<lambda_1>
          (void *this,<lambda_1> *param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  FReadAccessScope local_28;
  
  lVar1 = *(longlong *)&param_1->NativeCB;
  *(undefined8 *)((longlong)this + 0x28) = 0;
  *(longlong *)this = lVar1;
  if (lVar1 != 0) {
    puVar2 = *(undefined8 **)&(param_1->NativeCB).field_0x28;
    puVar3 = (undefined8 *)&(param_1->NativeCB).field_0x10;
    if (puVar2 != (undefined8 *)0x0) {
      puVar3 = puVar2;
    }
    (**(code **)*puVar3)(puVar3,(longlong)this + 0x10);
  }
  *(undefined8 *)((longlong)this + 0x30) = 0;
  *(undefined8 *)((longlong)this + 0x38) = 0;
  *(undefined8 *)((longlong)this + 0x40) = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)&param_1->DynamicCB,&local_28
            );
  *(undefined8 *)((longlong)this + 0x38) = *(undefined8 *)&(param_1->DynamicCB).field_0x8;
  *(undefined8 *)((longlong)this + 0x40) = *(undefined8 *)&(param_1->DynamicCB).field_0x10;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return this;
}

// UFileMediaCapture @ 14d78afd0

UFileMediaCapture * __thiscall
UFileMediaCapture::UFileMediaCapture(UFileMediaCapture *this,FVTableHelper *param_1)

{
  UMediaCapture::UMediaCapture((UMediaCapture *)this,param_1);
  this->_padding_ = (longlong)&___7UFileMediaCapture__6B_;
  (this->BaseFilePathName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BaseFilePathName).Data.ArrayNum = 0;
  (this->BaseFilePathName).Data.ArrayMax = 0;
  *(undefined8 *)&this->OnCompleteWrapper = 0;
  *(undefined8 *)&(this->OnCompleteWrapper).field_0x28 = 0;
  return this;
}

// UFileMediaCapture @ 14d78b020

UFileMediaCapture * __thiscall UFileMediaCapture::UFileMediaCapture(UFileMediaCapture *this)

{
  UMediaCapture::UMediaCapture((UMediaCapture *)this);
  this->_padding_ = (longlong)&___7UFileMediaCapture__6B_;
  (this->BaseFilePathName).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->BaseFilePathName).Data.ArrayNum = 0;
  (this->BaseFilePathName).Data.ArrayMax = 0;
  *(undefined8 *)&this->OnCompleteWrapper = 0;
  *(undefined8 *)&(this->OnCompleteWrapper).field_0x28 = 0;
  return this;
}

// ~UFileMediaCapture @ 14d78d040

void __thiscall UFileMediaCapture::~UFileMediaCapture(UFileMediaCapture *this)

{
  longlong *plVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  
  this->_padding_ = (longlong)&___7UFileMediaCapture__6B_;
  if (*(longlong *)&this->OnCompleteWrapper != 0) {
    plVar1 = *(longlong **)&(this->OnCompleteWrapper).field_0x28;
    plVar3 = (longlong *)&(this->OnCompleteWrapper).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar3 = plVar1;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  pFVar2 = (this->BaseFilePathName).Data.AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UMediaCapture::~UMediaCapture((UMediaCapture *)this);
  return;
}

// operator() @ 14d78e3f0

void __thiscall
`UFileMediaCapture::CacheMediaOutputValues'::__l2::<lambda_1>::operator()(void *this,bool param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  UObject *this_00;
  UFunction *pUVar3;
  longlong *plVar4;
  undefined1 local_res8 [8];
  FReadAccessScope local_28;
  
  if (*(void **)this != (void *)0x0) {
    local_res8[0] = param_1;
    UE::Core::Private::Function::CheckCallable(*(void **)this);
    pcVar1 = *(code **)this;
    plVar4 = (longlong *)((longlong)this + 0x10);
    if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
      plVar4 = *(longlong **)((longlong)this + 0x28);
    }
    uVar2 = (**(code **)(*plVar4 + 8))();
    (*pcVar1)(uVar2,local_res8);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)((longlong)this + 0x30),
             &local_28);
  if ((*(longlong *)((longlong)this + 0x40) != 0) &&
     (this_00 = FWeakObjectPtr::Get((FWeakObjectPtr *)((longlong)this + 0x38)),
     this_00 != (UObject *)0x0)) {
    pUVar3 = UObject::FindFunction(this_00,*(FName *)((longlong)this + 0x40));
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_28);
    if (pUVar3 == (UFunction *)0x0) {
      return;
    }
    FOnImageWriteComplete_DelegateWrapper
              ((TScriptDelegate<FNotThreadSafeDelegateMode> *)((longlong)this + 0x30),param_1);
    return;
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
            (&local_28);
  return;
}

// CacheMediaOutputValues @ 14d797e00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UFileMediaCapture::CacheMediaOutputValues(UFileMediaCapture *this)

{
  longlong lVar1;
  FScriptContainerElement *pFVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 uVar9;
  bool bVar10;
  EImageFormat EVar11;
  UClass *pUVar12;
  undefined8 *puVar13;
  FString *pFVar14;
  longlong *plVar15;
  wchar_t *pwVar16;
  wchar_t *pwVar17;
  undefined1 auStack_108 [32];
  FString local_e8;
  FReadAccessScope local_d8;
  int local_c0;
  FString local_b8;
  longlong local_a8;
  longlong local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  longlong *local_80;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> local_78;
  undefined8 local_70;
  undefined8 local_68;
  code *local_58;
  undefined8 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined8 local_38;
  undefined8 uStack_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_108;
  plVar15 = &this->_padding_;
  if (this->_padding_ == 0) {
    pFVar14 = GetTypeName<UFileMediaOutput>((FString *)&local_d8);
    if ((pFVar14->Data).ArrayNum == 0) {
      pwVar16 = L"";
    }
    else {
      pwVar16 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar16);
  }
  pUVar12 = UFileMediaOutput::StaticClass();
  bVar10 = FObjectPtr::IsA((FObjectPtr *)plVar15,pUVar12);
  if ((bVar10) && (lVar1 = *plVar15, lVar1 != 0)) {
    local_d8.DestructionSentinel._0_8_ = *(undefined8 *)(lVar1 + 0x90);
    local_d8.DestructionSentinel._16_8_ = *(undefined8 *)(lVar1 + 0xa0);
    local_d8.DestructionSentinel.Accessor._0_4_ = *(int *)(lVar1 + 0x98) + -1;
    if (*(int *)(lVar1 + 0x98) == 0) {
      local_d8.DestructionSentinel.Accessor._0_4_ = 0;
    }
    local_c0 = *(int *)(lVar1 + 0xa8) + -1;
    if (*(int *)(lVar1 + 0xa8) == 0) {
      local_c0 = 0;
    }
    FPaths::CombineInternal(&local_e8,(TStringView<wchar_t> *)&local_d8,2);
    pFVar14 = &this->BaseFilePathName;
    if (pFVar14 != &local_e8) {
      pFVar2 = (pFVar14->Data).AllocatorInstance.Data;
      if (pFVar2 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar2);
      }
      (pFVar14->Data).AllocatorInstance.Data = local_e8.Data.AllocatorInstance.Data;
      (this->BaseFilePathName).Data.ArrayNum = local_e8.Data.ArrayNum;
      (this->BaseFilePathName).Data.ArrayMax = local_e8.Data.ArrayMax;
      local_e8.Data.ArrayNum = 0;
      local_e8.Data.ArrayMax = 0;
      local_e8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_e8.Data.AllocatorInstance.Data);
    }
    EVar11 = ImageFormatFromDesired(*(EDesiredImageFormat *)(lVar1 + 0x30));
    this->ImageFormat = EVar11;
    this->CompressionQuality = *(int *)(lVar1 + 0x50);
    this->bOverwriteFile = *(bool *)(lVar1 + 0x54);
    this->bAsync = *(bool *)(lVar1 + 0x55);
    local_a8 = *(longlong *)(lVar1 + 0x60);
    local_80 = (longlong *)0x0;
    if (local_a8 != 0) {
      puVar13 = (undefined8 *)(lVar1 + 0x70);
      if (*(undefined8 **)(lVar1 + 0x88) != (undefined8 *)0x0) {
        puVar13 = *(undefined8 **)(lVar1 + 0x88);
      }
      (**(code **)*puVar13)(puVar13,&local_98);
    }
    local_78.AccessDetector.State = (FMRSWRecursiveAccessDetector)(atomic<unsigned___int64>)0x0;
    local_70 = 0;
    local_68 = 0;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)(lVar1 + 0x38),&local_d8);
    local_70 = *(undefined8 *)(lVar1 + 0x40);
    local_68 = *(undefined8 *)(lVar1 + 0x48);
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_d8);
    local_58 = (code *)0x0;
    puVar13 = FMemory::Malloc(0x60,0x10);
    *puVar13 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UFileMediaCapture::CacheMediaOutputValues'::`2'::<lambda_1>,0,1>
                ::_vftable_;
    plVar15 = puVar13 + 2;
    *plVar15 = local_a8;
    puVar13[7] = local_80;
    local_80 = (longlong *)0x0;
    puVar13[4] = local_98;
    puVar13[5] = uStack_90;
    puVar13[6] = local_88;
    if (*plVar15 != 0) {
      local_a8 = 0;
    }
    puVar13[8] = 0;
    puVar13[9] = 0;
    puVar13[10] = 0;
    uStack_30 = puVar13;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope(&local_78,&local_d8);
    puVar13[9] = local_70;
    puVar13[10] = local_68;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_d8);
    lVar1 = *(longlong *)&this->OnCompleteWrapper;
    uVar9 = *(undefined8 *)&(this->OnCompleteWrapper).field_0x8;
    uVar3 = *(undefined4 *)&(this->OnCompleteWrapper).field_0x10;
    uVar4 = *(undefined4 *)&(this->OnCompleteWrapper).field_0x14;
    uVar5 = *(undefined4 *)&(this->OnCompleteWrapper).field_0x18;
    uVar6 = *(undefined4 *)&(this->OnCompleteWrapper).field_0x1c;
    uVar7 = *(undefined8 *)&(this->OnCompleteWrapper).field_0x20;
    plVar8 = *(longlong **)&(this->OnCompleteWrapper).field_0x28;
    if (plVar15 != (longlong *)0x0) {
      local_58 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UFileMediaCapture::CacheMediaOutputValues'::__l2::<lambda_1>,void,bool>
                 ::Call;
    }
    *(code **)&this->OnCompleteWrapper = local_58;
    *(undefined8 *)&(this->OnCompleteWrapper).field_0x8 = uStack_50;
    *(undefined4 *)&(this->OnCompleteWrapper).field_0x10 = local_48;
    *(undefined4 *)&(this->OnCompleteWrapper).field_0x14 = uStack_44;
    *(undefined4 *)&(this->OnCompleteWrapper).field_0x18 = uStack_40;
    *(undefined4 *)&(this->OnCompleteWrapper).field_0x1c = uStack_3c;
    *(undefined4 *)&(this->OnCompleteWrapper).field_0x20 = (undefined4)local_38;
    *(undefined4 *)&(this->OnCompleteWrapper).field_0x24 = local_38._4_4_;
    *(undefined4 *)&(this->OnCompleteWrapper).field_0x28 = (undefined4)uStack_30;
    *(undefined4 *)&(this->OnCompleteWrapper).field_0x2c = uStack_30._4_4_;
    local_58 = (code *)lVar1;
    uStack_50 = uVar9;
    local_48 = uVar3;
    uStack_44 = uVar4;
    uStack_40 = uVar5;
    uStack_3c = uVar6;
    local_38 = uVar7;
    uStack_30 = plVar8;
    if (lVar1 != 0) {
      plVar15 = (longlong *)&local_48;
      if (plVar8 != (longlong *)0x0) {
        plVar15 = plVar8;
      }
      (**(code **)(*plVar15 + 0x10))();
    }
    FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector(&local_78.AccessDetector);
    if (local_a8 != 0) {
      plVar15 = &local_98;
      if (local_80 != (longlong *)0x0) {
        plVar15 = local_80;
      }
      (**(code **)(*plVar15 + 0x10))();
    }
    return;
  }
  pFVar14 = GetTypeName<UFileMediaOutput>(&local_b8);
  pwVar16 = L"";
  if ((pFVar14->Data).ArrayNum == 0) {
    pwVar17 = L"";
  }
  else {
    pwVar17 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
  }
  pFVar14 = GetFullNameForCastLogError<UMediaOutput>((FString *)&local_d8,(UMediaOutput *)*plVar15);
  if ((pFVar14->Data).ArrayNum != 0) {
    pwVar16 = (wchar_t *)(pFVar14->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar16,pwVar17);
}

// GetPrivateStaticClass @ 14d7acf50

UClass * __cdecl UFileMediaCapture::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFileMediaCapture.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/MediaIOCore",L"FileMediaCapture",
               &Z_Registration_Info_UClass_UFileMediaCapture.InnerSingleton,
               StaticRegisterNativesUFileMediaCapture,0x330,0x10,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UFileMediaCapture>,
               InternalVTableHelperCtorCaller<UFileMediaCapture>,local_res8,
               UMediaCapture::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFileMediaCapture.InnerSingleton;
}

// InitializeCapture @ 14d7afa80

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall UFileMediaCapture::InitializeCapture(UFileMediaCapture *this)

{
  FName FVar1;
  bool bVar2;
  FName *pFVar3;
  FModuleManager *this_00;
  FName local_res8;
  UFileMediaCapture *local_res10;
  code *local_38 [2];
  undefined **local_28;
  FName local_20;
  undefined8 local_10;
  
  FModuleManager::Get();
  pFVar3 = ::FName::FName(&local_res8,"ImageWriteQueue");
  FVar1 = *pFVar3;
  this_00 = FModuleManager::Get();
  FModuleManager::LoadModuleChecked(this_00,FVar1);
  CacheMediaOutputValues(this);
  if (*(char *)((longlong)&this->_padding_ + 4) != '\x01') {
    LOCK();
    *(undefined1 *)((longlong)&this->_padding_ + 4) = 1;
    UNLOCK();
    bVar2 = IsInGameThread();
    if (bVar2) {
      TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::ProcessMulticastDelegate<UObject>
                ((TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *)&this->_padding_,
                 (void *)0x0);
      TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy>::Broadcast
                ((TMulticastDelegate<void___cdecl(void),FDefaultDelegateUserPolicy> *)
                 &this->_padding_);
      return true;
    }
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UFileMediaCapture *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    local_res10 = this;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (this != (UFileMediaCapture *)0x0))
    {
      UE::GC::MarkAsReachable((UObject *)this);
    }
    FWeakObjectPtr::operator=((FWeakObjectPtr *)&local_res8,(FObjectPtr)&local_res10);
    local_10 = 0;
    local_28 = &UE::Core::Private::Function::
                TFunction_OwnedObject<`UMediaCapture::SetState'::`10'::<lambda_1>,1,0>::_vftable_;
    local_20 = local_res8;
    local_38[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`UMediaCapture::SetState'::__l10::<lambda_1>,void>::Call;
    AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_38);
  }
  return true;
}

// OnFrameCaptured_RenderingThread @ 14d7b2b00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UFileMediaCapture::OnFrameCaptured_RenderingThread
          (UFileMediaCapture *this,FCaptureBaseData *param_1,
          TSharedPtr<FMediaCaptureUserData,1> *param_2,void *param_3,int param_4,int param_5,
          int param_6)

{
  undefined8 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  longlong lVar5;
  longlong lVar6;
  long64 lVar7;
  longlong lVar8;
  longlong lVar9;
  bool bVar10;
  char cVar11;
  int iVar12;
  FName *pFVar13;
  IModuleInterface *pIVar14;
  TImagePixelData<FColor> *pTVar15;
  TImagePixelData<FFloat16Color> *pTVar16;
  TImagePixelData<FFloat16Color> *this_00;
  longlong *plVar17;
  undefined8 *puVar18;
  longlong *plVar19;
  FStaticBasicLogRecord *pFVar20;
  ForAnyElementType FVar21;
  TImagePixelData<FColor> *pTVar22;
  ulong64 uVar23;
  undefined1 auStackY_158 [32];
  TImagePixelData<FColor> *local_110;
  FString local_108;
  TIntPoint<int>_u_0 local_f8;
  TIntPoint<int>_u_0 local_f0;
  TArray<FColor,TSizedDefaultAllocator<64>_> local_e8;
  TArray<FFloat16Color,TSizedDefaultAllocator<64>_> local_d0;
  IModuleInterface *local_b8;
  longlong local_b0;
  TReferenceControllerBase<1> *local_a8;
  FName local_a0;
  FName local_98 [2];
  longlong local_88;
  long64 lStack_80;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined8 local_68;
  undefined8 uStack_60;
  ulonglong local_58;
  
  local_58 = __security_cookie.value ^ (ulonglong)auStackY_158;
  local_110 = (TImagePixelData<FColor> *)param_1;
  FModuleManager::Get();
  pFVar13 = ::FName::FName(&local_a0,"ImageWriteQueue");
  local_b8 = FModuleManager::GetModulePtr_Internal(*pFVar13);
  if (local_b8 == (IModuleInterface *)0x0) {
    UMediaCapture::SetState((UMediaCapture *)this,Error);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->SharedReferenceCount).ReferenceController);
    return;
  }
  FModuleManager::Get();
  pFVar13 = ::FName::FName(local_98,"ImageWrapper");
  pIVar14 = FModuleManager::GetModulePtr_Internal(*pFVar13);
  if (pIVar14 == (IModuleInterface *)0x0) {
    UMediaCapture::SetState((UMediaCapture *)this,Error);
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((param_2->SharedReferenceCount).ReferenceController);
    return;
  }
  pTVar15 = ::operator_new(0x80);
  pTVar16 = (TImagePixelData<FFloat16Color> *)0x0;
  pTVar22 = (TImagePixelData<FColor> *)pTVar16;
  if (pTVar15 != (TImagePixelData<FColor> *)0x0) {
    pTVar15->_padding_ = 0;
    pTVar15->_padding_ = (longlong)&___7FImageWriteTask__6B_;
    pTVar15->_padding_ = 0;
    *(undefined1 *)&pTVar15->_padding_ = 3;
    *(undefined4 *)((longlong)&pTVar15->_padding_ + 4) = 0;
    *(undefined1 *)&pTVar15->_padding_ = 1;
    (pTVar15->Pixels).ArrayNum = 0;
    pTVar15[1]._padding_ = 0;
    pTVar15[1]._padding_ = 0;
    pTVar15[1].Pixels.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    pTVar15[1].Pixels.ArrayNum = 0;
    pTVar22 = pTVar15;
  }
  *(EImageFormat *)&pTVar22->_padding_ = this->ImageFormat;
  (**(code **)((longlong)*pIVar14 + 0x70))(pIVar14,this->ImageFormat);
  ::FString::PrintfImpl(&local_108,L"%s%05d.%s");
  plVar17 = &pTVar22->_padding_;
  if ((FString *)plVar17 != &local_108) {
    if ((void *)*plVar17 != (void *)0x0) {
      FMemory::Free((void *)*plVar17);
    }
    *plVar17 = (longlong)local_108.Data.AllocatorInstance.Data;
    local_108.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    *(int *)&pTVar22->_padding_ = local_108.Data.ArrayNum;
    *(int *)((longlong)&pTVar22->_padding_ + 4) = local_108.Data.ArrayMax;
    local_108.Data.ArrayNum = 0;
    local_108.Data.ArrayMax = 0;
  }
  if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_108.Data.AllocatorInstance.Data);
  }
  *(bool *)&pTVar22->_padding_ = this->bOverwriteFile;
  *(int *)((longlong)&pTVar22->_padding_ + 4) = this->CompressionQuality;
  local_88 = *(longlong *)&this->OnCompleteWrapper;
  uStack_60 = (longlong *)0x0;
  if (local_88 != 0) {
    puVar1 = *(undefined8 **)&(this->OnCompleteWrapper).field_0x28;
    puVar18 = (undefined8 *)&(this->OnCompleteWrapper).field_0x10;
    if (puVar1 != (undefined8 *)0x0) {
      puVar18 = puVar1;
    }
    (**(code **)*puVar18)();
  }
  lVar6 = (pTVar22->Pixels).ArrayNum;
  lVar7 = (pTVar22->Pixels).ArrayMax;
  lVar8 = pTVar22[1]._padding_;
  uVar3 = *(undefined4 *)((longlong)&pTVar22[1]._padding_ + 4);
  lVar9 = pTVar22[1]._padding_;
  uVar4 = *(undefined4 *)((longlong)&pTVar22[1]._padding_ + 4);
  lVar5 = pTVar22[1]._padding_;
  plVar17 = (longlong *)pTVar22[1]._padding_;
  (pTVar22->Pixels).ArrayNum = local_88;
  (pTVar22->Pixels).ArrayMax = lStack_80;
  *(undefined4 *)&pTVar22[1]._padding_ = local_78;
  *(undefined4 *)((longlong)&pTVar22[1]._padding_ + 4) = uStack_74;
  *(undefined4 *)&pTVar22[1]._padding_ = uStack_70;
  *(undefined4 *)((longlong)&pTVar22[1]._padding_ + 4) = uStack_6c;
  *(undefined4 *)&pTVar22[1]._padding_ = (undefined4)local_68;
  *(undefined4 *)((longlong)&pTVar22[1]._padding_ + 4) = local_68._4_4_;
  *(undefined4 *)&pTVar22[1]._padding_ = (undefined4)uStack_60;
  *(undefined4 *)((longlong)&pTVar22[1]._padding_ + 4) = uStack_60._4_4_;
  local_78 = (int)lVar8;
  uStack_74 = uVar3;
  uStack_70 = (int)lVar9;
  uStack_6c = uVar4;
  local_68 = lVar5;
  uStack_60 = plVar17;
  local_88 = lVar6;
  lStack_80 = lVar7;
  if (lVar6 != 0) {
    plVar19 = (longlong *)&local_78;
    if (plVar17 != (longlong *)0x0) {
      plVar19 = plVar17;
    }
    (**(code **)(*plVar19 + 0x10))();
  }
  cVar11 = (char)this->_padding_;
  if (cVar11 == '\x02') {
    if ((param_6 != 0) && (param_6 != param_4 * 4)) {
      if (1 < (byte)LogMediaIOCore._0_1_) {
        pFVar20 = &::LOG_Static;
LAB_14d7b2d93:
        UE::Logging::Private::BasicLog<2>(pFVar20,(FLogCategoryBase *)&LogMediaIOCore);
      }
LAB_14d7b2d9f:
      UMediaCapture::SetState((UMediaCapture *)this,Error);
      (**(code **)pTVar22->_padding_)(pTVar22,1);
      goto LAB_14d7b3075;
    }
    local_e8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    iVar12 = param_5 * param_4;
    uVar23 = (ulong64)iVar12;
    if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
      UE::Core::Private::OnInvalidArrayNum(uVar23);
    }
    if (((param_3 == (void *)0x0) && (iVar12 != 0)) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("Ptr != nullptr || Count == 0",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x2d3,L""), bVar10)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    local_e8.ArrayNum = uVar23;
    if (uVar23 == 0) {
      local_e8.ArrayMax = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                (4,4,uVar23,0,&local_e8.AllocatorInstance,uVar23,&local_e8.ArrayMax);
      memcpy(local_e8.AllocatorInstance.Data,param_3,uVar23 * 4);
    }
    local_f8._s_0.X = param_4;
    local_f8._s_0.Y = param_5;
    pTVar15 = ::operator_new(0x40);
    FVar21.Data = local_e8.AllocatorInstance.Data;
    if (pTVar15 != (TImagePixelData<FColor> *)0x0) {
      pTVar16 = (TImagePixelData<FFloat16Color> *)
                TImagePixelData<FColor>::TImagePixelData<FColor>
                          (pTVar15,(TIntPoint<int> *)&local_f8._s_0,&local_e8);
      FVar21.Data = local_e8.AllocatorInstance.Data;
    }
LAB_14d7b2fa2:
    if (FVar21.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FVar21.Data);
    }
    puVar1 = (undefined8 *)pTVar22[1]._padding_;
    pTVar22[1]._padding_ = (longlong)pTVar16;
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)(puVar1,1);
    }
  }
  else {
    if (cVar11 == '\n') {
      if ((param_6 != 0) && (param_6 != param_4 * 8)) {
        if (1 < (byte)LogMediaIOCore._0_1_) {
          pFVar20 = &::LOG_Static;
          goto LAB_14d7b2d93;
        }
        goto LAB_14d7b2d9f;
      }
      local_d0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar12 = param_5 * param_4;
      uVar23 = (ulong64)iVar12;
      if (iVar12 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum(uVar23);
      }
      if (((param_3 == (void *)0x0) && (iVar12 != 0)) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("Ptr != nullptr || Count == 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x2d3,L""), bVar10)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      local_d0.ArrayNum = uVar23;
      if (uVar23 == 0) {
        local_d0.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<64,FMemory>::ForAnyElementType>
                  (8,2,uVar23,0,&local_d0.AllocatorInstance,uVar23,&local_d0.ArrayMax);
        ConstructItems<FFloat16Color,FFloat16Color,__int64>
                  (local_d0.AllocatorInstance.Data,param_3,uVar23);
      }
      local_f0._s_0.X = param_4;
      local_f0._s_0.Y = param_5;
      this_00 = ::operator_new(0x40);
      FVar21.Data = local_d0.AllocatorInstance.Data;
      if (this_00 != (TImagePixelData<FFloat16Color> *)0x0) {
        pTVar16 = TImagePixelData<FFloat16Color>::TImagePixelData<FFloat16Color>
                            (this_00,(TIntPoint<int> *)&local_f0._s_0,&local_d0);
        FVar21.Data = local_d0.AllocatorInstance.Data;
      }
      goto LAB_14d7b2fa2;
    }
    bVar10 = ::FDebug::CheckVerifyFailedImpl2
                       ("false",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Media\\MediaIOFramework\\Source\\MediaIOCore\\Private\\FileMediaCapture.cpp"
                        ,0x7e,L"");
    if (bVar10) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  plVar17 = (longlong *)(**(code **)((longlong)*local_b8 + 0x40))();
  local_110 = pTVar22;
  (**(code **)(*plVar17 + 8))(plVar17,&local_b0,&local_110,1);
  if (local_110 != (TImagePixelData<FColor> *)0x0) {
    (**(code **)local_110->_padding_)(local_110,1);
  }
  if ((this->bAsync == false) && (local_b0 != 0)) {
    do {
      cVar11 = (**(code **)(**(longlong **)(local_b0 + 0x60) + 0x20))
                         (*(longlong **)(local_b0 + 0x60),0xffffffff,0);
    } while (cVar11 == '\0');
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(local_a8);
LAB_14d7b3075:
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((param_2->SharedReferenceCount).ReferenceController);
  return;
}

// StaticRegisterNativesUFileMediaCapture @ 14d7be430

void __cdecl UFileMediaCapture::StaticRegisterNativesUFileMediaCapture(void)

{
  return;
}

