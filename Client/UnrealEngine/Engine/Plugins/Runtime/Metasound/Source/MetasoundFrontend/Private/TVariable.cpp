// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: MetasoundFrontend
// Functions: 57

// ~TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> @ 14ad9d6f0

void __thiscall
Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
~TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
          (TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
           *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FLowLevelMemTracker *this_00;
  void *pvVar4;
  
  if ((this->DataReference).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(this->DataReference).TypedValue.field_0x10);
  }
  if ((this->DelayedDataReference).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(this->DelayedDataReference).TypedValue.field_0x10)
    ;
  }
  bVar1 = (this->Literal).Value.TypeIndex;
  if (0xc < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)(this->Literal).Value._padding_);
    return;
  case 6:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>
              ((FString *)(this->Literal).Value._padding_,(int)(this->Literal).Value._padding_);
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              ((TSharedPtr<Audio::IProxyData,1> *)(this->Literal).Value._padding_,
               (int)(this->Literal).Value._padding_);
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar4 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar4,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar4);
  }
  return;
}

// ~TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_> @ 14ad9d770

void __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
~TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>(void *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FLowLevelMemTracker *this_00;
  void *pvVar4;
  
  if (*(char *)((longlong)this + 0x60) != '\0') {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)((longlong)this + 0x50));
  }
  if (*(char *)((longlong)this + 0x38) != '\0') {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)((longlong)this + 0x28));
  }
  bVar1 = *(byte *)((longlong)this + 0x10);
  if (0xc < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar4 = *(void **)this;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<1> **)((longlong)this + 8));
    return;
  case 6:
    pvVar4 = *(void **)this;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar4 = *(void **)this;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar4 = *(void **)this;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar4 = *(void **)this;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>(*(FString **)this,*(int *)((longlong)this + 8));
    if (*(void **)this != (void *)0x0) {
      FMemory::Free(*(void **)this);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              (*(TSharedPtr<Audio::IProxyData,1> **)this,*(int *)((longlong)this + 8));
    if (*(void **)this != (void *)0x0) {
      FMemory::Free(*(void **)this);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar4 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar4,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar4);
  }
  return;
}

// ~TVariable<Metasound::Frontend::FAnalyzerAddress> @ 14ad9d7f0

void __thiscall
Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>::
~TVariable<Metasound::Frontend::FAnalyzerAddress>
          (TVariable<Metasound::Frontend::FAnalyzerAddress> *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FLowLevelMemTracker *this_00;
  void *pvVar4;
  
  if ((this->DataReference).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(this->DataReference).TypedValue.field_0x10);
  }
  if ((this->DelayedDataReference).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(this->DelayedDataReference).TypedValue.field_0x10)
    ;
  }
  bVar1 = (this->Literal).Value.TypeIndex;
  if (0xc < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)(this->Literal).Value._padding_);
    return;
  case 6:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>
              ((FString *)(this->Literal).Value._padding_,(int)(this->Literal).Value._padding_);
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              ((TSharedPtr<Audio::IProxyData,1> *)(this->Literal).Value._padding_,
               (int)(this->Literal).Value._padding_);
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar4 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar4,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar4);
  }
  return;
}

// GetDelayedDataReference @ 14adbe550

TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_> *
__thiscall
Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
GetDelayedDataReference
          (TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
           *this,TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                 *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
  *pTVar4;
  
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,100,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 =
       *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8;
  lVar1 = *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10;
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetDelayedDataReference @ 14adbe600

TDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> * __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
GetDelayedDataReference
          (void *this,
          TDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>
          *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *pTVar4;
  
  if (*(char *)((longlong)this + 0x38) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,100,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  if (*(char *)((longlong)this + 0x38) == '\0') {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
  ;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = *(undefined8 *)((longlong)this + 0x20);
  lVar1 = *(longlong *)((longlong)this + 0x28);
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetDelayedDataReference @ 14adbe6b0

TDataReadReference<Metasound::Frontend::FAnalyzerAddress> * __thiscall
Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>::GetDelayedDataReference
          (TVariable<Metasound::Frontend::FAnalyzerAddress> *this,
          TDataReadReference<Metasound::Frontend::FAnalyzerAddress> *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TDataReadReference<Metasound::Frontend::FAnalyzerAddress> *pTVar4;
  
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,100,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::Frontend::FAnalyzerAddress> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::Frontend::FAnalyzerAddress> *)(*pcVar2)();
      return pTVar4;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 =
       *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8;
  lVar1 = *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10;
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// InitDelayedDataReference @ 14adc5230

void __thiscall
Metasound::TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>::
InitDelayedDataReference
          (TVariable<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
           *this,FOperatorSettings *param_1)

{
  longlong lVar1;
  TDataWriteReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
  *pTVar2;
  undefined1 local_28 [32];
  
  if ((this->DelayedDataReference).bIsSet == false) {
    pTVar2 = TDataLiteralFactory<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>,Metasound::TDataWriteReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<TArray<Metasound::Frontend::FAnalyzerAddress,TSizedDefaultAllocator<32>_>_>
                         *)local_28,param_1,&this->Literal);
    if ((this->DelayedDataReference).bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<0> **)
                  &(this->DelayedDataReference).TypedValue.field_0x10);
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &
         ___7__TDataReference_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8 =
         *(undefined8 *)&pTVar2->field_0x8;
    lVar1 = *(longlong *)&pTVar2->field_0x10;
    *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10 = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &
         ___7__TDataWriteReference_V__TArray_VFAnalyzerAddress_Frontend_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    (this->DelayedDataReference).bIsSet = true;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
  }
  return;
}

// InitDelayedDataReference @ 14adc52b0

void __thiscall
Metasound::TVariable<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>::
InitDelayedDataReference(void *this,FOperatorSettings *param_1)

{
  longlong lVar1;
  TDataWriteReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_> *pTVar2;
  undefined1 local_28 [32];
  
  if (*(char *)((longlong)this + 0x38) == '\0') {
    pTVar2 = TDataLiteralFactory<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>,Metasound::TDataWriteReference<Metasound::TEnum<enum_Metasound::ESharedStateBehaviorType,1>_>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<Metasound::TEnum<Metasound::ESharedStateBehaviorType,1>_>
                         *)local_28,param_1,this);
    if (*(char *)((longlong)this + 0x38) != '\0') {
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<0> **)((longlong)this + 0x28));
    }
    *(undefined ***)((longlong)this + 0x18) =
         &
         ___7__TDataReference_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
    ;
    *(undefined8 *)((longlong)this + 0x20) = *(undefined8 *)&pTVar2->field_0x8;
    lVar1 = *(longlong *)&pTVar2->field_0x10;
    *(longlong *)((longlong)this + 0x28) = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *(undefined ***)((longlong)this + 0x18) =
         &
         ___7__TDataWriteReference_V__TEnum_W4ESharedStateBehaviorType_Metasound___00_Metasound___Metasound__6B_
    ;
    *(undefined1 *)((longlong)this + 0x38) = 1;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
  }
  return;
}

// InitDelayedDataReference @ 14adc5330

void __thiscall
Metasound::TVariable<Metasound::Frontend::FAnalyzerAddress>::InitDelayedDataReference
          (TVariable<Metasound::Frontend::FAnalyzerAddress> *this,FOperatorSettings *param_1)

{
  longlong lVar1;
  TDataWriteReference<Metasound::Frontend::FAnalyzerAddress> *pTVar2;
  undefined1 local_28 [32];
  
  if ((this->DelayedDataReference).bIsSet == false) {
    pTVar2 = TDataLiteralFactory<Metasound::Frontend::FAnalyzerAddress,Metasound::TDataWriteReference<Metasound::Frontend::FAnalyzerAddress>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<Metasound::Frontend::FAnalyzerAddress> *)local_28,
                        param_1,&this->Literal);
    if ((this->DelayedDataReference).bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<0> **)
                  &(this->DelayedDataReference).TypedValue.field_0x10);
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &___7__TDataReference_VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_;
    *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8 =
         *(undefined8 *)&pTVar2->field_0x8;
    lVar1 = *(longlong *)&pTVar2->field_0x10;
    *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10 = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &___7__TDataWriteReference_VFAnalyzerAddress_Frontend_Metasound___Metasound__6B_;
    (this->DelayedDataReference).bIsSet = true;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
  }
  return;
}

// ~TVariable<int> @ 14af40d10

void __thiscall Metasound::TVariable<int>::~TVariable<int>(TVariable<int> *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FLowLevelMemTracker *this_00;
  void *pvVar4;
  
  if ((this->DataReference).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(this->DataReference).TypedValue.field_0x10);
  }
  if ((this->DelayedDataReference).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(this->DelayedDataReference).TypedValue.field_0x10)
    ;
  }
  bVar1 = (this->Literal).Value.TypeIndex;
  if (0xc < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)(this->Literal).Value._padding_);
    return;
  case 6:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>
              ((FString *)(this->Literal).Value._padding_,(int)(this->Literal).Value._padding_);
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              ((TSharedPtr<Audio::IProxyData,1> *)(this->Literal).Value._padding_,
               (int)(this->Literal).Value._padding_);
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar4 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar4,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar4);
  }
  return;
}

// ~TVariable<float> @ 14af40d90

void __thiscall Metasound::TVariable<float>::~TVariable<float>(TVariable<float> *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FLowLevelMemTracker *this_00;
  void *pvVar4;
  
  if ((this->DataReference).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(this->DataReference).TypedValue.field_0x10);
  }
  if ((this->DelayedDataReference).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(this->DelayedDataReference).TypedValue.field_0x10)
    ;
  }
  bVar1 = (this->Literal).Value.TypeIndex;
  if (0xc < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)(this->Literal).Value._padding_);
    return;
  case 6:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>
              ((FString *)(this->Literal).Value._padding_,(int)(this->Literal).Value._padding_);
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              ((TSharedPtr<Audio::IProxyData,1> *)(this->Literal).Value._padding_,
               (int)(this->Literal).Value._padding_);
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar4 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar4,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar4);
  }
  return;
}

// ~TVariable<TArray<int,TSizedDefaultAllocator<32>_>_> @ 14af40e10

void __thiscall
Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>::
~TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>
          (TVariable<TArray<int,TSizedDefaultAllocator<32>_>_> *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FLowLevelMemTracker *this_00;
  void *pvVar4;
  
  if ((this->DataReference).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(this->DataReference).TypedValue.field_0x10);
  }
  if ((this->DelayedDataReference).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(this->DelayedDataReference).TypedValue.field_0x10)
    ;
  }
  bVar1 = (this->Literal).Value.TypeIndex;
  if (0xc < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)(this->Literal).Value._padding_);
    return;
  case 6:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>
              ((FString *)(this->Literal).Value._padding_,(int)(this->Literal).Value._padding_);
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              ((TSharedPtr<Audio::IProxyData,1> *)(this->Literal).Value._padding_,
               (int)(this->Literal).Value._padding_);
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar4 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar4,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar4);
  }
  return;
}

// ~TVariable<TArray<float,TSizedDefaultAllocator<32>_>_> @ 14af40e90

void __thiscall
Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>::
~TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>
          (TVariable<TArray<float,TSizedDefaultAllocator<32>_>_> *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FLowLevelMemTracker *this_00;
  void *pvVar4;
  
  if ((this->DataReference).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(this->DataReference).TypedValue.field_0x10);
  }
  if ((this->DelayedDataReference).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(this->DelayedDataReference).TypedValue.field_0x10)
    ;
  }
  bVar1 = (this->Literal).Value.TypeIndex;
  if (0xc < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)(this->Literal).Value._padding_);
    return;
  case 6:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>
              ((FString *)(this->Literal).Value._padding_,(int)(this->Literal).Value._padding_);
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              ((TSharedPtr<Audio::IProxyData,1> *)(this->Literal).Value._padding_,
               (int)(this->Literal).Value._padding_);
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar4 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar4,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar4);
  }
  return;
}

// ~TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> @ 14af40f10

void __thiscall
Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
~TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
          (TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FLowLevelMemTracker *this_00;
  void *pvVar4;
  
  if ((this->DataReference).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(this->DataReference).TypedValue.field_0x10);
  }
  if ((this->DelayedDataReference).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(this->DelayedDataReference).TypedValue.field_0x10)
    ;
  }
  bVar1 = (this->Literal).Value.TypeIndex;
  if (0xc < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)(this->Literal).Value._padding_);
    return;
  case 6:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>
              ((FString *)(this->Literal).Value._padding_,(int)(this->Literal).Value._padding_);
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              ((TSharedPtr<Audio::IProxyData,1> *)(this->Literal).Value._padding_,
               (int)(this->Literal).Value._padding_);
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar4 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar4,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar4);
  }
  return;
}

// ~TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> @ 14af40f90

void __thiscall
Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
~TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
          (TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FLowLevelMemTracker *this_00;
  void *pvVar4;
  
  if ((this->DataReference).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(this->DataReference).TypedValue.field_0x10);
  }
  if ((this->DelayedDataReference).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(this->DelayedDataReference).TypedValue.field_0x10)
    ;
  }
  bVar1 = (this->Literal).Value.TypeIndex;
  if (0xc < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)(this->Literal).Value._padding_);
    return;
  case 6:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>
              ((FString *)(this->Literal).Value._padding_,(int)(this->Literal).Value._padding_);
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              ((TSharedPtr<Audio::IProxyData,1> *)(this->Literal).Value._padding_,
               (int)(this->Literal).Value._padding_);
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar4 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar4,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar4);
  }
  return;
}

// ~TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_> @ 14af41010

void __thiscall
Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>::
~TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>
          (TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_> *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FLowLevelMemTracker *this_00;
  void *pvVar4;
  
  if ((this->DataReference).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(this->DataReference).TypedValue.field_0x10);
  }
  if ((this->DelayedDataReference).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(this->DelayedDataReference).TypedValue.field_0x10)
    ;
  }
  bVar1 = (this->Literal).Value.TypeIndex;
  if (0xc < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)(this->Literal).Value._padding_);
    return;
  case 6:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>
              ((FString *)(this->Literal).Value._padding_,(int)(this->Literal).Value._padding_);
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              ((TSharedPtr<Audio::IProxyData,1> *)(this->Literal).Value._padding_,
               (int)(this->Literal).Value._padding_);
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar4 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar4,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar4);
  }
  return;
}

// ~TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> @ 14af41090

void __thiscall
Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
~TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
          (TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FLowLevelMemTracker *this_00;
  void *pvVar4;
  
  if ((this->DataReference).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(this->DataReference).TypedValue.field_0x10);
  }
  if ((this->DelayedDataReference).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(this->DelayedDataReference).TypedValue.field_0x10)
    ;
  }
  bVar1 = (this->Literal).Value.TypeIndex;
  if (0xc < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)(this->Literal).Value._padding_);
    return;
  case 6:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>
              ((FString *)(this->Literal).Value._padding_,(int)(this->Literal).Value._padding_);
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              ((TSharedPtr<Audio::IProxyData,1> *)(this->Literal).Value._padding_,
               (int)(this->Literal).Value._padding_);
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar4 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar4,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar4);
  }
  return;
}

// ~TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_> @ 14af41110

void __thiscall
Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>::
~TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>
          (TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_> *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FLowLevelMemTracker *this_00;
  void *pvVar4;
  
  if ((this->DataReference).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(this->DataReference).TypedValue.field_0x10);
  }
  if ((this->DelayedDataReference).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(this->DelayedDataReference).TypedValue.field_0x10)
    ;
  }
  bVar1 = (this->Literal).Value.TypeIndex;
  if (0xc < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)(this->Literal).Value._padding_);
    return;
  case 6:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>
              ((FString *)(this->Literal).Value._padding_,(int)(this->Literal).Value._padding_);
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              ((TSharedPtr<Audio::IProxyData,1> *)(this->Literal).Value._padding_,
               (int)(this->Literal).Value._padding_);
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar4 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar4,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar4);
  }
  return;
}

// ~TVariable<Metasound::FAudioBuffer> @ 14af41190

void __thiscall
Metasound::TVariable<Metasound::FAudioBuffer>::~TVariable<Metasound::FAudioBuffer>
          (TVariable<Metasound::FAudioBuffer> *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FLowLevelMemTracker *this_00;
  void *pvVar4;
  
  if ((this->DataReference).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(this->DataReference).TypedValue.field_0x10);
  }
  if ((this->DelayedDataReference).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(this->DelayedDataReference).TypedValue.field_0x10)
    ;
  }
  bVar1 = (this->Literal).Value.TypeIndex;
  if (0xc < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)(this->Literal).Value._padding_);
    return;
  case 6:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>
              ((FString *)(this->Literal).Value._padding_,(int)(this->Literal).Value._padding_);
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              ((TSharedPtr<Audio::IProxyData,1> *)(this->Literal).Value._padding_,
               (int)(this->Literal).Value._padding_);
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar4 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar4,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar4);
  }
  return;
}

// ~TVariable<FMetasoundParameterStorageWrapper> @ 14af41210

void __thiscall
Metasound::TVariable<FMetasoundParameterStorageWrapper>::
~TVariable<FMetasoundParameterStorageWrapper>(TVariable<FMetasoundParameterStorageWrapper> *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FLowLevelMemTracker *this_00;
  void *pvVar4;
  
  if ((this->DataReference).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(this->DataReference).TypedValue.field_0x10);
  }
  if ((this->DelayedDataReference).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(this->DelayedDataReference).TypedValue.field_0x10)
    ;
  }
  bVar1 = (this->Literal).Value.TypeIndex;
  if (0xc < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)(this->Literal).Value._padding_);
    return;
  case 6:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>
              ((FString *)(this->Literal).Value._padding_,(int)(this->Literal).Value._padding_);
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              ((TSharedPtr<Audio::IProxyData,1> *)(this->Literal).Value._padding_,
               (int)(this->Literal).Value._padding_);
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar4 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar4,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar4);
  }
  return;
}

// ~TVariable<Metasound::FSendAddress> @ 14af41290

void __thiscall
Metasound::TVariable<Metasound::FSendAddress>::~TVariable<Metasound::FSendAddress>
          (TVariable<Metasound::FSendAddress> *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FLowLevelMemTracker *this_00;
  void *pvVar4;
  
  if ((this->DataReference).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(this->DataReference).TypedValue.field_0x10);
  }
  if ((this->DelayedDataReference).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(this->DelayedDataReference).TypedValue.field_0x10)
    ;
  }
  bVar1 = (this->Literal).Value.TypeIndex;
  if (0xc < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)(this->Literal).Value._padding_);
    return;
  case 6:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>
              ((FString *)(this->Literal).Value._padding_,(int)(this->Literal).Value._padding_);
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              ((TSharedPtr<Audio::IProxyData,1> *)(this->Literal).Value._padding_,
               (int)(this->Literal).Value._padding_);
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar4 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar4,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar4);
  }
  return;
}

// ~TVariable<FString> @ 14af41310

void __thiscall Metasound::TVariable<FString>::~TVariable<FString>(TVariable<FString> *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FLowLevelMemTracker *this_00;
  void *pvVar4;
  
  if ((this->DataReference).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(this->DataReference).TypedValue.field_0x10);
  }
  if ((this->DelayedDataReference).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(this->DelayedDataReference).TypedValue.field_0x10)
    ;
  }
  bVar1 = (this->Literal).Value.TypeIndex;
  if (0xc < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)(this->Literal).Value._padding_);
    return;
  case 6:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>
              ((FString *)(this->Literal).Value._padding_,(int)(this->Literal).Value._padding_);
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              ((TSharedPtr<Audio::IProxyData,1> *)(this->Literal).Value._padding_,
               (int)(this->Literal).Value._padding_);
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar4 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar4,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar4);
  }
  return;
}

// ~TVariable<Metasound::FTime> @ 14af41390

void __thiscall
Metasound::TVariable<Metasound::FTime>::~TVariable<Metasound::FTime>
          (TVariable<Metasound::FTime> *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FLowLevelMemTracker *this_00;
  void *pvVar4;
  
  if ((this->DataReference).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(this->DataReference).TypedValue.field_0x10);
  }
  if ((this->DelayedDataReference).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(this->DelayedDataReference).TypedValue.field_0x10)
    ;
  }
  bVar1 = (this->Literal).Value.TypeIndex;
  if (0xc < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)(this->Literal).Value._padding_);
    return;
  case 6:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>
              ((FString *)(this->Literal).Value._padding_,(int)(this->Literal).Value._padding_);
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              ((TSharedPtr<Audio::IProxyData,1> *)(this->Literal).Value._padding_,
               (int)(this->Literal).Value._padding_);
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar4 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar4,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar4);
  }
  return;
}

// ~TVariable<Metasound::FTrigger> @ 14af41410

void __thiscall
Metasound::TVariable<Metasound::FTrigger>::~TVariable<Metasound::FTrigger>
          (TVariable<Metasound::FTrigger> *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FLowLevelMemTracker *this_00;
  void *pvVar4;
  
  if ((this->DataReference).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(this->DataReference).TypedValue.field_0x10);
  }
  if ((this->DelayedDataReference).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(this->DelayedDataReference).TypedValue.field_0x10)
    ;
  }
  bVar1 = (this->Literal).Value.TypeIndex;
  if (0xc < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)(this->Literal).Value._padding_);
    return;
  case 6:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>
              ((FString *)(this->Literal).Value._padding_,(int)(this->Literal).Value._padding_);
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              ((TSharedPtr<Audio::IProxyData,1> *)(this->Literal).Value._padding_,
               (int)(this->Literal).Value._padding_);
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar4 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar4,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar4);
  }
  return;
}

// ~TVariable<bool> @ 14af41490

void __thiscall Metasound::TVariable<bool>::~TVariable<bool>(TVariable<bool> *this)

{
  byte bVar1;
  code *pcVar2;
  bool bVar3;
  FLowLevelMemTracker *this_00;
  void *pvVar4;
  
  if ((this->DataReference).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(this->DataReference).TypedValue.field_0x10);
  }
  if ((this->DelayedDataReference).bIsSet != false) {
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              (*(TReferenceControllerBase<0> **)&(this->DelayedDataReference).TypedValue.field_0x10)
    ;
  }
  bVar1 = (this->Literal).Value.TypeIndex;
  if (0xc < bVar1) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("TypeIndex < (sizeof(UEArrayCountHelper(Destructors)) - 1)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\TVariantMeta.h"
                       ,0xd4,L"");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar1) {
  case 0:
    return;
  case 1:
    return;
  case 2:
    return;
  case 3:
    return;
  case 4:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 5:
    SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<1> *)(this->Literal).Value._padding_);
    return;
  case 6:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 7:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 8:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 9:
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 == (void *)0x0) {
      return;
    }
    break;
  case 10:
    DestructItems<FString,int>
              ((FString *)(this->Literal).Value._padding_,(int)(this->Literal).Value._padding_);
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xb:
    DestructItems<TSharedPtr<Audio::IProxyData,1>,int>
              ((TSharedPtr<Audio::IProxyData,1> *)(this->Literal).Value._padding_,
               (int)(this->Literal).Value._padding_);
    pvVar4 = (void *)(this->Literal).Value._padding_;
    if (pvVar4 != (void *)0x0) {
      FMemory::Free(pvVar4);
      return;
    }
    return;
  case 0xc:
    return;
  }
  if (pvVar4 != (void *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this_00 = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this_00 = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this_00,Default,pvVar4,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,pvVar4);
  }
  return;
}

// GetDelayedDataReference @ 14af99d00

TDataReadReference<int> * __thiscall
Metasound::TVariable<int>::GetDelayedDataReference
          (TVariable<int> *this,TDataReadReference<int> *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TDataReadReference<int> *pTVar4;
  
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,100,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<int> *)(*pcVar2)();
      return pTVar4;
    }
  }
  *(undefined ***)__return_storage_ptr__ = &___7__TDataReference_H_Metasound__6B_;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 =
       *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8;
  lVar1 = *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10;
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ = &___7__TDataReadReference_H_Metasound__6B_;
  return __return_storage_ptr__;
}

// GetDelayedDataReference @ 14af99db0

TDataReadReference<float> * __thiscall
Metasound::TVariable<float>::GetDelayedDataReference
          (TVariable<float> *this,TDataReadReference<float> *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TDataReadReference<float> *pTVar4;
  
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,100,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<float> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<float> *)(*pcVar2)();
      return pTVar4;
    }
  }
  *(undefined ***)__return_storage_ptr__ = &___7__TDataReference_M_Metasound__6B_;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 =
       *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8;
  lVar1 = *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10;
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ = &___7__TDataReadReference_M_Metasound__6B_;
  return __return_storage_ptr__;
}

// GetDelayedDataReference @ 14af99e60

TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>::GetDelayedDataReference
          (TVariable<TArray<int,TSizedDefaultAllocator<32>_>_> *this,
          TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar4;
  
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,100,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)(*pcVar2)();
      return pTVar4;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 =
       *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8;
  lVar1 = *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10;
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  return __return_storage_ptr__;
}

// GetDelayedDataReference @ 14af99f10

TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>::GetDelayedDataReference
          (TVariable<TArray<float,TSizedDefaultAllocator<32>_>_> *this,
          TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar4;
  
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,100,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)(*pcVar2)();
      return pTVar4;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 =
       *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8;
  lVar1 = *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10;
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  return __return_storage_ptr__;
}

// GetDelayedDataReference @ 14af99fc0

TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *
__thiscall
Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
GetDelayedDataReference
          (TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *this,
          TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *pTVar4
  ;
  
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,100,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                *)(*pcVar2)();
      return pTVar4;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 =
       *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8;
  lVar1 = *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10;
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetDelayedDataReference @ 14af9a070

TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
GetDelayedDataReference
          (TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this,
          TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *pTVar4;
  
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,100,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 =
       *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8;
  lVar1 = *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10;
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetDelayedDataReference @ 14af9a120

TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>::GetDelayedDataReference
          (TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,
          TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *pTVar4;
  
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,100,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)(*pcVar2)();
      return pTVar4;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 =
       *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8;
  lVar1 = *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10;
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetDelayedDataReference @ 14af9a1d0

TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::GetDelayedDataReference
          (TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this,
          TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
          *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *pTVar4;
  
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,100,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *)
               (*pcVar2)();
      return pTVar4;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReference_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 =
       *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8;
  lVar1 = *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10;
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &
       ___7__TDataReadReference_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
  ;
  return __return_storage_ptr__;
}

// GetDelayedDataReference @ 14af9a280

TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> * __thiscall
Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>::GetDelayedDataReference
          (TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,
          TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *pTVar4;
  
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,100,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)(*pcVar2)();
      return pTVar4;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 =
       *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8;
  lVar1 = *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10;
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_;
  return __return_storage_ptr__;
}

// GetDelayedDataReference @ 14af9a330

TDataReadReference<Metasound::FAudioBuffer> * __thiscall
Metasound::TVariable<Metasound::FAudioBuffer>::GetDelayedDataReference
          (TVariable<Metasound::FAudioBuffer> *this,
          TDataReadReference<Metasound::FAudioBuffer> *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TDataReadReference<Metasound::FAudioBuffer> *pTVar4;
  
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,100,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FAudioBuffer> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FAudioBuffer> *)(*pcVar2)();
      return pTVar4;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 =
       *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8;
  lVar1 = *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10;
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_VFAudioBuffer_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetDelayedDataReference @ 14af9a3e0

TDataReadReference<FMetasoundParameterStorageWrapper> * __thiscall
Metasound::TVariable<FMetasoundParameterStorageWrapper>::GetDelayedDataReference
          (TVariable<FMetasoundParameterStorageWrapper> *this,
          TDataReadReference<FMetasoundParameterStorageWrapper> *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TDataReadReference<FMetasoundParameterStorageWrapper> *pTVar4;
  
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,100,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<FMetasoundParameterStorageWrapper> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<FMetasoundParameterStorageWrapper> *)(*pcVar2)();
      return pTVar4;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_VFMetasoundParameterStorageWrapper___Metasound__6B_;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 =
       *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8;
  lVar1 = *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10;
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_VFMetasoundParameterStorageWrapper___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetDelayedDataReference @ 14af9a490

TDataReadReference<Metasound::FSendAddress> * __thiscall
Metasound::TVariable<Metasound::FSendAddress>::GetDelayedDataReference
          (TVariable<Metasound::FSendAddress> *this,
          TDataReadReference<Metasound::FSendAddress> *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TDataReadReference<Metasound::FSendAddress> *pTVar4;
  
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,100,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FSendAddress> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FSendAddress> *)(*pcVar2)();
      return pTVar4;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 =
       *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8;
  lVar1 = *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10;
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_VFSendAddress_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetDelayedDataReference @ 14af9a540

TDataReadReference<FString> * __thiscall
Metasound::TVariable<FString>::GetDelayedDataReference
          (TVariable<FString> *this,TDataReadReference<FString> *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TDataReadReference<FString> *pTVar4;
  
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,100,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<FString> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<FString> *)(*pcVar2)();
      return pTVar4;
    }
  }
  *(undefined ***)__return_storage_ptr__ = &___7__TDataReference_VFString___Metasound__6B_;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 =
       *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8;
  lVar1 = *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10;
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ = &___7__TDataReadReference_VFString___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetDelayedDataReference @ 14af9a5f0

TDataReadReference<Metasound::FTime> * __thiscall
Metasound::TVariable<Metasound::FTime>::GetDelayedDataReference
          (TVariable<Metasound::FTime> *this,
          TDataReadReference<Metasound::FTime> *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TDataReadReference<Metasound::FTime> *pTVar4;
  
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,100,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FTime> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FTime> *)(*pcVar2)();
      return pTVar4;
    }
  }
  *(undefined ***)__return_storage_ptr__ = &___7__TDataReference_VFTime_Metasound___Metasound__6B_;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 =
       *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8;
  lVar1 = *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10;
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_VFTime_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetDelayedDataReference @ 14af9a6a0

TDataReadReference<Metasound::FTrigger> * __thiscall
Metasound::TVariable<Metasound::FTrigger>::GetDelayedDataReference
          (TVariable<Metasound::FTrigger> *this,
          TDataReadReference<Metasound::FTrigger> *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TDataReadReference<Metasound::FTrigger> *pTVar4;
  
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,100,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FTrigger> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<Metasound::FTrigger> *)(*pcVar2)();
      return pTVar4;
    }
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 =
       *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8;
  lVar1 = *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10;
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ =
       &___7__TDataReadReference_VFTrigger_Metasound___Metasound__6B_;
  return __return_storage_ptr__;
}

// GetDelayedDataReference @ 14af9a750

TDataReadReference<bool> * __thiscall
Metasound::TVariable<bool>::GetDelayedDataReference
          (TVariable<bool> *this,TDataReadReference<bool> *__return_storage_ptr__)

{
  longlong lVar1;
  code *pcVar2;
  bool bVar3;
  TDataReadReference<bool> *pTVar4;
  
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("DelayedDataReference.IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Runtime\\Metasound\\Source\\MetasoundGraphCore\\Public\\MetasoundVariable.h"
                       ,100,L"InitDelayedDataReference must be called before accessing");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<bool> *)(*pcVar2)();
      return pTVar4;
    }
  }
  if ((this->DelayedDataReference).bIsSet == false) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsSet()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Misc\\Optional.h"
                       ,0x1bd,
                       L"It is an error to call GetValue() on an unset TOptional. Please either check IsSet() or use Get(DefaultValue) instead."
                      );
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      pTVar4 = (TDataReadReference<bool> *)(*pcVar2)();
      return pTVar4;
    }
  }
  *(undefined ***)__return_storage_ptr__ = &___7__TDataReference__N_Metasound__6B_;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 =
       *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8;
  lVar1 = *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10;
  *(longlong *)&__return_storage_ptr__->field_0x10 = lVar1;
  if (lVar1 != 0) {
    *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
  }
  *(undefined ***)__return_storage_ptr__ = &___7__TDataReadReference__N_Metasound__6B_;
  return __return_storage_ptr__;
}

// InitDelayedDataReference @ 14afa9da0

void __thiscall
Metasound::TVariable<int>::InitDelayedDataReference(TVariable<int> *this,FOperatorSettings *param_1)

{
  longlong lVar1;
  TDataWriteReference<int> *pTVar2;
  undefined1 local_28 [32];
  
  if ((this->DelayedDataReference).bIsSet == false) {
    pTVar2 = TDataLiteralFactory<int,Metasound::TDataWriteReference<int>_>::CreateExplicitArgs
                       ((TDataWriteReference<int> *)local_28,param_1,&this->Literal);
    if ((this->DelayedDataReference).bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<0> **)
                  &(this->DelayedDataReference).TypedValue.field_0x10);
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &___7__TDataReference_H_Metasound__6B_;
    *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8 =
         *(undefined8 *)&pTVar2->field_0x8;
    lVar1 = *(longlong *)&pTVar2->field_0x10;
    *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10 = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &___7__TDataWriteReference_H_Metasound__6B_;
    (this->DelayedDataReference).bIsSet = true;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
  }
  return;
}

// InitDelayedDataReference @ 14afa9e20

void __thiscall
Metasound::TVariable<float>::InitDelayedDataReference
          (TVariable<float> *this,FOperatorSettings *param_1)

{
  longlong lVar1;
  TDataWriteReference<float> *pTVar2;
  undefined1 local_28 [32];
  
  if ((this->DelayedDataReference).bIsSet == false) {
    pTVar2 = TDataLiteralFactory<float,Metasound::TDataWriteReference<float>_>::CreateExplicitArgs
                       ((TDataWriteReference<float> *)local_28,param_1,&this->Literal);
    if ((this->DelayedDataReference).bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<0> **)
                  &(this->DelayedDataReference).TypedValue.field_0x10);
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &___7__TDataReference_M_Metasound__6B_;
    *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8 =
         *(undefined8 *)&pTVar2->field_0x8;
    lVar1 = *(longlong *)&pTVar2->field_0x10;
    *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10 = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &___7__TDataWriteReference_M_Metasound__6B_;
    (this->DelayedDataReference).bIsSet = true;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
  }
  return;
}

// InitDelayedDataReference @ 14afa9ea0

void __thiscall
Metasound::TVariable<TArray<int,TSizedDefaultAllocator<32>_>_>::InitDelayedDataReference
          (TVariable<TArray<int,TSizedDefaultAllocator<32>_>_> *this,FOperatorSettings *param_1)

{
  longlong lVar1;
  TDataWriteReference<TArray<int,TSizedDefaultAllocator<32>_>_> *pTVar2;
  undefined1 local_28 [32];
  
  if ((this->DelayedDataReference).bIsSet == false) {
    pTVar2 = TDataLiteralFactory<TArray<int,TSizedDefaultAllocator<32>_>,Metasound::TDataWriteReference<TArray<int,TSizedDefaultAllocator<32>_>_>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<TArray<int,TSizedDefaultAllocator<32>_>_> *)local_28,
                        param_1,&this->Literal);
    if ((this->DelayedDataReference).bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<0> **)
                  &(this->DelayedDataReference).TypedValue.field_0x10);
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &___7__TDataReference_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_;
    *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8 =
         *(undefined8 *)&pTVar2->field_0x8;
    lVar1 = *(longlong *)&pTVar2->field_0x10;
    *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10 = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &___7__TDataWriteReference_V__TArray_HV__TSizedDefaultAllocator__0CA______Metasound__6B_;
    (this->DelayedDataReference).bIsSet = true;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
  }
  return;
}

// InitDelayedDataReference @ 14afa9f20

void __thiscall
Metasound::TVariable<TArray<float,TSizedDefaultAllocator<32>_>_>::InitDelayedDataReference
          (TVariable<TArray<float,TSizedDefaultAllocator<32>_>_> *this,FOperatorSettings *param_1)

{
  longlong lVar1;
  TDataWriteReference<TArray<float,TSizedDefaultAllocator<32>_>_> *pTVar2;
  undefined1 local_28 [32];
  
  if ((this->DelayedDataReference).bIsSet == false) {
    pTVar2 = TDataLiteralFactory<TArray<float,TSizedDefaultAllocator<32>_>,Metasound::TDataWriteReference<TArray<float,TSizedDefaultAllocator<32>_>_>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<TArray<float,TSizedDefaultAllocator<32>_>_> *)local_28,
                        param_1,&this->Literal);
    if ((this->DelayedDataReference).bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<0> **)
                  &(this->DelayedDataReference).TypedValue.field_0x10);
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &___7__TDataReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
    *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8 =
         *(undefined8 *)&pTVar2->field_0x8;
    lVar1 = *(longlong *)&pTVar2->field_0x10;
    *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10 = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &___7__TDataWriteReference_V__TArray_MV__TSizedDefaultAllocator__0CA______Metasound__6B_;
    (this->DelayedDataReference).bIsSet = true;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
  }
  return;
}

// InitDelayedDataReference @ 14afa9fa0

void __thiscall
Metasound::TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>::
InitDelayedDataReference
          (TVariable<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_> *this,
          FOperatorSettings *param_1)

{
  longlong lVar1;
  TDataWriteReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
  *pTVar2;
  undefined1 local_28 [32];
  
  if ((this->DelayedDataReference).bIsSet == false) {
    pTVar2 = TDataLiteralFactory<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>,Metasound::TDataWriteReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<TArray<FMetasoundParameterStorageWrapper,TSizedDefaultAllocator<32>_>_>
                         *)local_28,param_1,&this->Literal);
    if ((this->DelayedDataReference).bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<0> **)
                  &(this->DelayedDataReference).TypedValue.field_0x10);
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &
         ___7__TDataReference_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8 =
         *(undefined8 *)&pTVar2->field_0x8;
    lVar1 = *(longlong *)&pTVar2->field_0x10;
    *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10 = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &
         ___7__TDataWriteReference_V__TArray_VFMetasoundParameterStorageWrapper__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    (this->DelayedDataReference).bIsSet = true;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
  }
  return;
}

// InitDelayedDataReference @ 14afaa020

void __thiscall
Metasound::TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>::
InitDelayedDataReference
          (TVariable<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *this,
          FOperatorSettings *param_1)

{
  longlong lVar1;
  TDataWriteReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_> *pTVar2;
  undefined1 local_28 [32];
  
  if ((this->DelayedDataReference).bIsSet == false) {
    pTVar2 = TDataLiteralFactory<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>,Metasound::TDataWriteReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<TArray<Metasound::FSendAddress,TSizedDefaultAllocator<32>_>_>
                         *)local_28,param_1,&this->Literal);
    if ((this->DelayedDataReference).bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<0> **)
                  &(this->DelayedDataReference).TypedValue.field_0x10);
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &
         ___7__TDataReference_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8 =
         *(undefined8 *)&pTVar2->field_0x8;
    lVar1 = *(longlong *)&pTVar2->field_0x10;
    *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10 = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &
         ___7__TDataWriteReference_V__TArray_VFSendAddress_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    (this->DelayedDataReference).bIsSet = true;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
  }
  return;
}

// InitDelayedDataReference @ 14afaa0a0

void __thiscall
Metasound::TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_>::InitDelayedDataReference
          (TVariable<TArray<FString,TSizedDefaultAllocator<32>_>_> *this,FOperatorSettings *param_1)

{
  longlong lVar1;
  TDataWriteReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *pTVar2;
  undefined1 local_28 [32];
  
  if ((this->DelayedDataReference).bIsSet == false) {
    pTVar2 = TDataLiteralFactory<TArray<FString,TSizedDefaultAllocator<32>_>,Metasound::TDataWriteReference<TArray<FString,TSizedDefaultAllocator<32>_>_>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<TArray<FString,TSizedDefaultAllocator<32>_>_> *)
                        local_28,param_1,&this->Literal);
    if ((this->DelayedDataReference).bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<0> **)
                  &(this->DelayedDataReference).TypedValue.field_0x10);
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &
         ___7__TDataReference_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8 =
         *(undefined8 *)&pTVar2->field_0x8;
    lVar1 = *(longlong *)&pTVar2->field_0x10;
    *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10 = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &
         ___7__TDataWriteReference_V__TArray_VFString__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    (this->DelayedDataReference).bIsSet = true;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
  }
  return;
}

// InitDelayedDataReference @ 14afaa120

void __thiscall
Metasound::TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>::
InitDelayedDataReference
          (TVariable<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *this,
          FOperatorSettings *param_1)

{
  longlong lVar1;
  TDataWriteReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_> *pTVar2;
  undefined1 local_28 [32];
  
  if ((this->DelayedDataReference).bIsSet == false) {
    pTVar2 = TDataLiteralFactory<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>,Metasound::TDataWriteReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<TArray<Metasound::FTime,TSizedDefaultAllocator<32>_>_>
                         *)local_28,param_1,&this->Literal);
    if ((this->DelayedDataReference).bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<0> **)
                  &(this->DelayedDataReference).TypedValue.field_0x10);
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &
         ___7__TDataReference_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8 =
         *(undefined8 *)&pTVar2->field_0x8;
    lVar1 = *(longlong *)&pTVar2->field_0x10;
    *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10 = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &
         ___7__TDataWriteReference_V__TArray_VFTime_Metasound__V__TSizedDefaultAllocator__0CA______Metasound__6B_
    ;
    (this->DelayedDataReference).bIsSet = true;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
  }
  return;
}

// InitDelayedDataReference @ 14afaa1a0

void __thiscall
Metasound::TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_>::InitDelayedDataReference
          (TVariable<TArray<bool,TSizedDefaultAllocator<32>_>_> *this,FOperatorSettings *param_1)

{
  longlong lVar1;
  TDataWriteReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *pTVar2;
  undefined1 local_28 [32];
  
  if ((this->DelayedDataReference).bIsSet == false) {
    pTVar2 = TDataLiteralFactory<TArray<bool,TSizedDefaultAllocator<32>_>,Metasound::TDataWriteReference<TArray<bool,TSizedDefaultAllocator<32>_>_>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<TArray<bool,TSizedDefaultAllocator<32>_>_> *)local_28,
                        param_1,&this->Literal);
    if ((this->DelayedDataReference).bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<0> **)
                  &(this->DelayedDataReference).TypedValue.field_0x10);
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &___7__TDataReference_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_;
    *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8 =
         *(undefined8 *)&pTVar2->field_0x8;
    lVar1 = *(longlong *)&pTVar2->field_0x10;
    *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10 = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &___7__TDataWriteReference_V__TArray__NV__TSizedDefaultAllocator__0CA______Metasound__6B_;
    (this->DelayedDataReference).bIsSet = true;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
  }
  return;
}

// InitDelayedDataReference @ 14afaa220

void __thiscall
Metasound::TVariable<Metasound::FAudioBuffer>::InitDelayedDataReference
          (TVariable<Metasound::FAudioBuffer> *this,FOperatorSettings *param_1)

{
  longlong lVar1;
  TDataWriteReference<Metasound::FAudioBuffer> *pTVar2;
  undefined1 local_28 [32];
  
  if ((this->DelayedDataReference).bIsSet == false) {
    pTVar2 = TDataLiteralFactory<Metasound::FAudioBuffer,Metasound::TDataWriteReference<Metasound::FAudioBuffer>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<Metasound::FAudioBuffer> *)local_28,param_1,
                        &this->Literal);
    if ((this->DelayedDataReference).bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<0> **)
                  &(this->DelayedDataReference).TypedValue.field_0x10);
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &___7__TDataReference_VFAudioBuffer_Metasound___Metasound__6B_;
    *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8 =
         *(undefined8 *)&pTVar2->field_0x8;
    lVar1 = *(longlong *)&pTVar2->field_0x10;
    *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10 = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &___7__TDataWriteReference_VFAudioBuffer_Metasound___Metasound__6B_;
    (this->DelayedDataReference).bIsSet = true;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
  }
  return;
}

// InitDelayedDataReference @ 14afaa2a0

void __thiscall
Metasound::TVariable<FMetasoundParameterStorageWrapper>::InitDelayedDataReference
          (TVariable<FMetasoundParameterStorageWrapper> *this,FOperatorSettings *param_1)

{
  longlong lVar1;
  TDataWriteReference<FMetasoundParameterStorageWrapper> *pTVar2;
  undefined1 local_28 [32];
  
  if ((this->DelayedDataReference).bIsSet == false) {
    pTVar2 = TDataLiteralFactory<FMetasoundParameterStorageWrapper,Metasound::TDataWriteReference<FMetasoundParameterStorageWrapper>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<FMetasoundParameterStorageWrapper> *)local_28,param_1,
                        &this->Literal);
    if ((this->DelayedDataReference).bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<0> **)
                  &(this->DelayedDataReference).TypedValue.field_0x10);
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &___7__TDataReference_VFMetasoundParameterStorageWrapper___Metasound__6B_;
    *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8 =
         *(undefined8 *)&pTVar2->field_0x8;
    lVar1 = *(longlong *)&pTVar2->field_0x10;
    *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10 = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &___7__TDataWriteReference_VFMetasoundParameterStorageWrapper___Metasound__6B_;
    (this->DelayedDataReference).bIsSet = true;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
  }
  return;
}

// InitDelayedDataReference @ 14afaa320

void __thiscall
Metasound::TVariable<Metasound::FSendAddress>::InitDelayedDataReference
          (TVariable<Metasound::FSendAddress> *this,FOperatorSettings *param_1)

{
  longlong lVar1;
  TDataWriteReference<Metasound::FSendAddress> *pTVar2;
  undefined1 local_28 [32];
  
  if ((this->DelayedDataReference).bIsSet == false) {
    pTVar2 = TDataLiteralFactory<Metasound::FSendAddress,Metasound::TDataWriteReference<Metasound::FSendAddress>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<Metasound::FSendAddress> *)local_28,param_1,
                        &this->Literal);
    if ((this->DelayedDataReference).bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<0> **)
                  &(this->DelayedDataReference).TypedValue.field_0x10);
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &___7__TDataReference_VFSendAddress_Metasound___Metasound__6B_;
    *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8 =
         *(undefined8 *)&pTVar2->field_0x8;
    lVar1 = *(longlong *)&pTVar2->field_0x10;
    *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10 = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &___7__TDataWriteReference_VFSendAddress_Metasound___Metasound__6B_;
    (this->DelayedDataReference).bIsSet = true;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
  }
  return;
}

// InitDelayedDataReference @ 14afaa3a0

void __thiscall
Metasound::TVariable<FString>::InitDelayedDataReference
          (TVariable<FString> *this,FOperatorSettings *param_1)

{
  longlong lVar1;
  TDataWriteReference<FString> *pTVar2;
  undefined1 local_28 [32];
  
  if ((this->DelayedDataReference).bIsSet == false) {
    pTVar2 = TDataLiteralFactory<FString,Metasound::TDataWriteReference<FString>_>::
             CreateExplicitArgs((TDataWriteReference<FString> *)local_28,param_1,&this->Literal);
    if ((this->DelayedDataReference).bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<0> **)
                  &(this->DelayedDataReference).TypedValue.field_0x10);
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &___7__TDataReference_VFString___Metasound__6B_;
    *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8 =
         *(undefined8 *)&pTVar2->field_0x8;
    lVar1 = *(longlong *)&pTVar2->field_0x10;
    *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10 = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &___7__TDataWriteReference_VFString___Metasound__6B_;
    (this->DelayedDataReference).bIsSet = true;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
  }
  return;
}

// InitDelayedDataReference @ 14afaa420

void __thiscall
Metasound::TVariable<Metasound::FTime>::InitDelayedDataReference
          (TVariable<Metasound::FTime> *this,FOperatorSettings *param_1)

{
  longlong lVar1;
  TDataWriteReference<Metasound::FTime> *pTVar2;
  undefined1 local_28 [32];
  
  if ((this->DelayedDataReference).bIsSet == false) {
    pTVar2 = TDataLiteralFactory<Metasound::FTime,Metasound::TDataWriteReference<Metasound::FTime>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<Metasound::FTime> *)local_28,param_1,&this->Literal);
    if ((this->DelayedDataReference).bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<0> **)
                  &(this->DelayedDataReference).TypedValue.field_0x10);
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &___7__TDataReference_VFTime_Metasound___Metasound__6B_;
    *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8 =
         *(undefined8 *)&pTVar2->field_0x8;
    lVar1 = *(longlong *)&pTVar2->field_0x10;
    *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10 = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &___7__TDataWriteReference_VFTime_Metasound___Metasound__6B_;
    (this->DelayedDataReference).bIsSet = true;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
  }
  return;
}

// InitDelayedDataReference @ 14afaa4a0

void __thiscall
Metasound::TVariable<Metasound::FTrigger>::InitDelayedDataReference
          (TVariable<Metasound::FTrigger> *this,FOperatorSettings *param_1)

{
  longlong lVar1;
  TDataWriteReference<Metasound::FTrigger> *pTVar2;
  undefined1 local_28 [32];
  
  if ((this->DelayedDataReference).bIsSet == false) {
    pTVar2 = TDataLiteralFactory<Metasound::FTrigger,Metasound::TDataWriteReference<Metasound::FTrigger>_>
             ::CreateExplicitArgs
                       ((TDataWriteReference<Metasound::FTrigger> *)local_28,param_1,&this->Literal)
    ;
    if ((this->DelayedDataReference).bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<0> **)
                  &(this->DelayedDataReference).TypedValue.field_0x10);
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &___7__TDataReference_VFTrigger_Metasound___Metasound__6B_;
    *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8 =
         *(undefined8 *)&pTVar2->field_0x8;
    lVar1 = *(longlong *)&pTVar2->field_0x10;
    *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10 = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &___7__TDataWriteReference_VFTrigger_Metasound___Metasound__6B_;
    (this->DelayedDataReference).bIsSet = true;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
  }
  return;
}

// InitDelayedDataReference @ 14afaa520

void __thiscall
Metasound::TVariable<bool>::InitDelayedDataReference
          (TVariable<bool> *this,FOperatorSettings *param_1)

{
  longlong lVar1;
  TDataWriteReference<bool> *pTVar2;
  undefined1 local_28 [32];
  
  if ((this->DelayedDataReference).bIsSet == false) {
    pTVar2 = TDataLiteralFactory<bool,Metasound::TDataWriteReference<bool>_>::CreateExplicitArgs
                       ((TDataWriteReference<bool> *)local_28,param_1,&this->Literal);
    if ((this->DelayedDataReference).bIsSet != false) {
      SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
                (*(TReferenceControllerBase<0> **)
                  &(this->DelayedDataReference).TypedValue.field_0x10);
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &___7__TDataReference__N_Metasound__6B_;
    *(undefined8 *)&(this->DelayedDataReference).TypedValue.field_0x8 =
         *(undefined8 *)&pTVar2->field_0x8;
    lVar1 = *(longlong *)&pTVar2->field_0x10;
    *(longlong *)&(this->DelayedDataReference).TypedValue.field_0x10 = lVar1;
    if (lVar1 != 0) {
      *(int *)(lVar1 + 8) = *(int *)(lVar1 + 8) + 1;
    }
    *(undefined ***)&(this->DelayedDataReference).TypedValue =
         &___7__TDataWriteReference__N_Metasound__6B_;
    (this->DelayedDataReference).bIsSet = true;
    SharedPointerInternals::TReferenceControllerBase<0>::ReleaseSharedReferenceNoInline
              ((TReferenceControllerBase<0> *)local_28._16_8_);
  }
  return;
}

