// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NiagaraUIRenderer
// Functions: 34

// GetDesiredWidgetSize_WrapperImpl @ 14d28dd20

void __cdecl UNiagaraSystemWidget::GetDesiredWidgetSize_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x218);
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x210);
  *(undefined8 *)((longlong)param_2 + 8) = uVar1;
  return;
}

// SetDesiredWidgetSize_WrapperImpl @ 14d28dd40

void __cdecl UNiagaraSystemWidget::SetDesiredWidgetSize_WrapperImpl(void *param_1,void *param_2)

{
  SWidget *pSVar1;
  double dVar2;
  double dVar3;
  undefined8 uVar4;
  
  uVar4 = *(undefined8 *)((longlong)param_2 + 8);
  pSVar1 = *(SWidget **)((longlong)param_1 + 0x240);
  *(undefined8 *)((longlong)param_1 + 0x210) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 0x218) = uVar4;
  if (pSVar1 != (SWidget *)0x0) {
    dVar2 = *(double *)param_2;
    dVar3 = *(double *)((longlong)param_2 + 8);
    SlateAttributePrivate::FSlateAttributeImpl::ProtectedUnregisterAttribute
              ((FSlateAttributeImpl *)
               ((longlong)&pSVar1[1].PersistentState.WidgetStyle.ForegroundColor.field0_0x0 + 8),
               pSVar1,Member);
    if ((dVar2 != *(double *)
                   ((longlong)&pSVar1[1].PersistentState.WidgetStyle.ForegroundColor.field0_0x0 + 8)
        ) || (dVar3 != *(double *)
                        &pSVar1[1].PersistentState.WidgetStyle.SubduedForeground.field0_0x0)) {
      *(double *)((longlong)&pSVar1[1].PersistentState.WidgetStyle.ForegroundColor.field0_0x0 + 8) =
           dVar2;
      *(double *)&pSVar1[1].PersistentState.WidgetStyle.SubduedForeground.field0_0x0 = dVar3;
      SlateAttributePrivate::FSlateAttributeImpl::ProtectedInvalidateWidget
                ((FSlateAttributeImpl *)
                 ((longlong)&pSVar1[1].PersistentState.WidgetStyle.ForegroundColor.field0_0x0 + 8),
                 pSVar1,Member,None);
    }
  }
  return;
}

// GetColorAndOpacity_WrapperImpl @ 14d28ddd0

void __cdecl UNiagaraSystemWidget::GetColorAndOpacity_WrapperImpl(void *param_1,void *param_2)

{
  undefined8 uVar1;
  
  uVar1 = *(undefined8 *)((longlong)param_1 + 0x228);
  *(undefined8 *)param_2 = *(undefined8 *)((longlong)param_1 + 0x220);
  *(undefined8 *)((longlong)param_2 + 8) = uVar1;
  return;
}

// SetColorAndOpacity_WrapperImpl @ 14d28ddf0

void __cdecl UNiagaraSystemWidget::SetColorAndOpacity_WrapperImpl(void *param_1,void *param_2)

{
  float *this;
  SWidget *pSVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  undefined8 uVar6;
  uint local_28;
  
  uVar6 = *(undefined8 *)((longlong)param_2 + 8);
  pSVar1 = *(SWidget **)((longlong)param_1 + 0x240);
  *(undefined8 *)((longlong)param_1 + 0x220) = *(undefined8 *)param_2;
  *(undefined8 *)((longlong)param_1 + 0x228) = uVar6;
  if (pSVar1 != (SWidget *)0x0) {
    this = &pSVar1[1].PersistentState.WidgetStyle.SubduedForeground.field0_0x0._s_0.B;
    fVar2 = *(float *)param_2;
    fVar3 = *(float *)((longlong)param_2 + 4);
    fVar4 = *(float *)((longlong)param_2 + 8);
    fVar5 = *(float *)((longlong)param_2 + 0xc);
    local_28 = local_28 & 0xffffff00;
    SlateAttributePrivate::FSlateAttributeImpl::ProtectedUnregisterAttribute
              ((FSlateAttributeImpl *)this,pSVar1,Member);
    if ((((fVar2 != *this) ||
         (fVar3 != pSVar1[1].PersistentState.WidgetStyle.SubduedForeground.field0_0x0._s_0.A)) ||
        (fVar4 != *(float *)&pSVar1[1].PersistentState.CachedElementHandle.Ptr.Object)) ||
       ((fVar5 != *(float *)((longlong)&pSVar1[1].PersistentState.CachedElementHandle.Ptr.Object + 4
                            ) ||
        (*(char *)&pSVar1[1].PersistentState.CachedElementHandle.Ptr.WeakReferenceCount.
                   ReferenceController != '\0')))) {
      *this = fVar2;
      pSVar1[1].PersistentState.WidgetStyle.SubduedForeground.field0_0x0._s_0.A = fVar3;
      *(float *)&pSVar1[1].PersistentState.CachedElementHandle.Ptr.Object = fVar4;
      *(float *)((longlong)&pSVar1[1].PersistentState.CachedElementHandle.Ptr.Object + 4) = fVar5;
      *(uint *)&pSVar1[1].PersistentState.CachedElementHandle.Ptr.WeakReferenceCount.
                ReferenceController = local_28;
      SlateAttributePrivate::FSlateAttributeImpl::ProtectedInvalidateWidget
                ((FSlateAttributeImpl *)this,pSVar1,Member,None);
    }
  }
  return;
}

// StaticClass @ 14d28dea0

UClass * __cdecl UNiagaraSystemWidget::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraSystemWidget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NiagaraUIRenderer",L"NiagaraSystemWidget",
               &Z_Registration_Info_UClass_UNiagaraSystemWidget.InnerSingleton,
               StaticRegisterNativesUNiagaraSystemWidget,0x260,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNiagaraSystemWidget>,
               InternalVTableHelperCtorCaller<UNiagaraSystemWidget>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraSystemWidget.InnerSingleton;
}

// UNiagaraSystemWidget @ 14d292710

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UNiagaraSystemWidget * __thiscall
UNiagaraSystemWidget::UNiagaraSystemWidget(UNiagaraSystemWidget *this,FVTableHelper *param_1)

{
  FLinearColor FVar1;
  
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  *(undefined8 *)&(this->MaterialRemapList).field_0x8 = 0;
  (this->NiagaraSystemReference).field0_0x0.DebugPtr = (UNiagaraSystem *)0x0;
  *(undefined8 *)&this->MaterialRemapList = 0;
  *(undefined8 *)&(this->MaterialRemapList).field_0x20 = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined4 *)&(this->MaterialRemapList).field_0x28 = 0;
  *(undefined4 *)&(this->MaterialRemapList).field_0x2c = 0x80;
  *(undefined4 *)&(this->MaterialRemapList).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MaterialRemapList).field_0x34 = 0;
  *(undefined8 *)&(this->MaterialRemapList).field_0x40 = 0;
  *(undefined4 *)&(this->MaterialRemapList).field_0x48 = 0;
  (this->DesiredWidgetSize).field0_0x0._s_0.X = 256.0;
  (this->DesiredWidgetSize).field0_0x0._s_0.Y = 256.0;
  this->AutoActivate = true;
  FVar1 = FLinearColor::White;
  this->TickWhenPaused = false;
  this->FakeDepthScale = false;
  this->FakeDepthScaleDistance = 1000.0;
  (this->ColorAndOpacity).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar1.field0_0x0;
  (this->NiagaraSlateWidget).Object = (SNiagaraUISystemWidget *)0x0;
  (this->NiagaraSlateWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->NiagaraActor).field0_0x0.DebugPtr = (ANiagaraUIActor *)0x0;
  (this->NiagaraComponent).field0_0x0.DebugPtr = (UNiagaraUIComponent *)0x0;
  this->ShowDebugSystemInWorld = false;
  this->PassDynamicParametersFromRibbon = false;
  this->DisableWarnings = false;
  this->RestartSimulationOnPropertyChange = true;
  return this;
}

// UNiagaraSystemWidget @ 14d292800

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UNiagaraSystemWidget * __thiscall
UNiagaraSystemWidget::UNiagaraSystemWidget(UNiagaraSystemWidget *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  FLinearColor FVar2;
  
  UWidget::UWidget((UWidget *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  *(undefined8 *)&(this->MaterialRemapList).field_0x8 = 0;
  (this->NiagaraSystemReference).field0_0x0.DebugPtr = (UNiagaraSystem *)0x0;
  *(undefined8 *)&this->MaterialRemapList = 0;
  *(undefined8 *)&(this->MaterialRemapList).field_0x20 = 0;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  *(undefined4 *)&(this->MaterialRemapList).field_0x28 = 0;
  *(undefined4 *)&(this->MaterialRemapList).field_0x2c = 0x80;
  *(undefined4 *)&(this->MaterialRemapList).field_0x30 = 0xffffffff;
  *(undefined4 *)&(this->MaterialRemapList).field_0x34 = 0;
  *(undefined8 *)&(this->MaterialRemapList).field_0x40 = 0;
  *(undefined4 *)&(this->MaterialRemapList).field_0x48 = 0;
  (this->DesiredWidgetSize).field0_0x0._s_0.X = 256.0;
  (this->DesiredWidgetSize).field0_0x0._s_0.Y = 256.0;
  this->AutoActivate = true;
  FVar2 = FLinearColor::White;
  this->TickWhenPaused = false;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 | 0x10;
  this->FakeDepthScale = false;
  (this->ColorAndOpacity).field0_0x0._s_0 = (FLinearColor_u_0_s_0)FVar2.field0_0x0;
  (this->NiagaraSlateWidget).Object = (SNiagaraUISystemWidget *)0x0;
  (this->NiagaraSlateWidget).SharedReferenceCount.ReferenceController =
       (TReferenceControllerBase<1> *)0x0;
  (this->NiagaraActor).field0_0x0.DebugPtr = (ANiagaraUIActor *)0x0;
  (this->NiagaraComponent).field0_0x0.DebugPtr = (UNiagaraUIComponent *)0x0;
  this->FakeDepthScaleDistance = 1000.0;
  this->ShowDebugSystemInWorld = false;
  this->PassDynamicParametersFromRibbon = false;
  this->DisableWarnings = false;
  this->RestartSimulationOnPropertyChange = true;
  return this;
}

// ~UNiagaraSystemWidget @ 14d292cf0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UNiagaraSystemWidget::~UNiagaraSystemWidget(UNiagaraSystemWidget *this)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UVisual__;
  this->_padding_ = (longlong)&_vftable__for__INotifyFieldValueChanged__;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            ((this->NiagaraSlateWidget).SharedReferenceCount.ReferenceController);
  *(undefined4 *)&(this->MaterialRemapList).field_0x48 = 0;
  pvVar1 = *(void **)&(this->MaterialRemapList).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->MaterialRemapList);
  UWidget::~UWidget((UWidget *)this);
  return;
}

// ActivateSystem @ 14d294060

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UNiagaraSystemWidget::ActivateSystem(UNiagaraSystemWidget *this,bool param_1)

{
  UNiagaraUIComponent *pUVar1;
  
  pUVar1 = (this->NiagaraComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UNiagaraUIComponent *)0x0) {
    if (pUVar1->HasSetTransform != false) {
                    /* WARNING: Could not recover jumptable at 0x00014d29407c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*(longlong *)pUVar1 + 0x2b8))(pUVar1);
      return;
    }
    pUVar1->AutoActivateParticle = true;
  }
  return;
}

// DeactivateSystem @ 14d297340

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall UNiagaraSystemWidget::DeactivateSystem(UNiagaraSystemWidget *this)

{
  UNiagaraUIComponent *pUVar1;
  
  pUVar1 = (this->NiagaraComponent).field0_0x0.DebugPtr;
  if (pUVar1 != (UNiagaraUIComponent *)0x0) {
    (**(code **)(*(longlong *)pUVar1 + 0x2c0))(pUVar1);
    pUVar1->AutoActivateParticle = false;
  }
  return;
}

// GetColorAndOpacity @ 14d297660

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

FLinearColor * __thiscall UNiagaraSystemWidget::GetColorAndOpacity(UNiagaraSystemWidget *this)

{
  return &this->ColorAndOpacity;
}

// GetDesiredWidgetSize @ 14d297670

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TVector2<double> * __thiscall UNiagaraSystemWidget::GetDesiredWidgetSize(UNiagaraSystemWidget *this)

{
  return &this->DesiredWidgetSize;
}

// GetNiagaraComponent @ 14d297680

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UNiagaraUIComponent * __thiscall
UNiagaraSystemWidget::GetNiagaraComponent(UNiagaraSystemWidget *this)

{
  return (this->NiagaraComponent).field0_0x0.DebugPtr;
}

// GetPrivateStaticClass @ 14d297750

UClass * __cdecl UNiagaraSystemWidget::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UNiagaraSystemWidget.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NiagaraUIRenderer",L"NiagaraSystemWidget",
               &Z_Registration_Info_UClass_UNiagaraSystemWidget.InnerSingleton,
               StaticRegisterNativesUNiagaraSystemWidget,0x260,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UNiagaraSystemWidget>,
               InternalVTableHelperCtorCaller<UNiagaraSystemWidget>,local_res8,UWidget::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UNiagaraSystemWidget.InnerSingleton;
}

// GetRemapMaterial @ 14d297af0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

UMaterialInterface * __thiscall
UNiagaraSystemWidget::GetRemapMaterial(UNiagaraSystemWidget *this,UMaterialInterface *param_1)

{
  FObjectPtr_u_0 *pFVar1;
  UMaterialInterface *local_res8 [4];
  
  local_res8[0] = param_1;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar1 = (FObjectPtr_u_0 *)
           TMapBase<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,0>_>
           ::Find((TMapBase<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,0>_>
                   *)&this->MaterialRemapList,(TObjectPtr<UMaterialInterface_const_>)local_res8);
  if (pFVar1 != (FObjectPtr_u_0 *)0x0) {
    return (UMaterialInterface *)(FObjectPtr)pFVar1->Handle;
  }
  return (UMaterialInterface *)0x0;
}

// InitializeNiagaraUI @ 14d297b80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNiagaraSystemWidget::InitializeNiagaraUI(UNiagaraSystemWidget *this)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UWorld *this_00;
  UClass *pUVar4;
  AActor *pAVar5;
  FString *pFVar6;
  UNiagaraUIComponent *pUVar7;
  SNiagaraUISystemWidget *pSVar8;
  longlong *plVar9;
  wchar_t *pwVar10;
  AActor *pAVar11;
  wchar_t *pwVar12;
  undefined1 auStackY_f8 [32];
  FWeakObjectPtr local_c8;
  FWeakObjectPtr local_c0;
  UNiagaraUIComponent *local_b8;
  FString local_b0;
  FString local_a0;
  undefined1 local_88 [112];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_f8;
  this_00 = (UWorld *)(**(code **)(this->_padding_ + 0x180))();
  if (((this_00 != (UWorld *)0x0) && (this_00->bIsTearingDown == '\0')) &&
     ((this_00->PersistentLevel).field0_0x0.DebugPtr != (ULevel *)0x0)) {
    pAVar11 = (AActor *)0x0;
    if ((this->NiagaraActor).field0_0x0.DebugPtr == (ANiagaraUIActor *)0x0) {
      FActorSpawnParameters::FActorSpawnParameters((FActorSpawnParameters *)local_88);
      local_88._52_4_ = local_88._52_4_ | RF_Transient;
      local_88[0x30] = AlwaysSpawn;
      pUVar4 = ANiagaraUIActor::StaticClass();
      pAVar5 = UWorld::SpawnActor(this_00,pUVar4,&UE::Math::TVector<double>::ZeroVector,
                                  &UE::Math::TRotator<double>::ZeroRotator,
                                  (FActorSpawnParameters *)local_88);
      if (pAVar5 != (AActor *)0x0) {
        pUVar4 = ANiagaraUIActor::StaticClass();
        iVar1 = (int)pUVar4->_padding_;
        if ((*(int *)(pAVar5->_padding_ + 0x38) < iVar1) ||
           (pAVar11 = pAVar5,
           (longlong *)
           *(undefined1 **)(*(longlong *)(pAVar5->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
           &pUVar4->_padding_)) {
          pFVar6 = GetTypeName<ANiagaraUIActor>(&local_b0);
          pwVar10 = L"";
          if ((pFVar6->Data).ArrayNum == 0) {
            pwVar12 = L"";
          }
          else {
            pwVar12 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
          }
          pFVar6 = GetFullNameForCastLogError<AActor>(&local_a0,pAVar5);
          if ((pFVar6->Data).ArrayNum != 0) {
            pwVar10 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
          }
                    /* WARNING: Subroutine does not return */
          CastLogError(pwVar10,pwVar12);
        }
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pAVar11 != (AActor *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pAVar11);
      }
      (this->NiagaraActor).field0_0x0.DebugPtr = (ANiagaraUIActor *)pAVar11;
      if (local_88._64_8_ != 0) {
        plVar9 = (longlong *)(local_88 + 0x50);
        if ((longlong *)local_88._104_8_ != (longlong *)0x0) {
          plVar9 = (longlong *)local_88._104_8_;
        }
        (**(code **)(*plVar9 + 0x10))();
      }
    }
    pUVar7 = ANiagaraUIActor::SpawnNewNiagaraUIComponent
                       ((this->NiagaraActor).field0_0x0.DebugPtr,
                        (this->NiagaraSystemReference).field0_0x0.DebugPtr,this->AutoActivate,
                        this->ShowDebugSystemInWorld,this->TickWhenPaused);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar7 != (UNiagaraUIComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    (this->NiagaraComponent).field0_0x0.DebugPtr = pUVar7;
    pSVar8 = TSharedPtr<SNiagaraUISystemWidget,1>::operator->(&this->NiagaraSlateWidget);
    pUVar7 = (this->NiagaraComponent).field0_0x0.DebugPtr;
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      if (pUVar7 != (UNiagaraUIComponent *)0x0) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar7 != (UNiagaraUIComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar7);
      }
    }
    local_c8.ObjectIndex = 0;
    local_c8.ObjectSerialNumber = 0;
    local_b8 = pUVar7;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (pUVar7 != (UNiagaraUIComponent *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar7);
    }
    FWeakObjectPtr::operator=(&local_c8,(FObjectPtr)&local_b8);
    local_c0 = local_c8;
    bVar3 = TWeakObjectPtr<UNiagaraUIComponent,FWeakObjectPtr>::UEOpEquals
                      ((TWeakObjectPtr<UNiagaraUIComponent,FWeakObjectPtr> *)&local_c0,(void *)0x0);
    if (bVar3) {
      bVar3 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<8374471364253319302>,false,
                         "C:\\Workspace\\ProjectDS\\Client\\Plugins\\NiagaraUIRenderer\\Source\\NiagaraUIRenderer\\Private\\SNiagaraUISystemWidget.cpp"
                         ,0x86,"NiagaraComponentIn != nullptr");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    else {
      (pSVar8->NiagaraComponent).WeakPtr = local_c0;
    }
  }
  return;
}

// RebuildWidget @ 14d298450

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

TSharedRef<SWidget,1> * __thiscall
UNiagaraSystemWidget::RebuildWidget
          (UNiagaraSystemWidget *this,TSharedRef<SWidget,1> *__return_storage_ptr__)

{
  TSharedPtr<SNiagaraUISystemWidget,1> *pTVar1;
  SNiagaraUISystemWidget *pSVar2;
  TReferenceControllerBase<1> *pTVar3;
  code *pcVar4;
  undefined8 uVar5;
  bool bVar6;
  FArguments *pFVar7;
  TSharedRef<SNiagaraUISystemWidget,1> *pTVar8;
  TSharedRef<SWidget,1> *pTVar9;
  T0RequiredArgs local_res8 [8];
  FLLMScope local_res10 [2];
  FName local_res18;
  FMemScope local_res20;
  uint local_338;
  undefined1 local_330 [8];
  ForAnyElementType FStack_328;
  ulonglong local_320;
  SNiagaraUISystemWidget *local_318;
  FSharedReferencer<1> local_310;
  double local_308;
  double dStack_300;
  undefined1 local_2f8;
  undefined1 local_2f0 [8];
  ForAnyElementType FStack_2e8;
  ulonglong local_2e0;
  FDestructionSentinel local_2d8;
  FDestructionSentinel local_2c0;
  TSharedRef<SNiagaraUISystemWidget,1> local_2a8;
  TSlateDecl<SNiagaraUISystemWidget,RequiredArgs::T0RequiredArgs> local_298;
  FArguments local_280;
  
  pFVar7 = SNiagaraUISystemWidget::FArguments::FArguments(&local_280);
  local_308 = (this->DesiredWidgetSize).field0_0x0._s_0.X;
  dStack_300 = (this->DesiredWidgetSize).field0_0x0._s_0.Y;
  local_2f8 = 1;
  local_2e0 = 0;
  local_2f0 = (undefined1  [8])0x0;
  FStack_2e8.Data = (FScriptContainerElement *)0x0;
  (pFVar7->_DesiredSize).Value.field0_0x0._s_0.X = local_308;
  (pFVar7->_DesiredSize).Value.field0_0x0._s_0.Y = dStack_300;
  (pFVar7->_DesiredSize).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar7->_DesiredSize).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_2f0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_2f0,
             (FWriteAccessScope *)&local_2d8);
  if (((int)local_2e0 != 0) && (FStack_2e8.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_2e8.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_2e8,0,0,0x10);
    local_2e0 = local_2e0 & 0xffffffff00000000;
  }
  if (local_2d8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2d8.Accessor,&local_2d8);
  }
  if (FStack_2e8.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_2e8.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_2f0);
  uVar5 = *(undefined8 *)((longlong)&(this->ColorAndOpacity).field0_0x0 + 8);
  local_338 = local_338 & 0xffffff00;
  local_320 = 0;
  local_330 = (undefined1  [8])0x0;
  FStack_328.Data = (FScriptContainerElement *)0x0;
  *(undefined8 *)&(pFVar7->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 =
       *(undefined8 *)&(this->ColorAndOpacity).field0_0x0;
  *(undefined8 *)((longlong)&(pFVar7->_ColorAndOpacity).Value.SpecifiedColor.field0_0x0 + 8) = uVar5
  ;
  (pFVar7->_ColorAndOpacity).Value.ColorUseRule = (undefined1)local_338;
  (pFVar7->_ColorAndOpacity).Value.ColorTableId = local_338._1_1_;
  *(undefined2 *)&(pFVar7->_ColorAndOpacity).Value.field_0x12 = local_338._2_2_;
  (pFVar7->_ColorAndOpacity).bIsSet = true;
  TDelegateBase<FNotThreadSafeDelegateMode>::operator=
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&(pFVar7->_ColorAndOpacity).Getter,
             (TDelegateBase<FNotThreadSafeDelegateMode> *)local_330);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_330,
             (FWriteAccessScope *)&local_2c0);
  if (((int)local_320 != 0) && (FStack_328.Data != (FScriptContainerElement *)0x0)) {
    (*(code *)**(undefined8 **)FStack_328.Data)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation(&FStack_328,0,0,0x10);
    local_320 = local_320 & 0xffffffff00000000;
  }
  if (local_2c0.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_2c0.Accessor,&local_2c0);
  }
  if (FStack_328.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(FStack_328.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_330);
  FLLMScope::FLLMScope(local_res10,LLMTagDeclaration_UI_Slate.UniqueName,false,None,Default,true);
  local_res18 = LLMTagDeclaration_UI_Slate.UniqueName;
  FMemScope::FMemScope(&local_res20,&local_res18,true);
  TSlateDecl<SNiagaraUISystemWidget,RequiredArgs::T0RequiredArgs>::
  TSlateDecl<SNiagaraUISystemWidget,RequiredArgs::T0RequiredArgs>
            (&local_298,"SNiagaraUISystemWidget",
             "C:\\Workspace\\ProjectDS\\Client\\Plugins\\NiagaraUIRenderer\\Source\\NiagaraUIRenderer\\Private\\NiagaraSystemWidget.cpp"
             ,0x14,local_res8);
  FMemScope::~FMemScope(&local_res20);
  FLLMScope::~FLLMScope(local_res10);
  pTVar8 = TSlateDecl<SNiagaraUISystemWidget,RequiredArgs::T0RequiredArgs>::operator<<=
                     (&local_298,&local_2a8,pFVar7);
  local_310.ReferenceController = (pTVar8->SharedReferenceCount).ReferenceController;
  local_318 = pTVar8->Object;
  if (local_310.ReferenceController != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    (local_310.ReferenceController)->SharedReferenceCount =
         (atomic<int>)((int)(local_310.ReferenceController)->SharedReferenceCount + 1);
    UNLOCK();
  }
  pTVar1 = &this->NiagaraSlateWidget;
  if (pTVar1 != (TSharedPtr<SNiagaraUISystemWidget,1> *)&local_318) {
    pTVar1->Object = local_318;
    local_318 = (SNiagaraUISystemWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->NiagaraSlateWidget).SharedReferenceCount,&local_310);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_310.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_2a8.SharedReferenceCount.ReferenceController);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (local_298._Widget.SharedReferenceCount.ReferenceController);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_280._ColorAndOpacity.Getter);
  TDelegateBase<FNotThreadSafeDelegateMode>::~TDelegateBase<FNotThreadSafeDelegateMode>
            ((TDelegateBase<FNotThreadSafeDelegateMode> *)&local_280._DesiredSize.Getter);
  FSlateBaseNamedArgs::~FSlateBaseNamedArgs((FSlateBaseNamedArgs *)&local_280);
  InitializeNiagaraUI(this);
  if (pTVar1->Object == (SNiagaraUISystemWidget *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x408,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar9;
    }
  }
  pSVar2 = pTVar1->Object;
  pTVar3 = (this->NiagaraSlateWidget).SharedReferenceCount.ReferenceController;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  if (pSVar2 == (SNiagaraUISystemWidget *)0x0) {
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("IsValid()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                       ,0x25d,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pTVar9 = (TSharedRef<SWidget,1> *)(*pcVar4)();
      return pTVar9;
    }
  }
  __return_storage_ptr__->Object = (SWidget *)pSVar2;
  (__return_storage_ptr__->SharedReferenceCount).ReferenceController = pTVar3;
  if (pTVar3 != (TReferenceControllerBase<1> *)0x0) {
    LOCK();
    pTVar3->SharedReferenceCount = (atomic<int>)((int)pTVar3->SharedReferenceCount + 1);
    UNLOCK();
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTVar3);
  return __return_storage_ptr__;
}

// ReleaseSlateResources @ 14d298d70

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UNiagaraSystemWidget::ReleaseSlateResources(UNiagaraSystemWidget *this,bool param_1)

{
  AActor *this_00;
  undefined8 local_18;
  FSharedReferencer<1> FStack_10;
  
  UVisual::ReleaseSlateResources((UVisual *)this,param_1);
  local_18 = 0;
  FStack_10.ReferenceController = (TReferenceControllerBase<1> *)0x0;
  if (&this->NiagaraSlateWidget != (TSharedPtr<SNiagaraUISystemWidget,1> *)&local_18) {
    (this->NiagaraSlateWidget).Object = (SNiagaraUISystemWidget *)0x0;
    SharedPointerInternals::FSharedReferencer<1>::operator=
              (&(this->NiagaraSlateWidget).SharedReferenceCount,&FStack_10);
  }
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (FStack_10.ReferenceController);
  this_00 = (AActor *)(this->NiagaraActor).field0_0x0.DebugPtr;
  if (this_00 != (AActor *)0x0) {
    AActor::Destroy(this_00,false,true);
  }
  (this->NiagaraComponent).field0_0x0.DebugPtr = (UNiagaraUIComponent *)0x0;
  (this->NiagaraActor).field0_0x0.DebugPtr = (ANiagaraUIActor *)0x0;
  return;
}

// SetColorAndOpacity @ 14d299680

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraSystemWidget::SetColorAndOpacity(UNiagaraSystemWidget *this,FLinearColor *param_1)

{
  SNiagaraUISystemWidget *pSVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  TSlateAttribute<FSlateColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_00;
  uint local_28;
  
  fVar2 = (param_1->field0_0x0)._s_0.R;
  fVar3 = (param_1->field0_0x0)._s_0.G;
  fVar4 = (param_1->field0_0x0)._s_0.B;
  fVar5 = (param_1->field0_0x0)._s_0.A;
  pSVar1 = (this->NiagaraSlateWidget).Object;
  (this->ColorAndOpacity).field0_0x0._s_0.R = fVar2;
  (this->ColorAndOpacity).field0_0x0._s_0.G = fVar3;
  (this->ColorAndOpacity).field0_0x0._s_0.B = fVar4;
  (this->ColorAndOpacity).field0_0x0._s_0.A = fVar5;
  if (pSVar1 != (SNiagaraUISystemWidget *)0x0) {
    this_00 = &pSVar1->ColorAndOpacityAttribute;
    local_28 = local_28 & 0xffffff00;
    SlateAttributePrivate::FSlateAttributeImpl::ProtectedUnregisterAttribute
              ((FSlateAttributeImpl *)this_00,(SWidget *)pSVar1,Member);
    if ((((fVar2 != *(float *)this_00) ||
         (fVar3 != *(float *)&(pSVar1->ColorAndOpacityAttribute).field_0x4)) ||
        (fVar4 != *(float *)&(pSVar1->ColorAndOpacityAttribute).field_0x8)) ||
       ((fVar5 != *(float *)&(pSVar1->ColorAndOpacityAttribute).field_0xc ||
        ((pSVar1->ColorAndOpacityAttribute).field_0x10 != '\0')))) {
      *(float *)this_00 = fVar2;
      *(float *)&(pSVar1->ColorAndOpacityAttribute).field_0x4 = fVar3;
      *(float *)&(pSVar1->ColorAndOpacityAttribute).field_0x8 = fVar4;
      *(float *)&(pSVar1->ColorAndOpacityAttribute).field_0xc = fVar5;
      *(uint *)&(pSVar1->ColorAndOpacityAttribute).field_0x10 = local_28;
      SlateAttributePrivate::FSlateAttributeImpl::ProtectedInvalidateWidget
                ((FSlateAttributeImpl *)this_00,(SWidget *)pSVar1,Member,None);
    }
  }
  return;
}

// SetDesiredWidgetSize @ 14d299760

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraSystemWidget::SetDesiredWidgetSize(UNiagaraSystemWidget *this,TVector2<double> *param_1)

{
  SNiagaraUISystemWidget *pSVar1;
  double dVar2;
  double dVar3;
  
  dVar2 = (param_1->field0_0x0)._s_0.X;
  dVar3 = (param_1->field0_0x0)._s_0.Y;
  pSVar1 = (this->NiagaraSlateWidget).Object;
  (this->DesiredWidgetSize).field0_0x0._s_0.X = dVar2;
  (this->DesiredWidgetSize).field0_0x0._s_0.Y = dVar3;
  if ((pSVar1 != (SNiagaraUISystemWidget *)0x0) &&
     ((SlateAttributePrivate::FSlateAttributeImpl::ProtectedUnregisterAttribute
                 ((FSlateAttributeImpl *)&pSVar1->DesiredSizeAttribute,(SWidget *)pSVar1,Member),
      dVar2 != *(double *)&pSVar1->DesiredSizeAttribute ||
      (dVar3 != *(double *)&(pSVar1->DesiredSizeAttribute).field_0x8)))) {
    dVar2 = (param_1->field0_0x0)._s_0.Y;
    *(double *)&pSVar1->DesiredSizeAttribute = (param_1->field0_0x0)._s_0.X;
    *(double *)&(pSVar1->DesiredSizeAttribute).field_0x8 = dVar2;
    SlateAttributePrivate::FSlateAttributeImpl::ProtectedInvalidateWidget
              ((FSlateAttributeImpl *)&pSVar1->DesiredSizeAttribute,(SWidget *)pSVar1,Member,None);
  }
  return;
}

// SetRemapMaterial @ 14d299890

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall
UNiagaraSystemWidget::SetRemapMaterial
          (UNiagaraSystemWidget *this,UMaterialInterface *param_1,UMaterialInterface *param_2)

{
  UMaterialInterface *local_res10;
  UMaterialInterface *local_res18 [2];
  UMaterialInterface **local_18;
  UMaterialInterface **local_10;
  
  if ((param_1 != (UMaterialInterface *)0x0) && (param_2 != (UMaterialInterface *)0x0)) {
    local_18 = &local_res10;
    local_10 = local_res18;
    local_res10 = param_1;
    local_res18[0] = param_2;
    TSet<TTuple<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UMaterialInterface_*_&,UMaterialInterface_*_&>_>
              ((TSet<TTuple<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,0>,FDefaultSetAllocator>
                *)&this->MaterialRemapList,
               (TPairInitializer<UMaterialInterface_*_&,UMaterialInterface_*_&> *)(local_res18 + 1),
               (bool *)&local_18);
  }
  return;
}

// StaticRegisterNativesUNiagaraSystemWidget @ 14d299c80

void __cdecl UNiagaraSystemWidget::StaticRegisterNativesUNiagaraSystemWidget(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 9;
  local_18.DataPtr = Z_Construct_UClass_UNiagaraSystemWidget_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// SynchronizeProperties @ 14d299cd0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EWidgetNavigationRoutingPolicy": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UNiagaraSystemWidget::SynchronizeProperties(UNiagaraSystemWidget *this)

{
  float fVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  SNiagaraUISystemWidget *pSVar5;
  code *pcVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  TSlateAttribute<FSlateColor,0,TSlateAttributeComparePredicate<TEqualTo<void>_>_> *this_00;
  bool bVar12;
  uint local_28;
  
  UWidget::SynchronizeProperties((UWidget *)this);
  if ((this->NiagaraSlateWidget).Object != (SNiagaraUISystemWidget *)0x0) {
    if (((this->NiagaraActor).field0_0x0.DebugPtr == (ANiagaraUIActor *)0x0) ||
       ((this->NiagaraComponent).field0_0x0.DebugPtr == (UNiagaraUIComponent *)0x0)) {
      InitializeNiagaraUI(this);
    }
    if ((this->NiagaraSlateWidget).Object == (SNiagaraUISystemWidget *)0x0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar12) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pSVar5 = (this->NiagaraSlateWidget).Object;
    dVar7 = (this->DesiredWidgetSize).field0_0x0._s_0.X;
    dVar8 = (this->DesiredWidgetSize).field0_0x0._s_0.Y;
    SlateAttributePrivate::FSlateAttributeImpl::ProtectedUnregisterAttribute
              ((FSlateAttributeImpl *)&pSVar5->DesiredSizeAttribute,(SWidget *)pSVar5,Member);
    if ((dVar7 != *(double *)&pSVar5->DesiredSizeAttribute) ||
       (dVar8 != *(double *)&(pSVar5->DesiredSizeAttribute).field_0x8)) {
      *(double *)&pSVar5->DesiredSizeAttribute = dVar7;
      *(double *)&(pSVar5->DesiredSizeAttribute).field_0x8 = dVar8;
      SlateAttributePrivate::FSlateAttributeImpl::ProtectedInvalidateWidget
                ((FSlateAttributeImpl *)&pSVar5->DesiredSizeAttribute,(SWidget *)pSVar5,Member,None)
      ;
    }
    if ((this->NiagaraSlateWidget).Object == (SNiagaraUISystemWidget *)0x0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar12) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pSVar5 = (this->NiagaraSlateWidget).Object;
    fVar1 = (this->ColorAndOpacity).field0_0x0._s_0.R;
    fVar9 = (this->ColorAndOpacity).field0_0x0._s_0.G;
    fVar10 = (this->ColorAndOpacity).field0_0x0._s_0.B;
    fVar11 = (this->ColorAndOpacity).field0_0x0._s_0.A;
    local_28 = local_28 & 0xffffff00;
    this_00 = &pSVar5->ColorAndOpacityAttribute;
    SlateAttributePrivate::FSlateAttributeImpl::ProtectedUnregisterAttribute
              ((FSlateAttributeImpl *)this_00,(SWidget *)pSVar5,Member);
    if ((((fVar1 != *(float *)this_00) ||
         (fVar9 != *(float *)&(pSVar5->ColorAndOpacityAttribute).field_0x4)) ||
        (fVar10 != *(float *)&(pSVar5->ColorAndOpacityAttribute).field_0x8)) ||
       ((fVar11 != *(float *)&(pSVar5->ColorAndOpacityAttribute).field_0xc ||
        ((pSVar5->ColorAndOpacityAttribute).field_0x10 != '\0')))) {
      *(float *)this_00 = fVar1;
      *(float *)&(pSVar5->ColorAndOpacityAttribute).field_0x4 = fVar9;
      *(float *)&(pSVar5->ColorAndOpacityAttribute).field_0x8 = fVar10;
      *(float *)&(pSVar5->ColorAndOpacityAttribute).field_0xc = fVar11;
      *(uint *)&(pSVar5->ColorAndOpacityAttribute).field_0x10 = local_28;
      SlateAttributePrivate::FSlateAttributeImpl::ProtectedInvalidateWidget
                ((FSlateAttributeImpl *)this_00,(SWidget *)pSVar5,Member,None);
    }
    if ((this->NiagaraSlateWidget).Object == (SNiagaraUISystemWidget *)0x0) {
      bVar12 = ::FDebug::CheckVerifyFailedImpl2
                         ("IsValid()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                          ,0x458,L"");
      if (bVar12) {
        pcVar6 = (code *)swi(3);
        (*pcVar6)();
        return;
      }
    }
    pSVar5 = (this->NiagaraSlateWidget).Object;
    bVar12 = this->AutoActivate;
    bVar2 = this->ShowDebugSystemInWorld;
    bVar3 = this->PassDynamicParametersFromRibbon;
    bVar4 = this->FakeDepthScale;
    fVar1 = this->FakeDepthScaleDistance;
    (pSVar5->WidgetProperties).MaterialRemapList = &this->MaterialRemapList;
    (pSVar5->WidgetProperties).AutoActivate = bVar12;
    (pSVar5->WidgetProperties).ShowDebugSystemInWorld = bVar2;
    (pSVar5->WidgetProperties).PassDynamicParametersFromRibbon = bVar3;
    (pSVar5->WidgetProperties).FakeDepthScale = bVar4;
    (pSVar5->WidgetProperties).FakeDepthScaleDistance = fVar1;
  }
  return;
}

// UpdateNiagaraSystemReference @ 14d29a110

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall
UNiagaraSystemWidget::UpdateNiagaraSystemReference
          (UNiagaraSystemWidget *this,UNiagaraSystem *param_1)

{
  UNiagaraUIComponent *this_00;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UNiagaraSystem *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->NiagaraSystemReference).field0_0x0.DebugPtr = param_1;
  this_00 = (this->NiagaraComponent).field0_0x0.DebugPtr;
  if (this_00 != (UNiagaraUIComponent *)0x0) {
    UNiagaraComponent::SetAsset((UNiagaraComponent *)this_00,param_1,true);
    UNiagaraComponent::ResetSystem
              ((UNiagaraComponent *)(this->NiagaraComponent).field0_0x0.DebugPtr);
  }
  return;
}

// UpdateTickWhenPaused @ 14d29a180

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall UNiagaraSystemWidget::UpdateTickWhenPaused(UNiagaraSystemWidget *this,bool param_1)

{
  UNiagaraUIComponent *this_00;
  
  this->TickWhenPaused = param_1;
  this_00 = (this->NiagaraComponent).field0_0x0.DebugPtr;
  if (this_00 != (UNiagaraUIComponent *)0x0) {
    UActorComponent::SetTickableWhenPaused((UActorComponent *)this_00,param_1);
    UNiagaraComponent::SetForceSolo
              ((UNiagaraComponent *)(this->NiagaraComponent).field0_0x0.DebugPtr,param_1);
    UNiagaraComponent::ResetSystem
              ((UNiagaraComponent *)(this->NiagaraComponent).field0_0x0.DebugPtr);
  }
  return;
}

// execActivateSystem @ 14d29a2a0

void __cdecl
UNiagaraSystemWidget::execActivateSystem(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong *plVar2;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar2 = *(longlong **)(param_1 + 0xf);
  if (plVar2 != (longlong *)0x0) {
    if (*(char *)((longlong)plVar2 + 0x801) != '\0') {
      (**(code **)(*plVar2 + 0x2b8))(plVar2,local_res8[0] != 0);
      return;
    }
    *(undefined1 *)(plVar2 + 0x100) = 1;
  }
  return;
}

// execDeactivateSystem @ 14d29a360

void __cdecl
UNiagaraSystemWidget::execDeactivateSystem(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong *plVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar1 = *(longlong **)(param_1 + 0xf);
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 0x2c0))(plVar1);
    *(undefined1 *)(plVar1 + 0x100) = 0;
  }
  return;
}

// execGetNiagaraComponent @ 14d29a3b0

void __cdecl
UNiagaraSystemWidget::execGetNiagaraComponent(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined8 *)param_3 = *(undefined8 *)(param_1 + 0xf);
  return;
}

// execGetRemapMaterial @ 14d29a3e0

void __cdecl
UNiagaraSystemWidget::execGetRemapMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  TObjectPtr<UMaterialInterface>_u_0 *pTVar2;
  UObject *local_res8;
  UObject *local_res10;
  
  local_res8 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_res10 = local_res8;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  pTVar2 = &TMapBase<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,0>_>
            ::Find((TMapBase<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,0>_>
                    *)(param_1 + 0xb),(TObjectPtr<UMaterialInterface_const_>)&local_res10)->
            field0_0x0;
  if (pTVar2 != (TObjectPtr<UMaterialInterface>_u_0 *)0x0) {
    *(TObjectPtr<UMaterialInterface>_u_0 *)param_3 = *pTVar2;
    return;
  }
  *(undefined8 *)param_3 = 0;
  return;
}

// execSetColorAndOpacity @ 14d29a4c0

void __cdecl
UNiagaraSystemWidget::execSetColorAndOpacity(UObject *param_1,FFrame *param_2,void *param_3)

{
  float *this;
  FProperty *pFVar1;
  SWidget *pSVar2;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  uint local_28;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_48,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_48);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(float *)&param_1[0xd].field_0x18 = local_48;
  *(float *)&param_1[0xd].field_0x1c = fStack_44;
  *(float *)&param_1[0xd].field_0x20 = fStack_40;
  *(float *)&param_1[0xd].field_0x24 = fStack_3c;
  pSVar2 = *(SWidget **)&param_1[0xe].field_0x10;
  if (pSVar2 != (SWidget *)0x0) {
    this = &pSVar2[1].PersistentState.WidgetStyle.SubduedForeground.field0_0x0._s_0.B;
    local_28 = local_28 & 0xffffff00;
    SlateAttributePrivate::FSlateAttributeImpl::ProtectedUnregisterAttribute
              ((FSlateAttributeImpl *)this,pSVar2,Member);
    if ((((local_48 != *this) ||
         (fStack_44 != pSVar2[1].PersistentState.WidgetStyle.SubduedForeground.field0_0x0._s_0.A))
        || (fStack_40 != *(float *)&pSVar2[1].PersistentState.CachedElementHandle.Ptr.Object)) ||
       ((fStack_3c !=
         *(float *)((longlong)&pSVar2[1].PersistentState.CachedElementHandle.Ptr.Object + 4) ||
        (*(char *)&pSVar2[1].PersistentState.CachedElementHandle.Ptr.WeakReferenceCount.
                   ReferenceController != '\0')))) {
      *this = local_48;
      pSVar2[1].PersistentState.WidgetStyle.SubduedForeground.field0_0x0._s_0.A = fStack_44;
      *(float *)&pSVar2[1].PersistentState.CachedElementHandle.Ptr.Object = fStack_40;
      *(float *)((longlong)&pSVar2[1].PersistentState.CachedElementHandle.Ptr.Object + 4) =
           fStack_3c;
      *(uint *)&pSVar2[1].PersistentState.CachedElementHandle.Ptr.WeakReferenceCount.
                ReferenceController = local_28;
      SlateAttributePrivate::FSlateAttributeImpl::ProtectedInvalidateWidget
                ((FSlateAttributeImpl *)this,pSVar2,Member,None);
    }
  }
  return;
}

// execSetDesiredWidgetSize @ 14d29a5c0

void __cdecl
UNiagaraSystemWidget::execSetDesiredWidgetSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  SWidget *pSVar2;
  double local_28;
  double dStack_20;
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_28,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_28);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(double *)&param_1[0xd].field_0x8 = local_28;
  *(double *)&param_1[0xd].field_0x10 = dStack_20;
  pSVar2 = *(SWidget **)&param_1[0xe].field_0x10;
  if (pSVar2 != (SWidget *)0x0) {
    SlateAttributePrivate::FSlateAttributeImpl::ProtectedUnregisterAttribute
              ((FSlateAttributeImpl *)
               ((longlong)&pSVar2[1].PersistentState.WidgetStyle.ForegroundColor.field0_0x0 + 8),
               pSVar2,Member);
    if ((local_28 !=
         *(double *)
          ((longlong)&pSVar2[1].PersistentState.WidgetStyle.ForegroundColor.field0_0x0 + 8)) ||
       (dStack_20 != *(double *)&pSVar2[1].PersistentState.WidgetStyle.SubduedForeground.field0_0x0)
       ) {
      *(double *)((longlong)&pSVar2[1].PersistentState.WidgetStyle.ForegroundColor.field0_0x0 + 8) =
           local_28;
      *(double *)&pSVar2[1].PersistentState.WidgetStyle.SubduedForeground.field0_0x0 = dStack_20;
      SlateAttributePrivate::FSlateAttributeImpl::ProtectedInvalidateWidget
                ((FSlateAttributeImpl *)
                 ((longlong)&pSVar2[1].PersistentState.WidgetStyle.ForegroundColor.field0_0x0 + 8),
                 pSVar2,Member,None);
    }
  }
  return;
}

// execSetRemapMaterial @ 14d29a6a0

void __cdecl
UNiagaraSystemWidget::execSetRemapMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong local_res20;
  longlong local_38;
  longlong local_30;
  longlong local_28;
  longlong *local_20;
  longlong *local_18;
  
  local_38 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_38);
  }
  local_res20 = 0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_28 = local_res20;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  local_30 = local_38;
  if ((local_38 != 0) && (local_res20 != 0)) {
    local_20 = &local_30;
    local_18 = &local_28;
    TSet<TTuple<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,0>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<UMaterialInterface_*_&,UMaterialInterface_*_&>_>
              ((TSet<TTuple<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>_>,TDefaultMapHashableKeyFuncs<TObjectPtr<UMaterialInterface>,TObjectPtr<UMaterialInterface>,0>,FDefaultSetAllocator>
                *)(param_1 + 0xb),
               (TPairInitializer<UMaterialInterface_*_&,UMaterialInterface_*_&> *)&stack0x00000010,
               (bool *)&local_20);
  }
  return;
}

// execUpdateNiagaraSystemReference @ 14d29a7b0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraSystemWidget::execUpdateNiagaraSystemReference
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UNiagaraSystem *pUVar2;
  UNiagaraSystem *local_res8;
  
  local_res8 = (UNiagaraSystem *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UNiagaraSystem *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  *(UNiagaraSystem **)&param_1[10].field_0x20 = pUVar2;
  if (*(UNiagaraComponent **)(param_1 + 0xf) != (UNiagaraComponent *)0x0) {
    UNiagaraComponent::SetAsset(*(UNiagaraComponent **)(param_1 + 0xf),pUVar2,true);
    UNiagaraComponent::ResetSystem(*(UNiagaraComponent **)(param_1 + 0xf));
  }
  return;
}

// execUpdateTickWhenPaused @ 14d29a880

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __cdecl
UNiagaraSystemWidget::execUpdateTickWhenPaused(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UActorComponent *this;
  bool bVar2;
  int local_res8 [2];
  
  local_res8[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  bVar2 = local_res8[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  this = *(UActorComponent **)(param_1 + 0xf);
  param_1[0xd].field_0x1 = bVar2;
  if (this != (UActorComponent *)0x0) {
    UActorComponent::SetTickableWhenPaused(this,bVar2);
    UNiagaraComponent::SetForceSolo(*(UNiagaraComponent **)(param_1 + 0xf),bVar2);
    UNiagaraComponent::ResetSystem(*(UNiagaraComponent **)(param_1 + 0xf));
  }
  return;
}

