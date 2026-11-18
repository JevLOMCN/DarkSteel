// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 48

// StaticClass @ 147990fb0

UClass * __cdecl UTextRenderComponent::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextRenderComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TextRenderComponent",
               &Z_Registration_Info_UClass_UTextRenderComponent.InnerSingleton,
               StaticRegisterNativesUTextRenderComponent,0x590,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UTextRenderComponent>,
               InternalVTableHelperCtorCaller<UTextRenderComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextRenderComponent.InnerSingleton;
}

// UTextRenderComponent @ 1479a7ea0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UTextRenderComponent * __thiscall
UTextRenderComponent::UTextRenderComponent(UTextRenderComponent *this,FVTableHelper *param_1)

{
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  FText::FText(&this->Text);
  (this->TextMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->Font).field0_0x0.DebugPtr = (UFont *)0x0;
  return this;
}

// UTextRenderComponent @ 1479a7f30

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

UTextRenderComponent * __thiscall
UTextRenderComponent::UTextRenderComponent(UTextRenderComponent *this,FObjectInitializer *param_1)

{
  byte *pbVar1;
  longlong lVar2;
  UFont *this_00;
  code *pcVar3;
  TObjectPtr<UFont> TVar4;
  TObjectPtr<UMaterial> TVar5;
  void *pvVar6;
  bool bVar7;
  FText *pFVar8;
  TObjectPtr<UFont>_u_0 TVar9;
  TObjectPtr<UMaterial>_u_0 TVar10;
  FImpl *pFVar11;
  FImpl *pFVar12;
  UTextRenderComponent *pUVar13;
  ulonglong uVar14;
  float fVar15;
  float fVar16;
  TRawPtrProxy<FTextRenderComponentCultureChangedFixUp::FImpl> local_res8;
  FString local_48;
  FString local_38;
  FText local_28;
  
  UPrimitiveComponent::UPrimitiveComponent((UPrimitiveComponent *)this,param_1);
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  FText::FText(&this->Text);
  pvVar6 = ThreadLocalStoragePointer;
  pFVar12 = (FImpl *)0x0;
  uVar14 = (ulonglong)_tls_index;
  (this->TextMaterial).field0_0x0.DebugPtr = (UMaterialInterface *)0x0;
  (this->Font).field0_0x0.DebugPtr = (UFont *)0x0;
  lVar2 = *(longlong *)((longlong)pvVar6 + uVar14 * 8);
  if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS0) && (_Init_thread_header(&::_TSS0), ::_TSS0 == -1)) {
    FGCObject::RegisterGCObject((FGCObject *)&::ConstructorStatics);
    ::ConstructorStatics.Font.Object.field0_0x0 = (TObjectPtr<UFont>_u_0)(FObjectPtr)0x0;
    ::ConstructorStatics.Font._padding_ =
         (longlong)&___7__FObjectFinderOptional_VUFont___ConstructorHelpers__6B_;
    ::ConstructorStatics.Font.LoadFlags = 0;
    ::ConstructorStatics.Font.ObjectToFind = L"/Engine/EngineFonts/RobotoDistanceField";
    ::ConstructorStatics.TextMaterial._padding_ = (longlong)&___7FGCObject__6B_;
    ::ConstructorStatics.TextMaterial._padding_._0_2_ = 0;
    FGCObject::RegisterGCObject((FGCObject *)&::ConstructorStatics.TextMaterial);
    ::ConstructorStatics.TextMaterial.Object.field0_0x0 = (TObjectPtr<UMaterial>_u_0)(FObjectPtr)0x0
    ;
    ::ConstructorStatics.TextMaterial._padding_ =
         (longlong)&___7__FObjectFinderOptional_VUMaterial___ConstructorHelpers__6B_;
    ::ConstructorStatics.TextMaterial.LoadFlags = 0;
    ::ConstructorStatics.TextMaterial.ObjectToFind =
         L"/Engine/EngineMaterials/DefaultTextMaterialOpaque";
    atexit(`UTextRenderComponent::UTextRenderComponent'::__l5::
           _dynamic_atexit_destructor_for__ConstructorStatics__);
    _Init_thread_footer(&::_TSS0);
  }
  if ((*(int *)(lVar2 + 0x9d4c) < ::_TSS1) && (_Init_thread_header(&::_TSS1), ::_TSS1 == -1)) {
    pFVar11 = ::operator_new(0x10);
    if (pFVar11 != (FImpl *)0x0) {
      *(undefined8 *)pFVar11 = 0;
      *(undefined8 *)&pFVar11->field_0x8 = 0;
      pFVar12 = pFVar11;
    }
    local_res8.Object = pFVar12;
    TSharedPtr<FTextRenderComponentCultureChangedFixUp::FImpl,1>::
    TSharedPtr<FTextRenderComponentCultureChangedFixUp::FImpl,1><FTextRenderComponentCultureChangedFixUp::FImpl>
              (&TextRenderComponentCultureChangedFixUp.ImplPtr,&local_res8);
    if ((TextRenderComponentCultureChangedFixUp.ImplPtr.Object == (FImpl *)0x0) &&
       (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                           ,0x458,L""), bVar7)) {
      pcVar3 = (code *)swi(3);
      pUVar13 = (UTextRenderComponent *)(*pcVar3)();
      return pUVar13;
    }
    FTextRenderComponentCultureChangedFixUp::FImpl::Register
              (TextRenderComponentCultureChangedFixUp.ImplPtr.Object);
    atexit(`UTextRenderComponent::UTextRenderComponent'::__l6::
           _dynamic_atexit_destructor_for__TextRenderComponentCultureChangedFixUp__);
    _Init_thread_footer(&::_TSS1);
  }
  pbVar1 = (byte *)((longlong)&this->_padding_ + 2);
  *pbVar1 = *pbVar1 & 0xfd;
  pbVar1 = (byte *)((longlong)&this->_padding_ + 1);
  *pbVar1 = *pbVar1 & 0x7f;
  pFVar8 = FText::AsLocalizable_Advanced_LocText
                     (&local_28,L"TextRenderComponent",L"DefaultText",L"Text");
  FText::operator=(&this->Text,pFVar8);
  if (local_28.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_28.TextData.Reference + 0x10))();
  }
  if ((::ConstructorStatics.Font.Object.field0_0x0 == (UFont *)0x0) &&
     (::ConstructorStatics.Font.ObjectToFind != (wchar_t *)0x0)) {
    ConstructorHelpers::CheckIfIsInConstructor(::ConstructorStatics.Font.ObjectToFind);
    ::FString::FString(&local_48,::ConstructorStatics.Font.ObjectToFind);
    ConstructorHelpers::StripObjectClass(&local_48,true);
    TVar9.DebugPtr =
         ConstructorHelpersInternal::FindOrLoadObject<UFont>
                   (&local_48,::ConstructorStatics.Font.LoadFlags);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) || (TVar9.DebugPtr == (UFont *)0x0)) {
      ::ConstructorStatics.Font.Object.field0_0x0 =
           (TObjectPtr<UFont>_u_0)(TObjectPtr<UFont>_u_0)TVar9.DebugPtr;
      if ((TVar9.DebugPtr == (UFont *)0x0) && ((::ConstructorStatics.Font.LoadFlags & 0x2002) == 0))
      {
        ConstructorHelpers::FailedToFind(::ConstructorStatics.Font.ObjectToFind);
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)TVar9.DebugPtr);
      ::ConstructorStatics.Font.Object.field0_0x0 =
           (TObjectPtr<UFont>_u_0)(TObjectPtr<UFont>_u_0)TVar9.DebugPtr;
    }
    ::ConstructorStatics.Font.ObjectToFind = (wchar_t *)0x0;
    if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
  }
  TVar4.field0_0x0 = ::ConstructorStatics.Font.Object.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (::ConstructorStatics.Font.Object.field0_0x0 != (UFont *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)::ConstructorStatics.Font.Object.field0_0x0);
  }
  (this->Font).field0_0x0.ObjectPtr.field0_0x0 = (FObjectPtr_u_0)TVar4.field0_0x0;
  if ((::ConstructorStatics.TextMaterial.Object.field0_0x0 == (UMaterial *)0x0) &&
     (::ConstructorStatics.TextMaterial.ObjectToFind != (wchar_t *)0x0)) {
    ConstructorHelpers::CheckIfIsInConstructor(::ConstructorStatics.TextMaterial.ObjectToFind);
    ::FString::FString(&local_38,::ConstructorStatics.TextMaterial.ObjectToFind);
    ConstructorHelpers::StripObjectClass(&local_38,true);
    TVar10.DebugPtr =
         ConstructorHelpersInternal::FindOrLoadObject<UMaterial>
                   (&local_38,::ConstructorStatics.TextMaterial.LoadFlags);
    if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
       (TVar10.DebugPtr == (UMaterial *)0x0)) {
      ::ConstructorStatics.TextMaterial.Object.field0_0x0 =
           (TObjectPtr<UMaterial>_u_0)(TObjectPtr<UMaterial>_u_0)TVar10.DebugPtr;
      if ((TVar10.DebugPtr == (UMaterial *)0x0) &&
         ((::ConstructorStatics.TextMaterial.LoadFlags & 0x2002) == 0)) {
        ConstructorHelpers::FailedToFind(::ConstructorStatics.TextMaterial.ObjectToFind);
      }
    }
    else {
      UE::GC::MarkAsReachable((UObject *)TVar10.DebugPtr);
      ::ConstructorStatics.TextMaterial.Object.field0_0x0 =
           (TObjectPtr<UMaterial>_u_0)(TObjectPtr<UMaterial>_u_0)TVar10.DebugPtr;
    }
    ::ConstructorStatics.TextMaterial.ObjectToFind = (wchar_t *)0x0;
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
  }
  TVar5.field0_0x0 = ::ConstructorStatics.TextMaterial.Object.field0_0x0;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
     (::ConstructorStatics.TextMaterial.Object.field0_0x0 != (UMaterial *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)::ConstructorStatics.TextMaterial.Object.field0_0x0);
  }
  (this->TextMaterial).field0_0x0.ObjectPtr.field0_0x0 = (FObjectPtr_u_0)TVar5.field0_0x0;
  UPrimitiveComponent::SetCollisionProfileName
            ((UPrimitiveComponent *)this,UCollisionProfile::NoCollision_ProfileName,true);
  (this->TextRenderColor).field0_0x0._s_0 = (FColor_u_0_s_0)FColor::White.field0_0x0;
  this->XScale = 1.0;
  this->YScale = 1.0;
  this->HorizSpacingAdjust = 0.0;
  this->VertSpacingAdjust = 0.0;
  this->HorizontalAlignment = '\0';
  this->VerticalAlignment = '\x02';
  UPrimitiveComponent::SetGenerateOverlapEvents((UPrimitiveComponent *)this,false);
  this_00 = (this->Font).field0_0x0.DebugPtr;
  fVar15 = __real_41f00000;
  fVar16 = __real_3d088889;
  if (this_00 != (UFont *)0x0) {
    UObject::ConditionalPostLoad((UObject *)this_00);
    fVar15 = UFont::GetMaxCharHeight((this->Font).field0_0x0.DebugPtr);
    fVar16 = __real_3f800000 / fVar15;
  }
  this->WorldSize = fVar15;
  this->InvDefaultSize = fVar16;
  return this;
}

// ~UTextRenderComponent @ 1479a9b90

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

void __thiscall UTextRenderComponent::~UTextRenderComponent(UTextRenderComponent *this)

{
  ITextData *pIVar1;
  
  this->_padding_ = (longlong)&_vftable__for__UObject__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AssetUserData__;
  this->_padding_ = (longlong)&_vftable__for__IAsyncPhysicsStateProcessor__;
  this->_padding_ = (longlong)&_vftable__for__INavRelevantInterface__;
  this->_padding_ = (longlong)&_vftable__for__IInterface_AsyncCompilation__;
  this->_padding_ = (longlong)&_vftable__for__IPhysicsComponent__;
  pIVar1 = (this->Text).TextData.Reference;
  if (pIVar1 != (ITextData *)0x0) {
    (**(code **)((longlong)*pIVar1 + 0x10))();
  }
  UPrimitiveComponent::~UPrimitiveComponent((UPrimitiveComponent *)this);
  return;
}

// CalcBounds @ 1479b6d60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TBoxSphereBounds<double,double> * __thiscall
UTextRenderComponent::CalcBounds
          (UTextRenderComponent *this,TBoxSphereBounds<double,double> *__return_storage_ptr__,
          TTransform<double> *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uchar uVar5;
  short sVar6;
  code *pcVar7;
  double dVar8;
  FScriptContainerElement *pFVar9;
  bool bVar10;
  FString *pFVar11;
  TBoxSphereBounds<double,double> *pTVar12;
  TMatrix<double> *pTVar13;
  FScriptContainerElement *pFVar14;
  float fVar15;
  uint uVar16;
  undefined8 uVar17;
  double dVar18;
  uint uVar21;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  double dVar22;
  double dVar23;
  float fVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  undefined1 auStackY_2f8 [32];
  FScriptContainerElement *pFStack_2b0;
  TVector2<double>_u_0 local_2a8;
  FTextIterator local_298;
  TVector<double>_u_0 local_288;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  TMatrix<double> local_248;
  TVector<double>_u_0 local_1c8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined1 local_198;
  TVector<double>_u_0 local_190;
  double local_178;
  double local_170;
  double local_168;
  TMatrix<double> local_158;
  ulonglong local_d8;
  
  local_d8 = __security_cookie.value ^ (ulonglong)auStackY_2f8;
  bVar10 = FText::IsEmpty(&this->Text);
  if ((bVar10) || ((this->Font).field0_0x0.DebugPtr == (UFont *)0x0)) {
    local_258 = 0;
    local_288._s_0.X = 0.0;
    local_288._s_0.Y = 0.0;
    local_288._s_0.Z = 0.0;
    uStack_270 = 0;
    local_268 = 0;
    uStack_260 = 0;
    UE::Math::TTransform<double>::ToMatrixWithScale(param_1,&local_248);
    UE::Math::TBoxSphereBounds<double,double>::TransformBy
              ((TBoxSphereBounds<double,double> *)&local_288._s_0,__return_storage_ptr__,&local_248)
    ;
    return __return_storage_ptr__;
  }
  uVar25 = (uint)__real_3810000000000000;
  uVar26 = (uint)((ulonglong)__real_3810000000000000 >> 0x20);
  dVar8 = 0.0;
  uVar16 = (uint)__real_47efffffe0000000;
  uVar21 = (uint)((ulonglong)__real_47efffffe0000000 >> 0x20);
  pFVar11 = FText::ToString(&this->Text);
  if ((pFVar11->Data).ArrayNum == 0) {
    pFStack_2b0 = (FScriptContainerElement *)0x15060d16c;
  }
  else {
    pFStack_2b0 = (pFVar11->Data).AllocatorInstance.Data;
    if ((pFStack_2b0 == (FScriptContainerElement *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("InSourceString",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\TextRenderComponent.cpp"
                            ,0x51,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      pTVar12 = (TBoxSphereBounds<double,double> *)(*pcVar7)();
      return pTVar12;
    }
  }
  pFVar9 = pFStack_2b0;
  dVar22 = __real_bfe0000000000000;
  fVar1 = this->WorldSize;
  fVar2 = this->InvDefaultSize;
  fVar3 = this->XScale;
  fVar4 = this->YScale;
  uVar27 = (uint)__xmm_80000000000000008000000000000000;
  uVar28 = (uint)((ulonglong)__xmm_80000000000000008000000000000000 >> 0x20);
  pFVar14 = pFStack_2b0;
LAB_1479b6ec7:
  if ((pFVar14 == (FScriptContainerElement *)0x0) &&
     (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("CurrentPosition",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\TextRenderComponent.cpp"
                          ,0x56,L""), bVar10)) {
    pcVar7 = (code *)swi(3);
    pTVar12 = (TBoxSphereBounds<double,double> *)(*pcVar7)();
    return pTVar12;
  }
  if (*(short *)pFVar14 == 0) {
    local_1c8._s_0.X = 0.0;
    local_1c8._s_0.Y =
         (double)CONCAT44(uVar26 ^ uVar28,uVar25 ^ uVar27) - (double)CONCAT44(uVar21,uVar16);
    local_1b0 = 0;
    local_1a0 = 0;
    local_1c8._s_0.Z =
         (double)CONCAT44((uint)((ulonglong)dVar8 >> 0x20) ^ uVar28,SUB84(dVar8,0) ^ uVar27);
    local_1a8 = CONCAT44(uVar21 ^ uVar28,uVar16 ^ uVar27);
    local_198 = 1;
    pTVar13 = UE::Math::TTransform<double>::ToMatrixWithScale(param_1,&local_158);
    UE::Math::TBox<double>::TransformBy
              ((TBox<double> *)&local_1c8._s_0,(TBox<double> *)&local_190._s_0,pTVar13);
    local_170 = local_170 - local_190._s_0.Y;
    local_178 = local_178 - local_190._s_0.X;
    local_168 = local_168 - local_190._s_0.Z;
    dVar18 = local_170 * __real_3fe0000000000000;
    dVar8 = local_178 * __real_3fe0000000000000;
    dVar23 = local_168 * __real_3fe0000000000000;
    dVar22 = (double)*(float *)((longlong)&this->_padding_ + 4);
    auVar19._0_8_ = dVar8 + local_190._s_0.X;
    auVar19._8_8_ = 0;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.X = auVar19._0_8_;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Y = dVar18 + local_190._s_0.Y;
    (__return_storage_ptr__->Origin).field0_0x0._s_0.Z = dVar23 + local_190._s_0.Z;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.X = dVar8 * dVar22;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Y = dVar18 * dVar22;
    (__return_storage_ptr__->BoxExtent).field0_0x0._s_0.Z = dVar23 * dVar22;
    auVar20._8_8_ = 0;
    auVar20._0_8_ =
         (local_170 * local_170 + local_178 * local_178 + local_168 * local_168) *
         __real_3fd0000000000000;
    auVar20 = sqrtpd(auVar19,auVar20);
    __return_storage_ptr__->SphereRadius = auVar20._0_8_ * dVar22;
    return __return_storage_ptr__;
  }
  local_298.SourceString = (wchar_t *)pFVar9;
  local_298.CurrentPosition = (wchar_t *)pFStack_2b0;
  ComputeTextSize((TVector2<double> *)&local_2a8._s_0,&local_298,(this->Font).field0_0x0.DebugPtr,
                  fVar1 * fVar3 * fVar2,fVar1 * fVar4 * fVar2,this->HorizSpacingAdjust,
                  this->VertSpacingAdjust);
  uVar5 = (this->HorizontalAlignment).Value;
  fVar24 = 0.0;
  if (uVar5 != '\0') {
    if (uVar5 == '\x01') {
      fVar24 = (float)(local_2a8._s_0.X * dVar22);
    }
    else if (uVar5 == '\x02') {
      fVar24 = (float)(double)CONCAT44((uint)((ulonglong)local_2a8._0_8_ >> 0x20) ^ uVar28,
                                       SUB84(local_2a8._s_0.X,0) ^ uVar27);
    }
    else {
      bVar10 = ::FDebug::CheckVerifyFailedImpl2
                         ("0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\TextRenderComponent.cpp"
                          ,0xe7,L"");
      if (bVar10) {
        pcVar7 = (code *)swi(3);
        pTVar12 = (TBoxSphereBounds<double,double> *)(*pcVar7)();
        return pTVar12;
      }
    }
  }
  if ((double)CONCAT44(uVar26,uVar25) <= local_2a8._s_0.X) {
    uVar25 = SUB84(local_2a8._s_0.X,0);
    uVar26 = (uint)((ulonglong)local_2a8._0_8_ >> 0x20);
  }
  uVar17 = local_2a8._s_0.Y;
  if (local_2a8._s_0.Y <= 0.0) {
    fVar15 = UFont::GetMaxCharHeight((this->Font).field0_0x0.DebugPtr);
    uVar17 = (undefined8)fVar15;
  }
  dVar8 = dVar8 + (double)uVar17;
  dVar18 = (double)fVar24;
  if ((double)CONCAT44(uVar21,uVar16) <= dVar18) {
    dVar18 = (double)CONCAT44(uVar21,uVar16);
  }
  uVar16 = SUB84(dVar18,0);
  uVar21 = (uint)((ulonglong)dVar18 >> 0x20);
  do {
    if ((pFVar14 == (FScriptContainerElement *)0x0) &&
       (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                           ("CurrentPosition",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\TextRenderComponent.cpp"
                            ,0x5d,L""), bVar10)) {
      pcVar7 = (code *)swi(3);
      pTVar12 = (TBoxSphereBounds<double,double> *)(*pcVar7)();
      return pTVar12;
    }
    sVar6 = *(short *)pFVar14;
    if (sVar6 == 0) goto LAB_1479b6ec7;
    if (sVar6 == 0x3c) {
      if ((*(short *)(pFVar14 + 2) == 0x62) && (*(short *)(pFVar14 + 4) == 0x72)) {
        if (*(short *)(pFVar14 + 6) != 0x3e) goto LAB_1479b7032;
        pFVar14 = pFVar14 + 8;
        pFStack_2b0 = pFVar14;
        goto LAB_1479b6ec7;
      }
    }
    else {
LAB_1479b7032:
      if (sVar6 == 10) break;
    }
    pFVar14 = pFVar14 + 2;
    pFStack_2b0 = pFVar14;
  } while( true );
  pFVar14 = pFVar14 + 2;
  pFStack_2b0 = pFVar14;
  goto LAB_1479b6ec7;
}

// CreateSceneProxy @ 1479bc5a0

/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

FPrimitiveSceneProxy * __thiscall UTextRenderComponent::CreateSceneProxy(UTextRenderComponent *this)

{
  FTextRenderSceneProxy *pFVar1;
  
  pFVar1 = ::operator_new(2000);
  if (pFVar1 != (FTextRenderSceneProxy *)0x0) {
    pFVar1 = FTextRenderSceneProxy::FTextRenderSceneProxy(pFVar1,this);
    return (FPrimitiveSceneProxy *)pFVar1;
  }
  return (FPrimitiveSceneProxy *)0x0;
}

// GetMaterial @ 1479cb5a0

UMaterialInterface * __thiscall
UTextRenderComponent::GetMaterial(UTextRenderComponent *this,int param_1)

{
  UMaterialInterface *pUVar1;
  
  if (param_1 == 0) {
    pUVar1 = (this->TextMaterial).field0_0x0.DebugPtr;
    if ((UE::GC::GIsIncrementalReachabilityPending) && (pUVar1 != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar1);
    }
    return pUVar1;
  }
  return (UMaterialInterface *)0x0;
}

// GetNumMaterials @ 1479cc810

int __thiscall UTextRenderComponent::GetNumMaterials(UTextRenderComponent *this)

{
  return 1;
}

// GetPrivateStaticClass @ 1479ce6e0

UClass * __cdecl UTextRenderComponent::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UTextRenderComponent.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UActorComponent::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"TextRenderComponent",
               &Z_Registration_Info_UClass_UTextRenderComponent.InnerSingleton,
               StaticRegisterNativesUTextRenderComponent,0x590,0x10,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UTextRenderComponent>,
               InternalVTableHelperCtorCaller<UTextRenderComponent>,local_res8,
               UPrimitiveComponent::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UTextRenderComponent.InnerSingleton;
}

// GetRenderMatrix @ 1479cf090

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */

TMatrix<double> * __thiscall
UTextRenderComponent::GetRenderMatrix
          (UTextRenderComponent *this,TMatrix<double> *__return_storage_ptr__)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  short sVar5;
  code *pcVar6;
  undefined8 uVar7;
  FScriptContainerElement *pFVar8;
  ulonglong uVar9;
  undefined8 uVar10;
  bool bVar11;
  FString *pFVar12;
  TMatrix<double> *pTVar13;
  FScriptContainerElement *pFVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  undefined1 auStackY_208 [32];
  FScriptContainerElement *pFStack_1c0;
  FTextIterator local_1b8;
  TVector2<double> local_1a8;
  undefined1 local_198 [120];
  double dStack_120;
  TMatrix<double> local_118;
  ulonglong local_98;
  
  local_98 = __security_cookie.value ^ (ulonglong)auStackY_208;
  bVar11 = FText::IsEmpty(&this->Text);
  fVar16 = __real_bf800000;
  if ((bVar11) || ((this->Font).field0_0x0.DebugPtr == (UFont *)0x0)) {
    UPrimitiveComponent::GetRenderMatrix((UPrimitiveComponent *)this,__return_storage_ptr__);
    return __return_storage_ptr__;
  }
  fVar1 = this->InvDefaultSize;
  fVar2 = this->WorldSize;
  fVar3 = this->XScale;
  fVar4 = this->YScale;
  fVar17 = 0.0;
  pFVar12 = FText::ToString(&this->Text);
  if ((pFVar12->Data).ArrayNum == 0) {
    pFStack_1c0 = (FScriptContainerElement *)0x15060d16c;
    pFVar14 = pFStack_1c0;
    pFVar8 = pFStack_1c0;
  }
  else {
    pFStack_1c0 = (pFVar12->Data).AllocatorInstance.Data;
    pFVar14 = pFStack_1c0;
    pFVar8 = pFStack_1c0;
    if ((pFStack_1c0 == (FScriptContainerElement *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("InSourceString",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\TextRenderComponent.cpp"
                            ,0x51,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TMatrix<double> *)(*pcVar6)();
      return pTVar13;
    }
  }
LAB_1479cf1c0:
  if ((pFVar14 == (FScriptContainerElement *)0x0) &&
     (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                         ("CurrentPosition",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\TextRenderComponent.cpp"
                          ,0x56,L""), bVar11)) {
    pcVar6 = (code *)swi(3);
    pTVar13 = (TMatrix<double> *)(*pcVar6)();
    return pTVar13;
  }
  if (*(short *)pFVar14 == 0) {
    local_198._16_8_ = UE::Math::TMatrix<double>::Identity.M[0][2];
    local_198._24_8_ = UE::Math::TMatrix<double>::Identity.M[0][3];
    local_198._48_8_ = UE::Math::TMatrix<double>::Identity.M[1][2];
    local_198._56_8_ = UE::Math::TMatrix<double>::Identity.M[1][3];
    local_198._0_8_ = UE::Math::TMatrix<double>::Identity.M[0][0];
    local_198._8_8_ = UE::Math::TMatrix<double>::Identity.M[0][1];
    local_198._80_8_ = UE::Math::TMatrix<double>::Identity.M[2][2];
    local_198._88_8_ = UE::Math::TMatrix<double>::Identity.M[2][3];
    local_198._64_8_ = UE::Math::TMatrix<double>::Identity.M[2][0];
    local_198._72_8_ = UE::Math::TMatrix<double>::Identity.M[2][1];
    local_198._32_8_ = UE::Math::TMatrix<double>::Identity.M[1][0];
    local_198._40_8_ = UE::Math::TMatrix<double>::Identity.M[1][1];
    local_198._112_8_ = UE::Math::TMatrix<double>::Identity.M[3][2];
    dStack_120 = UE::Math::TMatrix<double>::Identity.M[3][3];
    local_198._96_8_ = UE::Math::TMatrix<double>::Identity.M[3][0];
    local_198._104_8_ = UE::Math::TMatrix<double>::Identity.M[3][1];
    fVar16 = ComputeVerticalAlignmentOffset(fVar17,(uint)(this->VerticalAlignment).Value,fVar16);
    uVar9 = (ulonglong)dStack_120 >> 0x20;
    unique0x10000395 = SUB84(dStack_120,0);
    local_198._112_8_ =
         (double)(float)((uint)fVar16 ^ __xmm_80000000800000008000000080000000) +
         (double)local_198._112_8_;
    unique0x10000399 = (int)uVar9;
    pTVar13 = UE::Math::TTransform<double>::ToMatrixWithScale
                        ((TTransform<double> *)&this->_padding_,&local_118);
    VectorMatrixMultiply(__return_storage_ptr__,(TMatrix<double> *)local_198,pTVar13);
    return __return_storage_ptr__;
  }
  local_1b8.CurrentPosition = (wchar_t *)pFStack_1c0;
  local_1b8.SourceString = (wchar_t *)pFVar8;
  ComputeTextSize(&local_1a8,&local_1b8,(this->Font).field0_0x0.DebugPtr,fVar2 * fVar3 * fVar1,
                  fVar2 * fVar4 * fVar1,this->HorizSpacingAdjust,this->VertSpacingAdjust);
  uVar10 = local_1a8.field0_0x0._s_0.Y;
  uVar7 = local_1a8.field0_0x0._s_0.Y;
  if (local_1a8.field0_0x0._s_0.Y <= 0.0) {
    fVar15 = UFont::GetMaxCharHeight((this->Font).field0_0x0.DebugPtr);
    uVar7 = (double)fVar15;
  }
  fVar17 = (float)((double)fVar17 + (double)uVar7);
  if (fVar16 < 0.0) {
    fVar16 = (float)(double)uVar10;
  }
  do {
    if ((pFVar14 == (FScriptContainerElement *)0x0) &&
       (bVar11 = ::FDebug::CheckVerifyFailedImpl2
                           ("CurrentPosition",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\TextRenderComponent.cpp"
                            ,0x5d,L""), bVar11)) {
      pcVar6 = (code *)swi(3);
      pTVar13 = (TMatrix<double> *)(*pcVar6)();
      return pTVar13;
    }
    sVar5 = *(short *)pFVar14;
    if (sVar5 == 0) goto LAB_1479cf1c0;
    if (sVar5 == 0x3c) {
      if ((*(short *)(pFVar14 + 2) == 0x62) && (*(short *)(pFVar14 + 4) == 0x72)) {
        if (*(short *)(pFVar14 + 6) != 0x3e) goto LAB_1479cf2d2;
        pFStack_1c0 = pFVar14 + 8;
        pFVar14 = pFStack_1c0;
        goto LAB_1479cf1c0;
      }
    }
    else {
LAB_1479cf2d2:
      if (sVar5 == 10) break;
    }
    pFVar14 = pFVar14 + 2;
    pFStack_1c0 = pFVar14;
  } while( true );
  pFStack_1c0 = pFVar14 + 2;
  pFVar14 = pFStack_1c0;
  goto LAB_1479cf1c0;
}

// GetTextLocalSize @ 1479d2f30

TVector<double> * __thiscall
UTextRenderComponent::GetTextLocalSize
          (UTextRenderComponent *this,TVector<double> *__return_storage_ptr__)

{
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  
  (**(code **)(this->_padding_ + 0x598))(this,&local_48,&UE::Math::TTransform<double>::Identity);
  (__return_storage_ptr__->field0_0x0)._s_0.X = (local_48 + local_30) - (local_48 - local_30);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (local_40 + local_28) - (local_40 - local_28);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (local_38 + local_20) - (local_38 - local_20);
  return __return_storage_ptr__;
}

// GetTextWorldSize @ 1479d2fc0

TVector<double> * __thiscall
UTextRenderComponent::GetTextWorldSize
          (UTextRenderComponent *this,TVector<double> *__return_storage_ptr__)

{
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  
  (**(code **)(this->_padding_ + 0x598))(this,&local_48,&this->_padding_);
  (__return_storage_ptr__->field0_0x0)._s_0.X = (local_48 + local_30) - (local_48 - local_30);
  (__return_storage_ptr__->field0_0x0)._s_0.Y = (local_40 + local_28) - (local_40 - local_28);
  (__return_storage_ptr__->field0_0x0)._s_0.Z = (local_38 + local_20) - (local_38 - local_20);
  return __return_storage_ptr__;
}

// GetUsedMaterials @ 1479d4280

void __thiscall
UTextRenderComponent::GetUsedMaterials
          (UTextRenderComponent *this,
          TArray<UMaterialInterface_*,TSizedDefaultAllocator<32>_> *param_1,bool param_2)

{
  TObjectPtr<UMaterialInterface>_u_0 *pTVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  TObjectPtr<UMaterialInterface>_u_0 local_18 [2];
  
  local_18[0] = (this->TextMaterial).field0_0x0;
  pTVar1 = (TObjectPtr<UMaterialInterface>_u_0 *)(param_1->AllocatorInstance).Data;
  if ((pTVar1 <= local_18) && (local_18 < pTVar1 + param_1->ArrayMax)) {
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
  iVar4 = param_1->ArrayNum;
  if (iVar4 == param_1->ArrayMax) {
    iVar4 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
  }
  param_1->ArrayNum = iVar4 + 1;
  *(TObjectPtr<UMaterialInterface>_u_0 *)((param_1->AllocatorInstance).Data + (longlong)iVar4 * 8) =
       local_18[0];
  return;
}

// InitializeMIDCache @ 1479d8720

void __cdecl UTextRenderComponent::InitializeMIDCache(void)

{
  code *pcVar1;
  bool bVar2;
  FTextRenderComponentMIDCache *this;
  
  if (FTextRenderComponentMIDCache::InstancePtr != (FTextRenderComponentMIDCache *)0x0) {
    bVar2 = ::FDebug::CheckVerifyFailedImpl2
                      ("!InstancePtr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\Components\\TextRenderComponent.cpp"
                       ,0x197,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  this = ::operator_new(0xf8);
  if (this != (FTextRenderComponentMIDCache *)0x0) {
    FTextRenderComponentMIDCache::InstancePtr =
         FTextRenderComponentMIDCache::FTextRenderComponentMIDCache(this);
    return;
  }
  FTextRenderComponentMIDCache::InstancePtr = (FTextRenderComponentMIDCache *)0x0;
  return;
}

// K2_SetText @ 1479daa60

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UTextRenderComponent::K2_SetText(UTextRenderComponent *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 local_res8 [8];
  
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->Text).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->Text).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,local_res8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->Text).Flags = param_1->Flags;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// PostLoad @ 1479de300

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UTextRenderComponent::PostLoad(UTextRenderComponent *this)

{
  float fVar1;
  float fVar2;
  byte bVar3;
  UFont *pUVar4;
  FPackageFileVersion FVar5;
  FString *pFVar6;
  wchar_t *pwVar7;
  float fVar8;
  float fVar9;
  undefined1 auStackY_2a8 [32];
  TTransform<double> local_248;
  TTransform<double> local_1e8;
  TTransform<double> local_188;
  TTransform<double> local_128;
  TTransform<double> local_c8;
  ulonglong local_68;
  
  local_68 = __security_cookie.value ^ (ulonglong)auStackY_2a8;
  FVar5 = UObjectBaseUtility::GetLinkerUEVersion((UObjectBaseUtility *)this);
  if (*(int *)FVar5 < 0x140) {
    bVar3 = (this->VerticalAlignment).Value;
    pUVar4 = (this->Font).field0_0x0.DebugPtr;
    fVar8 = this->VertSpacingAdjust;
    fVar9 = this->HorizSpacingAdjust;
    fVar1 = this->YScale;
    fVar2 = this->XScale;
    pFVar6 = FText::ToString(&this->Text);
    if ((pFVar6->Data).ArrayNum == 0) {
      pwVar7 = L"";
    }
    else {
      pwVar7 = (wchar_t *)(pFVar6->Data).AllocatorInstance.Data;
    }
    fVar8 = CalculateVerticalAlignmentOffset(pwVar7,pUVar4,fVar2,fVar1,fVar9,fVar8,(uint)bVar3);
    USceneComponent::GetRelativeTransform((USceneComponent *)this,&local_c8);
    local_248.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_1e8.Scale3D.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.XY.m128d_f64;
    local_248.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    local_1e8.Scale3D.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Scale3D.ZW.m128d_f64;
    local_248.Translation.ZW.m128d_f64[0] =
         (double)(float)((uint)fVar8 ^ __xmm_80000000800000008000000080000000);
    local_248.Translation.XY.m128d_f64[0] = 0.0;
    local_248.Translation.XY.m128d_f64[1] = 0.0;
    local_1e8.Translation.XY.m128d_f64[0] = 0.0;
    local_1e8.Translation.XY.m128d_f64[1] = 0.0;
    local_1e8.Translation.ZW.m128d_f64[0] = (double)fVar8;
    local_248.Translation.ZW.m128d_f64[1] = 0.0;
    local_1e8.Translation.ZW.m128d_f64[1] = 0.0;
    local_188.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_188.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_188.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_188.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_188.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_188.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_188.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_188.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_188.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_188.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_188.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_188.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_248.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_188.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_188.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_188.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    local_248.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_1e8.Rotation.XY.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.XY.m128d_f64;
    local_1e8.Rotation.ZW.m128d_f64 = UE::Math::TTransform<double>::Identity.Rotation.ZW.m128d_f64;
    local_188.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_188.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_188.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    UE::Math::TTransform<double>::Multiply(&local_188,&local_248,&local_c8);
    local_128.Rotation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[1],0);
    local_128.Rotation.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[0];
    local_128.Rotation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[1] >> 0x20);
    local_128.Rotation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float0001.m128_f32[3],0);
    local_128.Rotation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float0001.m128_f32[2];
    local_128.Rotation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float0001.m128_f32[3] >> 0x20);
    local_128.Translation.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[1],0);
    local_128.Translation.XY.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[0];
    local_128.Translation.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[1] >> 0x20);
    local_128.Translation.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::FloatZero.m128_f32[3],0);
    local_128.Translation.ZW.m128d_f64[0] = (double)GlobalVectorConstants::FloatZero.m128_f32[2];
    local_128.Translation.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::FloatZero.m128_f32[3] >> 0x20);
    local_128.Scale3D.XY.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[1],0);
    local_128.Scale3D.XY.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[0];
    local_128.Scale3D.XY.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[1] >> 0x20);
    local_128.Scale3D.ZW.m128d_f64[1]._0_4_ =
         SUB84((double)GlobalVectorConstants::Float1110.m128_f32[3],0);
    local_128.Scale3D.ZW.m128d_f64[0] = (double)GlobalVectorConstants::Float1110.m128_f32[2];
    local_128.Scale3D.ZW.m128d_f64[1]._4_4_ =
         (int)((ulonglong)(double)GlobalVectorConstants::Float1110.m128_f32[3] >> 0x20);
    UE::Math::TTransform<double>::Multiply(&local_128,&local_188,&local_1e8);
    USceneComponent::SetRelativeTransform
              ((USceneComponent *)this,&local_128,false,(FHitResult *)0x0,None);
  }
  FVar5 = UObjectBaseUtility::GetLinkerUEVersion((UObjectBaseUtility *)this);
  if (*(int *)FVar5 < 0xf9) {
    (this->VerticalAlignment).Value = '\x03';
  }
  FVar5 = UObjectBaseUtility::GetLinkerUEVersion((UObjectBaseUtility *)this);
  if (*(int *)FVar5 < 0x139) {
    pUVar4 = (this->Font).field0_0x0.DebugPtr;
    if (pUVar4 == (UFont *)0x0) {
      this->WorldSize = 30.0;
      this->InvDefaultSize = 0.033333335;
    }
    else {
      fVar8 = UFont::GetMaxCharHeight(pUVar4);
      fVar9 = __real_3f800000 / fVar8;
      this->WorldSize = fVar8;
      this->InvDefaultSize = fVar9;
    }
  }
  (**(code **)(this->_padding_ + 0x378))(this);
  UPrimitiveComponent::PostLoad((UPrimitiveComponent *)this);
  return;
}

// PrecachePSOs @ 1479dea00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "EShaderFrequency": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "EPrimitiveIdMode": Some values do not have unique names */

void __thiscall UTextRenderComponent::PrecachePSOs(UTextRenderComponent *this)

{
  undefined8 *puVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  ForElementType<FPSOPrecacheVertexFactoryData> FVar5;
  ForElementType<TRefCountPtr<FBaseGraphTask>_> FVar6;
  ulonglong uVar7;
  undefined1 auStackY_108 [32];
  FPSOPrecacheParams_u_0 local_b8;
  undefined1 local_b0 [16];
  TArray<unsigned_int,TSizedDefaultAllocator<32>_> local_a0;
  FVertexFactoryType *local_90;
  TArrayView<FVertexFactoryType_const_*_const,int> local_88;
  ForElementType<FPSOPrecacheVertexFactoryData> local_78;
  int local_50;
  int local_4c;
  TArray<TRefCountPtr<FBaseGraphTask>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_48;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStackY_108;
  bVar3 = IsComponentPSOPrecachingEnabled();
  if (bVar3) {
    uVar7 = (ulonglong)GMaxRHIShaderPlatform;
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar7].bContainsValidPlatformInfo == 0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("IsValid(Platform)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\RHI\\Public\\DataDrivenShaderPlatformInfo.h"
                           ,0x2ce,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    if ((FGenericDataDrivenShaderPlatformInfo::Infos[uVar7].bSupportsManualVertexFetch != 0) &&
       ((this->TextMaterial).field0_0x0.DebugPtr != (UMaterialInterface *)0x0)) {
      local_b8.Data = (ulonglong)(local_b8.Data._0_4_ & 0x8000) | 0x13c00;
      (**(code **)(this->_padding_ + 0x660))(this,&local_b8);
      local_b8.Data = local_b8.Data | 0x2000;
      local_4c = 2;
      local_78.SecondaryData = (ForElementType<FPSOPrecacheVertexFactoryData>)0x0;
      local_50 = 0;
      local_b0._0_8_ = &FLocalVertexFactory::StaticType;
      local_b0[8] = '\0';
      local_b0[9] = '\0';
      local_b0[10] = '\0';
      local_b0[0xb] = '\0';
      local_b0[0xc] = '\0';
      local_b0[0xd] = '\0';
      local_b0[0xe] = '\0';
      local_b0[0xf] = '\0';
      iVar4 = 0;
      if ((&local_78 <= (ForElementType<FPSOPrecacheVertexFactoryData> *)local_b0) &&
         (local_b0 < &local_78.SecondaryData)) {
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
        iVar4 = local_50;
        if (local_50 == local_4c) {
          iVar4 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<2,32,TSizedDefaultAllocator<32>_>::ForElementType<FPSOPrecacheVertexFactoryData>_>
                            (0x810,&local_78,&local_4c);
        }
      }
      local_50 = iVar4 + 1;
      local_90 = &FLocalVertexFactory::StaticType;
      local_88.ArrayNum = 1;
      FVar5 = (ForElementType<FPSOPrecacheVertexFactoryData>)&local_78;
      if (local_78.SecondaryData != (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
        FVar5 = local_78.SecondaryData;
      }
      local_a0.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a0.ArrayNum = 0;
      local_a0.ArrayMax = 0;
      puVar1 = (undefined8 *)((longlong)FVar5 + (longlong)iVar4 * 0x10);
      *puVar1 = local_b0._0_8_;
      puVar1[1] = local_b0._8_8_;
      local_88.DataPtr = &local_90;
      UMaterialInterface::PrecachePSOs
                ((this->TextMaterial).field0_0x0.DebugPtr,&local_48,&local_88,
                 (FPSOPrecacheParams *)&local_b8._s_0,Medium,&local_a0);
      if (local_a0.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a0.AllocatorInstance.Data);
      }
      FVar6 = (ForElementType<TRefCountPtr<FBaseGraphTask>_>)&local_48;
      if (local_48.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FVar6 = local_48.AllocatorInstance.SecondaryData;
      }
      DestructItems<TRefCountPtr<FBaseGraphTask>,int>
                ((TRefCountPtr<FBaseGraphTask> *)FVar6,local_48.ArrayNum);
      if (local_48.AllocatorInstance.SecondaryData !=
          (ForElementType<TRefCountPtr<FBaseGraphTask>_>)0x0) {
        FMemory::Free((void *)local_48.AllocatorInstance.SecondaryData);
      }
      if (local_78.SecondaryData != (ForElementType<FPSOPrecacheVertexFactoryData>)0x0) {
        FMemory::Free((void *)local_78.SecondaryData);
      }
    }
  }
  return;
}

// RequiresGameThreadEndOfFrameUpdates @ 1479e4c00

bool __thiscall
UTextRenderComponent::RequiresGameThreadEndOfFrameUpdates(UTextRenderComponent *this)

{
  return true;
}

// SetFont @ 1479e8700

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UTextRenderComponent::SetFont(UTextRenderComponent *this,UFont *param_1)

{
  float fVar1;
  
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UFont *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
    (this->Font).field0_0x0.DebugPtr = param_1;
  }
  else {
    (this->Font).field0_0x0.DebugPtr = param_1;
    fVar1 = __real_3f800000;
    if (param_1 == (UFont *)0x0) goto LAB_1479e8759;
  }
  fVar1 = UFont::GetMaxCharHeight(param_1);
  fVar1 = __real_3f800000 / fVar1;
LAB_1479e8759:
  this->InvDefaultSize = fVar1;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// SetHorizSpacingAdjust @ 1479e89c0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UTextRenderComponent::SetHorizSpacingAdjust(UTextRenderComponent *this,float param_1)

{
  this->HorizSpacingAdjust = param_1;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// SetHorizontalAlignment @ 1479e89e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UTextRenderComponent::SetHorizontalAlignment(UTextRenderComponent *this,EHorizTextAligment param_1)

{
  (this->HorizontalAlignment).Value = (uchar)param_1;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// SetMaterial @ 1479e9380

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UTextRenderComponent::SetMaterial
          (UTextRenderComponent *this,int param_1,UMaterialInterface *param_2)

{
  if (param_1 == 0) {
    if ((UE::GC::GIsIncrementalReachabilityPending) && (param_2 != (UMaterialInterface *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)param_2);
    }
    (this->TextMaterial).field0_0x0.DebugPtr = param_2;
    UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  }
  return;
}

// SetText @ 1479ec9d0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UTextRenderComponent::SetText(UTextRenderComponent *this,FText *param_1)

{
  ITextData *pIVar1;
  ITextData *pIVar2;
  undefined1 auStackX_8 [8];
  
  pIVar1 = (param_1->TextData).Reference;
  pIVar2 = (this->Text).TextData.Reference;
  if (pIVar2 != pIVar1) {
    (this->Text).TextData.Reference = pIVar1;
    if (pIVar1 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar1 + 8))(pIVar1,auStackX_8);
    }
    if (pIVar2 != (ITextData *)0x0) {
      (**(code **)((longlong)*pIVar2 + 0x10))(pIVar2);
    }
  }
  (this->Text).Flags = param_1->Flags;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// SetTextMaterial @ 1479ec9e0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UTextRenderComponent::SetTextMaterial(UTextRenderComponent *this,UMaterialInterface *param_1)

{
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_1 != (UMaterialInterface *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  (this->TextMaterial).field0_0x0.DebugPtr = param_1;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// SetTextRenderColor @ 1479eca30

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UTextRenderComponent::SetTextRenderColor(UTextRenderComponent *this,FColor param_1)

{
  (this->TextRenderColor).field0_0x0._s_0 = (FColor_u_0_s_0)param_1.field0_0x0;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// SetVertSpacingAdjust @ 1479ed070

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UTextRenderComponent::SetVertSpacingAdjust(UTextRenderComponent *this,float param_1)

{
  this->VertSpacingAdjust = param_1;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// SetVerticalAlignment @ 1479ed090

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall
UTextRenderComponent::SetVerticalAlignment(UTextRenderComponent *this,EVerticalTextAligment param_1)

{
  (this->VerticalAlignment).Value = (uchar)param_1;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// SetWorldSize @ 1479ed230

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UTextRenderComponent::SetWorldSize(UTextRenderComponent *this,float param_1)

{
  this->WorldSize = param_1;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// SetXScale @ 1479ed250

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UTextRenderComponent::SetXScale(UTextRenderComponent *this,float param_1)

{
  this->XScale = param_1;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// SetYScale @ 1479ed270

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __thiscall UTextRenderComponent::SetYScale(UTextRenderComponent *this,float param_1)

{
  this->YScale = param_1;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)this);
  return;
}

// ShouldRecreateProxyOnUpdateTransform @ 1479edcd0

bool __thiscall
UTextRenderComponent::ShouldRecreateProxyOnUpdateTransform(UTextRenderComponent *this)

{
  return false;
}

// ShutdownMIDCache @ 1479edd40

void __cdecl UTextRenderComponent::ShutdownMIDCache(void)

{
  if (FTextRenderComponentMIDCache::InstancePtr != (FTextRenderComponentMIDCache *)0x0) {
    (**(code **)FTextRenderComponentMIDCache::InstancePtr->_padding_)
              (FTextRenderComponentMIDCache::InstancePtr,1);
  }
  FTextRenderComponentMIDCache::InstancePtr = (FTextRenderComponentMIDCache *)0x0;
  return;
}

// StaticRegisterNativesUTextRenderComponent @ 1479ee120

void __cdecl UTextRenderComponent::StaticRegisterNativesUTextRenderComponent(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 0xe;
  local_18.DataPtr = Z_Construct_UClass_UTextRenderComponent_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// UpdateBounds @ 1479f0380

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall UTextRenderComponent::UpdateBounds(UTextRenderComponent *this)

{
  longlong lVar1;
  TMatrix<double> *pTVar2;
  longlong *plVar3;
  undefined1 auStack_158 [32];
  undefined1 local_138 [64];
  TTransform<double> local_f8;
  undefined1 local_98 [128];
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_158;
  lVar1 = this->_padding_;
  pTVar2 = (TMatrix<double> *)(**(code **)(lVar1 + 0x808))(this,local_98);
  UE::Math::TTransform<double>::SetFromMatrix(&local_f8,pTVar2);
  plVar3 = (longlong *)(**(code **)(lVar1 + 0x598))(this,local_138,&local_f8);
  lVar1 = plVar3[1];
  this->_padding_ = *plVar3;
  this->_padding_ = lVar1;
  lVar1 = plVar3[3];
  this->_padding_ = plVar3[2];
  this->_padding_ = lVar1;
  lVar1 = plVar3[5];
  this->_padding_ = plVar3[4];
  this->_padding_ = lVar1;
  this->_padding_ = plVar3[6];
  return;
}

// execGetTextLocalSize @ 147a00a50

void __cdecl
UTextRenderComponent::execGetTextLocalSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x598))
            (param_1,&local_48,&UE::Math::TTransform<double>::Identity);
  *(double *)param_3 = (local_48 + local_30) - (local_48 - local_30);
  *(double *)((longlong)param_3 + 8) = (local_40 + local_28) - (local_40 - local_28);
  *(double *)((longlong)param_3 + 0x10) = (local_38 + local_20) - (local_38 - local_20);
  return;
}

// execGetTextWorldSize @ 147a00af0

void __cdecl
UTextRenderComponent::execGetTextWorldSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  double local_48;
  double local_40;
  double local_38;
  double local_30;
  double local_28;
  double local_20;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  (**(code **)(*(longlong *)param_1 + 0x598))(param_1,&local_48,&param_1[0xc].field_0x10);
  *(double *)param_3 = (local_48 + local_30) - (local_48 - local_30);
  *(double *)((longlong)param_3 + 8) = (local_40 + local_28) - (local_40 - local_28);
  *(double *)((longlong)param_3 + 0x10) = (local_38 + local_20) - (local_38 - local_20);
  return;
}

// execK2_SetText @ 147a03120

void __cdecl UTextRenderComponent::execK2_SetText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FText *pFVar2;
  FText local_18;
  
  FText::FText(&local_18);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar2 = &local_18;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar2 = (FText *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  K2_SetText((UTextRenderComponent *)param_1,pFVar2);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execSetFont @ 147a05a20

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UTextRenderComponent::execSetFont(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UFont *this;
  float fVar2;
  UFont *local_res8;
  
  local_res8 = (UFont *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  this = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UFont *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)local_res8);
  }
  *(UFont **)&param_1[0x22].field_0x10 = this;
  fVar2 = __real_3f800000;
  if (this != (UFont *)0x0) {
    fVar2 = UFont::GetMaxCharHeight(this);
    fVar2 = __real_3f800000 / fVar2;
  }
  *(float *)&param_1[0x23].field_0x4 = fVar2;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  return;
}

// execSetHorizSpacingAdjust @ 147a061a0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UTextRenderComponent::execSetHorizSpacingAdjust(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[0x23].field_0x8 = local_res8[0];
  UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  return;
}

// execSetHorizontalAlignment @ 147a06230

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UTextRenderComponent::execSetHorizontalAlignment(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x22].field_0x18 = local_res8[0];
  UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  return;
}

// execSetText @ 147a0a5c0

void __cdecl UTextRenderComponent::execSetText(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FText *pFVar2;
  FText local_18;
  
  FText::FText(&local_18);
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_18);
  }
  pFVar2 = &local_18;
  if ((FText *)param_2->MostRecentPropertyAddress != (FText *)0x0) {
    pFVar2 = (FText *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  K2_SetText((UTextRenderComponent *)param_1,pFVar2);
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return;
}

// execSetTextMaterial @ 147a0a670

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UTextRenderComponent::execSetTextMaterial(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObject *pUVar2;
  UObject *local_res8;
  
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
  pUVar2 = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_res8 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(local_res8);
  }
  *(UObject **)&param_1[0x22].field_0x8 = pUVar2;
  UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  return;
}

// execSetTextRenderColor @ 147a0a720

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UTextRenderComponent::execSetTextRenderColor(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[0x22].field_0x1c = local_res8[0];
  UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  return;
}

// execSetVertSpacingAdjust @ 147a0ae40

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UTextRenderComponent::execSetVertSpacingAdjust(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[0x23].field_0xc = local_res8[0];
  UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  return;
}

// execSetVerticalAlignment @ 147a0aed0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl
UTextRenderComponent::execSetVerticalAlignment(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined1 local_res8 [8];
  
  local_res8[0] = 0;
  FByteProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  param_1[0x22].field_0x19 = local_res8[0];
  UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  return;
}

// execSetWorldSize @ 147a0b360

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UTextRenderComponent::execSetWorldSize(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)(param_1 + 0x23) = local_res8[0];
  UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  return;
}

// execSetXScale @ 147a0b3f0

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UTextRenderComponent::execSetXScale(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[0x22].field_0x20 = local_res8[0];
  UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  return;
}

// execSetYScale @ 147a0b480

/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */

void __cdecl UTextRenderComponent::execSetYScale(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  undefined4 local_res8 [2];
  
  local_res8[0] = 0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res8,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res8);
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)&param_1[0x22].field_0x24 = local_res8[0];
  UActorComponent::MarkRenderStateDirty((UActorComponent *)param_1);
  return;
}

