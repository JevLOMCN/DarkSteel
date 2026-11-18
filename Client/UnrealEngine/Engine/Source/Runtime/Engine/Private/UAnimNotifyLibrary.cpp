// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 18

// StaticClass @ 147496950

UClass * __cdecl UAnimNotifyLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimNotifyLibrary",
               &Z_Registration_Info_UClass_UAnimNotifyLibrary.InnerSingleton,
               StaticRegisterNativesUAnimNotifyLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAnimNotifyLibrary>,
               InternalVTableHelperCtorCaller<UAnimNotifyLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyLibrary.InnerSingleton;
}

// UAnimNotifyLibrary @ 1474b3ce0

UAnimNotifyLibrary * __thiscall
UAnimNotifyLibrary::UAnimNotifyLibrary(UAnimNotifyLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UAnimNotifyLibrary__6B_;
  return this;
}

// UAnimNotifyLibrary @ 1474b3d10

UAnimNotifyLibrary * __thiscall
UAnimNotifyLibrary::UAnimNotifyLibrary(UAnimNotifyLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UAnimNotifyLibrary__6B_;
  return this;
}

// ~UAnimNotifyLibrary @ 1474b55a0

void __thiscall UAnimNotifyLibrary::~UAnimNotifyLibrary(UAnimNotifyLibrary *this)

{
  *(undefined ***)this = &___7UAnimNotifyLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// GetCurrentAnimationNotifyStateTime @ 1474d8b10

float __cdecl
UAnimNotifyLibrary::GetCurrentAnimationNotifyStateTime(FAnimNotifyEventReference *param_1)

{
  FAnimNotifyEvent *this;
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (((param_1->NotifySource).field0_0x0.DebugPtr != (UObject *)0x0) &&
     (this = param_1->Notify, this != (FAnimNotifyEvent *)0x0)) {
    fVar1 = FAnimNotifyEvent::GetDuration(this);
    fVar3 = param_1->CurrentAnimTime;
    fVar2 = FAnimNotifyEvent::GetTriggerTime(this);
    fVar3 = fVar3 - fVar2;
    if (fVar1 <= fVar3) {
      fVar3 = fVar1;
    }
    if (fVar3 <= 0.0) {
      fVar3 = 0.0;
    }
    return fVar3;
  }
  return 0.0;
}

// GetCurrentAnimationNotifyStateTimeRatio @ 1474d8b90

float __cdecl
UAnimNotifyLibrary::GetCurrentAnimationNotifyStateTimeRatio(FAnimNotifyEventReference *param_1)

{
  FAnimNotifyEvent *this;
  float fVar1;
  float fVar2;
  float fVar3;
  
  if (((param_1->NotifySource).field0_0x0.DebugPtr != (UObject *)0x0) &&
     (this = param_1->Notify, this != (FAnimNotifyEvent *)0x0)) {
    fVar1 = FAnimNotifyEvent::GetDuration(this);
    if (0.0 < fVar1) {
      fVar1 = param_1->CurrentAnimTime;
      fVar2 = FAnimNotifyEvent::GetTriggerTime(this);
      fVar3 = FAnimNotifyEvent::GetDuration(this);
      fVar3 = (fVar1 - fVar2) / fVar3;
      if (__real_3f800000 <= fVar3) {
        fVar3 = __real_3f800000;
      }
      if (fVar3 <= 0.0) {
        fVar3 = 0.0;
      }
      return fVar3;
    }
  }
  return 0.0;
}

// GetCurrentAnimationTime @ 1474d8c30

float __cdecl UAnimNotifyLibrary::GetCurrentAnimationTime(FAnimNotifyEventReference *param_1)

{
  return param_1->CurrentAnimTime;
}

// GetCurrentAnimationTimeRatio @ 1474d8c40

float __cdecl UAnimNotifyLibrary::GetCurrentAnimationTimeRatio(FAnimNotifyEventReference *param_1)

{
  int iVar1;
  UObject *pUVar2;
  UClass *pUVar3;
  float fVar4;
  
  pUVar2 = (param_1->NotifySource).field0_0x0.DebugPtr;
  if (pUVar2 != (UObject *)0x0) {
    pUVar3 = Z_Construct_UClass_UAnimSequenceBase_NoRegister();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(*(longlong *)&pUVar2->field_0x10 + 0x38)) &&
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)&pUVar2->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar3->_padding_)) {
      fVar4 = (float)(**(code **)(*(longlong *)pUVar2 + 0x2c0))(pUVar2);
      if (0.0 < fVar4) {
        fVar4 = (float)(**(code **)(*(longlong *)pUVar2 + 0x2c0))(pUVar2);
        fVar4 = param_1->CurrentAnimTime / fVar4;
        if (__real_3f800000 <= fVar4) {
          fVar4 = __real_3f800000;
        }
        if (fVar4 <= 0.0) {
          fVar4 = 0.0;
        }
        return fVar4;
      }
    }
  }
  return 0.0;
}

// GetPrivateStaticClass @ 1474dcf60

UClass * __cdecl UAnimNotifyLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UAnimNotifyLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"AnimNotifyLibrary",
               &Z_Registration_Info_UClass_UAnimNotifyLibrary.InnerSingleton,
               StaticRegisterNativesUAnimNotifyLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UAnimNotifyLibrary>,
               InternalVTableHelperCtorCaller<UAnimNotifyLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UAnimNotifyLibrary.InnerSingleton;
}

// IsBlendingOut @ 1474e9cc0

bool __cdecl UAnimNotifyLibrary::IsBlendingOut(FAnimNotifyEventReference *param_1)

{
  return param_1->bActiveContext == false;
}

// NotifyStateReachedEnd @ 1474eea80

bool __cdecl UAnimNotifyLibrary::NotifyStateReachedEnd(FAnimNotifyEventReference *param_1)

{
  FScriptContainerElement *pFVar1;
  int iVar2;
  TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
  *pTVar3;
  FName FVar4;
  FName *pFVar5;
  FScriptContainerElement *pFVar6;
  undefined1 local_res8 [8];
  undefined1 local_res10 [8];
  
  pTVar3 = (param_1->ContextData).Object;
  if (pTVar3 != (TArray<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,TSizedDefaultAllocator<32>_>
                 *)0x0) {
    pFVar6 = (pTVar3->AllocatorInstance).Data;
    iVar2 = pTVar3->ArrayNum;
    pFVar1 = pFVar6 + (longlong)iVar2 * 8;
    while( true ) {
      if (pTVar3->ArrayNum != iVar2) {
        `TCheckedPointerIterator<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res8);
      }
      FVar4 = UE::Anim::FAnimNotifyEndDataContext::TypeName;
      if (pFVar6 == pFVar1) {
        return false;
      }
      pFVar5 = (FName *)(**(code **)(**(longlong **)pFVar6 + 8))(*(longlong **)pFVar6,local_res10);
      if (*pFVar5 == FVar4) break;
      pFVar6 = pFVar6 + 8;
    }
    if (*(longlong *)pFVar6 != 0) {
      return (bool)*(undefined1 *)(*(longlong *)pFVar6 + 8);
    }
  }
  return false;
}

// StaticRegisterNativesUAnimNotifyLibrary @ 1474fad30

void __cdecl UAnimNotifyLibrary::StaticRegisterNativesUAnimNotifyLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 6;
  local_18.DataPtr = Z_Construct_UClass_UAnimNotifyLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execGetCurrentAnimationNotifyStateTime @ 147505140

void __cdecl
UAnimNotifyLibrary::execGetCurrentAnimationNotifyStateTime
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  float fVar1;
  FProperty *pFVar2;
  FAnimNotifyEvent *this;
  uchar *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uchar local_68 [8];
  TReferenceControllerBase<1> *pTStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined4 local_40;
  undefined1 local_3c;
  
  local_48 = 0;
  local_40 = 0;
  local_68[0] = '\0';
  local_68[1] = '\0';
  local_68[2] = '\0';
  local_68[3] = '\0';
  local_68[4] = '\0';
  local_68[5] = '\0';
  local_68[6] = '\0';
  local_68[7] = '\0';
  pTStack_60 = (TReferenceControllerBase<1> *)0x0;
  local_3c = 0;
  local_58 = 0;
  uStack_50 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_68,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_68);
  }
  puVar3 = local_68;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar3 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if ((*(longlong *)(puVar3 + 0x20) == 0) ||
     (this = *(FAnimNotifyEvent **)(puVar3 + 0x10), this == (FAnimNotifyEvent *)0x0)) {
    fVar6 = 0.0;
  }
  else {
    fVar4 = FAnimNotifyEvent::GetDuration(this);
    fVar1 = *(float *)(puVar3 + 0x28);
    fVar5 = FAnimNotifyEvent::GetTriggerTime(this);
    fVar6 = fVar1 - fVar5;
    if (fVar4 <= fVar1 - fVar5) {
      fVar6 = fVar4;
    }
    if (fVar6 <= 0.0) {
      fVar6 = 0.0;
    }
  }
  *(float *)param_3 = fVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_60);
  return;
}

// execGetCurrentAnimationNotifyStateTimeRatio @ 147505270

void __cdecl
UAnimNotifyLibrary::execGetCurrentAnimationNotifyStateTimeRatio
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FAnimNotifyEvent *this;
  uchar *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  uchar local_58 [8];
  TReferenceControllerBase<1> *pTStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  
  local_38 = 0;
  local_30 = 0;
  local_2c = 0;
  local_58[0] = '\0';
  local_58[1] = '\0';
  local_58[2] = '\0';
  local_58[3] = '\0';
  local_58[4] = '\0';
  local_58[5] = '\0';
  local_58[6] = '\0';
  local_58[7] = '\0';
  pTStack_50 = (TReferenceControllerBase<1> *)0x0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  local_48 = 0;
  uStack_40 = 0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_58,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_58);
  }
  puVar2 = local_58;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (((*(longlong *)(puVar2 + 0x20) == 0) ||
      (this = *(FAnimNotifyEvent **)(puVar2 + 0x10), this == (FAnimNotifyEvent *)0x0)) ||
     (fVar3 = FAnimNotifyEvent::GetDuration(this), fVar3 <= 0.0)) {
    fVar5 = 0.0;
  }
  else {
    fVar3 = *(float *)(puVar2 + 0x28);
    fVar4 = FAnimNotifyEvent::GetTriggerTime(this);
    fVar5 = FAnimNotifyEvent::GetDuration(this);
    fVar5 = (fVar3 - fVar4) / fVar5;
    if (__real_3f800000 <= fVar5) {
      fVar5 = __real_3f800000;
    }
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
  }
  *(float *)param_3 = fVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
  return;
}

// execGetCurrentAnimationTime @ 147505390

void __cdecl
UAnimNotifyLibrary::execGetCurrentAnimationTime(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar local_38 [8];
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  local_18 = 0;
  local_10 = 0;
  local_38[0] = '\0';
  local_38[1] = '\0';
  local_38[2] = '\0';
  local_38[3] = '\0';
  local_38[4] = '\0';
  local_38[5] = '\0';
  local_38[6] = '\0';
  local_38[7] = '\0';
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_c = 0;
  local_28 = 0;
  uStack_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  puVar2 = local_38;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(undefined4 *)param_3 = *(undefined4 *)(puVar2 + 0x28);
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// execGetCurrentAnimationTimeRatio @ 147505450

void __cdecl
UAnimNotifyLibrary::execGetCurrentAnimationTimeRatio(UObject *param_1,FFrame *param_2,void *param_3)

{
  int iVar1;
  FProperty *pFVar2;
  longlong *plVar3;
  UClass *pUVar4;
  uchar *puVar5;
  float fVar6;
  float fVar7;
  uchar local_48 [8];
  TReferenceControllerBase<1> *pTStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  undefined4 local_20;
  undefined1 local_1c;
  
  local_28 = 0;
  local_20 = 0;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  pTStack_40 = (TReferenceControllerBase<1> *)0x0;
  local_1c = 0;
  local_38 = 0;
  uStack_30 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_48,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_48);
  }
  puVar5 = local_48;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar5 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar3 = *(longlong **)(puVar5 + 0x20);
  if (plVar3 != (longlong *)0x0) {
    pUVar4 = Z_Construct_UClass_UAnimSequenceBase_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if (((iVar1 <= *(int *)(plVar3[2] + 0x38)) &&
        ((longlong *)*(undefined1 **)(*(longlong *)(plVar3[2] + 0x30) + (longlong)iVar1 * 8) ==
         &pUVar4->_padding_)) &&
       (fVar6 = (float)(**(code **)(*plVar3 + 0x2c0))(plVar3), 0.0 < fVar6)) {
      fVar7 = (float)(**(code **)(*plVar3 + 0x2c0))(plVar3);
      fVar6 = *(float *)(puVar5 + 0x28) / fVar7;
      if (__real_3f800000 <= *(float *)(puVar5 + 0x28) / fVar7) {
        fVar6 = __real_3f800000;
      }
      if (fVar6 <= 0.0) {
        fVar6 = 0.0;
      }
      goto LAB_14750554f;
    }
  }
  fVar6 = 0.0;
LAB_14750554f:
  *(float *)param_3 = fVar6;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_40);
  return;
}

// execIsBlendingOut @ 147505be0

void __cdecl UAnimNotifyLibrary::execIsBlendingOut(UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  uchar *puVar2;
  uchar local_38 [8];
  TReferenceControllerBase<1> *pTStack_30;
  undefined8 local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  undefined4 local_10;
  undefined1 local_c;
  
  local_18 = 0;
  local_10 = 0;
  local_38[0] = '\0';
  local_38[1] = '\0';
  local_38[2] = '\0';
  local_38[3] = '\0';
  local_38[4] = '\0';
  local_38[5] = '\0';
  local_38[6] = '\0';
  local_38[7] = '\0';
  pTStack_30 = (TReferenceControllerBase<1> *)0x0;
  local_c = 0;
  local_28 = 0;
  uStack_20 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_38,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_38);
  }
  puVar2 = local_38;
  if (param_2->MostRecentPropertyAddress != (uchar *)0x0) {
    puVar2 = param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *(bool *)param_3 = puVar2[0x2c] == '\0';
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_30);
  return;
}

// execNotifyStateReachedEnd @ 1475065c0

void __cdecl
UAnimNotifyLibrary::execNotifyStateReachedEnd(UObject *param_1,FFrame *param_2,void *param_3)

{
  longlong *plVar1;
  FProperty *pFVar2;
  longlong lVar3;
  FName FVar4;
  undefined1 uVar5;
  FName *pFVar6;
  longlong *plVar7;
  longlong *plVar8;
  undefined1 local_res10 [8];
  undefined1 local_res18 [16];
  longlong local_58;
  TReferenceControllerBase<1> *pTStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined4 local_30;
  undefined1 local_2c;
  
  local_38 = 0;
  local_30 = 0;
  local_58 = 0;
  pTStack_50 = (TReferenceControllerBase<1> *)0x0;
  local_2c = 0;
  local_48 = 0;
  uStack_40 = 0;
  param_2->MostRecentPropertyAddress = (uchar *)0x0;
  param_2->MostRecentPropertyContainer = (uchar *)0x0;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_58,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_58);
  }
  plVar7 = &local_58;
  if ((longlong *)param_2->MostRecentPropertyAddress != (longlong *)0x0) {
    plVar7 = (longlong *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  plVar7 = (longlong *)*plVar7;
  if (plVar7 != (longlong *)0x0) {
    plVar8 = (longlong *)*plVar7;
    lVar3 = plVar7[1];
    plVar1 = plVar8 + (int)lVar3;
    while( true ) {
      if ((int)plVar7[1] != (int)lVar3) {
        `TCheckedPointerIterator<TUniquePtr<UE::Anim::IAnimNotifyEventContextDataInterface_const_,TDefaultDelete<UE::Anim::IAnimNotifyEventContextDataInterface_const_>_>,int,0>
        ::operator!='::__l2::<lambda_1>::operator()(local_res10);
      }
      FVar4 = UE::Anim::FAnimNotifyEndDataContext::TypeName;
      if (plVar8 == plVar1) goto LAB_1475066b9;
      pFVar6 = (FName *)(**(code **)(*(longlong *)*plVar8 + 8))((longlong *)*plVar8,local_res18);
      if (*pFVar6 == FVar4) break;
      plVar8 = plVar8 + 1;
    }
    if (*plVar8 != 0) {
      uVar5 = *(undefined1 *)(*plVar8 + 8);
      goto LAB_1475066bb;
    }
  }
LAB_1475066b9:
  uVar5 = 0;
LAB_1475066bb:
  *(undefined1 *)param_3 = uVar5;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline(pTStack_50);
  return;
}

