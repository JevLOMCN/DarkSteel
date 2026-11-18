// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 11

// StaticClass @ 14907b450

UClass * __cdecl UNiagaraDataInterfaceAudioSubmix::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioSubmix.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceAudioSubmix",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioSubmix.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceAudioSubmix,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceAudioSubmix>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceAudioSubmix>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioSubmix.InnerSingleton;
}

// UNiagaraDataInterfaceAudioSubmix @ 1490b3f50

UNiagaraDataInterfaceAudioSubmix * __thiscall
UNiagaraDataInterfaceAudioSubmix::UNiagaraDataInterfaceAudioSubmix
          (UNiagaraDataInterfaceAudioSubmix *this,FVTableHelper *param_1)

{
  UNiagaraDataInterfaceBase::UNiagaraDataInterfaceBase((UNiagaraDataInterfaceBase *)this,param_1);
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceAudioSubmix__6B_;
  this->_padding_ = 0;
  (this->Submix).field0_0x0.DebugPtr = (USoundSubmix *)0x0;
  return this;
}

// UNiagaraDataInterfaceAudioSubmix @ 1490b3f90

UNiagaraDataInterfaceAudioSubmix * __thiscall
UNiagaraDataInterfaceAudioSubmix::UNiagaraDataInterfaceAudioSubmix
          (UNiagaraDataInterfaceAudioSubmix *this,FObjectInitializer *param_1)

{
  FObjectInitializer *pFVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  pFVar1 = FObjectInitializer::Get();
  UNiagaraDataInterfaceBase::UNiagaraDataInterfaceBase((UNiagaraDataInterfaceBase *)this,pFVar1);
  *(uint *)&this->_padding_ = (uint)this->_padding_ & 0xfffffff8;
  puVar3 = (undefined8 *)0x0;
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceAudioSubmix__6B_;
  this->_padding_ = 0;
  (this->Submix).field0_0x0.DebugPtr = (USoundSubmix *)0x0;
  puVar2 = ::operator_new(0x128);
  if (puVar2 != (undefined8 *)0x0) {
    puVar2[1] = 0;
    puVar2[2] = 0;
    *puVar2 = &___7FNiagaraDataInterfaceProxySubmix__6B_;
    puVar2[3] = 0;
    puVar2[6] = 0;
    *(undefined4 *)(puVar2 + 7) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x3c) = 0x80;
    *(undefined4 *)(puVar2 + 8) = 0xffffffff;
    *(undefined4 *)((longlong)puVar2 + 0x44) = 0;
    puVar2[10] = 0;
    *(undefined4 *)(puVar2 + 0xb) = 0;
    memset(puVar2 + 0xc,0,0xa8);
    Audio::FPatchMixer::FPatchMixer((FPatchMixer *)(puVar2 + 0xc));
    puVar2[0x21] = 0;
    *(undefined1 *)(puVar2 + 0x22) = 0;
    *(undefined4 *)((longlong)puVar2 + 0x114) = 0x4000;
    puVar2[0x23] = 0;
    puVar2[0x24] = 0;
    puVar3 = puVar2;
  }
  puVar2 = (undefined8 *)this->_padding_;
  this->_padding_ = (longlong)puVar3;
  if (puVar2 != (undefined8 *)0x0) {
    (**(code **)*puVar2)(puVar2,1);
  }
  return this;
}

// ~UNiagaraDataInterfaceAudioSubmix @ 1490b9090

void __thiscall
UNiagaraDataInterfaceAudioSubmix::~UNiagaraDataInterfaceAudioSubmix
          (UNiagaraDataInterfaceAudioSubmix *this)

{
  this->_padding_ = (longlong)&___7UNiagaraDataInterfaceAudioSubmix__6B_;
  UNiagaraDataInterface::~UNiagaraDataInterface((UNiagaraDataInterface *)this);
  return;
}

// BeginDestroy @ 1490ccd60

void __thiscall
UNiagaraDataInterfaceAudioSubmix::BeginDestroy(UNiagaraDataInterfaceAudioSubmix *this)

{
  FNiagaraDataInterfaceProxySubmix *this_00;
  FDelegateHandle FVar1;
  code *pcVar2;
  bool bVar3;
  
  this_00 = (FNiagaraDataInterfaceProxySubmix *)this->_padding_;
  if (this_00 == (FNiagaraDataInterfaceProxySubmix *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x3a0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  bVar3 = IsInGameThread();
  if (!bVar3) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsInGameThread()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraDataInterfaceAudio.cpp"
                       ,0x10a,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  FVar1.ID = (this_00->DeviceCreatedHandle).ID;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               &FAudioDeviceManagerDelegates::OnAudioDeviceCreated,FVar1);
  }
  FVar1.ID = (this_00->DeviceDestroyedHandle).ID;
  if (FVar1.ID != 0) {
    TMulticastDelegateBase<FDefaultTSDelegateUserPolicy>::RemoveDelegateInstance
              ((TMulticastDelegateBase<FDefaultTSDelegateUserPolicy> *)
               &FAudioDeviceManagerDelegates::OnAudioDeviceDestroyed,FVar1);
  }
  (this_00->DeviceCreatedHandle).ID = 0;
  (this_00->DeviceDestroyedHandle).ID = 0;
  if (this_00->bIsSubmixListenerRegistered != false) {
    FNiagaraDataInterfaceProxySubmix::UnregisterFromAllAudioDevices(this_00);
  }
  UObject::BeginDestroy((UObject *)this);
  return;
}

// CopyToInternal @ 1490d9260

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall
UNiagaraDataInterfaceAudioSubmix::CopyToInternal
          (UNiagaraDataInterfaceAudioSubmix *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  USoundSubmix *pUVar2;
  FNiagaraDataInterfaceProxy *pFVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  UClass *pUVar7;
  FWeakObjectPtr local_res10;
  UNiagaraDataInterface *local_res18 [2];
  code *local_38 [2];
  undefined **local_28;
  FWeakObjectPtr local_20;
  undefined8 local_10;
  
  if (param_1 != (UNiagaraDataInterface *)0x0) {
    pUVar7 = StaticClass();
    iVar1 = (int)pUVar7->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar7->_padding_)) {
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar2 = (this->Submix).field0_0x0.DebugPtr, pUVar2 != (USoundSubmix *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar2);
      }
      *(TObjectPtr<USoundSubmix>_u_0 *)(param_1 + 1) = (this->Submix).field0_0x0;
      bVar5 = IsInGameThread();
      if (bVar5) {
        pFVar3 = (param_1->Proxy).Ptr;
        if (pFVar3 == (FNiagaraDataInterfaceProxy *)0x0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("TypedProxy != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                             ,0x3a0,L"");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
        }
        (**(code **)(pFVar3->_padding_ + 0x60))(pFVar3,(this->Submix).field0_0x0.DebugPtr);
        return true;
      }
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      local_res10.ObjectIndex = 0;
      local_res10.ObjectSerialNumber = 0;
      local_res18[0] = param_1;
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)param_1);
      }
      FWeakObjectPtr::operator=(&local_res10,(FObjectPtr)local_res18);
      local_10 = 0;
      local_28 = &UE::Core::Private::Function::
                  TFunction_OwnedObject<`UNiagaraDataInterfaceAudioSubmix::CopyToInternal'::`10'::<lambda_1>,1,0>
                  ::_vftable_;
      local_20 = local_res10;
      local_38[0] = UE::Core::Private::Function::
                    TFunctionRefCaller<`UNiagaraDataInterfaceAudioSubmix::CopyToInternal'::__l10::<lambda_1>,void>
                    ::Call;
      AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_38);
    }
  }
  return true;
}

// Equals @ 1490f2790

bool __thiscall
UNiagaraDataInterfaceAudioSubmix::Equals
          (UNiagaraDataInterfaceAudioSubmix *this,UNiagaraDataInterface *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  byte bVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  if ((param_1 == (UNiagaraDataInterface *)0x0) || (param_1->_padding_ != this->_padding_)) {
    bVar5 = 0;
    if (param_1 == (UNiagaraDataInterface *)0x0) {
      pFVar3 = GetTypeName<UNiagaraDataInterfaceAudioSubmix_const_>(&local_28);
      if ((pFVar3->Data).ArrayNum == 0) {
        pwVar4 = L"";
      }
      else {
        pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar4);
    }
  }
  else {
    bVar5 = 1;
  }
  pUVar2 = StaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
     ((longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
      == &pUVar2->_padding_)) {
    return (bool)((USoundSubmix *)param_1[1]._padding_ == (this->Submix).field0_0x0.DebugPtr & bVar5
                 );
  }
  pFVar3 = GetTypeName<UNiagaraDataInterfaceAudioSubmix_const_>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar6 = L"";
  }
  else {
    pwVar6 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UNiagaraDataInterface_const_>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar6);
}

// GetPrivateStaticClass @ 149109950

UClass * __cdecl UNiagaraDataInterfaceAudioSubmix::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioSubmix.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Niagara",L"NiagaraDataInterfaceAudioSubmix",
               &Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioSubmix.InnerSingleton,
               StaticRegisterNativesUNiagaraDataInterfaceAudioSubmix,0x40,8,CLASS_Intrinsic,
               CASTCLASS_None,L"Engine",InternalConstructor<UNiagaraDataInterfaceAudioSubmix>,
               InternalVTableHelperCtorCaller<UNiagaraDataInterfaceAudioSubmix>,local_res8,
               UNiagaraDataInterface::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraDataInterfaceAudioSubmix.InnerSingleton;
}

// PostInitProperties @ 1491207b0

void __thiscall
UNiagaraDataInterfaceAudioSubmix::PostInitProperties(UNiagaraDataInterfaceAudioSubmix *this)

{
  FTlsAutoCleanup FVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  uint *puVar5;
  FTlsAutoCleanup *pFVar6;
  FTlsAutoCleanup FVar7;
  undefined1 auStackX_8 [8];
  UNiagaraDataInterfaceAudioSubmix *pUStack_28;
  code *pcStack_20;
  undefined1 *puStack_18;
  
  puVar5 = TThreadSingleton<FUObjectThreadContext>::GetTlsSlot();
  puStack_18 = auStackX_8;
  pcStack_20 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FUObjectThreadContext>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&pcStack_20,puVar5);
  FVar1 = (FTlsAutoCleanup)(pFVar6 + 0xb);
  FVar7 = pFVar6[0x1b];
  if (pFVar6[0x1b] == (FTlsAutoCleanup)0x0) {
    FVar7 = FVar1;
  }
  pUStack_28 = this;
  if (((ulonglong)FVar7 <= &pUStack_28) &&
     (&pUStack_28 <
      (UNiagaraDataInterfaceAudioSubmix **)
      ((longlong)FVar7 + (longlong)*(int *)&pFVar6[0x1c].field_0x4 * 8))) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  iVar4 = *(int *)(pFVar6 + 0x1c);
  if (iVar4 == *(int *)&pFVar6[0x1c].field_0x4) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UObject_*>_>
                      (0x808,(ForElementType<UObject_*> *)FVar1,(int *)&pFVar6[0x1c].field_0x4);
  }
  *(int *)(pFVar6 + 0x1c) = iVar4 + 1;
  FVar7 = pFVar6[0x1b];
  if (pFVar6[0x1b] == (FTlsAutoCleanup)0x0) {
    FVar7 = FVar1;
  }
  *(UNiagaraDataInterfaceAudioSubmix **)((longlong)FVar7 + (longlong)iVar4 * 8) = pUStack_28;
  (**(code **)(*(longlong *)this->_padding_ + 0x3a8))((longlong *)this->_padding_,this,1,0,0);
  if (FOverridableManager::OverridableManager != (FOverridableManager *)0x0) {
    FOverridableManager::ClearOverrides
              (FOverridableManager::OverridableManager,(TNotNull<UObject_*>)this);
  }
  return;
}

// PostLoad @ 149120dd0

void __thiscall UNiagaraDataInterfaceAudioSubmix::PostLoad(UNiagaraDataInterfaceAudioSubmix *this)

{
  longlong *plVar1;
  code *pcVar2;
  bool bVar3;
  
  UObject::PostLoad((UObject *)this);
  plVar1 = (longlong *)this->_padding_;
  if (plVar1 == (longlong *)0x0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypedProxy != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Classes\\NiagaraDataInterface.h"
                       ,0x3a0,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000149120e25. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x60))(plVar1,(this->Submix).field0_0x0.DebugPtr);
  return;
}

// StaticRegisterNativesUNiagaraDataInterfaceAudioSubmix @ 149139f90

void __cdecl
UNiagaraDataInterfaceAudioSubmix::StaticRegisterNativesUNiagaraDataInterfaceAudioSubmix(void)

{
  return;
}

