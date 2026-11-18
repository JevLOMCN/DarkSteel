// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 12

// StaticClass @ 147ba9720

UClass * __cdecl UFieldNotificationLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFieldNotificationLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"FieldNotificationLibrary",
               &Z_Registration_Info_UClass_UFieldNotificationLibrary.InnerSingleton,
               StaticRegisterNativesUFieldNotificationLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UFieldNotificationLibrary>,
               InternalVTableHelperCtorCaller<UFieldNotificationLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFieldNotificationLibrary.InnerSingleton;
}

// UFieldNotificationLibrary @ 147bbc1d0

UFieldNotificationLibrary * __thiscall
UFieldNotificationLibrary::UFieldNotificationLibrary
          (UFieldNotificationLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UFieldNotificationLibrary__6B_;
  return this;
}

// UFieldNotificationLibrary @ 147bbc200

UFieldNotificationLibrary * __thiscall
UFieldNotificationLibrary::UFieldNotificationLibrary
          (UFieldNotificationLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UFieldNotificationLibrary__6B_;
  return this;
}

// ~UFieldNotificationLibrary @ 147bbf230

void __thiscall
UFieldNotificationLibrary::~UFieldNotificationLibrary(UFieldNotificationLibrary *this)

{
  *(undefined ***)this = &___7UFieldNotificationLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// BroadcastFieldValueChanged @ 147bcb1d0

void __cdecl
UFieldNotificationLibrary::BroadcastFieldValueChanged(UObject *param_1,FFieldNotificationId param_2)

{
  UClass *pUVar1;
  longlong *plVar2;
  undefined8 *puVar3;
  longlong *plVar4;
  undefined8 *local_38;
  undefined4 local_30;
  longlong *local_28;
  FName local_20;
  code *local_18;
  undefined8 **local_10;
  
  if (param_1 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable(param_1);
    }
    pUVar1 = Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister();
    plVar2 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar1);
    plVar4 = plVar2;
    if (param_1 == (UObject *)0x0) {
      plVar4 = (longlong *)0x0;
    }
    if ((plVar4 != (longlong *)0x0) && (param_2.FieldName != (FName)0x0)) {
      puVar3 = (undefined8 *)(**(code **)(*plVar2 + 0x30))(plVar2);
      local_28 = (longlong *)&local_38;
      local_10 = &local_28;
      local_38 = (longlong *)0x0;
      local_18 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UE::FieldNotification::IClassDescriptor::GetField'::__l2::<lambda_1>,bool,UE::FieldNotification::FFieldId>
                 ::Call;
      local_20 = param_2.FieldName;
      (**(code **)*puVar3)(puVar3,*(undefined8 *)&param_1->field_0x10,&local_18);
      if (local_38 != (longlong *)0x0) {
        local_20.ComparisonIndex.Value = local_30;
        local_28 = local_38;
        (**(code **)(*plVar2 + 0x38))(plVar2,&local_28);
      }
    }
  }
  return;
}

// BroadcastFieldsValueChanged @ 147bcb2c0

void __cdecl
UFieldNotificationLibrary::BroadcastFieldsValueChanged
          (UObject *param_1,TArray<FFieldNotificationId,TSizedDefaultAllocator<32>_> *param_2)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  UClass *pUVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  FScriptContainerElement *pFVar7;
  undefined1 local_res8 [8];
  longlong local_68;
  undefined4 local_60;
  longlong local_58;
  undefined4 local_50;
  longlong *local_48;
  longlong local_40;
  code *local_38;
  longlong **local_30;
  
  if (param_1 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending) {
      UE::GC::MarkAsReachable(param_1);
    }
    pUVar4 = Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister();
    plVar5 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar4);
    if (param_1 == (UObject *)0x0) {
      plVar5 = (longlong *)0x0;
    }
    if (plVar5 != (longlong *)0x0) {
      pFVar7 = (param_2->AllocatorInstance).Data;
      iVar1 = param_2->ArrayNum;
      pFVar3 = pFVar7 + (longlong)iVar1 * 8;
      while( true ) {
        if (param_2->ArrayNum != iVar1) {
          `TCheckedPointerIterator<FFieldNotificationId,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res8);
        }
        if (pFVar7 == pFVar3) break;
        lVar2 = *(longlong *)pFVar7;
        if (lVar2 != 0) {
          puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5);
          local_48 = &local_68;
          local_30 = &local_48;
          local_68 = 0;
          local_38 = UE::Core::Private::Function::
                     TFunctionRefCaller<`UE::FieldNotification::IClassDescriptor::GetField'::__l2::<lambda_1>,bool,UE::FieldNotification::FFieldId>
                     ::Call;
          local_40 = lVar2;
          (**(code **)*puVar6)(puVar6,*(undefined8 *)&param_1->field_0x10,&local_38);
          if (local_68 != 0) {
            local_50 = local_60;
            local_58 = local_68;
            (**(code **)(*plVar5 + 0x38))(plVar5,&local_58);
          }
        }
        pFVar7 = pFVar7 + 8;
      }
    }
  }
  pFVar3 = (param_2->AllocatorInstance).Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return;
}

// GetPrivateStaticClass @ 147be4e80

UClass * __cdecl UFieldNotificationLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UFieldNotificationLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/Engine",L"FieldNotificationLibrary",
               &Z_Registration_Info_UClass_UFieldNotificationLibrary.InnerSingleton,
               StaticRegisterNativesUFieldNotificationLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UFieldNotificationLibrary>,
               InternalVTableHelperCtorCaller<UFieldNotificationLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UFieldNotificationLibrary.InnerSingleton;
}

// StaticRegisterNativesUFieldNotificationLibrary @ 147c03570

void __cdecl UFieldNotificationLibrary::StaticRegisterNativesUFieldNotificationLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UFieldNotificationLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execBroadcastFieldValueChanged @ 147c13570

void __cdecl
UFieldNotificationLibrary::execBroadcastFieldValueChanged
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  longlong lVar2;
  UObject *this;
  UClass *pUVar3;
  longlong *plVar4;
  undefined8 *puVar5;
  longlong local_res10;
  UObject *local_res20;
  undefined8 *local_48;
  undefined4 local_40;
  longlong *local_38;
  longlong local_30;
  code *local_28;
  undefined8 **local_20;
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10 = 0;
  FStructProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  this = local_res20;
  lVar2 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(local_res20);
    }
    pUVar3 = Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister();
    plVar4 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar3);
    if ((plVar4 != (longlong *)0x0) && (lVar2 != 0)) {
      puVar5 = (undefined8 *)(**(code **)(*plVar4 + 0x30))(plVar4);
      local_38 = (longlong *)&local_48;
      local_20 = &local_38;
      local_48 = (longlong *)0x0;
      local_28 = UE::Core::Private::Function::
                 TFunctionRefCaller<`UE::FieldNotification::IClassDescriptor::GetField'::__l2::<lambda_1>,bool,UE::FieldNotification::FFieldId>
                 ::Call;
      local_30 = lVar2;
      (**(code **)*puVar5)(puVar5,*(undefined8 *)&this->field_0x10,&local_28);
      if (local_48 != (longlong *)0x0) {
        local_30 = CONCAT44(local_30._4_4_,local_40);
        local_38 = local_48;
        (**(code **)(*plVar4 + 0x38))(plVar4,&local_38);
      }
    }
  }
  return;
}

// execBroadcastFieldsValueChanged @ 147c136e0

void __cdecl
UFieldNotificationLibrary::execBroadcastFieldsValueChanged
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FScriptContainerElement *pFVar1;
  FProperty *pFVar2;
  UObject *this;
  int iVar3;
  void *_Src;
  UClass *pUVar4;
  longlong *plVar5;
  undefined8 *puVar6;
  longlong lVar7;
  ForAnyElementType FVar8;
  undefined1 local_res10 [16];
  UObject *local_res20;
  longlong local_98;
  undefined4 local_90;
  longlong local_88;
  undefined4 local_80;
  ForAnyElementType local_78;
  int local_70;
  int local_6c;
  void *local_68;
  undefined8 local_60;
  longlong *local_58;
  longlong local_50;
  code *local_48;
  undefined8 **local_40;
  
  local_res20 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_68 = (void *)0x0;
  local_60 = 0;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_68,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_68);
  }
  _Src = local_68;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lVar7 = (longlong)(int)local_60;
  local_78.Data = (FScriptContainerElement *)0x0;
  local_70 = (int)local_60;
  if ((int)local_60 == 0) {
    local_6c = 0;
  }
  else {
    UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,(int)local_60,0,&local_78,(int)local_60,&local_6c);
    memcpy(local_78.Data,_Src,lVar7 << 3);
  }
  this = local_res20;
  if (local_res20 != (UObject *)0x0) {
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable(local_res20);
    }
    pUVar4 = Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister();
    plVar5 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)this,pUVar4);
    iVar3 = local_70;
    if (plVar5 != (longlong *)0x0) {
      pFVar1 = local_78.Data + (longlong)local_70 * 8;
      FVar8.Data = local_78.Data;
      while( true ) {
        if (local_70 != iVar3) {
          `TCheckedPointerIterator<FFieldNotificationId,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res10);
        }
        if (FVar8.Data == pFVar1) break;
        lVar7 = *(longlong *)FVar8.Data;
        if (lVar7 != 0) {
          puVar6 = (undefined8 *)(**(code **)(*plVar5 + 0x30))(plVar5);
          local_58 = &local_98;
          local_40 = &local_58;
          local_98 = 0;
          local_48 = UE::Core::Private::Function::
                     TFunctionRefCaller<`UE::FieldNotification::IClassDescriptor::GetField'::__l2::<lambda_1>,bool,UE::FieldNotification::FFieldId>
                     ::Call;
          local_50 = lVar7;
          (**(code **)*puVar6)(puVar6,*(undefined8 *)&this->field_0x10,&local_48);
          if (local_98 != 0) {
            local_80 = local_90;
            local_88 = local_98;
            (**(code **)(*plVar5 + 0x38))(plVar5,&local_88);
          }
        }
        FVar8.Data = FVar8.Data + 8;
      }
    }
  }
  if (local_78.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_78.Data);
  }
  if (local_68 != (void *)0x0) {
    FMemory::Free(local_68);
  }
  return;
}

// execSetPropertyValueAndBroadcast @ 147c15670

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
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
UFieldNotificationLibrary::execSetPropertyValueAndBroadcast
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  ushort uVar2;
  FProperty *pFVar3;
  UObject *pUVar4;
  code *pcVar5;
  undefined8 uVar6;
  AActor *this;
  char cVar7;
  int iVar8;
  ulonglong uVar9;
  UClass *pUVar10;
  longlong *plVar11;
  UFunction *this_00;
  FProperty *pFVar12;
  undefined8 *puVar13;
  FText *pFVar14;
  ulonglong uVar15;
  uchar *puVar16;
  int iVar17;
  longlong lVar18;
  undefined1 *puVar19;
  undefined1 *puVar20;
  FName FVar21;
  uchar *_Dst;
  bool bVar22;
  undefined8 uStack_140;
  undefined1 auStack_138 [47];
  char acStack_109 [4];
  char local_105;
  char local_104;
  int local_100;
  int local_fc;
  int local_f8;
  int local_f4;
  UObject *local_f0;
  uchar *local_e8;
  undefined4 local_e0;
  UObject *local_d8;
  AActor *local_d0;
  undefined8 local_c8;
  undefined1 *local_c0;
  uchar *local_b8;
  undefined4 local_b0;
  uchar **local_a8;
  longlong local_a0;
  code *local_98;
  uchar ***local_90;
  FBlueprintExceptionInfo local_88;
  FBlueprintExceptionInfo local_70;
  FText local_58;
  FText local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)(acStack_109 + 1);
  local_100 = 0;
  uStack_140 = 0x147c156c6;
  local_f0 = param_1;
  local_c0 = param_3;
  FBoolProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    uStack_140 = 0x147c156f9;
    FFrame::StepExplicitProperty(param_2,&local_100,pFVar3);
  }
  else {
    uStack_140 = 0x147c156e4;
    FFrame::Step(param_2,param_2->Object,&local_100);
  }
  bVar22 = local_100 != 0;
  uStack_140 = 0x147c1570a;
  local_104 = bVar22;
  FProperty::StaticClass();
  puVar20 = auStack_138;
  puVar19 = auStack_138;
  if (param_2->Code == (uchar *)0x0) {
    pFVar3 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar3->_padding_;
    uStack_140 = 0x147c15733;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar3);
  }
  else {
    uStack_140 = 0x147c15720;
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  puVar16 = param_2->MostRecentPropertyAddress;
  pFVar3 = param_2->MostRecentProperty;
  local_e8 = puVar16;
  if (bVar22) {
    uStack_140 = 0x147c15749;
    FProperty::StaticClass();
    if (param_2->Code == (uchar *)0x0) {
      pFVar12 = (FProperty *)*ppFVar1;
      *ppFVar1 = (FField *)pFVar12->_padding_;
      uStack_140 = 0x147c15779;
      FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar12);
      _Dst = param_2->MostRecentPropertyAddress;
      puVar20 = auStack_138;
    }
    else {
      uStack_140 = 0x147c1575f;
      FFrame::Step(param_2,param_2->Object,(void *)0x0);
      _Dst = param_2->MostRecentPropertyAddress;
      puVar20 = auStack_138;
    }
  }
  else {
    if (pFVar3 == (FProperty *)0x0) {
      param_2->bArrayContextFailed = true;
      goto LAB_147c15dae;
    }
    if (pFVar3->ArrayDim * pFVar3->ElementSize == 0) {
      _Dst = (uchar *)0x0;
      puVar19 = auStack_138;
    }
    else {
      uStack_140 = 0x147c157aa;
      iVar8 = (**(code **)(pFVar3->_padding_ + 0x168))(pFVar3);
      iVar17 = pFVar3->ElementSize * pFVar3->ArrayDim;
      if (iVar8 < 0x11) {
        param_1 = local_f0;
        if (iVar17 == 0) {
          _Dst = (uchar *)0x0;
        }
        else {
          uVar9 = (ulonglong)(pFVar3->ElementSize * pFVar3->ArrayDim + 0xf);
          uVar15 = uVar9 + 0xf;
          if (uVar15 <= uVar9) {
            uVar15 = 0xffffffffffffff0;
          }
          uStack_140 = 0x147c157ed;
          puVar19 = auStack_138 + -(uVar15 & 0xfffffffffffffff0);
          _Dst = (uchar *)((longlong)&local_100 + -(uVar15 & 0xfffffffffffffff0));
        }
      }
      else {
        uStack_140 = 0x147c1580b;
        iVar8 = (**(code **)(pFVar3->_padding_ + 0x168))(pFVar3);
        uVar9 = (ulonglong)(iVar8 + -1 + iVar17);
        uVar15 = uVar9 + 0xf;
        if (uVar15 <= uVar9) {
          uVar15 = 0xffffffffffffff0;
        }
        uStack_140 = 0x147c15830;
        lVar18 = -(uVar15 & 0xfffffffffffffff0);
        puVar19 = auStack_138 + lVar18;
        pcVar5 = *(code **)(pFVar3->_padding_ + 0x168);
        *(undefined8 *)(auStack_138 + lVar18 + -8) = 0x147c15844;
        iVar8 = (*pcVar5)(pFVar3);
        pcVar5 = *(code **)(pFVar3->_padding_ + 0x168);
        *(undefined8 *)(auStack_138 + lVar18 + -8) = 0x147c15859;
        iVar17 = (*pcVar5)(pFVar3);
        _Dst = (uchar *)((longlong)(int)~(iVar17 - 1U) & (ulonglong)(acStack_109 + iVar8 + lVar18));
        param_1 = local_f0;
      }
    }
    if (((uint)(int)pFVar3->PropertyFlags >> 9 & 1) == 0) {
      pcVar5 = *(code **)(pFVar3->_padding_ + 0x150);
      *(undefined8 *)(puVar19 + -8) = 0x147c15898;
      (*pcVar5)(pFVar3,_Dst);
    }
    else {
      iVar8 = pFVar3->ArrayDim;
      iVar17 = pFVar3->ElementSize;
      *(undefined8 *)(puVar19 + -8) = 0x147c15887;
      memset(_Dst,0,(longlong)iVar8 * (longlong)iVar17);
    }
    pUVar4 = param_2->Object;
    *(undefined8 *)(puVar19 + -8) = 0x147c158a7;
    FFrame::Step(param_2,pUVar4,_Dst);
    puVar20 = puVar19;
  }
  local_d8 = (UObject *)0x0;
  *(undefined8 *)(puVar20 + -8) = 0x147c158b4;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar12 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar12->_padding_;
    *(undefined8 *)(puVar20 + -8) = 0x147c158e0;
    FFrame::StepExplicitProperty(param_2,&local_d8,pFVar12);
  }
  else {
    pUVar4 = param_2->Object;
    *(undefined8 *)(puVar20 + -8) = 0x147c158cb;
    FFrame::Step(param_2,pUVar4,&local_d8);
  }
  local_d0 = (AActor *)0x0;
  *(undefined8 *)(puVar20 + -8) = 0x147c158ed;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar12 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar12->_padding_;
    *(undefined8 *)(puVar20 + -8) = 0x147c15919;
    FFrame::StepExplicitProperty(param_2,&local_d0,pFVar12);
  }
  else {
    pUVar4 = param_2->Object;
    *(undefined8 *)(puVar20 + -8) = 0x147c15904;
    FFrame::Step(param_2,pUVar4,&local_d0);
  }
  local_fc = 0;
  *(undefined8 *)(puVar20 + -8) = 0x147c15925;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar12 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar12->_padding_;
    *(undefined8 *)(puVar20 + -8) = 0x147c15951;
    FFrame::StepExplicitProperty(param_2,&local_fc,pFVar12);
  }
  else {
    pUVar4 = param_2->Object;
    *(undefined8 *)(puVar20 + -8) = 0x147c1593c;
    FFrame::Step(param_2,pUVar4,&local_fc);
  }
  local_105 = local_fc != 0;
  local_f8 = 0;
  *(undefined8 *)(puVar20 + -8) = 0x147c15965;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar12 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar12->_padding_;
    *(undefined8 *)(puVar20 + -8) = 0x147c15991;
    FFrame::StepExplicitProperty(param_2,&local_f8,pFVar12);
  }
  else {
    pUVar4 = param_2->Object;
    *(undefined8 *)(puVar20 + -8) = 0x147c1597c;
    FFrame::Step(param_2,pUVar4,&local_f8);
  }
  acStack_109[2] = local_f8 != 0;
  local_f4 = 0;
  *(undefined8 *)(puVar20 + -8) = 0x147c159a5;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar12 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar12->_padding_;
    *(undefined8 *)(puVar20 + -8) = 0x147c159d1;
    FFrame::StepExplicitProperty(param_2,&local_f4,pFVar12);
  }
  else {
    pUVar4 = param_2->Object;
    *(undefined8 *)(puVar20 + -8) = 0x147c159bc;
    FFrame::Step(param_2,pUVar4,&local_f4);
  }
  acStack_109[3] = local_f4 != 0;
  lVar18 = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *local_c0 = 0;
  if ((local_d8 == (UObject *)0x0) || (_Dst == (uchar *)0x0)) {
    *(undefined8 *)(puVar20 + -8) = 0x147c15d2e;
    pFVar14 = FText::AsLocalizable_Advanced_LocText
                        (&local_48,L"FieldNotificationLibrary",L"MissingInputProperty",
                         L"Failed to resolve the input parameter for SetPropertyValueAndBroadcast.")
    ;
    local_70.EventType = AccessViolation;
    *(undefined8 *)(puVar20 + -8) = 0x147c15d47;
    TOptional<FText>::TOptional<FText>(&local_70.Description,pFVar14);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      pcVar5 = *(code **)((longlong)*local_48.TextData.Reference + 0x10);
      *(undefined8 *)(puVar20 + -8) = 0x147c15d59;
      (*pcVar5)();
    }
    *(undefined8 *)(puVar20 + -8) = 0x147c15d6b;
    FBlueprintCoreDelegates::ThrowScriptException(param_1,param_2,&local_70);
    if (local_70.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      pcVar5 = *(code **)((longlong)
                          *(ITextData *)
                           local_70.Description.field0_0x0.TypedValue.TextData.Reference + 0x10);
      *(undefined8 *)(puVar20 + -8) = 0x147c15d7d;
      (*pcVar5)();
    }
  }
  else if (puVar16 != (uchar *)0x0) {
    *(undefined8 *)(puVar20 + -8) = 0x147c15a22;
    bVar22 = IsThisNotNull(pFVar3,"FField::GetFName");
    this = local_d0;
    pUVar4 = local_d8;
    if (bVar22) {
      lVar18 = pFVar3->_padding_;
    }
    else {
      local_c8 = 0;
    }
    if (local_d8 == (UObject *)0x0) {
LAB_147c15c92:
      *(undefined8 *)(puVar20 + -8) = 0x147c15cb3;
      pFVar14 = FText::AsLocalizable_Advanced_LocText
                          (&local_58,L"FieldNotificationLibrary",L"MissingInputProperty",
                           L"Failed to resolve the input parameter for SetPropertyValueAndBroadcast."
                          );
      local_88.EventType = AccessViolation;
      *(undefined8 *)(puVar20 + -8) = 0x147c15ccc;
      TOptional<FText>::TOptional<FText>(&local_88.Description,pFVar14);
      if (local_58.TextData.Reference != (ITextData *)0x0) {
        pcVar5 = *(code **)((longlong)*local_58.TextData.Reference + 0x10);
        *(undefined8 *)(puVar20 + -8) = 0x147c15cde;
        (*pcVar5)();
      }
      pUVar4 = local_f0;
      *(undefined8 *)(puVar20 + -8) = 0x147c15cf1;
      FBlueprintCoreDelegates::ThrowScriptException(pUVar4,param_2,&local_88);
      if (local_88.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        pcVar5 = *(code **)((longlong)
                            *(ITextData *)
                             local_88.Description.field0_0x0.TypedValue.TextData.Reference + 0x10);
        *(undefined8 *)(puVar20 + -8) = 0x147c15d03;
        (*pcVar5)();
      }
      bVar22 = false;
    }
    else {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        *(undefined8 *)(puVar20 + -8) = 0x147c15a55;
        UE::GC::MarkAsReachable(pUVar4);
      }
      *(undefined8 *)(puVar20 + -8) = 0x147c15a5a;
      pUVar10 = Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister();
      *(undefined8 *)(puVar20 + -8) = 0x147c15a65;
      plVar11 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pUVar4,pUVar10);
      puVar16 = local_e8;
      if ((plVar11 == (longlong *)0x0) || (pFVar3 == (FProperty *)0x0)) goto LAB_147c15c92;
      pcVar5 = *(code **)(pFVar3->_padding_ + 0xb8);
      *(undefined8 *)(puVar20 + -8) = 0x147c15a94;
      cVar7 = (*pcVar5)(pFVar3,puVar16,_Dst,0);
      bVar22 = cVar7 == '\0';
      acStack_109[1] = bVar22;
      if (cVar7 == '\0') {
        if ((acStack_109[2] != '\0') && (this != (AActor *)0x0)) {
          *(undefined8 *)(puVar20 + -8) = 0x147c15ab3;
          pUVar10 = Z_Construct_UClass_AActor_NoRegister();
          iVar8 = (int)pUVar10->_padding_;
          if ((iVar8 <= *(int *)(this->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar8 * 8) ==
              &pUVar10->_padding_)) {
            *(undefined8 *)(puVar20 + -8) = 0x147c15ad9;
            AActor::FlushNetDormancy(this);
          }
        }
        pcVar5 = *(code **)(pFVar3->_padding_ + 0x70);
        *(undefined8 *)(puVar20 + -8) = 0x147c15ae2;
        cVar7 = (*pcVar5)(pFVar3);
        if (cVar7 == '\0') {
          if (pFVar3->ArrayDim < 1) {
            *(int *)(puVar20 + 0x28) = pFVar3->ArrayDim;
            *(undefined4 *)(puVar20 + 0x20) = 0;
            *(undefined8 *)(puVar20 + -8) = 0x147c15b19;
            bVar22 = ::FDebug::CheckVerifyFailedImpl2
                               ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
            if (bVar22) {
              pcVar5 = (code *)swi(3);
              (*pcVar5)();
              return;
            }
          }
          puVar16 = &pUVar4->field_0x0 + pFVar3->Offset_Internal;
          if (puVar16 != _Dst) {
            if (((uint)(int)pFVar3->PropertyFlags >> 0x1e & 1) == 0) {
              iVar8 = pFVar3->ArrayDim;
              pcVar5 = *(code **)(pFVar3->_padding_ + 0xf0);
              *(undefined8 *)(puVar20 + -8) = 0x147c15b61;
              (*pcVar5)(pFVar3,puVar16,_Dst,iVar8);
            }
            else {
              iVar8 = pFVar3->ElementSize;
              iVar17 = pFVar3->ArrayDim;
              *(undefined8 *)(puVar20 + -8) = 0x147c15b49;
              memcpy(puVar16,_Dst,(longlong)iVar8 * (longlong)iVar17);
            }
          }
        }
        else {
          pcVar5 = *(code **)(pFVar3->_padding_ + 0x88);
          *(undefined8 *)(puVar20 + -8) = 0x147c15b75;
          (*pcVar5)(pFVar3,pUVar4,_Dst);
        }
        if (acStack_109[3] == '\0') {
LAB_147c15c0e:
          pcVar5 = *(code **)(*plVar11 + 0x30);
          *(undefined8 *)(puVar20 + -8) = 0x147c15c18;
          puVar13 = (undefined8 *)(*pcVar5)();
          uVar6 = *(undefined8 *)&pUVar4->field_0x10;
          local_e8 = (uchar *)0x0;
          local_a8 = &local_e8;
          local_90 = &local_a8;
          local_98 = UE::Core::Private::Function::
                     TFunctionRefCaller<`UE::FieldNotification::IClassDescriptor::GetField'::__l2::<lambda_1>,bool,UE::FieldNotification::FFieldId>
                     ::Call;
          pcVar5 = *(code **)*puVar13;
          local_a0 = lVar18;
          *(undefined8 *)(puVar20 + -8) = 0x147c15c51;
          (*pcVar5)(puVar13,uVar6,&local_98);
          if (local_e8 == (uchar *)0x0) {
            *(undefined8 *)(puVar20 + -8) = 0x147c15c61;
            bVar22 = `UE::FieldNotification::Private::SetPropertyValueAndBroadcast'::__l58::
                     <lambda_1>::operator()(acStack_109 + 2);
            if (!bVar22) goto LAB_147c15bff;
          }
          local_b0 = local_e0;
          local_b8 = local_e8;
          pcVar5 = *(code **)(*plVar11 + 0x38);
          *(undefined8 *)(puVar20 + -8) = 0x147c15c83;
          (*pcVar5)(plVar11,&local_b8);
          *local_c0 = acStack_109[1];
        }
        else {
          *(undefined8 *)(puVar20 + -8) = 0x147c15b8e;
          bVar22 = IsThisNotNull(pFVar3,"FField::GetFName");
          if (bVar22) {
            FVar21 = (FName)pFVar3->_padding_;
          }
          else {
            FVar21.ComparisonIndex.Value = 0;
            FVar21.Number = 0;
            local_f0 = (UObject *)0x0;
          }
          uVar2 = pFVar3->RepIndex;
          *(undefined8 *)(puVar20 + -8) = 0x147c15bad;
          UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(pUVar4,(uint)uVar2,FVar21);
          if ((local_105 == '\0') || (FVar21 = pFVar3->RepNotifyFunc, FVar21 == (FName)0x0))
          goto LAB_147c15c0e;
          pUVar10 = *(UClass **)&pUVar4->field_0x10;
          *(undefined8 *)(puVar20 + -8) = 0x147c15bcb;
          this_00 = UClass::FindFunctionByName(pUVar10,FVar21,IncludeSuper);
          if ((this_00 == (UFunction *)0x0) || (this_00->NumParms != '\0')) goto LAB_147c15c0e;
          *(undefined8 *)(puVar20 + -8) = 0x147c15be4;
          pFVar12 = UFunction::GetReturnProperty(this_00);
          if (pFVar12 != (FProperty *)0x0) goto LAB_147c15c0e;
          pcVar5 = *(code **)(*(longlong *)pUVar4 + 0x260);
          *(undefined8 *)(puVar20 + -8) = 0x147c15bff;
          (*pcVar5)(pUVar4,this_00,0);
LAB_147c15bff:
          *local_c0 = acStack_109[1];
        }
        goto LAB_147c15d7d;
      }
    }
    *local_c0 = bVar22;
  }
LAB_147c15d7d:
  if (((local_104 == '\0') && (_Dst != (uchar *)0x0)) &&
     ((~(byte)(pFVar3->PropertyFlags >> 0x24) & 1) != 0)) {
    pcVar5 = *(code **)(pFVar3->_padding_ + 0x138);
    *(undefined8 *)(puVar20 + -8) = 0x147c15da5;
    (*pcVar5)(pFVar3,_Dst);
  }
LAB_147c15dae:
  *(undefined8 *)(puVar20 + -8) = 0x147c15dbd;
  return;
}

// execSetPropertyValueAndBroadcastFields @ 147c15df0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
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
UFieldNotificationLibrary::execSetPropertyValueAndBroadcastFields
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FField **ppFVar1;
  FScriptContainerElement *pFVar2;
  ushort uVar3;
  UObject *pUVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  longlong lVar8;
  AActor *this;
  char cVar9;
  int iVar10;
  ulonglong uVar11;
  FName FVar12;
  UClass *pUVar13;
  longlong *plVar14;
  UFunction *this_00;
  FProperty *pFVar15;
  undefined8 *puVar16;
  FText *pFVar17;
  ulonglong uVar18;
  uchar *puVar19;
  int iVar20;
  undefined1 *puVar21;
  undefined1 *puVar22;
  FProperty *pFVar23;
  FName FVar24;
  uchar *_Dst;
  ForAnyElementType FVar25;
  bool bVar26;
  undefined8 uStack_180;
  undefined1 auStack_178 [47];
  char acStack_149 [4];
  char local_145;
  char local_144;
  undefined1 local_143 [3];
  int local_140;
  int local_13c;
  int local_138;
  int local_134;
  UObject *local_130;
  UObject *local_128;
  TArray<FFieldNotificationId,TSizedDefaultAllocator<32>_> local_120;
  int local_110;
  AActor *local_108;
  longlong local_100;
  undefined4 local_f8;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined1 *local_e0;
  FName local_d8;
  uchar *local_d0;
  FProperty *local_c8;
  longlong local_b8;
  undefined4 local_b0;
  longlong *local_a8;
  undefined8 local_a0;
  code *local_98;
  longlong **local_90;
  FBlueprintExceptionInfo local_88;
  FBlueprintExceptionInfo local_70;
  FText local_58;
  FText local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)(acStack_149 + 1);
  local_140 = 0;
  uStack_180 = 0x147c15e46;
  local_128 = param_1;
  local_e0 = param_3;
  FBoolProperty::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar23 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar23->_padding_;
    uStack_180 = 0x147c15e79;
    FFrame::StepExplicitProperty(param_2,&local_140,pFVar23);
  }
  else {
    uStack_180 = 0x147c15e64;
    FFrame::Step(param_2,param_2->Object,&local_140);
  }
  bVar26 = local_140 != 0;
  uStack_180 = 0x147c15e8a;
  local_144 = bVar26;
  FProperty::StaticClass();
  puVar22 = auStack_178;
  puVar21 = auStack_178;
  if (param_2->Code == (uchar *)0x0) {
    pFVar23 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar23->_padding_;
    uStack_180 = 0x147c15eb3;
    FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar23);
  }
  else {
    uStack_180 = 0x147c15ea0;
    FFrame::Step(param_2,param_2->Object,(void *)0x0);
  }
  pFVar23 = param_2->MostRecentProperty;
  puVar19 = param_2->MostRecentPropertyAddress;
  local_d0 = puVar19;
  local_c8 = pFVar23;
  if (bVar26) {
    uStack_180 = 0x147c15ed0;
    FProperty::StaticClass();
    if (param_2->Code == (uchar *)0x0) {
      pFVar15 = (FProperty *)*ppFVar1;
      *ppFVar1 = (FField *)pFVar15->_padding_;
      uStack_180 = 0x147c15f00;
      FFrame::StepExplicitProperty(param_2,(void *)0x0,pFVar15);
      _Dst = param_2->MostRecentPropertyAddress;
      puVar22 = auStack_178;
    }
    else {
      uStack_180 = 0x147c15ee6;
      FFrame::Step(param_2,param_2->Object,(void *)0x0);
      _Dst = param_2->MostRecentPropertyAddress;
      puVar22 = auStack_178;
    }
  }
  else {
    if (pFVar23 == (FProperty *)0x0) {
      param_2->bArrayContextFailed = true;
      goto LAB_147c16608;
    }
    if (pFVar23->ArrayDim * pFVar23->ElementSize == 0) {
      _Dst = (uchar *)0x0;
      puVar21 = auStack_178;
    }
    else {
      uStack_180 = 0x147c15f31;
      iVar10 = (**(code **)(pFVar23->_padding_ + 0x168))(pFVar23);
      iVar20 = pFVar23->ElementSize * pFVar23->ArrayDim;
      if (iVar10 < 0x11) {
        param_1 = local_128;
        if (iVar20 == 0) {
          _Dst = (uchar *)0x0;
        }
        else {
          uVar11 = (ulonglong)(pFVar23->ElementSize * pFVar23->ArrayDim + 0xf);
          uVar18 = uVar11 + 0xf;
          if (uVar18 <= uVar11) {
            uVar18 = 0xffffffffffffff0;
          }
          uStack_180 = 0x147c15f74;
          puVar21 = auStack_178 + -(uVar18 & 0xfffffffffffffff0);
          _Dst = (uchar *)((longlong)&local_140 + -(uVar18 & 0xfffffffffffffff0));
        }
      }
      else {
        uStack_180 = 0x147c15f92;
        iVar10 = (**(code **)(pFVar23->_padding_ + 0x168))(pFVar23);
        uVar11 = (ulonglong)(iVar10 + -1 + iVar20);
        uVar18 = uVar11 + 0xf;
        if (uVar18 <= uVar11) {
          uVar18 = 0xffffffffffffff0;
        }
        uStack_180 = 0x147c15fb7;
        lVar8 = -(uVar18 & 0xfffffffffffffff0);
        puVar21 = auStack_178 + lVar8;
        pcVar7 = *(code **)(pFVar23->_padding_ + 0x168);
        *(undefined8 *)(auStack_178 + lVar8 + -8) = 0x147c15fcb;
        iVar10 = (*pcVar7)(pFVar23);
        pcVar7 = *(code **)(pFVar23->_padding_ + 0x168);
        *(undefined8 *)(auStack_178 + lVar8 + -8) = 0x147c15fe0;
        iVar20 = (*pcVar7)(pFVar23);
        _Dst = (uchar *)((longlong)(int)~(iVar20 - 1U) & (ulonglong)(acStack_149 + iVar10 + lVar8));
        param_1 = local_128;
      }
    }
    if (((uint)(int)pFVar23->PropertyFlags >> 9 & 1) == 0) {
      pcVar7 = *(code **)(pFVar23->_padding_ + 0x150);
      *(undefined8 *)(puVar21 + -8) = 0x147c1601f;
      (*pcVar7)(pFVar23,_Dst);
    }
    else {
      iVar10 = pFVar23->ElementSize;
      iVar20 = pFVar23->ArrayDim;
      *(undefined8 *)(puVar21 + -8) = 0x147c1600e;
      memset(_Dst,0,(longlong)iVar10 * (longlong)iVar20);
    }
    pUVar4 = param_2->Object;
    *(undefined8 *)(puVar21 + -8) = 0x147c1602e;
    FFrame::Step(param_2,pUVar4,_Dst);
    puVar22 = puVar21;
  }
  local_130 = (UObject *)0x0;
  *(undefined8 *)(puVar22 + -8) = 0x147c1603b;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar15 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar15->_padding_;
    *(undefined8 *)(puVar22 + -8) = 0x147c16067;
    FFrame::StepExplicitProperty(param_2,&local_130,pFVar15);
  }
  else {
    pUVar4 = param_2->Object;
    *(undefined8 *)(puVar22 + -8) = 0x147c16052;
    FFrame::Step(param_2,pUVar4,&local_130);
  }
  local_108 = (AActor *)0x0;
  *(undefined8 *)(puVar22 + -8) = 0x147c16074;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar15 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar15->_padding_;
    *(undefined8 *)(puVar22 + -8) = 0x147c160a0;
    FFrame::StepExplicitProperty(param_2,&local_108,pFVar15);
  }
  else {
    pUVar4 = param_2->Object;
    *(undefined8 *)(puVar22 + -8) = 0x147c1608b;
    FFrame::Step(param_2,pUVar4,&local_108);
  }
  local_13c = 0;
  *(undefined8 *)(puVar22 + -8) = 0x147c160ac;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar15 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar15->_padding_;
    *(undefined8 *)(puVar22 + -8) = 0x147c160d8;
    FFrame::StepExplicitProperty(param_2,&local_13c,pFVar15);
  }
  else {
    pUVar4 = param_2->Object;
    *(undefined8 *)(puVar22 + -8) = 0x147c160c3;
    FFrame::Step(param_2,pUVar4,&local_13c);
  }
  local_145 = local_13c != 0;
  local_138 = 0;
  *(undefined8 *)(puVar22 + -8) = 0x147c160ec;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar15 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar15->_padding_;
    *(undefined8 *)(puVar22 + -8) = 0x147c16118;
    FFrame::StepExplicitProperty(param_2,&local_138,pFVar15);
  }
  else {
    pUVar4 = param_2->Object;
    *(undefined8 *)(puVar22 + -8) = 0x147c16103;
    FFrame::Step(param_2,pUVar4,&local_138);
  }
  acStack_149[2] = local_138 != 0;
  local_134 = 0;
  *(undefined8 *)(puVar22 + -8) = 0x147c1612c;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar15 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar15->_padding_;
    *(undefined8 *)(puVar22 + -8) = 0x147c16158;
    FFrame::StepExplicitProperty(param_2,&local_134,pFVar15);
  }
  else {
    pUVar4 = param_2->Object;
    *(undefined8 *)(puVar22 + -8) = 0x147c16143;
    FFrame::Step(param_2,pUVar4,&local_134);
  }
  acStack_149[3] = local_134 != 0;
  local_120.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_120.ArrayNum = 0;
  local_120.ArrayMax = 0;
  *(undefined8 *)(puVar22 + -8) = 0x147c1616f;
  FArrayProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar15 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar15->_padding_;
    *(undefined8 *)(puVar22 + -8) = 0x147c1619b;
    FFrame::StepExplicitProperty(param_2,&local_120,pFVar15);
  }
  else {
    pUVar4 = param_2->Object;
    *(undefined8 *)(puVar22 + -8) = 0x147c16186;
    FFrame::Step(param_2,pUVar4,&local_120);
  }
  FVar12.ComparisonIndex.Value = 0;
  FVar12.Number = 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  *local_e0 = 0;
  if ((local_130 == (UObject *)0x0) || (_Dst == (uchar *)0x0)) {
    *(undefined8 *)(puVar22 + -8) = 0x147c1657a;
    pFVar17 = FText::AsLocalizable_Advanced_LocText
                        (&local_48,L"FieldNotificationLibrary",L"MissingInputProperty",
                         L"Failed to resolve the input parameter for SetPropertyValueAndBroadcast.")
    ;
    local_70.EventType = AccessViolation;
    *(undefined8 *)(puVar22 + -8) = 0x147c16593;
    TOptional<FText>::TOptional<FText>(&local_70.Description,pFVar17);
    if (local_48.TextData.Reference != (ITextData *)0x0) {
      pcVar7 = *(code **)((longlong)*local_48.TextData.Reference + 0x10);
      *(undefined8 *)(puVar22 + -8) = 0x147c165a5;
      (*pcVar7)();
    }
    *(undefined8 *)(puVar22 + -8) = 0x147c165b7;
    FBlueprintCoreDelegates::ThrowScriptException(param_1,param_2,&local_70);
    if (local_70.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
      pcVar7 = *(code **)((longlong)
                          *(ITextData *)
                           local_70.Description.field0_0x0.TypedValue.TextData.Reference + 0x10);
      *(undefined8 *)(puVar22 + -8) = 0x147c165c9;
      (*pcVar7)();
    }
  }
  else if (puVar19 != (uchar *)0x0) {
    *(undefined8 *)(puVar22 + -8) = 0x147c161e4;
    bVar26 = IsThisNotNull(pFVar23,"FField::GetFName");
    if (bVar26) {
      FVar12 = (FName)pFVar23->_padding_;
    }
    else {
      local_f0 = 0;
    }
    local_d8 = FVar12;
    *(undefined8 *)(puVar22 + -8) = 0x147c16206;
    TArray<FFieldNotificationId,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FFieldNotificationId>
              (&local_120,(FFieldNotificationId *)&local_d8);
    FVar25.Data = local_120.AllocatorInstance.Data;
    local_110 = local_120.ArrayNum;
    if (local_120.ArrayNum < 0) {
      *(undefined8 *)(puVar22 + -8) = 0x147c16234;
      bVar26 = ::FDebug::CheckVerifyFailedImpl2
                         ("InCount >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                          ,0xeb,L"");
      if (bVar26) {
        pcVar7 = (code *)swi(3);
        (*pcVar7)();
        return;
      }
    }
    this = local_108;
    pUVar4 = local_130;
    if (local_130 == (UObject *)0x0) {
LAB_147c164de:
      *(undefined8 *)(puVar22 + -8) = 0x147c164ff;
      pFVar17 = FText::AsLocalizable_Advanced_LocText
                          (&local_58,L"FieldNotificationLibrary",L"MissingInputProperty",
                           L"Failed to resolve the input parameter for SetPropertyValueAndBroadcast."
                          );
      local_88.EventType = AccessViolation;
      *(undefined8 *)(puVar22 + -8) = 0x147c16518;
      TOptional<FText>::TOptional<FText>(&local_88.Description,pFVar17);
      if (local_58.TextData.Reference != (ITextData *)0x0) {
        pcVar7 = *(code **)((longlong)*local_58.TextData.Reference + 0x10);
        *(undefined8 *)(puVar22 + -8) = 0x147c1652a;
        (*pcVar7)();
      }
      pUVar4 = local_128;
      *(undefined8 *)(puVar22 + -8) = 0x147c1653d;
      FBlueprintCoreDelegates::ThrowScriptException(pUVar4,param_2,&local_88);
      if (local_88.Description.field0_0x0.TypedValue.TextData.Reference != (ITextData *)0x0) {
        pcVar7 = *(code **)((longlong)
                            *(ITextData *)
                             local_88.Description.field0_0x0.TypedValue.TextData.Reference + 0x10);
        *(undefined8 *)(puVar22 + -8) = 0x147c1654f;
        (*pcVar7)();
      }
      bVar26 = false;
    }
    else {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        *(undefined8 *)(puVar22 + -8) = 0x147c1625c;
        UE::GC::MarkAsReachable(pUVar4);
      }
      *(undefined8 *)(puVar22 + -8) = 0x147c16261;
      pUVar13 = Z_Construct_UClass_UNotifyFieldValueChanged_NoRegister();
      *(undefined8 *)(puVar22 + -8) = 0x147c1626c;
      plVar14 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)pUVar4,pUVar13);
      puVar19 = local_d0;
      if ((plVar14 == (longlong *)0x0) || (pFVar23 == (FProperty *)0x0)) goto LAB_147c164de;
      pcVar7 = *(code **)(pFVar23->_padding_ + 0xb8);
      *(undefined8 *)(puVar22 + -8) = 0x147c1629b;
      cVar9 = (*pcVar7)(pFVar23,puVar19,_Dst,0);
      bVar26 = cVar9 == '\0';
      acStack_149[1] = bVar26;
      if (cVar9 == '\0') {
        if ((acStack_149[2] != '\0') && (this != (AActor *)0x0)) {
          *(undefined8 *)(puVar22 + -8) = 0x147c162ba;
          pUVar13 = Z_Construct_UClass_AActor_NoRegister();
          iVar10 = (int)pUVar13->_padding_;
          if ((iVar10 <= *(int *)(this->_padding_ + 0x38)) &&
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar10 * 8) ==
              &pUVar13->_padding_)) {
            *(undefined8 *)(puVar22 + -8) = 0x147c162e0;
            AActor::FlushNetDormancy(this);
          }
        }
        pcVar7 = *(code **)(pFVar23->_padding_ + 0x70);
        *(undefined8 *)(puVar22 + -8) = 0x147c162e9;
        cVar9 = (*pcVar7)(pFVar23);
        if (cVar9 == '\0') {
          if (pFVar23->ArrayDim < 1) {
            *(int *)(puVar22 + 0x28) = pFVar23->ArrayDim;
            *(undefined4 *)(puVar22 + 0x20) = 0;
            *(undefined8 *)(puVar22 + -8) = 0x147c16320;
            bVar26 = ::FDebug::CheckVerifyFailedImpl2
                               ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
            if (bVar26) {
              pcVar7 = (code *)swi(3);
              (*pcVar7)();
              return;
            }
          }
          puVar19 = &pUVar4->field_0x0 + pFVar23->Offset_Internal;
          if (puVar19 != _Dst) {
            if (((uint)(int)pFVar23->PropertyFlags >> 0x1e & 1) == 0) {
              iVar10 = pFVar23->ArrayDim;
              pcVar7 = *(code **)(pFVar23->_padding_ + 0xf0);
              *(undefined8 *)(puVar22 + -8) = 0x147c16368;
              (*pcVar7)(pFVar23,puVar19,_Dst,iVar10);
            }
            else {
              iVar10 = pFVar23->ElementSize;
              iVar20 = pFVar23->ArrayDim;
              *(undefined8 *)(puVar22 + -8) = 0x147c16350;
              memcpy(puVar19,_Dst,(longlong)iVar10 * (longlong)iVar20);
            }
          }
        }
        else {
          pcVar7 = *(code **)(pFVar23->_padding_ + 0x88);
          *(undefined8 *)(puVar22 + -8) = 0x147c1637c;
          (*pcVar7)(pFVar23,pUVar4,_Dst);
        }
        if (acStack_149[3] == '\0') {
LAB_147c16417:
          pFVar2 = FVar25.Data + (longlong)local_110 * 8;
          if (FVar25.Data != pFVar2) {
            do {
              uVar5 = *(undefined8 *)FVar25.Data;
              pcVar7 = *(code **)(*plVar14 + 0x30);
              *(undefined8 *)(puVar22 + -8) = 0x147c1643c;
              puVar16 = (undefined8 *)(*pcVar7)();
              uVar6 = *(undefined8 *)&pUVar4->field_0x10;
              local_100 = 0;
              local_a8 = &local_100;
              local_90 = &local_a8;
              local_98 = UE::Core::Private::Function::
                         TFunctionRefCaller<`UE::FieldNotification::IClassDescriptor::GetField'::__l2::<lambda_1>,bool,UE::FieldNotification::FFieldId>
                         ::Call;
              pcVar7 = *(code **)*puVar16;
              local_a0 = uVar5;
              *(undefined8 *)(puVar22 + -8) = 0x147c16481;
              (*pcVar7)(puVar16,uVar6,&local_98);
              if (local_100 == 0) {
                *(undefined8 *)(puVar22 + -8) = 0x147c16491;
                bVar26 = `UE::FieldNotification::Private::SetPropertyValueAndBroadcast'::__l58::
                         <lambda_1>::operator()(local_143);
                if (bVar26) goto LAB_147c16495;
              }
              else {
LAB_147c16495:
                local_b0 = local_f8;
                local_b8 = local_100;
                pcVar7 = *(code **)(*plVar14 + 0x38);
                *(undefined8 *)(puVar22 + -8) = 0x147c164bb;
                (*pcVar7)(plVar14,&local_b8);
              }
              FVar25.Data = FVar25.Data + 8;
            } while (FVar25.Data != pFVar2);
            *local_e0 = acStack_149[1];
            pFVar23 = local_c8;
            goto LAB_147c165c9;
          }
        }
        else {
          *(undefined8 *)(puVar22 + -8) = 0x147c16395;
          bVar26 = IsThisNotNull(pFVar23,"FField::GetFName");
          if (bVar26) {
            FVar24 = (FName)pFVar23->_padding_;
          }
          else {
            FVar24.ComparisonIndex.Value = 0;
            FVar24.Number = 0;
            local_e8 = 0;
          }
          uVar3 = pFVar23->RepIndex;
          *(undefined8 *)(puVar22 + -8) = 0x147c163b4;
          UNetPushModelHelpers::MarkPropertyDirtyFromRepIndex(pUVar4,(uint)uVar3,FVar24);
          if ((local_145 == '\0') || (FVar12 = pFVar23->RepNotifyFunc, FVar12 == (FName)0x0))
          goto LAB_147c16417;
          pUVar13 = *(UClass **)&pUVar4->field_0x10;
          *(undefined8 *)(puVar22 + -8) = 0x147c163d3;
          this_00 = UClass::FindFunctionByName(pUVar13,FVar12,IncludeSuper);
          if ((this_00 == (UFunction *)0x0) || (this_00->NumParms != '\0')) goto LAB_147c16417;
          *(undefined8 *)(puVar22 + -8) = 0x147c163ec;
          pFVar15 = UFunction::GetReturnProperty(this_00);
          if (pFVar15 != (FProperty *)0x0) goto LAB_147c16417;
          pcVar7 = *(code **)(*(longlong *)pUVar4 + 0x260);
          *(undefined8 *)(puVar22 + -8) = 0x147c16408;
          (*pcVar7)(pUVar4,this_00,0);
        }
        *local_e0 = acStack_149[1];
        goto LAB_147c165c9;
      }
    }
    *local_e0 = bVar26;
  }
LAB_147c165c9:
  if (((local_144 == '\0') && (_Dst != (uchar *)0x0)) &&
     ((~(byte)(pFVar23->PropertyFlags >> 0x24) & 1) != 0)) {
    pcVar7 = *(code **)(pFVar23->_padding_ + 0x138);
    *(undefined8 *)(puVar22 + -8) = 0x147c165f1;
    (*pcVar7)(pFVar23,_Dst);
  }
  FVar25.Data = local_120.AllocatorInstance.Data;
  if (local_120.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    *(undefined8 *)(puVar22 + -8) = 0x147c165ff;
    FMemory::Free(FVar25.Data);
  }
LAB_147c16608:
  *(undefined8 *)(puVar22 + -8) = 0x147c16617;
  return;
}

