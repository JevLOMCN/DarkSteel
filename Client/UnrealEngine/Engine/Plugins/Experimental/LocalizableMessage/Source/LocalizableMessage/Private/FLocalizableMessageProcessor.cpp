// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: LocalizableMessage
// Functions: 14

// RegisterLocalizableType<FLocalizableMessageParameterFloat> @ 14e9bdfc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
FLocalizableMessageProcessor::RegisterLocalizableType<FLocalizableMessageParameterFloat>
          (FLocalizableMessageProcessor *this,
          TFunction<FFormatArgumentValue___cdecl(FLocalizableMessageParameterFloat_const_&,FLocalizationContext_const_&)>
          *param_1,FScopedRegistrations *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UPackage *pUVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined1 local_a8 [16];
  TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>
  *local_98;
  code **local_90;
  longlong local_88;
  longlong local_78 [3];
  longlong *local_60;
  code *local_58 [2];
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_88 = *(longlong *)param_1;
  local_60 = (longlong *)0x0;
  if (local_88 != 0) {
    puVar8 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar8 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar8)(puVar8,local_78);
  }
  if (Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterFloat.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_LocalizableMessage();
    Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterFloat.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLocalizableMessageParameterFloat,
                         (UObject *)pUVar6,L"LocalizableMessageParameterFloat");
  }
  local_a8._0_8_ =
       (Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterFloat.OuterSingleton)->
       _padding_;
  local_58[0] = (code *)0x0;
  plVar7 = FMemory::Malloc(0x40,0x10);
  local_30 = plVar7;
  *plVar7 = (longlong)
            &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____RegisterLocalizableType_UFLocalizableMessageParameterFloat___FLocalizableMessageProcessor__QEAAXAEBV__TFunction___A6A_AVFFormatArgumentValue__AEBUFLocalizableMessageParameterFloat__AEBUFLocalizationContext___Z__AEAUFScopedRegistrations_2__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  plVar7[7] = 0;
  plVar7[2] = local_88;
  if (local_88 != 0) {
    plVar9 = local_78;
    if (local_60 != (longlong *)0x0) {
      plVar9 = local_60;
    }
    (**(code **)*plVar9)();
  }
  if (plVar7 + 2 != (longlong *)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FLocalizableMessageProcessor::RegisterLocalizableType<FLocalizableMessageParameterFloat>'::__l2::<lambda_1>,FFormatArgumentValue,FInstancedStruct_const_&,FLocalizationContext_const_&>
                  ::Call;
  }
  local_98 = (TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>
              *)local_a8;
  local_90 = local_58;
  TSet<TTuple<FName,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>_>,TDefaultMapHashableKeyFuncs<FName,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FName_const_&,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>_&&>_>
            ((TSet<TTuple<FName,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>_>,TDefaultMapHashableKeyFuncs<FName,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FName_const_&,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>_&&>
                      *)(local_a8 + 8),(bool *)&local_98);
  if (local_58[0] != (code *)0x0) {
    plVar7 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar7 = local_30;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  pFVar2 = (param_2->Registrations).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_a8) &&
     (lVar10 = (longlong)(param_2->Registrations).ArrayMax,
     (FScriptContainerElement *)local_a8 < pFVar2 + lVar10 * 8)) {
    local_c0 = (longlong)(param_2->Registrations).ArrayNum;
    local_b8 = 8;
    local_d8 = local_a8;
    local_d0 = pFVar2;
    local_c8 = lVar10;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (param_2->Registrations).ArrayNum;
  piVar1 = &(param_2->Registrations).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,(ForAnyElementType *)param_2,piVar1);
  }
  (param_2->Registrations).ArrayNum = iVar5 + 1;
  *(undefined8 *)((param_2->Registrations).AllocatorInstance.Data + (longlong)iVar5 * 8) =
       local_a8._0_8_;
  if (local_88 != 0) {
    plVar7 = local_78;
    if (local_60 != (longlong *)0x0) {
      plVar7 = local_60;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  return;
}

// RegisterLocalizableType<FLocalizableMessageParameterInt> @ 14e9be1d0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
FLocalizableMessageProcessor::RegisterLocalizableType<FLocalizableMessageParameterInt>
          (FLocalizableMessageProcessor *this,
          TFunction<FFormatArgumentValue___cdecl(FLocalizableMessageParameterInt_const_&,FLocalizationContext_const_&)>
          *param_1,FScopedRegistrations *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UPackage *pUVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined1 local_a8 [16];
  TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>
  *local_98;
  code **local_90;
  longlong local_88;
  longlong local_78 [3];
  longlong *local_60;
  code *local_58 [2];
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_88 = *(longlong *)param_1;
  local_60 = (longlong *)0x0;
  if (local_88 != 0) {
    puVar8 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar8 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar8)(puVar8,local_78);
  }
  if (Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterInt.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_LocalizableMessage();
    Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterInt.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLocalizableMessageParameterInt,(UObject *)pUVar6
                         ,L"LocalizableMessageParameterInt");
  }
  local_a8._0_8_ =
       (Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterInt.OuterSingleton)->_padding_
  ;
  local_58[0] = (code *)0x0;
  plVar7 = FMemory::Malloc(0x40,0x10);
  local_30 = plVar7;
  *plVar7 = (longlong)
            &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____RegisterLocalizableType_UFLocalizableMessageParameterInt___FLocalizableMessageProcessor__QEAAXAEBV__TFunction___A6A_AVFFormatArgumentValue__AEBUFLocalizableMessageParameterInt__AEBUFLocalizationContext___Z__AEAUFScopedRegistrations_2__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  plVar7[7] = 0;
  plVar7[2] = local_88;
  if (local_88 != 0) {
    plVar9 = local_78;
    if (local_60 != (longlong *)0x0) {
      plVar9 = local_60;
    }
    (**(code **)*plVar9)();
  }
  if (plVar7 + 2 != (longlong *)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FLocalizableMessageProcessor::RegisterLocalizableType<FLocalizableMessageParameterInt>'::__l2::<lambda_1>,FFormatArgumentValue,FInstancedStruct_const_&,FLocalizationContext_const_&>
                  ::Call;
  }
  local_98 = (TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>
              *)local_a8;
  local_90 = local_58;
  TSet<TTuple<FName,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>_>,TDefaultMapHashableKeyFuncs<FName,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FName_const_&,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>_&&>_>
            ((TSet<TTuple<FName,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>_>,TDefaultMapHashableKeyFuncs<FName,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FName_const_&,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>_&&>
                      *)(local_a8 + 8),(bool *)&local_98);
  if (local_58[0] != (code *)0x0) {
    plVar7 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar7 = local_30;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  pFVar2 = (param_2->Registrations).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_a8) &&
     (lVar10 = (longlong)(param_2->Registrations).ArrayMax,
     (FScriptContainerElement *)local_a8 < pFVar2 + lVar10 * 8)) {
    local_c0 = (longlong)(param_2->Registrations).ArrayNum;
    local_b8 = 8;
    local_d8 = local_a8;
    local_d0 = pFVar2;
    local_c8 = lVar10;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (param_2->Registrations).ArrayNum;
  piVar1 = &(param_2->Registrations).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,(ForAnyElementType *)param_2,piVar1);
  }
  (param_2->Registrations).ArrayNum = iVar5 + 1;
  *(undefined8 *)((param_2->Registrations).AllocatorInstance.Data + (longlong)iVar5 * 8) =
       local_a8._0_8_;
  if (local_88 != 0) {
    plVar7 = local_78;
    if (local_60 != (longlong *)0x0) {
      plVar7 = local_60;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  return;
}

// RegisterLocalizableType<FLocalizableMessageParameterMessage> @ 14e9be3e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
FLocalizableMessageProcessor::RegisterLocalizableType<FLocalizableMessageParameterMessage>
          (FLocalizableMessageProcessor *this,
          TFunction<FFormatArgumentValue___cdecl(FLocalizableMessageParameterMessage_const_&,FLocalizationContext_const_&)>
          *param_1,FScopedRegistrations *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UPackage *pUVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined1 local_a8 [16];
  TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>
  *local_98;
  code **local_90;
  longlong local_88;
  longlong local_78 [3];
  longlong *local_60;
  code *local_58 [2];
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_88 = *(longlong *)param_1;
  local_60 = (longlong *)0x0;
  if (local_88 != 0) {
    puVar8 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar8 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar8)(puVar8,local_78);
  }
  if (Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterMessage.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_LocalizableMessage();
    Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterMessage.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLocalizableMessageParameterMessage,
                         (UObject *)pUVar6,L"LocalizableMessageParameterMessage");
  }
  local_a8._0_8_ =
       (Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterMessage.OuterSingleton)->
       _padding_;
  local_58[0] = (code *)0x0;
  plVar7 = FMemory::Malloc(0x40,0x10);
  local_30 = plVar7;
  *plVar7 = (longlong)
            &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____RegisterLocalizableType_UFLocalizableMessageParameterMessage___FLocalizableMessageProcessor__QEAAXAEBV__TFunction___A6A_AVFFormatArgumentValue__AEBUFLocalizableMessageParameterMessage__AEBUFLocalizationContext___Z__AEAUFScopedRegistrations_2__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  plVar7[7] = 0;
  plVar7[2] = local_88;
  if (local_88 != 0) {
    plVar9 = local_78;
    if (local_60 != (longlong *)0x0) {
      plVar9 = local_60;
    }
    (**(code **)*plVar9)();
  }
  if (plVar7 + 2 != (longlong *)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FLocalizableMessageProcessor::RegisterLocalizableType<FLocalizableMessageParameterMessage>'::__l2::<lambda_1>,FFormatArgumentValue,FInstancedStruct_const_&,FLocalizationContext_const_&>
                  ::Call;
  }
  local_98 = (TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>
              *)local_a8;
  local_90 = local_58;
  TSet<TTuple<FName,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>_>,TDefaultMapHashableKeyFuncs<FName,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FName_const_&,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>_&&>_>
            ((TSet<TTuple<FName,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>_>,TDefaultMapHashableKeyFuncs<FName,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FName_const_&,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>_&&>
                      *)(local_a8 + 8),(bool *)&local_98);
  if (local_58[0] != (code *)0x0) {
    plVar7 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar7 = local_30;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  pFVar2 = (param_2->Registrations).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_a8) &&
     (lVar10 = (longlong)(param_2->Registrations).ArrayMax,
     (FScriptContainerElement *)local_a8 < pFVar2 + lVar10 * 8)) {
    local_c0 = (longlong)(param_2->Registrations).ArrayNum;
    local_b8 = 8;
    local_d8 = local_a8;
    local_d0 = pFVar2;
    local_c8 = lVar10;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (param_2->Registrations).ArrayNum;
  piVar1 = &(param_2->Registrations).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,(ForAnyElementType *)param_2,piVar1);
  }
  (param_2->Registrations).ArrayNum = iVar5 + 1;
  *(undefined8 *)((param_2->Registrations).AllocatorInstance.Data + (longlong)iVar5 * 8) =
       local_a8._0_8_;
  if (local_88 != 0) {
    plVar7 = local_78;
    if (local_60 != (longlong *)0x0) {
      plVar7 = local_60;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  return;
}

// RegisterLocalizableType<FLocalizableMessageParameterString> @ 14e9be5f0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "UErrorCode": Some values do not have unique names */

void __thiscall
FLocalizableMessageProcessor::RegisterLocalizableType<FLocalizableMessageParameterString>
          (FLocalizableMessageProcessor *this,
          TFunction<FFormatArgumentValue___cdecl(FLocalizableMessageParameterString_const_&,FLocalizationContext_const_&)>
          *param_1,FScopedRegistrations *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UPackage *pUVar6;
  longlong *plVar7;
  undefined8 *puVar8;
  longlong *plVar9;
  longlong lVar10;
  undefined1 auStack_f8 [32];
  undefined1 *local_d8;
  FScriptContainerElement *local_d0;
  longlong local_c8;
  longlong local_c0;
  undefined8 local_b8;
  undefined1 local_a8 [16];
  TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>
  *local_98;
  code **local_90;
  longlong local_88;
  longlong local_78 [3];
  longlong *local_60;
  code *local_58 [2];
  longlong local_48 [3];
  longlong *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_f8;
  local_88 = *(longlong *)param_1;
  local_60 = (longlong *)0x0;
  if (local_88 != 0) {
    puVar8 = (undefined8 *)&param_1->field_0x10;
    if (*(undefined8 **)&param_1->field_0x28 != (undefined8 *)0x0) {
      puVar8 = *(undefined8 **)&param_1->field_0x28;
    }
    (**(code **)*puVar8)(puVar8,local_78);
  }
  if (Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterString.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar6 = Z_Construct_UPackage__Script_LocalizableMessage();
    Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterString.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FLocalizableMessageParameterString,
                         (UObject *)pUVar6,L"LocalizableMessageParameterString");
  }
  local_a8._0_8_ =
       (Z_Registration_Info_UScriptStruct_FLocalizableMessageParameterString.OuterSingleton)->
       _padding_;
  local_58[0] = (code *)0x0;
  plVar7 = FMemory::Malloc(0x40,0x10);
  local_30 = plVar7;
  *plVar7 = (longlong)
            &
            ___7__TFunction_OwnedObject_V<lambda_1>__1____RegisterLocalizableType_UFLocalizableMessageParameterString___FLocalizableMessageProcessor__QEAAXAEBV__TFunction___A6A_AVFFormatArgumentValue__AEBUFLocalizableMessageParameterString__AEBUFLocalizationContext___Z__AEAUFScopedRegistrations_2__Z__0A__00_Function_Private_Core_UE__6B_
  ;
  plVar7[7] = 0;
  plVar7[2] = local_88;
  if (local_88 != 0) {
    plVar9 = local_78;
    if (local_60 != (longlong *)0x0) {
      plVar9 = local_60;
    }
    (**(code **)*plVar9)();
  }
  if (plVar7 + 2 != (longlong *)0x0) {
    local_58[0] = UE::Core::Private::Function::
                  TFunctionRefCaller<`FLocalizableMessageProcessor::RegisterLocalizableType<FLocalizableMessageParameterString>'::__l2::<lambda_1>,FFormatArgumentValue,FInstancedStruct_const_&,FLocalizationContext_const_&>
                  ::Call;
  }
  local_98 = (TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>
              *)local_a8;
  local_90 = local_58;
  TSet<TTuple<FName,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>_>,TDefaultMapHashableKeyFuncs<FName,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>,0>,FDefaultSetAllocator>
  ::
  Emplace<TPairInitializer<FName_const_&,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>_&&>_>
            ((TSet<TTuple<FName,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>_>,TDefaultMapHashableKeyFuncs<FName,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>,0>,FDefaultSetAllocator>
              *)this,(TPairInitializer<FName_const_&,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>_&&>
                      *)(local_a8 + 8),(bool *)&local_98);
  if (local_58[0] != (code *)0x0) {
    plVar7 = local_48;
    if (local_30 != (longlong *)0x0) {
      plVar7 = local_30;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  pFVar2 = (param_2->Registrations).AllocatorInstance.Data;
  if ((pFVar2 <= (FScriptContainerElement *)local_a8) &&
     (lVar10 = (longlong)(param_2->Registrations).ArrayMax,
     (FScriptContainerElement *)local_a8 < pFVar2 + lVar10 * 8)) {
    local_c0 = (longlong)(param_2->Registrations).ArrayNum;
    local_b8 = 8;
    local_d8 = local_a8;
    local_d0 = pFVar2;
    local_c8 = lVar10;
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  iVar5 = (param_2->Registrations).ArrayNum;
  piVar1 = &(param_2->Registrations).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x408,(ForAnyElementType *)param_2,piVar1);
  }
  (param_2->Registrations).ArrayNum = iVar5 + 1;
  *(undefined8 *)((param_2->Registrations).AllocatorInstance.Data + (longlong)iVar5 * 8) =
       local_a8._0_8_;
  if (local_88 != 0) {
    plVar7 = local_78;
    if (local_60 != (longlong *)0x0) {
      plVar7 = local_60;
    }
    (**(code **)(*plVar7 + 0x10))();
  }
  return;
}

// FLocalizableMessageProcessor @ 14e9bea50

FLocalizableMessageProcessor * __thiscall
FLocalizableMessageProcessor::FLocalizableMessageProcessor(FLocalizableMessageProcessor *this)

{
  *(undefined8 *)&this->LocalizeValueMapping = 0;
  *(undefined8 *)&(this->LocalizeValueMapping).field_0x8 = 0;
  *(undefined8 *)&(this->LocalizeValueMapping).field_0x20 = 0;
  *(undefined4 *)&(this->LocalizeValueMapping).field_0x28 = 0;
  *(undefined4 *)&(this->LocalizeValueMapping).field_0x2c = 0x80;
  *(undefined4 *)&(this->LocalizeValueMapping).field_0x34 = 0;
  *(undefined4 *)&(this->LocalizeValueMapping).field_0x30 = 0xffffffff;
  *(undefined8 *)&(this->LocalizeValueMapping).field_0x40 = 0;
  *(undefined4 *)&(this->LocalizeValueMapping).field_0x48 = 0;
  return this;
}

// ~FLocalizableMessageProcessor @ 14e9becf0

void __thiscall
FLocalizableMessageProcessor::~FLocalizableMessageProcessor(FLocalizableMessageProcessor *this)

{
  void *pvVar1;
  code *pcVar2;
  bool bVar3;
  
  if (*(int *)&(this->LocalizeValueMapping).field_0x8 !=
      *(int *)&(this->LocalizeValueMapping).field_0x34) {
    bVar3 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6317217815136829405>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\LocalizableMessage\\Source\\LocalizableMessage\\Private\\LocalizableMessageProcessor.cpp"
                       ,0x23,"LocalizeValueMapping.IsEmpty()");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  *(undefined4 *)&(this->LocalizeValueMapping).field_0x48 = 0;
  pvVar1 = *(void **)&(this->LocalizeValueMapping).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)this);
  return;
}

// operator() @ 14e9bef40

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FFormatArgumentValue * __thiscall
`FLocalizableMessageProcessor::RegisterLocalizableType<FLocalizableMessageParameterFloat>'::__l2::
<lambda_1>::operator()
          (void *this,FFormatArgumentValue *__return_storage_ptr__,FInstancedStruct *param_1,
          FLocalizationContext *param_2)

{
  code *pcVar1;
  FLocalizableMessageParameterFloat *pFVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pFVar2 = UE::StructUtils::GetStructRef<FLocalizableMessageParameterFloat>
                     ((param_1->ScriptStruct).field0_0x0.DebugPtr,param_1->StructMemory);
  UE::Core::Private::Function::CheckCallable(*(void **)this);
  pcVar1 = *(code **)this;
  plVar4 = (longlong *)((longlong)this + 0x10);
  if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)this + 0x28);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(__return_storage_ptr__,uVar3,pFVar2,param_2);
  return __return_storage_ptr__;
}

// operator() @ 14e9befd0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FFormatArgumentValue * __thiscall
`FLocalizableMessageProcessor::RegisterLocalizableType<FLocalizableMessageParameterInt>'::__l2::
<lambda_1>::operator()
          (void *this,FFormatArgumentValue *__return_storage_ptr__,FInstancedStruct *param_1,
          FLocalizationContext *param_2)

{
  code *pcVar1;
  FLocalizableMessageParameterInt *pFVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pFVar2 = UE::StructUtils::GetStructRef<FLocalizableMessageParameterInt>
                     ((param_1->ScriptStruct).field0_0x0.DebugPtr,param_1->StructMemory);
  UE::Core::Private::Function::CheckCallable(*(void **)this);
  pcVar1 = *(code **)this;
  plVar4 = (longlong *)((longlong)this + 0x10);
  if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)this + 0x28);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(__return_storage_ptr__,uVar3,pFVar2,param_2);
  return __return_storage_ptr__;
}

// operator() @ 14e9bf060

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FFormatArgumentValue * __thiscall
`FLocalizableMessageProcessor::RegisterLocalizableType<FLocalizableMessageParameterMessage>'::__l2::
<lambda_1>::operator()
          (void *this,FFormatArgumentValue *__return_storage_ptr__,FInstancedStruct *param_1,
          FLocalizationContext *param_2)

{
  code *pcVar1;
  FLocalizableMessageParameterMessage *pFVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pFVar2 = UE::StructUtils::GetStructRef<FLocalizableMessageParameterMessage>
                     ((param_1->ScriptStruct).field0_0x0.DebugPtr,param_1->StructMemory);
  UE::Core::Private::Function::CheckCallable(*(void **)this);
  pcVar1 = *(code **)this;
  plVar4 = (longlong *)((longlong)this + 0x10);
  if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)this + 0x28);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(__return_storage_ptr__,uVar3,pFVar2,param_2);
  return __return_storage_ptr__;
}

// operator() @ 14e9bf0f0

/* WARNING: Enum "UErrorCode": Some values do not have unique names */

FFormatArgumentValue * __thiscall
`FLocalizableMessageProcessor::RegisterLocalizableType<FLocalizableMessageParameterString>'::__l2::
<lambda_1>::operator()
          (void *this,FFormatArgumentValue *__return_storage_ptr__,FInstancedStruct *param_1,
          FLocalizationContext *param_2)

{
  code *pcVar1;
  FLocalizableMessageParameterString *pFVar2;
  undefined8 uVar3;
  longlong *plVar4;
  
  pFVar2 = UE::StructUtils::GetStructRef<FLocalizableMessageParameterString>
                     ((param_1->ScriptStruct).field0_0x0.DebugPtr,param_1->StructMemory);
  UE::Core::Private::Function::CheckCallable(*(void **)this);
  pcVar1 = *(code **)this;
  plVar4 = (longlong *)((longlong)this + 0x10);
  if (*(longlong **)((longlong)this + 0x28) != (longlong *)0x0) {
    plVar4 = *(longlong **)((longlong)this + 0x28);
  }
  uVar3 = (**(code **)(*plVar4 + 8))();
  (*pcVar1)(__return_storage_ptr__,uVar3,pFVar2,param_2);
  return __return_storage_ptr__;
}

// Localize @ 14e9bff20

/* WARNING: Enum "UErrorCode": Some values do not have unique names */
/* WARNING: Enum "ETextFormatFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FText * __thiscall
FLocalizableMessageProcessor::Localize
          (FLocalizableMessageProcessor *this,FText *__return_storage_ptr__,
          FLocalizableMessage *param_1,FLocalizationContext *param_2)

{
  int iVar1;
  FScriptContainerElement *pFVar2;
  longlong lVar3;
  undefined1 *puVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  ulonglong uVar9;
  longlong *plVar10;
  undefined8 uVar11;
  FText *pFVar12;
  FString *pFVar13;
  undefined1 *puVar14;
  FScriptContainerElement *pFVar15;
  longlong *plVar16;
  longlong *plVar17;
  undefined1 local_res18 [8];
  FLocalizationContext *local_res20;
  undefined1 local_168 [8];
  FString local_160;
  TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess> local_150
  ;
  uint local_140;
  FTextKey local_13c;
  FTextKey local_138;
  FTextKey local_134;
  FTextKey local_130;
  FTextKey local_12c;
  FString local_128;
  int local_118;
  int iStack_114;
  undefined4 local_110;
  int iStack_10c;
  FScriptContainerElement *local_108;
  FScriptContainerElement *local_100;
  FScriptContainerElement *local_f8;
  int iStack_f0;
  undefined4 uStack_ec;
  FString local_e8;
  FScriptContainerElement *local_d8;
  int iStack_d0;
  undefined4 uStack_cc;
  FTextFormat local_c8;
  TStringView<wchar_t> local_b8;
  FText local_a8;
  TStringView<wchar_t> local_98;
  FText local_88;
  FTextFormat local_78;
  FText local_68;
  FFormatArgumentValue local_58;
  
  local_140 = (param_1->Substitutions).ArrayNum;
  uVar9 = (ulonglong)(int)local_140;
  pFVar15 = (param_1->Substitutions).AllocatorInstance.Data;
  plVar16 = (longlong *)0x0;
  local_100 = pFVar15 + uVar9 * 0x20;
  local_150.Pairs.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_150.Pairs.ArrayNum = 0;
  local_150.Pairs.ArrayMax = 0;
  local_res20 = param_2;
LAB_14e9bff80:
  do {
    pFVar2 = local_100;
    if ((param_1->Substitutions).ArrayNum != (int)uVar9) {
      local_res18[0] = 0;
      `TCheckedPointerIterator<FLocalizableMessageParameterEntry_const_,int,0>::operator!='::__l2::
      <lambda_1>::operator()(local_res18);
    }
    if (pFVar15 == pFVar2) {
      FText::FText(__return_storage_ptr__);
      iVar8 = (param_1->Key).Data.ArrayNum;
      if (iVar8 < 2) {
        if (1 < (param_1->DefaultText).Data.ArrayNum) {
          iVar8 = (param_1->DefaultText).Data.ArrayNum;
          local_f8 = (param_1->DefaultText).Data.AllocatorInstance.Data;
          iStack_f0 = iVar8 + -1;
          if (iVar8 == 0) {
            iStack_f0 = 0;
          }
          local_b8._12_4_ = uStack_ec;
          local_b8.Size = iStack_f0;
          local_b8.DataPtr = (wchar_t *)local_f8;
          pFVar12 = FText::AsCultureInvariant(&local_a8,&local_b8);
          FText::operator=(__return_storage_ptr__,pFVar12);
          goto LAB_14e9c0353;
        }
      }
      else {
        if ((iVar8 + -1 < 1) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\UnrealString.h.inl"
                               ,0x113,
                               L"String index out of bounds: Index %i from a string with a length of %i"
                              ), bVar6)) {
          pcVar5 = (code *)swi(3);
          pFVar12 = (FText *)(*pcVar5)();
          return pFVar12;
        }
        if (*(short *)(param_1->Key).Data.AllocatorInstance.Data == 0x7e) {
          local_160.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_160.Data.ArrayNum = 0;
          local_160.Data.ArrayMax = 0;
          local_128.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
          local_128.Data.ArrayNum = 0;
          local_128.Data.ArrayMax = 0;
          ::FString::FString(&local_e8,L",");
          bVar6 = ::FString::Split(&param_1->Key,&local_e8,&local_160,&local_128);
          if (local_e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_e8.Data.AllocatorInstance.Data);
          }
          if (!bVar6) {
            if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_128.Data.AllocatorInstance.Data);
            }
            if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_160.Data.AllocatorInstance.Data);
            }
            goto LAB_14e9c02dc;
          }
          ::FString::RemoveAt(&local_160,1,No);
          ::FString::ReplaceInline(&local_160,L"\\,",L",",IgnoreCase);
          ::FString::ReplaceInline(&local_128,L"\\,",L",",IgnoreCase);
          FTextKey::FTextKey(&local_138,&local_128);
          FTextKey::FTextKey(&local_13c,&local_160);
          local_118 = local_13c.Index;
          iStack_114 = local_138.Index;
          if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_128.Data.AllocatorInstance.Data);
          }
          local_12c.Index = local_13c.Index;
          if (local_160.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_160.Data.AllocatorInstance.Data);
          }
        }
        else {
LAB_14e9c02dc:
          FTextKey::FTextKey(&local_134,&param_1->Key);
          iStack_10c = local_134.Index;
          local_110 = 0xffffffff;
          local_12c.Index = -1;
        }
        iVar8 = (param_1->DefaultText).Data.ArrayNum;
        local_d8 = (param_1->DefaultText).Data.AllocatorInstance.Data;
        iStack_d0 = iVar8 + -1;
        if (iVar8 == 0) {
          iStack_d0 = 0;
        }
        local_98._12_4_ = uStack_cc;
        local_98.Size = iStack_d0;
        local_98.DataPtr = (wchar_t *)local_d8;
        pFVar12 = FText::AsLocalizable_Advanced(&local_88,&local_12c,&local_130,&local_98);
        FText::operator=(__return_storage_ptr__,pFVar12);
        local_a8.TextData.Reference = local_88.TextData.Reference;
LAB_14e9c0353:
        if (local_a8.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_a8.TextData.Reference + 0x10))();
        }
      }
      if (local_150.Pairs.ArrayNum < 1) goto LAB_14e9c0413;
      pFVar13 = FText::ToString(__return_storage_ptr__);
      iVar8 = (param_1->DefaultText).Data.ArrayNum;
      iVar1 = (pFVar13->Data).ArrayNum;
      if (iVar1 == iVar8) {
        if (1 < iVar1) {
          iVar8 = wcscmp((wchar_t *)(pFVar13->Data).AllocatorInstance.Data,
                         (wchar_t *)(param_1->DefaultText).Data.AllocatorInstance.Data);
          bVar6 = iVar8 == 0;
          goto LAB_14e9c03a4;
        }
      }
      else {
        bVar6 = iVar8 + iVar1 == 1;
LAB_14e9c03a4:
        plVar16 = (longlong *)(ulonglong)!bVar6;
      }
      FTextFormat::FTextFormat
                (&local_c8,__return_storage_ptr__,
                 LocalizableMessageProcessor::bAllowTextArgumentModifiers != false |
                 (ETextFormatFlags)plVar16);
      local_78.TextFormatData.Object = local_c8.TextFormatData.Object;
      local_78.TextFormatData.SharedReferenceCount.ReferenceController =
           local_c8.TextFormatData.SharedReferenceCount.ReferenceController;
      if (local_c8.TextFormatData.SharedReferenceCount.ReferenceController !=
          (TReferenceControllerBase<1> *)0x0) {
        LOCK();
        (local_c8.TextFormatData.SharedReferenceCount.ReferenceController)->SharedReferenceCount =
             (atomic<int>)
             ((int)(local_c8.TextFormatData.SharedReferenceCount.ReferenceController)->
                   SharedReferenceCount + 1);
        UNLOCK();
      }
      pFVar12 = FText::Format(&local_68,&local_78,&local_150);
      FText::operator=(__return_storage_ptr__,pFVar12);
      if (local_68.TextData.Reference != (ITextData *)0x0) {
        (**(code **)((longlong)*local_68.TextData.Reference + 0x10))();
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_c8.TextFormatData.SharedReferenceCount.ReferenceController);
LAB_14e9c0413:
      if (6 < (byte)LogLocalizableMessageProcessor._0_1_) {
        FText::ToString(__return_storage_ptr__);
        UE::Logging::Private::BasicLog<7>
                  (&::LOG_Static,(FLogCategoryBase *)&LogLocalizableMessageProcessor);
      }
      DestructItems<TTuple<FString,FFormatArgumentValue>,int>
                ((TTuple<FString,FFormatArgumentValue> *)local_150.Pairs.AllocatorInstance.Data,
                 local_150.Pairs.ArrayNum);
      if ((TTuple<FString,FFormatArgumentValue> *)local_150.Pairs.AllocatorInstance.Data !=
          (TTuple<FString,FFormatArgumentValue> *)0x0) {
        FMemory::Free(local_150.Pairs.AllocatorInstance.Data);
      }
      return __return_storage_ptr__;
    }
    if ((*(longlong *)&pFVar15[0x18].field_0x0 != 0) &&
       (pFVar2 = (((TArray<wchar_t,TSizedDefaultAllocator<32>_> *)&pFVar15[0x10].field_0x0)->
                 AllocatorInstance).Data, pFVar2 != (FScriptContainerElement *)0x0)) {
      lVar3 = *(longlong *)(pFVar2 + 0x18);
      uVar7 = ::GetTypeHash((FNameEntryId)(uint)lVar3);
      plVar10 = plVar16;
      if (*(int *)&(this->LocalizeValueMapping).field_0x8 !=
          *(int *)&(this->LocalizeValueMapping).field_0x34) {
        puVar4 = *(undefined1 **)&(this->LocalizeValueMapping).field_0x40;
        puVar14 = &(this->LocalizeValueMapping).field_0x38;
        if (puVar4 != (undefined1 *)0x0) {
          puVar14 = puVar4;
        }
        iVar8 = *(int *)(puVar14 +
                        (ulonglong)
                        (*(int *)&(this->LocalizeValueMapping).field_0x48 - 1U &
                        (int)((ulonglong)lVar3 >> 0x20) + uVar7) * 4);
        if (iVar8 != -1) {
          do {
            plVar10 = (longlong *)
                      ((longlong)iVar8 * 0x50 + *(longlong *)&this->LocalizeValueMapping);
            if (*plVar10 == lVar3) break;
            iVar8 = (int)plVar10[8];
            plVar10 = plVar16;
          } while (iVar8 != -1);
        }
      }
      plVar17 = plVar10 + 2;
      if (plVar10 == (longlong *)0x0) {
        plVar17 = plVar16;
      }
      if (plVar17 == (longlong *)0x0) {
        local_108 = pFVar15;
        `FLocalizableMessageProcessor::Localize'::__l14::<lambda_1>::operator()(&local_108);
        uVar9 = (ulonglong)local_140;
        pFVar15 = pFVar15 + 0x20;
      }
      else {
        UE::Core::Private::Function::CheckCallable((void *)*plVar17);
        pcVar5 = (code *)*plVar17;
        plVar10 = (longlong *)plVar17[5];
        if ((longlong *)plVar17[5] == (longlong *)0x0) {
          plVar10 = plVar17 + 2;
        }
        uVar11 = (**(code **)(*plVar10 + 8))();
        (*pcVar5)(&local_58,uVar11,pFVar15 + 0x10,local_res20);
        TSortedMap<FString,FFormatArgumentValue,TSizedDefaultAllocator<32>,FLocKeySortedMapLess>::
        Emplace<FString_const_&,FFormatArgumentValue>(&local_150,(FString *)pFVar15,&local_58);
        if (local_58.TextValue.field0_0x0.TypedValue.TextData.Reference == (ITextData *)0x0)
        goto LAB_14e9c0105;
        (**(code **)((longlong)
                     *(ITextData *)local_58.TextValue.field0_0x0.TypedValue.TextData.Reference +
                    0x10))();
        uVar9 = (ulonglong)local_140;
        pFVar15 = pFVar15 + 0x20;
      }
      goto LAB_14e9bff80;
    }
    bVar6 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<_6317217815136829397>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\Experimental\\LocalizableMessage\\Source\\LocalizableMessage\\Private\\LocalizableMessageProcessor.cpp"
                       ,0x2b,"Substitution.Value.IsValid()");
    if (bVar6) {
      pcVar5 = (code *)swi(3);
      pFVar12 = (FText *)(*pcVar5)();
      return pFVar12;
    }
    local_168[0] = 0;
    `FLocalizableMessageProcessor::Localize'::__l16::<lambda_2>::operator()(local_168);
LAB_14e9c0105:
    pFVar15 = pFVar15 + 0x20;
    uVar9 = (ulonglong)local_140;
  } while( true );
}

// UnregisterLocalizableTypes @ 14e9c0cf0

void __thiscall
FLocalizableMessageProcessor::UnregisterLocalizableTypes
          (FLocalizableMessageProcessor *this,FScopedRegistrations *param_1)

{
  FName *pFVar1;
  int iVar2;
  FName FVar3;
  uint uVar4;
  FName *pFVar5;
  FName local_res10;
  
  pFVar5 = (FName *)(param_1->Registrations).AllocatorInstance.Data;
  iVar2 = (param_1->Registrations).ArrayNum;
  pFVar1 = pFVar5 + iVar2;
  while( true ) {
    if ((param_1->Registrations).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FName,int,0>::operator!='::__l2::<lambda_1>::operator()(&local_res10)
      ;
    }
    if (pFVar5 == pFVar1) break;
    FVar3 = *pFVar5;
    local_res10 = FVar3;
    if (*(int *)&(this->LocalizeValueMapping).field_0x8 !=
        *(int *)&(this->LocalizeValueMapping).field_0x34) {
      uVar4 = ::GetTypeHash(FVar3.ComparisonIndex.Value);
      TSet<TTuple<FName,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>_>,TDefaultMapHashableKeyFuncs<FName,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>,0>,FDefaultSetAllocator>
      ::RemoveImpl<FName>((TSet<TTuple<FName,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>_>,TDefaultMapHashableKeyFuncs<FName,TFunction<FFormatArgumentValue___cdecl(FInstancedStruct_const_&,FLocalizationContext_const_&)>,0>,FDefaultSetAllocator>
                           *)this,FVar3.Number + uVar4,&local_res10);
    }
    pFVar5 = pFVar5 + 1;
  }
  (param_1->Registrations).ArrayNum = 0;
  if ((param_1->Registrations).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,4,0,(ForAnyElementType *)param_1,0,&(param_1->Registrations).ArrayMax);
  }
  return;
}

// operator() @ 15059b9b0

bool __thiscall `FLocalizableMessageProcessor::Localize'::__l14::<lambda_1>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  bool bVar4;
  FName local_res10 [3];
  FString local_18;
  
  bVar4 = false;
  local_res10[0] = (FName)((ulonglong)local_res10[0] & 0xffffffff00000000);
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6317217815136829388>);
  if (bVar2) {
    local_res10[0] = *(FName *)(*(longlong *)(*(longlong *)this + 0x10) + 0x18);
    ::FName::ToString(local_res10,&local_18);
    bVar4 = true;
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6317217815136829388>,&::ENSURE_Static);
    if (bVar2) {
      bVar2 = true;
      goto LAB_15059ba29;
    }
  }
  bVar2 = false;
LAB_15059ba29:
  if ((bVar4) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  if (bVar2) {
    pcVar1 = (code *)swi(3);
    uVar3 = (*pcVar1)();
    return (bool)uVar3;
  }
  return false;
}

// operator() @ 15059ba60

bool __thiscall `FLocalizableMessageProcessor::Localize'::__l16::<lambda_2>::operator()(void *this)

{
  code *pcVar1;
  bool bVar2;
  
  bVar2 = UE::Assert::Private::CheckEnsureFailed(false,&bGEnsureHasExecuted<_6317217815136829383>);
  if (bVar2) {
    bVar2 = UE::Assert::Private::EnsureFailed
                      (&bGEnsureHasExecuted<_6317217815136829383>,&::ENSURE_Static);
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      bVar2 = (bool)(*pcVar1)();
      return bVar2;
    }
  }
  return false;
}

