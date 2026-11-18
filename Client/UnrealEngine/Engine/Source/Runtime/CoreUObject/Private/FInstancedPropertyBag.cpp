// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 113

// StaticStruct @ 141f545e0

UScriptStruct * __cdecl FInstancedPropertyBag::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FInstancedPropertyBag.OuterSingleton == (UScriptStruct *)0x0
     ) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UScriptStruct_FInstancedPropertyBag.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FInstancedPropertyBag,(UObject *)pUVar1,
                         L"InstancedPropertyBag");
  }
  return Z_Registration_Info_UScriptStruct_FInstancedPropertyBag.OuterSingleton;
}

// AddContainerProperty @ 141f6ce70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPropertyBagAlterationResult": Some values do not have unique names */

EPropertyBagAlterationResult __thiscall
FInstancedPropertyBag::AddContainerProperty
          (FInstancedPropertyBag *this,FName param_1,FPropertyBagContainerTypes param_2,
          EPropertyBagPropertyType param_3,UObject *param_4,bool param_5)

{
  EPropertyBagAlterationResult EVar1;
  undefined5 in_register_00000083;
  undefined1 auStack_88 [32];
  TArrayView<FPropertyBagPropertyDesc_const_,int> local_68;
  TObjectPtr<UObject_const_>_u_0 local_58;
  undefined8 local_50;
  undefined8 local_48;
  FName local_40;
  EPropertyBagPropertyType local_38;
  undefined2 local_37;
  undefined1 local_35;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_58.DebugPtr = param_4;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_4);
  }
  local_37 = *(undefined2 *)CONCAT53(in_register_00000083,param_2);
  local_35 = *(undefined1 *)((undefined2 *)CONCAT53(in_register_00000083,param_2) + 1);
  local_68.ArrayNum = 1;
  local_68.DataPtr = (FPropertyBagPropertyDesc *)&local_58;
  local_50 = 0;
  local_48 = 0;
  local_28 = 0;
  local_30 = 1;
  local_20 = 0xffffffff;
  local_40 = param_1;
  local_38 = param_3;
  EVar1 = AddProperties(this,&local_68,param_5);
  return EVar1;
}

// AddContainerProperty @ 141f6cf60

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPropertyBagAlterationResult": Some values do not have unique names */

EPropertyBagAlterationResult __thiscall
FInstancedPropertyBag::AddContainerProperty
          (FInstancedPropertyBag *this,FName param_1,EPropertyBagContainerType param_2,
          EPropertyBagPropertyType param_3,UObject *param_4,bool param_5)

{
  EPropertyBagAlterationResult EVar1;
  undefined1 auStack_88 [32];
  TArrayView<FPropertyBagPropertyDesc_const_,int> local_68;
  TObjectPtr<UObject_const_>_u_0 local_58;
  undefined8 local_50;
  undefined8 local_48;
  FName local_40;
  EPropertyBagPropertyType local_38;
  ushort local_37;
  undefined1 local_35;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_58.DebugPtr = param_4;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_4 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_4);
  }
  local_50 = 0;
  local_48 = 0;
  local_37 = 0;
  local_35 = param_2 != None;
  if ((bool)local_35) {
    local_37 = (ushort)param_2;
  }
  local_68.ArrayNum = 1;
  local_28 = 0;
  local_68.DataPtr = (FPropertyBagPropertyDesc *)&local_58;
  local_30 = 1;
  local_20 = 0xffffffff;
  local_40 = param_1;
  local_38 = param_3;
  EVar1 = AddProperties(this,&local_68,param_5);
  return EVar1;
}

// AddProperties @ 141f6d420

/* WARNING: Enum "EPropertyBagAlterationResult": Some values do not have unique names */

EPropertyBagAlterationResult __thiscall
FInstancedPropertyBag::AddProperties
          (FInstancedPropertyBag *this,TArrayView<FPropertyBagPropertyDesc_const_,int> *param_1,
          bool param_2)

{
  code *pcVar1;
  TConsoleVariableData<bool> *pTVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  EPropertyBagAlterationResult EVar9;
  UClass *pUVar10;
  UScriptStruct *pUVar11;
  FPropertyBagPropertyDesc *pFVar12;
  FString *pFVar13;
  UPropertyBag *pUVar14;
  longlong lVar15;
  ForAnyElementType this_00;
  FPropertyBagPropertyDesc *pFVar16;
  FPropertyBagPropertyDesc *pFVar17;
  FName local_res8;
  FName local_res10;
  ForAnyElementType local_88;
  int local_80;
  int iStack_7c;
  FPropertyBagPropertyDesc *local_78;
  int iStack_70;
  undefined4 uStack_6c;
  FString local_68;
  TArrayView<FPropertyBagPropertyDesc_const_,int> local_58 [2];
  
  local_88.Data = (FScriptContainerElement *)0x0;
  local_80 = 0;
  iStack_7c = 0;
  if (((this->Value).StructMemory != (uchar *)0x0) &&
     (pUVar11 = (this->Value).ScriptStruct.field0_0x0.DebugPtr, pUVar11 != (UScriptStruct *)0x0)) {
    pUVar10 = UPropertyBag::StaticClass();
    iVar3 = (int)pUVar10->_padding_;
    if ((*(int *)(pUVar11->_padding_ + 0x38) < iVar3) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar3 * 8)
        != &pUVar10->_padding_)) {
      pUVar11 = (UScriptStruct *)0x0;
    }
    if (pUVar11 != (UScriptStruct *)0x0) {
      pFVar17 = (FPropertyBagPropertyDesc *)pUVar11[1]._padding_;
      iVar3 = (int)pUVar11[1]._padding_;
      if ((iVar3 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar1 = (code *)swi(3);
        EVar9 = (*pcVar1)();
        return EVar9;
      }
      local_80 = iVar3;
      if ((iVar3 == 0) && (iStack_7c == 0)) {
        iStack_7c = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,iVar3,iStack_7c,&local_88,iVar3,&iStack_7c);
        ConstructItems<FPropertyBagPropertyDesc,FPropertyBagPropertyDesc,int>
                  (local_88.Data,pFVar17,iVar3);
      }
    }
  }
  pFVar17 = param_1->DataPtr;
  pFVar16 = pFVar17 + param_1->ArrayNum;
  pTVar2 = CVarEnforceValidName.Ref;
  iVar3 = local_80;
  do {
    CVarEnforceValidName.Ref = pTVar2;
    local_80 = iVar3;
    if (pFVar17 == pFVar16) {
      local_78 = (FPropertyBagPropertyDesc *)local_88.Data;
      if ((iVar3 < 0) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar8)) {
        pcVar1 = (code *)swi(3);
        EVar9 = (*pcVar1)();
        return EVar9;
      }
      local_58[0]._12_4_ = uStack_6c;
      local_58[0].ArrayNum = iVar3;
      local_58[0].DataPtr = local_78;
      iStack_70 = iVar3;
      pUVar14 = UPropertyBag::GetOrCreateFromDescs(local_58,(wchar_t *)0x0);
      MigrateToNewBagStruct(this,pUVar14);
      EVar9 = NoOperation;
LAB_141f6d6fb:
      if ((FPropertyBagPropertyDesc *)local_88.Data != (FPropertyBagPropertyDesc *)0x0) {
        FMemory::Free(local_88.Data);
      }
      return EVar9;
    }
    bVar8 = IsInParallelGameThread();
    if (bVar8) {
LAB_141f6d562:
      pUVar11 = (UScriptStruct *)0x0;
    }
    else {
      bVar8 = IsInGameThread();
      pUVar11 = (UScriptStruct *)0x1;
      if (bVar8) goto LAB_141f6d562;
    }
    if (pTVar2->ShadowedValue[(longlong)pUVar11] != false) {
      if (pFVar17->Name == (FName)0x0) {
        EVar9 = PropertyNameEmpty;
        goto LAB_141f6d6fb;
      }
      bVar8 = IsPropertyNameValid(pFVar17->Name);
      if (!bVar8) {
        EVar9 = PropertyNameInvalidCharacters;
        goto LAB_141f6d6fb;
      }
    }
    if ((FPropertyBagPropertyDesc *)local_88.Data !=
        (FPropertyBagPropertyDesc *)(local_88.Data + (longlong)local_80 * 0x40)) {
      this_00.Data = local_88.Data;
      do {
        if (((FPropertyBagPropertyDesc *)this_00.Data)->Name == pFVar17->Name) {
          if ((FPropertyBagPropertyDesc *)this_00.Data != (FPropertyBagPropertyDesc *)0x0) {
            if (param_2) {
              uVar4 = (((FPropertyBagPropertyDesc *)this_00.Data)->ID).A;
              uVar5 = (((FPropertyBagPropertyDesc *)this_00.Data)->ID).B;
              uVar6 = (((FPropertyBagPropertyDesc *)this_00.Data)->ID).C;
              uVar7 = (((FPropertyBagPropertyDesc *)this_00.Data)->ID).D;
              FPropertyBagPropertyDesc::operator=((FPropertyBagPropertyDesc *)this_00.Data,pFVar17);
              (((FPropertyBagPropertyDesc *)this_00.Data)->ID).A = uVar4;
              (((FPropertyBagPropertyDesc *)this_00.Data)->ID).B = uVar5;
              (((FPropertyBagPropertyDesc *)this_00.Data)->ID).C = uVar6;
              (((FPropertyBagPropertyDesc *)this_00.Data)->ID).D = uVar7;
              goto LAB_141f6d695;
            }
            EVar9 = TargetPropertyAlreadyExists;
            goto LAB_141f6d6fb;
          }
          break;
        }
        this_00.Data = this_00.Data + 0x40;
      } while ((FPropertyBagPropertyDesc *)this_00.Data !=
               (FPropertyBagPropertyDesc *)(local_88.Data + (longlong)local_80 * 0x40));
    }
    if (pFVar17->ValueType != None) {
      if (((local_88.Data <= pFVar17) &&
          (pFVar17 < (FPropertyBagPropertyDesc *)(local_88.Data + (longlong)iStack_7c * 0x40))) &&
         (bVar8 = ::FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar8)) {
        pcVar1 = (code *)swi(3);
        EVar9 = (*pcVar1)();
        return EVar9;
      }
      if (local_80 == iStack_7c) {
        local_80 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x840,&local_88,&iStack_7c);
      }
      lVar15 = (longlong)local_80;
      local_80 = local_80 + 1;
      pFVar12 = FPropertyBagPropertyDesc::FPropertyBagPropertyDesc
                          ((FPropertyBagPropertyDesc *)(local_88.Data + lVar15 * 0x40),pFVar17);
      local_res8 = pFVar17->Name;
      pFVar13 = ::FName::ToString(&local_res8,&local_68);
      SanitizePropertyName((FString *)&local_res10,(wchar_t)pFVar13);
      if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_68.Data.AllocatorInstance.Data);
      }
      pFVar12->Name = local_res10;
    }
LAB_141f6d695:
    pFVar17 = pFVar17 + 1;
    pTVar2 = CVarEnforceValidName.Ref;
    iVar3 = local_80;
  } while( true );
}

// AddProperty @ 141f6d7b0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPropertyBagAlterationResult": Some values do not have unique names */

EPropertyBagAlterationResult __thiscall
FInstancedPropertyBag::AddProperty
          (FInstancedPropertyBag *this,FName param_1,FProperty *param_2,bool param_3)

{
  EPropertyBagAlterationResult EVar1;
  undefined1 auStack_88 [32];
  TArrayView<FPropertyBagPropertyDesc_const_,int> local_68;
  FPropertyBagPropertyDesc local_58;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  FPropertyBagPropertyDesc::FPropertyBagPropertyDesc(&local_58,param_1,param_2);
  local_68.ArrayNum = 1;
  local_68.DataPtr = &local_58;
  EVar1 = AddProperties(this,&local_68,param_3);
  return EVar1;
}

// AddProperty @ 141f6d830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPropertyBagAlterationResult": Some values do not have unique names */

EPropertyBagAlterationResult __thiscall
FInstancedPropertyBag::AddProperty
          (FInstancedPropertyBag *this,FName param_1,EPropertyBagPropertyType param_2,
          UObject *param_3,bool param_4)

{
  EPropertyBagAlterationResult EVar1;
  undefined1 auStack_88 [32];
  TArrayView<FPropertyBagPropertyDesc_const_,int> local_68;
  TObjectPtr<UObject_const_>_u_0 local_58;
  undefined8 local_50;
  undefined8 local_48;
  FName local_40;
  EPropertyBagPropertyType local_38;
  undefined2 local_37;
  undefined1 local_35;
  undefined8 local_30;
  undefined8 local_28;
  undefined4 local_20;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_88;
  local_58.DebugPtr = param_3;
  if ((UE::GC::GIsIncrementalReachabilityPending) && (param_3 != (UObject *)0x0)) {
    UE::GC::MarkAsReachable(param_3);
  }
  local_68.ArrayNum = 1;
  local_50 = 0;
  local_48 = 0;
  local_37 = 0;
  local_35 = 0;
  local_28 = 0;
  local_68.DataPtr = (FPropertyBagPropertyDesc *)&local_58;
  local_30 = 1;
  local_20 = 0xffffffff;
  local_40 = param_1;
  local_38 = param_2;
  EVar1 = AddProperties(this,&local_68,param_4);
  return EVar1;
}

// AddStructReferencedObjects @ 141f6dfe0

void __thiscall
FInstancedPropertyBag::AddStructReferencedObjects
          (FInstancedPropertyBag *this,FReferenceCollector *param_1)

{
  return;
}

// CopyMatchingValuesByID @ 141f75e60

void __thiscall
FInstancedPropertyBag::CopyMatchingValuesByID
          (FInstancedPropertyBag *this,FInstancedPropertyBag *param_1,
          TOptional<TArrayView<FGuid_const_,int>_> *param_2)

{
  TObjectPtr<UScriptStruct_const_>_u_0 TVar1;
  FGuid **local_res18 [2];
  TObjectPtr<UScriptStruct_const_>_u_0 local_48;
  undefined8 **local_40;
  TObjectPtr<UScriptStruct_const_>_u_0 local_38;
  uchar *local_30;
  TObjectPtr<UScriptStruct_const_>_u_0 local_28;
  undefined8 **local_20;
  FGuid *local_18;
  undefined8 uStack_10;
  
  local_38 = (this->Value).ScriptStruct.field0_0x0;
  local_30 = (this->Value).StructMemory;
  TVar1 = (param_1->Value).ScriptStruct.field0_0x0;
  if ((param_2->field0_0x0).TypedValue.ArrayNum != -1) {
    local_18 = (param_2->field0_0x0).TypedValue.DataPtr;
    uStack_10 = *(undefined8 *)((longlong)&param_2->field0_0x0 + 8);
    local_res18[0] = &local_18;
    local_20 = (undefined8 **)(param_1->Value).StructMemory;
    local_40 = local_res18;
    local_48.DebugPtr =
         (UScriptStruct *)
         UE::Core::Private::Function::
         TFunctionRefCaller<`UE::StructUtils::Private::CopyMatchingValuesByIDWithOverrides'::__l2::<lambda_1>,FPropertyBagPropertyDesc_const_*,TNotNull<UPropertyBag_const_*>,FPropertyBagPropertyDesc_const_&>
         ::Call;
    local_28 = TVar1;
    UE::StructUtils::Private::CopyMatchingValues
              ((FConstStructView *)&local_28.ObjectPtr,(FStructView *)&local_38.ObjectPtr,
               (TFunctionRef<FPropertyBagPropertyDesc_const_*___cdecl(TNotNull<UPropertyBag_const_*>,FPropertyBagPropertyDesc_const_&)>
                *)&local_48.ObjectPtr);
    return;
  }
  local_20 = local_res18;
  local_40 = (undefined8 **)(param_1->Value).StructMemory;
  local_28.DebugPtr =
       (UScriptStruct *)
       UE::Core::Private::Function::
       TFunctionRefCaller<`UE::StructUtils::Private::CopyMatchingValuesByID'::__l2::<lambda_1>,FPropertyBagPropertyDesc_const_*,TNotNull<UPropertyBag_const_*>,FPropertyBagPropertyDesc_const_&>
       ::Call;
  local_48 = TVar1;
  UE::StructUtils::Private::CopyMatchingValues
            ((FConstStructView *)&local_48.ObjectPtr,(FStructView *)&local_38.ObjectPtr,
             (TFunctionRef<FPropertyBagPropertyDesc_const_*___cdecl(TNotNull<UPropertyBag_const_*>,FPropertyBagPropertyDesc_const_&)>
              *)&local_28.ObjectPtr);
  return;
}

// CopyMatchingValuesByName @ 141f75fb0

void __thiscall
FInstancedPropertyBag::CopyMatchingValuesByName
          (FInstancedPropertyBag *this,FInstancedPropertyBag *param_1,
          TOptional<TArrayView<FName_const_,int>_> *param_2)

{
  TOptional<TArrayView<FName_const_,int>_> *local_res8 [4];
  code *local_38;
  TOptional<TArrayView<FName_const_,int>_> **local_30;
  TObjectPtr<UScriptStruct_const_>_u_0 local_28;
  uchar *local_20;
  TObjectPtr<UScriptStruct_const_>_u_0 local_18;
  uchar *local_10;
  
  local_30 = local_res8;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`FInstancedPropertyBag::CopyMatchingValuesByName'::__l2::<lambda_1>,FPropertyBagPropertyDesc_const_*,TNotNull<UPropertyBag_const_*>,FPropertyBagPropertyDesc_const_&>
             ::Call;
  local_28 = (this->Value).ScriptStruct.field0_0x0;
  local_20 = (this->Value).StructMemory;
  local_18 = (param_1->Value).ScriptStruct.field0_0x0;
  local_10 = (param_1->Value).StructMemory;
  local_res8[0] = param_2;
  UE::StructUtils::Private::CopyMatchingValues
            ((FConstStructView *)&local_18.ObjectPtr,(FStructView *)&local_28.ObjectPtr,
             (TFunctionRef<FPropertyBagPropertyDesc_const_*___cdecl(TNotNull<UPropertyBag_const_*>,FPropertyBagPropertyDesc_const_&)>
              *)&local_38);
  return;
}

// Detach @ 141f795a0

FInstancedStruct * __thiscall
FInstancedPropertyBag::Detach(FInstancedPropertyBag *this,FInstancedStruct *__return_storage_ptr__)

{
  uchar *puVar1;
  UScriptStruct *pUVar2;
  
  puVar1 = (this->Value).StructMemory;
  pUVar2 = (this->Value).ScriptStruct.field0_0x0.DebugPtr;
  (__return_storage_ptr__->ScriptStruct).field0_0x0.DebugPtr = pUVar2;
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar2 != (UScriptStruct *)0x0)) {
    UE::GC::MarkAsReachable((UObject *)pUVar2);
  }
  __return_storage_ptr__->StructMemory = puVar1;
  (this->Value).ScriptStruct.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  (this->Value).StructMemory = (uchar *)0x0;
  return __return_storage_ptr__;
}

// DuplicateProperty @ 141f79600

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EPropertyBagAlterationResult": Some values do not have unique names */

EPropertyBagAlterationResult __thiscall
FInstancedPropertyBag::DuplicateProperty(FInstancedPropertyBag *this,FName param_1,FName *param_2)

{
  uint uVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  int iVar4;
  undefined4 uVar5;
  TObjectPtr<UObject_const_>_u_0 TVar6;
  FProperty *pFVar7;
  code *pcVar8;
  EPropertyBagAlterationResult EVar9;
  bool bVar10;
  UClass *pUVar11;
  longlong lVar12;
  FPropertyBagPropertyDesc *pFVar13;
  FPropertyBagPropertyDesc *pFVar14;
  longlong lVar15;
  uchar *_Src;
  FName FVar16;
  FName FVar17;
  FName FVar18;
  FName FVar19;
  uchar *_Dst;
  UScriptStruct *pUVar20;
  uint uVar21;
  undefined1 auStack_148 [32];
  undefined1 local_128;
  FName local_120;
  undefined8 local_118;
  TObjectPtr<UObject_const_>_u_0 *local_108;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  TArrayView<FPropertyBagPropertyDesc_const_,int> local_e8;
  FName local_d8;
  FName local_d0;
  TObjectPtr<UObject_const_>_u_0 local_c8;
  undefined1 local_a8;
  undefined2 local_a7;
  undefined1 local_a5;
  FPropertyBagPropertyDesc *local_a0;
  longlong local_98;
  undefined4 local_90;
  TObjectPtr<UObject_const_>_u_0 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  FName local_70;
  undefined1 local_68;
  undefined2 local_67;
  undefined1 local_65;
  FPropertyBagPropertyDesc *local_60;
  longlong local_58;
  undefined4 local_50;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_148;
  if (((this->Value).StructMemory != (uchar *)0x0) &&
     (FVar16 = (FName)(this->Value).ScriptStruct.field0_0x0.DebugPtr, FVar16 != (FName)0x0)) {
    pUVar11 = UPropertyBag::StaticClass();
    FVar17.ComparisonIndex.Value = 0;
    FVar17.Number = 0;
    iVar4 = (int)pUVar11->_padding_;
    if ((*(int *)(*(longlong *)((longlong)FVar16 + 0x10) + 0x38) < iVar4) ||
       ((longlong *)
        *(undefined1 **)
         (*(longlong *)(*(longlong *)((longlong)FVar16 + 0x10) + 0x30) + (longlong)iVar4 * 8) !=
        &pUVar11->_padding_)) {
      FVar16 = FVar17;
    }
    if (FVar16 != (FName)0x0) {
      FVar18 = (FName)((UScriptStruct *)((longlong)FVar16 + 0xc0))->_padding_;
      FVar16 = (FName)((longlong)FVar18 +
                      (longlong)(int)((UScriptStruct *)((longlong)FVar16 + 0xc0))->_padding_ * 0x40)
      ;
      for (; (FVar19 = FVar17, FVar18 != FVar16 &&
             (FVar19 = FVar18, *(FName *)((longlong)FVar18 + 0x18) != param_1));
          FVar18 = (FName)((longlong)FVar18 + 0x40)) {
      }
      if (FVar19 != (FName)0x0) {
        if (param_2 == (FName *)0x0) {
          local_118 = 0;
        }
        else {
          FVar17 = *param_2;
        }
        local_d8 = param_1;
        if (FVar17 == (FName)0x0) {
          local_120.Number = param_1.Number;
          uVar21 = local_120.Number;
          local_120 = param_1;
          while( true ) {
            uVar1 = uVar21 + 1;
            uVar21 = 3;
            if (3 < (int)uVar1) {
              uVar21 = uVar1;
            }
            local_120.Number = uVar21;
            FVar17 = local_120;
            FVar16 = local_120;
            if (((this->Value).StructMemory == (uchar *)0x0) ||
               (pUVar20 = (this->Value).ScriptStruct.field0_0x0.DebugPtr,
               pUVar20 == (UScriptStruct *)0x0)) break;
            pUVar11 = UPropertyBag::StaticClass();
            iVar4 = (int)pUVar11->_padding_;
            if ((*(int *)(pUVar20->_padding_ + 0x38) < iVar4) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pUVar20->_padding_ + 0x30) + (longlong)iVar4 * 8) !=
                &pUVar11->_padding_)) {
              pUVar20 = (UScriptStruct *)0x0;
            }
            if (pUVar20 == (UScriptStruct *)0x0) break;
            lVar12 = pUVar20[1]._padding_;
            lVar15 = (longlong)(int)pUVar20[1]._padding_ * 0x40 + lVar12;
            local_d0 = FVar17;
            while( true ) {
              if (lVar12 == lVar15) goto LAB_141f79780;
              if (*(FName *)(lVar12 + 0x18) == FVar17) break;
              lVar12 = lVar12 + 0x40;
            }
            if (lVar12 == 0) break;
          }
LAB_141f79780:
          if (param_2 != (FName *)0x0) {
            *param_2 = FVar17;
          }
        }
        TVar6 = *(TObjectPtr<UObject_const_>_u_0 *)FVar19;
        local_c8 = TVar6;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TVar6.DebugPtr != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(TVar6.DebugPtr);
        }
        local_128 = *(undefined1 *)((longlong)FVar19 + 0x23);
        local_e8.DataPtr = *(FPropertyBagPropertyDesc **)((longlong)FVar19 + 0x28);
        local_108 = *(TObjectPtr<UObject_const_>_u_0 **)((longlong)FVar19 + 0x30);
        uVar2 = *(undefined1 *)((longlong)FVar19 + 0x20);
        uVar3 = *(undefined2 *)((longlong)FVar19 + 0x21);
        uVar5 = *(undefined4 *)((longlong)FVar19 + 0x38);
        local_f8 = 0;
        uStack_f0 = 0;
        local_a8 = uVar2;
        local_a7 = uVar3;
        local_a5 = local_128;
        local_a0 = local_e8.DataPtr;
        local_98 = (longlong)local_108;
        local_90 = uVar5;
        local_88 = TVar6;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (TVar6.DebugPtr != (UObject *)0x0)) {
          UE::GC::MarkAsReachable(TVar6.DebugPtr);
        }
        local_80 = local_f8;
        uStack_78 = uStack_f0;
        uStack_100 = 1;
        local_e8._12_4_ = uStack_fc;
        local_e8.ArrayNum = 1;
        local_58 = (longlong)local_108;
        local_108 = &local_88;
        local_60 = local_e8.DataPtr;
        local_e8.DataPtr = (FPropertyBagPropertyDesc *)&local_88;
        local_70 = FVar17;
        local_68 = uVar2;
        local_67 = uVar3;
        local_65 = local_128;
        local_50 = uVar5;
        EVar9 = AddProperties(this,&local_e8,false);
        if (EVar9 != NoOperation) {
          return EVar9;
        }
        pFVar13 = FindPropertyDescByName(this,param_1);
        pFVar14 = FindPropertyDescByName(this,FVar17);
        if (((((pFVar13 == (FPropertyBagPropertyDesc *)0x0) ||
              (pFVar14 == (FPropertyBagPropertyDesc *)0x0)) ||
             (pFVar13->CachedProperty == (FProperty *)0x0)) ||
            (pFVar14->CachedProperty == (FProperty *)0x0)) &&
           (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                               ("OriginalDesc && AddedDesc && OriginalDesc->CachedProperty && AddedDesc->CachedProperty"
                                ,
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\StructUtils\\PropertyBag.cpp"
                                ,0x80d,L""), bVar10)) {
          pcVar8 = (code *)swi(3);
          EVar9 = (*pcVar8)();
          return EVar9;
        }
        pFVar7 = pFVar14->CachedProperty;
        _Dst = (this->Value).StructMemory + pFVar7->Offset_Internal;
        _Src = (this->Value).StructMemory + pFVar13->CachedProperty->Offset_Internal;
        if (_Dst != _Src) {
          if (((uint)(int)pFVar7->PropertyFlags >> 0x1e & 1) != 0) {
            memcpy(_Dst,_Src,(longlong)pFVar7->ElementSize * (longlong)pFVar7->ArrayDim);
            return NoOperation;
          }
          (**(code **)(pFVar7->_padding_ + 0xf0))(pFVar7,_Dst,_Src,pFVar7->ArrayDim);
        }
        return NoOperation;
      }
    }
  }
  return SourcePropertyNotFound;
}

// FindPropertyDescByID @ 141f7c960

FPropertyBagPropertyDesc * __thiscall
FInstancedPropertyBag::FindPropertyDescByID(FInstancedPropertyBag *this,FGuid *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FPropertyBagPropertyDesc *pFVar3;
  UScriptStruct *pUVar4;
  uint *puVar5;
  FPropertyBagPropertyDesc *pFVar6;
  
  if (((this->Value).StructMemory != (uchar *)0x0) &&
     (pUVar4 = (this->Value).ScriptStruct.field0_0x0.DebugPtr, pUVar4 != (UScriptStruct *)0x0)) {
    pUVar2 = UPropertyBag::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(pUVar4->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar2->_padding_)) {
      pUVar4 = (UScriptStruct *)0x0;
    }
    if (pUVar4 != (UScriptStruct *)0x0) {
      pFVar3 = (FPropertyBagPropertyDesc *)pUVar4[1]._padding_;
      pFVar6 = pFVar3 + (int)pUVar4[1]._padding_;
      if (pFVar3 != pFVar6) {
        puVar5 = &(pFVar3->ID).C;
        do {
          if (((param_1->D == puVar5[1] && param_1->B == puVar5[-1]) &&
              param_1->A == ((FGuid *)(puVar5 + -2))->A) && param_1->C == *puVar5) {
            return pFVar3;
          }
          pFVar3 = pFVar3 + 1;
          puVar5 = puVar5 + 0x10;
        } while (pFVar3 != pFVar6);
      }
      return (FPropertyBagPropertyDesc *)0x0;
    }
  }
  return (FPropertyBagPropertyDesc *)0x0;
}

// FindPropertyDescByName @ 141f7cb60

FPropertyBagPropertyDesc * __thiscall
FInstancedPropertyBag::FindPropertyDescByName(FInstancedPropertyBag *this,FName param_1)

{
  int iVar1;
  UClass *pUVar2;
  FPropertyBagPropertyDesc *pFVar3;
  FPropertyBagPropertyDesc *pFVar4;
  UScriptStruct *pUVar5;
  
  if (((this->Value).StructMemory != (uchar *)0x0) &&
     (pUVar5 = (this->Value).ScriptStruct.field0_0x0.DebugPtr, pUVar5 != (UScriptStruct *)0x0)) {
    pUVar2 = UPropertyBag::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(pUVar5->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar2->_padding_)) {
      pUVar5 = (UScriptStruct *)0x0;
    }
    if (pUVar5 != (UScriptStruct *)0x0) {
      pFVar3 = (FPropertyBagPropertyDesc *)pUVar5[1]._padding_;
      pFVar4 = pFVar3 + (int)pUVar5[1]._padding_;
      for (; pFVar3 != pFVar4; pFVar3 = pFVar3 + 1) {
        if (pFVar3->Name == param_1) {
          return pFVar3;
        }
      }
    }
  }
  return (FPropertyBagPropertyDesc *)0x0;
}

// GetArrayRef @ 141f80930

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<FPropertyBagArrayRef_const_,EPropertyBagResult> * __thiscall
FInstancedPropertyBag::GetArrayRef
          (FInstancedPropertyBag *this,
          TValueOrError<FPropertyBagArrayRef_const_,EPropertyBagResult> *__return_storage_ptr__,
          FPropertyBagPropertyDesc *param_1)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  TValueOrError<FPropertyBagArrayRef_const_,EPropertyBagResult> *pTVar4;
  FPropertyBagArrayRef *pFVar5;
  uchar *puVar6;
  undefined1 auStack_a8 [32];
  FPropertyBagArrayRef local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  bVar3 = OwnsPropertyDesc(this,param_1);
  if (bVar3) {
    if ((param_1->CachedProperty == (FProperty *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Desc.CachedProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\StructUtils\\PropertyBag.cpp"
                           ,0xadd,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TValueOrError<FPropertyBagArrayRef_const_,EPropertyBagResult> *)(*pcVar1)();
      return pTVar4;
    }
    if (((param_1->ContainerTypes).NumContainers == '\0') ||
       ((param_1->ContainerTypes).Types.Elements[0] != Array)) {
      *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 1;
      goto LAB_141f809f0;
    }
    puVar6 = (this->Value).StructMemory;
    if ((puVar6 != (uchar *)0x0) &&
       (((this->Value).ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0 &&
        (puVar6 = puVar6 + param_1->CachedProperty->Offset_Internal, puVar6 != (uchar *)0x0)))) {
      pFVar5 = FPropertyBagArrayRef::FPropertyBagArrayRef(&local_88,param_1,puVar6);
      lVar2 = pFVar5->_padding_;
      (__return_storage_ptr__->Variant)._padding_ = pFVar5->_padding_;
      (__return_storage_ptr__->Variant)._padding_ = lVar2;
      lVar2 = pFVar5->_padding_;
      (__return_storage_ptr__->Variant)._padding_ = pFVar5->_padding_;
      (__return_storage_ptr__->Variant)._padding_ = lVar2;
      FPropertyBagPropertyDesc::FPropertyBagPropertyDesc
                ((FPropertyBagPropertyDesc *)&(__return_storage_ptr__->Variant)._padding_,
                 &pFVar5->ValueDesc);
      (__return_storage_ptr__->Variant).TypeIndex = '\0';
      return __return_storage_ptr__;
    }
  }
  *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 3;
LAB_141f809f0:
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// GetArrayRef @ 141f80a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<FPropertyBagArrayRef_const_,EPropertyBagResult> * __thiscall
FInstancedPropertyBag::GetArrayRef
          (FInstancedPropertyBag *this,
          TValueOrError<FPropertyBagArrayRef_const_,EPropertyBagResult> *__return_storage_ptr__,
          FName param_1)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  FPropertyBagPropertyDesc *pFVar4;
  TValueOrError<FPropertyBagArrayRef_const_,EPropertyBagResult> *pTVar5;
  FPropertyBagArrayRef *pFVar6;
  uchar *puVar7;
  undefined1 auStack_98 [32];
  FPropertyBagArrayRef local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  pFVar4 = FindPropertyDescByName(this,param_1);
  if (pFVar4 != (FPropertyBagPropertyDesc *)0x0) {
    if ((pFVar4->CachedProperty == (FProperty *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Desc->CachedProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\StructUtils\\PropertyBag.cpp"
                           ,0xc62,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TValueOrError<FPropertyBagArrayRef_const_,EPropertyBagResult> *)(*pcVar1)();
      return pTVar5;
    }
    if (((pFVar4->ContainerTypes).NumContainers == '\0') ||
       ((pFVar4->ContainerTypes).Types.Elements[0] != Array)) {
      *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 1;
      goto LAB_141f80ae8;
    }
    puVar7 = (this->Value).StructMemory;
    if ((puVar7 != (uchar *)0x0) &&
       (((this->Value).ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0 &&
        (puVar7 = puVar7 + pFVar4->CachedProperty->Offset_Internal, puVar7 != (uchar *)0x0)))) {
      pFVar6 = FPropertyBagArrayRef::FPropertyBagArrayRef(&local_78,pFVar4,puVar7);
      lVar2 = pFVar6->_padding_;
      (__return_storage_ptr__->Variant)._padding_ = pFVar6->_padding_;
      (__return_storage_ptr__->Variant)._padding_ = lVar2;
      lVar2 = pFVar6->_padding_;
      (__return_storage_ptr__->Variant)._padding_ = pFVar6->_padding_;
      (__return_storage_ptr__->Variant)._padding_ = lVar2;
      FPropertyBagPropertyDesc::FPropertyBagPropertyDesc
                ((FPropertyBagPropertyDesc *)&(__return_storage_ptr__->Variant)._padding_,
                 &pFVar6->ValueDesc);
      (__return_storage_ptr__->Variant).TypeIndex = '\0';
      return __return_storage_ptr__;
    }
  }
  *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 3;
LAB_141f80ae8:
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// GetMutableArrayRef @ 141f82110

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<FPropertyBagArrayRef,EPropertyBagResult> * __thiscall
FInstancedPropertyBag::GetMutableArrayRef
          (FInstancedPropertyBag *this,
          TValueOrError<FPropertyBagArrayRef,EPropertyBagResult> *__return_storage_ptr__,
          FPropertyBagPropertyDesc *param_1)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  TValueOrError<FPropertyBagArrayRef,EPropertyBagResult> *pTVar4;
  FPropertyBagArrayRef *pFVar5;
  uchar *puVar6;
  undefined1 auStack_a8 [32];
  FPropertyBagArrayRef local_88;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_a8;
  bVar3 = OwnsPropertyDesc(this,param_1);
  if (bVar3) {
    if ((param_1->CachedProperty == (FProperty *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Desc.CachedProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\StructUtils\\PropertyBag.cpp"
                           ,0xac7,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TValueOrError<FPropertyBagArrayRef,EPropertyBagResult> *)(*pcVar1)();
      return pTVar4;
    }
    if (((param_1->ContainerTypes).NumContainers == '\0') ||
       ((param_1->ContainerTypes).Types.Elements[0] != Array)) {
      *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 1;
      goto LAB_141f821d0;
    }
    puVar6 = (this->Value).StructMemory;
    if ((puVar6 != (uchar *)0x0) &&
       (((this->Value).ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0 &&
        (puVar6 = puVar6 + param_1->CachedProperty->Offset_Internal, puVar6 != (uchar *)0x0)))) {
      pFVar5 = FPropertyBagArrayRef::FPropertyBagArrayRef(&local_88,param_1,puVar6);
      lVar2 = pFVar5->_padding_;
      (__return_storage_ptr__->Variant)._padding_ = pFVar5->_padding_;
      (__return_storage_ptr__->Variant)._padding_ = lVar2;
      lVar2 = pFVar5->_padding_;
      (__return_storage_ptr__->Variant)._padding_ = pFVar5->_padding_;
      (__return_storage_ptr__->Variant)._padding_ = lVar2;
      FPropertyBagPropertyDesc::FPropertyBagPropertyDesc
                ((FPropertyBagPropertyDesc *)&(__return_storage_ptr__->Variant)._padding_,
                 &pFVar5->ValueDesc);
      (__return_storage_ptr__->Variant).TypeIndex = '\0';
      return __return_storage_ptr__;
    }
  }
  *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 3;
LAB_141f821d0:
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// GetMutableArrayRef @ 141f82200

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<FPropertyBagArrayRef,EPropertyBagResult> * __thiscall
FInstancedPropertyBag::GetMutableArrayRef
          (FInstancedPropertyBag *this,
          TValueOrError<FPropertyBagArrayRef,EPropertyBagResult> *__return_storage_ptr__,
          FName param_1)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  FPropertyBagPropertyDesc *pFVar4;
  TValueOrError<FPropertyBagArrayRef,EPropertyBagResult> *pTVar5;
  FPropertyBagArrayRef *pFVar6;
  uchar *puVar7;
  undefined1 auStack_98 [32];
  FPropertyBagArrayRef local_78;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_98;
  pFVar4 = FindPropertyDescByName(this,param_1);
  if (pFVar4 != (FPropertyBagPropertyDesc *)0x0) {
    if ((pFVar4->CachedProperty == (FProperty *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Desc->CachedProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\StructUtils\\PropertyBag.cpp"
                           ,0xc4b,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TValueOrError<FPropertyBagArrayRef,EPropertyBagResult> *)(*pcVar1)();
      return pTVar5;
    }
    if (((pFVar4->ContainerTypes).NumContainers == '\0') ||
       ((pFVar4->ContainerTypes).Types.Elements[0] != Array)) {
      *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 1;
      goto LAB_141f822c8;
    }
    puVar7 = (this->Value).StructMemory;
    if ((puVar7 != (uchar *)0x0) &&
       (((this->Value).ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0 &&
        (puVar7 = puVar7 + pFVar4->CachedProperty->Offset_Internal, puVar7 != (uchar *)0x0)))) {
      pFVar6 = FPropertyBagArrayRef::FPropertyBagArrayRef(&local_78,pFVar4,puVar7);
      lVar2 = pFVar6->_padding_;
      (__return_storage_ptr__->Variant)._padding_ = pFVar6->_padding_;
      (__return_storage_ptr__->Variant)._padding_ = lVar2;
      lVar2 = pFVar6->_padding_;
      (__return_storage_ptr__->Variant)._padding_ = pFVar6->_padding_;
      (__return_storage_ptr__->Variant)._padding_ = lVar2;
      FPropertyBagPropertyDesc::FPropertyBagPropertyDesc
                ((FPropertyBagPropertyDesc *)&(__return_storage_ptr__->Variant)._padding_,
                 &pFVar6->ValueDesc);
      (__return_storage_ptr__->Variant).TypeIndex = '\0';
      return __return_storage_ptr__;
    }
  }
  *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 3;
LAB_141f822c8:
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// GetMutableSetRef @ 141f82410

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<FPropertyBagSetRef,EPropertyBagResult> * __thiscall
FInstancedPropertyBag::GetMutableSetRef
          (FInstancedPropertyBag *this,
          TValueOrError<FPropertyBagSetRef,EPropertyBagResult> *__return_storage_ptr__,
          FPropertyBagPropertyDesc *param_1)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  TValueOrError<FPropertyBagSetRef,EPropertyBagResult> *pTVar4;
  FPropertyBagSetRef *pFVar5;
  uchar *puVar6;
  undefined1 auStack_b8 [32];
  FPropertyBagSetRef local_98;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  bVar3 = OwnsPropertyDesc(this,param_1);
  if (bVar3) {
    if ((param_1->CachedProperty == (FProperty *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Desc.CachedProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\StructUtils\\PropertyBag.cpp"
                           ,0xaf3,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TValueOrError<FPropertyBagSetRef,EPropertyBagResult> *)(*pcVar1)();
      return pTVar4;
    }
    if (((param_1->ContainerTypes).NumContainers == '\0') ||
       ((param_1->ContainerTypes).Types.Elements[0] != Set)) {
      *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 1;
      goto LAB_141f824da;
    }
    puVar6 = (this->Value).StructMemory;
    if ((puVar6 != (uchar *)0x0) &&
       (((this->Value).ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0 &&
        (puVar6 = puVar6 + param_1->CachedProperty->Offset_Internal, puVar6 != (uchar *)0x0)))) {
      pFVar5 = FPropertyBagSetRef::FPropertyBagSetRef(&local_98,param_1,puVar6);
      lVar2 = pFVar5->_padding_;
      (__return_storage_ptr__->Variant)._padding_ = pFVar5->_padding_;
      (__return_storage_ptr__->Variant)._padding_ = lVar2;
      lVar2 = pFVar5->_padding_;
      (__return_storage_ptr__->Variant)._padding_ = pFVar5->_padding_;
      (__return_storage_ptr__->Variant)._padding_ = lVar2;
      (__return_storage_ptr__->Variant)._padding_ = pFVar5->_padding_;
      FPropertyBagPropertyDesc::FPropertyBagPropertyDesc
                ((FPropertyBagPropertyDesc *)&(__return_storage_ptr__->Variant)._padding_,
                 &pFVar5->ValueDesc);
      (__return_storage_ptr__->Variant).TypeIndex = '\0';
      return __return_storage_ptr__;
    }
  }
  *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 3;
LAB_141f824da:
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// GetMutableSetRef @ 141f82510

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<FPropertyBagSetRef,EPropertyBagResult> * __thiscall
FInstancedPropertyBag::GetMutableSetRef
          (FInstancedPropertyBag *this,
          TValueOrError<FPropertyBagSetRef,EPropertyBagResult> *__return_storage_ptr__,FName param_1
          )

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  FPropertyBagPropertyDesc *pFVar4;
  TValueOrError<FPropertyBagSetRef,EPropertyBagResult> *pTVar5;
  FPropertyBagSetRef *pFVar6;
  uchar *puVar7;
  undefined1 auStack_a8 [32];
  FPropertyBagSetRef local_88;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pFVar4 = FindPropertyDescByName(this,param_1);
  if (pFVar4 != (FPropertyBagPropertyDesc *)0x0) {
    if ((pFVar4->CachedProperty == (FProperty *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Desc->CachedProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\StructUtils\\PropertyBag.cpp"
                           ,0xc79,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TValueOrError<FPropertyBagSetRef,EPropertyBagResult> *)(*pcVar1)();
      return pTVar5;
    }
    if (((pFVar4->ContainerTypes).NumContainers == '\0') ||
       ((pFVar4->ContainerTypes).Types.Elements[0] != Set)) {
      *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 1;
      goto LAB_141f825e2;
    }
    puVar7 = (this->Value).StructMemory;
    if ((puVar7 != (uchar *)0x0) &&
       (((this->Value).ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0 &&
        (puVar7 = puVar7 + pFVar4->CachedProperty->Offset_Internal, puVar7 != (uchar *)0x0)))) {
      pFVar6 = FPropertyBagSetRef::FPropertyBagSetRef(&local_88,pFVar4,puVar7);
      lVar2 = pFVar6->_padding_;
      (__return_storage_ptr__->Variant)._padding_ = pFVar6->_padding_;
      (__return_storage_ptr__->Variant)._padding_ = lVar2;
      lVar2 = pFVar6->_padding_;
      (__return_storage_ptr__->Variant)._padding_ = pFVar6->_padding_;
      (__return_storage_ptr__->Variant)._padding_ = lVar2;
      (__return_storage_ptr__->Variant)._padding_ = pFVar6->_padding_;
      FPropertyBagPropertyDesc::FPropertyBagPropertyDesc
                ((FPropertyBagPropertyDesc *)&(__return_storage_ptr__->Variant)._padding_,
                 &pFVar6->ValueDesc);
      (__return_storage_ptr__->Variant).TypeIndex = '\0';
      return __return_storage_ptr__;
    }
  }
  *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 3;
LAB_141f825e2:
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// GetMutableValueAddress @ 141f82620

void * __thiscall
FInstancedPropertyBag::GetMutableValueAddress
          (FInstancedPropertyBag *this,FPropertyBagPropertyDesc *param_1)

{
  uchar *puVar1;
  
  if (((param_1 != (FPropertyBagPropertyDesc *)0x0) &&
      (puVar1 = (this->Value).StructMemory, puVar1 != (uchar *)0x0)) &&
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0)) {
    return puVar1 + param_1->CachedProperty->Offset_Internal;
  }
  return (void *)0x0;
}

// GetNumPropertiesInBag @ 141f82760

int __thiscall FInstancedPropertyBag::GetNumPropertiesInBag(FInstancedPropertyBag *this)

{
  int iVar1;
  UClass *pUVar2;
  UScriptStruct *pUVar3;
  
  if (((this->Value).StructMemory != (uchar *)0x0) &&
     (pUVar3 = (this->Value).ScriptStruct.field0_0x0.DebugPtr, pUVar3 != (UScriptStruct *)0x0)) {
    pUVar2 = UPropertyBag::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar2->_padding_)) {
      pUVar3 = (UScriptStruct *)0x0;
    }
    if (pUVar3 != (UScriptStruct *)0x0) {
      return (int)pUVar3[1]._padding_;
    }
  }
  return 0;
}

// GetPreloadDependencies @ 141f83be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
FInstancedPropertyBag::GetPreloadDependencies
          (FInstancedPropertyBag *this,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1)

{
  int iVar1;
  longlong lVar2;
  FScriptContainerElement *pFVar3;
  uchar *puVar4;
  UObjectBaseUtility *this_00;
  undefined8 *puVar5;
  uint *puVar6;
  undefined8 uVar7;
  code *pcVar8;
  bool bVar9;
  int iVar10;
  uint uVar11;
  UClass *pUVar12;
  FFieldClass *pFVar13;
  TTuple<FProperty_const_*,void_const_*> *pTVar14;
  ForElementType<FPropertyValueIterator::FPropertyValueStackEntry> FVar15;
  longlong *plVar16;
  longlong *plVar17;
  UScriptStruct *pUVar18;
  uint uVar19;
  undefined1 auStackY_7c8 [32];
  undefined1 local_778 [8];
  longlong local_770;
  FString local_768;
  FPropertyValueIterator local_758;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_7c8;
  if (((this->Value).StructMemory != (uchar *)0x0) &&
     (pUVar18 = (this->Value).ScriptStruct.field0_0x0.DebugPtr, pUVar18 != (UScriptStruct *)0x0)) {
    pUVar12 = UPropertyBag::StaticClass();
    iVar1 = (int)pUVar12->_padding_;
    if ((*(int *)(pUVar18->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar18->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar12->_padding_)) {
      pUVar18 = (UScriptStruct *)0x0;
    }
    if (pUVar18 != (UScriptStruct *)0x0) {
      plVar16 = (longlong *)pUVar18[1]._padding_;
      iVar1 = (int)pUVar18[1]._padding_;
      plVar17 = plVar16 + (longlong)iVar1 * 8;
      while( true ) {
        if ((int)pUVar18[1]._padding_ != iVar1) {
          local_778[0] = 0;
          `TCheckedPointerIterator<FPropertyBagPropertyDesc_const_,int,0>::operator!='::__l2::
          <lambda_1>::operator()(local_778);
        }
        if (plVar16 == plVar17) break;
        lVar2 = *plVar16;
        if (lVar2 != 0) {
          pFVar3 = (param_1->AllocatorInstance).Data;
          local_770 = lVar2;
          if (((pFVar3 <= (FScriptContainerElement *)&local_770) &&
              ((FScriptContainerElement *)&local_770 < pFVar3 + (longlong)param_1->ArrayMax * 8)) &&
             (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar9)) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
          iVar10 = param_1->ArrayNum;
          if (iVar10 == param_1->ArrayMax) {
            iVar10 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
          }
          param_1->ArrayNum = iVar10 + 1;
          *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_770;
        }
        plVar16 = plVar16 + 8;
      }
      puVar4 = (this->Value).StructMemory;
      pFVar13 = FStructProperty::StaticClass();
      FPropertyValueIterator::FPropertyValueIterator
                (&local_758,pFVar13,(UStruct *)pUVar18,puVar4,FullRecursion,IncludeDeprecated);
      while (0 < local_758.PropertyIteratorStack.ArrayNum) {
        pTVar14 = FPropertyValueIterator::operator->(&local_758);
        this_00 = *(UObjectBaseUtility **)(*(longlong *)pTVar14 + 0x70);
        if (this_00[4].field_0x14 == '\0') {
          UObjectBaseUtility::GetPathName(this_00,&local_768,(UObject *)0x0);
          bVar9 = ::FDebug::CheckVerifyFailedImpl2
                            ("bPrepareCppStructOpsCompleted",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                             ,0x8f6,
                             L"GetCppStructOps: PrepareCppStructOps() has not been called for class %s"
                            );
          if (local_768.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_768.Data.AllocatorInstance.Data);
          }
          if (bVar9) {
            pcVar8 = (code *)swi(3);
            (*pcVar8)();
            return;
          }
        }
        puVar5 = *(undefined8 **)&this_00[4].field_0x18;
        if (puVar5 != (undefined8 *)0x0) {
          pTVar14 = FPropertyValueIterator::operator->(&local_758);
          puVar6 = (uint *)*puVar5;
          uVar7 = *(undefined8 *)&pTVar14->field_0x8;
          if ((*(byte *)((longlong)puVar6 + 0x17) & 4) != 0) {
            if (((~(byte)(*puVar6 >> 9) & 1) != 0) &&
               (bVar9 = ::FDebug::CheckVerifyFailedImpl2
                                  ("!!(this->Flags & FuncFlag)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Class.h"
                                   ,0x660,L""), bVar9)) {
              pcVar8 = (code *)swi(3);
              (*pcVar8)();
              return;
            }
            uVar19 = 0;
            for (uVar11 = *puVar6 & 0x1ff; uVar11 != 0; uVar11 = uVar11 & uVar11 - 1) {
              uVar19 = uVar19 + 1;
            }
            (**(code **)(puVar6 + (ulonglong)uVar19 * 2 + 6))(uVar7,param_1);
          }
        }
        FPropertyValueIterator::IterateToNext(&local_758);
      }
      FVar15 = (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)&local_758;
      if (local_758.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
          (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
        FVar15 = local_758.PropertyIteratorStack.AllocatorInstance.SecondaryData;
      }
      DestructItems<FPropertyValueIterator::FPropertyValueStackEntry,int>
                ((FPropertyValueStackEntry *)FVar15,local_758.PropertyIteratorStack.ArrayNum);
      if (local_758.PropertyIteratorStack.AllocatorInstance.SecondaryData !=
          (ForElementType<FPropertyValueIterator::FPropertyValueStackEntry>)0x0) {
        FMemory::Free((void *)local_758.PropertyIteratorStack.AllocatorInstance.SecondaryData);
      }
    }
  }
  return;
}

// GetPropertyBagStruct @ 141f85fe0

UPropertyBag * __thiscall FInstancedPropertyBag::GetPropertyBagStruct(FInstancedPropertyBag *this)

{
  int iVar1;
  UPropertyBag *pUVar2;
  UClass *pUVar3;
  
  if (((this->Value).StructMemory != (uchar *)0x0) &&
     (pUVar2 = (UPropertyBag *)(this->Value).ScriptStruct.field0_0x0.DebugPtr,
     pUVar2 != (UPropertyBag *)0x0)) {
    pUVar3 = UPropertyBag::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar2->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar2->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) {
      return pUVar2;
    }
  }
  return (UPropertyBag *)0x0;
}

// GetSetRef @ 141f86740

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<FPropertyBagSetRef_const_,EPropertyBagResult> * __thiscall
FInstancedPropertyBag::GetSetRef
          (FInstancedPropertyBag *this,
          TValueOrError<FPropertyBagSetRef_const_,EPropertyBagResult> *__return_storage_ptr__,
          FPropertyBagPropertyDesc *param_1)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  TValueOrError<FPropertyBagSetRef_const_,EPropertyBagResult> *pTVar4;
  FPropertyBagSetRef *pFVar5;
  uchar *puVar6;
  undefined1 auStack_b8 [32];
  FPropertyBagSetRef local_98;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStack_b8;
  bVar3 = OwnsPropertyDesc(this,param_1);
  if (bVar3) {
    if ((param_1->CachedProperty == (FProperty *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Desc.CachedProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\StructUtils\\PropertyBag.cpp"
                           ,0xb09,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar4 = (TValueOrError<FPropertyBagSetRef_const_,EPropertyBagResult> *)(*pcVar1)();
      return pTVar4;
    }
    if (((param_1->ContainerTypes).NumContainers == '\0') ||
       ((param_1->ContainerTypes).Types.Elements[0] != Set)) {
      *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 1;
      goto LAB_141f8680a;
    }
    puVar6 = (this->Value).StructMemory;
    if ((puVar6 != (uchar *)0x0) &&
       (((this->Value).ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0 &&
        (puVar6 = puVar6 + param_1->CachedProperty->Offset_Internal, puVar6 != (uchar *)0x0)))) {
      pFVar5 = FPropertyBagSetRef::FPropertyBagSetRef(&local_98,param_1,puVar6);
      lVar2 = pFVar5->_padding_;
      (__return_storage_ptr__->Variant)._padding_ = pFVar5->_padding_;
      (__return_storage_ptr__->Variant)._padding_ = lVar2;
      lVar2 = pFVar5->_padding_;
      (__return_storage_ptr__->Variant)._padding_ = pFVar5->_padding_;
      (__return_storage_ptr__->Variant)._padding_ = lVar2;
      (__return_storage_ptr__->Variant)._padding_ = pFVar5->_padding_;
      FPropertyBagPropertyDesc::FPropertyBagPropertyDesc
                ((FPropertyBagPropertyDesc *)&(__return_storage_ptr__->Variant)._padding_,
                 &pFVar5->ValueDesc);
      (__return_storage_ptr__->Variant).TypeIndex = '\0';
      return __return_storage_ptr__;
    }
  }
  *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 3;
LAB_141f8680a:
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// GetSetRef @ 141f86840

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

TValueOrError<FPropertyBagSetRef_const_,EPropertyBagResult> * __thiscall
FInstancedPropertyBag::GetSetRef
          (FInstancedPropertyBag *this,
          TValueOrError<FPropertyBagSetRef_const_,EPropertyBagResult> *__return_storage_ptr__,
          FName param_1)

{
  code *pcVar1;
  longlong lVar2;
  bool bVar3;
  FPropertyBagPropertyDesc *pFVar4;
  TValueOrError<FPropertyBagSetRef_const_,EPropertyBagResult> *pTVar5;
  FPropertyBagSetRef *pFVar6;
  uchar *puVar7;
  undefined1 auStack_a8 [32];
  FPropertyBagSetRef local_88;
  ulonglong local_18;
  
  local_18 = __security_cookie.value ^ (ulonglong)auStack_a8;
  pFVar4 = FindPropertyDescByName(this,param_1);
  if (pFVar4 != (FPropertyBagPropertyDesc *)0x0) {
    if ((pFVar4->CachedProperty == (FProperty *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Desc->CachedProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\StructUtils\\PropertyBag.cpp"
                           ,0xc91,L""), bVar3)) {
      pcVar1 = (code *)swi(3);
      pTVar5 = (TValueOrError<FPropertyBagSetRef_const_,EPropertyBagResult> *)(*pcVar1)();
      return pTVar5;
    }
    if (((pFVar4->ContainerTypes).NumContainers == '\0') ||
       ((pFVar4->ContainerTypes).Types.Elements[0] != Set)) {
      *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 1;
      goto LAB_141f86912;
    }
    puVar7 = (this->Value).StructMemory;
    if ((puVar7 != (uchar *)0x0) &&
       (((this->Value).ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0 &&
        (puVar7 = puVar7 + pFVar4->CachedProperty->Offset_Internal, puVar7 != (uchar *)0x0)))) {
      pFVar6 = FPropertyBagSetRef::FPropertyBagSetRef(&local_88,pFVar4,puVar7);
      lVar2 = pFVar6->_padding_;
      (__return_storage_ptr__->Variant)._padding_ = pFVar6->_padding_;
      (__return_storage_ptr__->Variant)._padding_ = lVar2;
      lVar2 = pFVar6->_padding_;
      (__return_storage_ptr__->Variant)._padding_ = pFVar6->_padding_;
      (__return_storage_ptr__->Variant)._padding_ = lVar2;
      (__return_storage_ptr__->Variant)._padding_ = pFVar6->_padding_;
      FPropertyBagPropertyDesc::FPropertyBagPropertyDesc
                ((FPropertyBagPropertyDesc *)&(__return_storage_ptr__->Variant)._padding_,
                 &pFVar6->ValueDesc);
      (__return_storage_ptr__->Variant).TypeIndex = '\0';
      return __return_storage_ptr__;
    }
  }
  *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 3;
LAB_141f86912:
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// GetValueAddress @ 141f87fd0

void * __thiscall
FInstancedPropertyBag::GetValueAddress
          (FInstancedPropertyBag *this,FPropertyBagPropertyDesc *param_1)

{
  uchar *puVar1;
  
  if (((param_1 != (FPropertyBagPropertyDesc *)0x0) &&
      (puVar1 = (this->Value).StructMemory, puVar1 != (uchar *)0x0)) &&
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0)) {
    return puVar1 + param_1->CachedProperty->Offset_Internal;
  }
  return (void *)0x0;
}

// GetValueBool @ 141f88000

TValueOrError<bool,EPropertyBagResult> __thiscall
FInstancedPropertyBag::GetValueBool(FInstancedPropertyBag *this,FPropertyBagPropertyDesc *param_1)

{
  uchar *puVar1;
  bool bVar2;
  EPropertyBagResult EVar3;
  uchar *puVar4;
  FPropertyBagPropertyDesc *in_R8;
  long64 local_res20;
  
  bVar2 = OwnsPropertyDesc(this,in_R8);
  if (!bVar2) {
    *(undefined2 *)&(param_1->ValueTypeObject).field0_0x0 = 0x103;
    return (TValueOrError<bool,EPropertyBagResult>)SUB82(param_1,0);
  }
  puVar4 = (uchar *)0x0;
  local_res20 = 0;
  if (((in_R8 != (FPropertyBagPropertyDesc *)0x0) &&
      (puVar1 = (this->Value).StructMemory, puVar1 != (uchar *)0x0)) &&
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0)) {
    puVar4 = puVar1 + in_R8->CachedProperty->Offset_Internal;
  }
  EVar3 = UE::StructUtils::Private::GetPropertyAsInt64(in_R8,puVar4,&local_res20);
  if (EVar3 == Success) {
    EVar3 = local_res20 != 0;
    *(undefined1 *)((longlong)&(param_1->ValueTypeObject).field0_0x0 + 1) = 0;
  }
  else {
    *(undefined1 *)((longlong)&(param_1->ValueTypeObject).field0_0x0 + 1) = 1;
  }
  *(EPropertyBagResult *)&(param_1->ValueTypeObject).field0_0x0 = EVar3;
  return (TValueOrError<bool,EPropertyBagResult>)SUB82(param_1,0);
}

// GetValueBool @ 141f880a0

TValueOrError<bool,EPropertyBagResult> __thiscall
FInstancedPropertyBag::GetValueBool(FInstancedPropertyBag *this,FName param_1)

{
  uchar *puVar1;
  EPropertyBagResult EVar2;
  FPropertyBagPropertyDesc *pFVar3;
  uchar *puVar4;
  FName in_R8;
  long64 local_res20;
  
  pFVar3 = FindPropertyDescByName(this,in_R8);
  puVar4 = (uchar *)0x0;
  local_res20 = 0;
  if (((pFVar3 != (FPropertyBagPropertyDesc *)0x0) &&
      (puVar1 = (this->Value).StructMemory, puVar1 != (uchar *)0x0)) &&
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0)) {
    puVar4 = puVar1 + pFVar3->CachedProperty->Offset_Internal;
  }
  EVar2 = UE::StructUtils::Private::GetPropertyAsInt64(pFVar3,puVar4,&local_res20);
  if (EVar2 != Success) {
    *(undefined1 *)((longlong)param_1 + 1) = 1;
    *(EPropertyBagResult *)param_1 = EVar2;
    return (TValueOrError<bool,EPropertyBagResult>)param_1.ComparisonIndex.Value._0_2_;
  }
  *(undefined1 *)((longlong)param_1 + 1) = 0;
  *(bool *)param_1 = local_res20 != 0;
  return (TValueOrError<bool,EPropertyBagResult>)param_1.ComparisonIndex.Value._0_2_;
}

// GetValueByte @ 141f881c0

TValueOrError<unsigned_char,EPropertyBagResult> __thiscall
FInstancedPropertyBag::GetValueByte(FInstancedPropertyBag *this,FPropertyBagPropertyDesc *param_1)

{
  uchar *puVar1;
  bool bVar2;
  EPropertyBagResult EVar3;
  uchar *puVar4;
  FPropertyBagPropertyDesc *in_R8;
  ulong64 local_res20;
  
  bVar2 = OwnsPropertyDesc(this,in_R8);
  if (!bVar2) {
    *(undefined2 *)&(param_1->ValueTypeObject).field0_0x0 = 0x103;
    return (TValueOrError<unsigned_char,EPropertyBagResult>)SUB82(param_1,0);
  }
  puVar4 = (uchar *)0x0;
  local_res20 = 0;
  if (((in_R8 != (FPropertyBagPropertyDesc *)0x0) &&
      (puVar1 = (this->Value).StructMemory, puVar1 != (uchar *)0x0)) &&
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0)) {
    puVar4 = puVar1 + in_R8->CachedProperty->Offset_Internal;
  }
  EVar3 = UE::StructUtils::Private::GetPropertyAsUInt64(in_R8,puVar4,&local_res20);
  if (EVar3 == Success) {
    *(undefined1 *)((longlong)&(param_1->ValueTypeObject).field0_0x0 + 1) = 0;
  }
  else {
    *(undefined1 *)((longlong)&(param_1->ValueTypeObject).field0_0x0 + 1) = 1;
    local_res20._0_1_ = EVar3;
  }
  *(EPropertyBagResult *)&(param_1->ValueTypeObject).field0_0x0 = (EPropertyBagResult)local_res20;
  return (TValueOrError<unsigned_char,EPropertyBagResult>)SUB82(param_1,0);
}

// GetValueByte @ 141f88260

TValueOrError<unsigned_char,EPropertyBagResult> __thiscall
FInstancedPropertyBag::GetValueByte(FInstancedPropertyBag *this,FName param_1)

{
  uchar *puVar1;
  EPropertyBagResult EVar2;
  FPropertyBagPropertyDesc *pFVar3;
  uchar *puVar4;
  FName in_R8;
  ulong64 local_res20;
  
  pFVar3 = FindPropertyDescByName(this,in_R8);
  puVar4 = (uchar *)0x0;
  local_res20 = 0;
  if (((pFVar3 != (FPropertyBagPropertyDesc *)0x0) &&
      (puVar1 = (this->Value).StructMemory, puVar1 != (uchar *)0x0)) &&
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0)) {
    puVar4 = puVar1 + pFVar3->CachedProperty->Offset_Internal;
  }
  EVar2 = UE::StructUtils::Private::GetPropertyAsUInt64(pFVar3,puVar4,&local_res20);
  if (EVar2 != Success) {
    *(undefined1 *)((longlong)param_1 + 1) = 1;
    *(EPropertyBagResult *)param_1 = EVar2;
    return (TValueOrError<unsigned_char,EPropertyBagResult>)param_1.ComparisonIndex.Value._0_2_;
  }
  *(undefined1 *)((longlong)param_1 + 1) = 0;
  *(undefined1 *)param_1 = (undefined1)local_res20;
  return (TValueOrError<unsigned_char,EPropertyBagResult>)param_1.ComparisonIndex.Value._0_2_;
}

// GetValueClass @ 141f88380

TValueOrError<UClass_*,EPropertyBagResult> * __thiscall
FInstancedPropertyBag::GetValueClass
          (FInstancedPropertyBag *this,
          TValueOrError<UClass_*,EPropertyBagResult> *__return_storage_ptr__,
          FPropertyBagPropertyDesc *param_1)

{
  int iVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  TValueOrError<UClass_*,EPropertyBagResult> *pTVar6;
  FProperty *pFVar7;
  UClass *pUVar8;
  FProperty *pFVar9;
  FProperty *pFVar10;
  
  bVar4 = OwnsPropertyDesc(this,param_1);
  if (!bVar4) {
    *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 3;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    return __return_storage_ptr__;
  }
  pFVar9 = (FProperty *)0x0;
  if (((param_1 == (FPropertyBagPropertyDesc *)0x0) ||
      (puVar2 = (this->Value).StructMemory, puVar2 == (uchar *)0x0)) ||
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    pFVar7 = pFVar9;
    if (param_1 != (FPropertyBagPropertyDesc *)0x0) goto LAB_141f883f1;
LAB_141f884e4:
    uVar5 = 3;
  }
  else {
    pFVar7 = (FProperty *)(puVar2 + param_1->CachedProperty->Offset_Internal);
LAB_141f883f1:
    pFVar10 = param_1->CachedProperty;
    if (pFVar10 == (FProperty *)0x0) goto LAB_141f884e4;
    if ((param_1->ValueType == Object) || ((byte)(param_1->ValueType - SoftObject) < 3)) {
      if (pFVar7 != (FProperty *)0x0) {
        if ((param_1->ContainerTypes).NumContainers == '\0') {
          if (((*(uint *)(pFVar10->_padding_ + 0x18) >> 0x1a & 1) == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("CastResult",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                 ,0x480,L"CastFieldChecked failed with 0x%016llx"), pFVar10 = pFVar9
             , bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar6 = (TValueOrError<UClass_*,EPropertyBagResult> *)(*pcVar3)();
            return pTVar6;
          }
          if ((pFVar10[1]._padding_ == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("ObjectProperty->PropertyClass",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\StructUtils\\PropertyBag.cpp"
                                 ,0x36b,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar6 = (TValueOrError<UClass_*,EPropertyBagResult> *)(*pcVar3)();
            return pTVar6;
          }
          pFVar7 = (FProperty *)(**(code **)(pFVar10->_padding_ + 0x1f8))(pFVar10,pFVar7);
          if (pFVar7 != (FProperty *)0x0) {
            pUVar8 = UClass::GetPrivateStaticClass();
            iVar1 = (int)pUVar8->_padding_;
            if ((iVar1 <= *(int *)(pFVar7->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pFVar7->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
                &pUVar8->_padding_)) goto LAB_141f884d1;
          }
          bVar4 = pFVar7 == (FProperty *)0x0;
          pFVar7 = pFVar9;
          if (bVar4) {
LAB_141f884d1:
            (__return_storage_ptr__->Variant)._padding_ = (longlong)pFVar7;
            (__return_storage_ptr__->Variant).TypeIndex = '\0';
            return __return_storage_ptr__;
          }
          *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 1;
          goto LAB_141f884e8;
        }
        goto LAB_141f8840c;
      }
      uVar5 = 2;
    }
    else {
LAB_141f8840c:
      uVar5 = 1;
    }
  }
  *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = uVar5;
LAB_141f884e8:
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// GetValueClass @ 141f88510

TValueOrError<UClass_*,EPropertyBagResult> * __thiscall
FInstancedPropertyBag::GetValueClass
          (FInstancedPropertyBag *this,
          TValueOrError<UClass_*,EPropertyBagResult> *__return_storage_ptr__,FName param_1)

{
  int iVar1;
  uchar *puVar2;
  code *pcVar3;
  undefined1 uVar4;
  bool bVar5;
  FPropertyBagPropertyDesc *pFVar6;
  TValueOrError<UClass_*,EPropertyBagResult> *pTVar7;
  FProperty *pFVar8;
  UClass *pUVar9;
  FProperty *pFVar10;
  FProperty *pFVar11;
  
  pFVar6 = FindPropertyDescByName(this,param_1);
  pFVar10 = (FProperty *)0x0;
  if (((pFVar6 == (FPropertyBagPropertyDesc *)0x0) ||
      (puVar2 = (this->Value).StructMemory, puVar2 == (uchar *)0x0)) ||
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    pFVar8 = pFVar10;
    if (pFVar6 != (FPropertyBagPropertyDesc *)0x0) goto LAB_141f8855e;
LAB_141f8866c:
    uVar4 = 3;
  }
  else {
    pFVar8 = (FProperty *)(puVar2 + pFVar6->CachedProperty->Offset_Internal);
LAB_141f8855e:
    pFVar11 = pFVar6->CachedProperty;
    if (pFVar11 == (FProperty *)0x0) goto LAB_141f8866c;
    if ((pFVar6->ValueType == Object) || ((byte)(pFVar6->ValueType - SoftObject) < 3)) {
      if (pFVar8 != (FProperty *)0x0) {
        if ((pFVar6->ContainerTypes).NumContainers == '\0') {
          if (((*(uint *)(pFVar11->_padding_ + 0x18) >> 0x1a & 1) == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("CastResult",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                 ,0x480,L"CastFieldChecked failed with 0x%016llx"),
             pFVar11 = pFVar10, bVar5)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TValueOrError<UClass_*,EPropertyBagResult> *)(*pcVar3)();
            return pTVar7;
          }
          if ((pFVar11[1]._padding_ == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ObjectProperty->PropertyClass",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\StructUtils\\PropertyBag.cpp"
                                 ,0x36b,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TValueOrError<UClass_*,EPropertyBagResult> *)(*pcVar3)();
            return pTVar7;
          }
          pFVar8 = (FProperty *)(**(code **)(pFVar11->_padding_ + 0x1f8))(pFVar11,pFVar8);
          if (pFVar8 != (FProperty *)0x0) {
            pUVar9 = UClass::GetPrivateStaticClass();
            iVar1 = (int)pUVar9->_padding_;
            if ((iVar1 <= *(int *)(pFVar8->_padding_ + 0x38)) &&
               ((longlong *)
                *(undefined1 **)(*(longlong *)(pFVar8->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
                &pUVar9->_padding_)) goto LAB_141f88648;
          }
          bVar5 = pFVar8 == (FProperty *)0x0;
          pFVar8 = pFVar10;
          if (bVar5) {
LAB_141f88648:
            (__return_storage_ptr__->Variant)._padding_ = (longlong)pFVar8;
            (__return_storage_ptr__->Variant).TypeIndex = '\0';
            return __return_storage_ptr__;
          }
          *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 1;
          goto LAB_141f88670;
        }
        goto LAB_141f88579;
      }
      uVar4 = 2;
    }
    else {
LAB_141f88579:
      uVar4 = 1;
    }
  }
  *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = uVar4;
LAB_141f88670:
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// GetValueDouble @ 141f88840

TValueOrError<double,EPropertyBagResult> * __thiscall
FInstancedPropertyBag::GetValueDouble
          (FInstancedPropertyBag *this,
          TValueOrError<double,EPropertyBagResult> *__return_storage_ptr__,
          FPropertyBagPropertyDesc *param_1)

{
  bool bVar1;
  EPropertyBagResult EVar2;
  uchar *puVar3;
  double local_res20;
  
  bVar1 = OwnsPropertyDesc(this,param_1);
  if (!bVar1) {
    *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 3;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    return __return_storage_ptr__;
  }
  local_res20 = 0.0;
  if (((param_1 == (FPropertyBagPropertyDesc *)0x0) ||
      (puVar3 = (this->Value).StructMemory, puVar3 == (uchar *)0x0)) ||
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    puVar3 = (uchar *)0x0;
  }
  else {
    puVar3 = puVar3 + param_1->CachedProperty->Offset_Internal;
  }
  EVar2 = UE::StructUtils::Private::GetPropertyAsDouble(param_1,puVar3,&local_res20);
  if (EVar2 != Success) {
    *(EPropertyBagResult *)&(__return_storage_ptr__->Variant)._padding_ = EVar2;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Variant)._padding_ = (longlong)local_res20;
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// GetValueDouble @ 141f88900

TValueOrError<double,EPropertyBagResult> * __thiscall
FInstancedPropertyBag::GetValueDouble
          (FInstancedPropertyBag *this,
          TValueOrError<double,EPropertyBagResult> *__return_storage_ptr__,FName param_1)

{
  EPropertyBagResult EVar1;
  FPropertyBagPropertyDesc *pFVar2;
  uchar *puVar3;
  double local_res20;
  
  pFVar2 = FindPropertyDescByName(this,param_1);
  local_res20 = 0.0;
  if (((pFVar2 == (FPropertyBagPropertyDesc *)0x0) ||
      (puVar3 = (this->Value).StructMemory, puVar3 == (uchar *)0x0)) ||
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    puVar3 = (uchar *)0x0;
  }
  else {
    puVar3 = puVar3 + pFVar2->CachedProperty->Offset_Internal;
  }
  EVar1 = UE::StructUtils::Private::GetPropertyAsDouble(pFVar2,puVar3,&local_res20);
  if (EVar1 != Success) {
    *(EPropertyBagResult *)&(__return_storage_ptr__->Variant)._padding_ = EVar1;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Variant)._padding_ = (longlong)local_res20;
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// GetValueEnum @ 141f88a20

TValueOrError<unsigned_char,EPropertyBagResult> __thiscall
FInstancedPropertyBag::GetValueEnum
          (FInstancedPropertyBag *this,FPropertyBagPropertyDesc *param_1,UEnum *param_2)

{
  bool bVar1;
  EPropertyBagResult EVar2;
  uchar *puVar3;
  UEnum *in_R9;
  EPropertyBagResult local_18 [16];
  
  bVar1 = OwnsPropertyDesc(this,(FPropertyBagPropertyDesc *)param_2);
  if (bVar1) {
    if (((param_2 == (UEnum *)0x0) || (puVar3 = (this->Value).StructMemory, puVar3 == (uchar *)0x0))
       || ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
      puVar3 = (uchar *)0x0;
    }
    else {
      puVar3 = puVar3 + *(int *)((param_2->CppType).Data.AllocatorInstance.Data + 0x44);
    }
    EVar2 = UE::StructUtils::Private::GetPropertyValueAsEnum
                      ((FPropertyBagPropertyDesc *)param_2,in_R9,puVar3,local_18);
    if (EVar2 == Success) {
      *(undefined1 *)((longlong)&(param_1->ValueTypeObject).field0_0x0 + 1) = 0;
    }
    else {
      *(undefined1 *)((longlong)&(param_1->ValueTypeObject).field0_0x0 + 1) = 1;
      local_18[0] = EVar2;
    }
    *(EPropertyBagResult *)&(param_1->ValueTypeObject).field0_0x0 = local_18[0];
  }
  else {
    *(undefined2 *)&(param_1->ValueTypeObject).field0_0x0 = 0x103;
  }
  return (TValueOrError<unsigned_char,EPropertyBagResult>)SUB82(param_1,0);
}

// GetValueEnum @ 141f88ac0

TValueOrError<unsigned_char,EPropertyBagResult> __thiscall
FInstancedPropertyBag::GetValueEnum(FInstancedPropertyBag *this,FName param_1,UEnum *param_2)

{
  EPropertyBagResult EVar1;
  FPropertyBagPropertyDesc *pFVar2;
  uchar *puVar3;
  UEnum *in_R9;
  EPropertyBagResult local_18 [16];
  
  pFVar2 = FindPropertyDescByName(this,(FName)param_2);
  if (((pFVar2 == (FPropertyBagPropertyDesc *)0x0) ||
      (puVar3 = (this->Value).StructMemory, puVar3 == (uchar *)0x0)) ||
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    puVar3 = (uchar *)0x0;
  }
  else {
    puVar3 = puVar3 + pFVar2->CachedProperty->Offset_Internal;
  }
  EVar1 = UE::StructUtils::Private::GetPropertyValueAsEnum(pFVar2,in_R9,puVar3,local_18);
  if (EVar1 == Success) {
    *(undefined1 *)((longlong)param_1 + 1) = 0;
  }
  else {
    *(undefined1 *)((longlong)param_1 + 1) = 1;
    local_18[0] = EVar1;
  }
  *(EPropertyBagResult *)param_1 = local_18[0];
  return (TValueOrError<unsigned_char,EPropertyBagResult>)param_1.ComparisonIndex.Value._0_2_;
}

// GetValueFloat @ 141f88be0

TValueOrError<float,EPropertyBagResult> __thiscall
FInstancedPropertyBag::GetValueFloat(FInstancedPropertyBag *this,FPropertyBagPropertyDesc *param_1)

{
  bool bVar1;
  EPropertyBagResult EVar2;
  uchar *puVar3;
  FPropertyBagPropertyDesc *in_R8;
  double local_res20;
  
  bVar1 = OwnsPropertyDesc(this,in_R8);
  if (!bVar1) {
    *(undefined1 *)&(param_1->ValueTypeObject).field0_0x0 = 3;
    *(undefined1 *)((longlong)&(param_1->ValueTypeObject).field0_0x0 + 4) = 1;
    return (TValueOrError<float,EPropertyBagResult>)
           (TVariant<float,TValueOrError<float,EPropertyBagResult>::FWrapErrorType,TValueOrError<float,EPropertyBagResult>::FEmptyType>
            )param_1;
  }
  local_res20 = 0.0;
  if (((in_R8 == (FPropertyBagPropertyDesc *)0x0) ||
      (puVar3 = (this->Value).StructMemory, puVar3 == (uchar *)0x0)) ||
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    puVar3 = (uchar *)0x0;
  }
  else {
    puVar3 = puVar3 + in_R8->CachedProperty->Offset_Internal;
  }
  EVar2 = UE::StructUtils::Private::GetPropertyAsDouble(in_R8,puVar3,&local_res20);
  if (EVar2 != Success) {
    *(EPropertyBagResult *)&(param_1->ValueTypeObject).field0_0x0 = EVar2;
    *(undefined1 *)((longlong)&(param_1->ValueTypeObject).field0_0x0 + 4) = 1;
    return (TValueOrError<float,EPropertyBagResult>)
           (TVariant<float,TValueOrError<float,EPropertyBagResult>::FWrapErrorType,TValueOrError<float,EPropertyBagResult>::FEmptyType>
            )param_1;
  }
  *(undefined1 *)((longlong)&(param_1->ValueTypeObject).field0_0x0 + 4) = 0;
  *(float *)&(param_1->ValueTypeObject).field0_0x0 = (float)local_res20;
  return (TValueOrError<float,EPropertyBagResult>)
         (TVariant<float,TValueOrError<float,EPropertyBagResult>::FWrapErrorType,TValueOrError<float,EPropertyBagResult>::FEmptyType>
          )param_1;
}

// GetValueFloat @ 141f88ca0

TValueOrError<float,EPropertyBagResult> __thiscall
FInstancedPropertyBag::GetValueFloat(FInstancedPropertyBag *this,FName param_1)

{
  EPropertyBagResult EVar1;
  FPropertyBagPropertyDesc *pFVar2;
  uchar *puVar3;
  FName in_R8;
  double local_res20;
  
  pFVar2 = FindPropertyDescByName(this,in_R8);
  local_res20 = 0.0;
  if (((pFVar2 == (FPropertyBagPropertyDesc *)0x0) ||
      (puVar3 = (this->Value).StructMemory, puVar3 == (uchar *)0x0)) ||
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    puVar3 = (uchar *)0x0;
  }
  else {
    puVar3 = puVar3 + pFVar2->CachedProperty->Offset_Internal;
  }
  EVar1 = UE::StructUtils::Private::GetPropertyAsDouble(pFVar2,puVar3,&local_res20);
  if (EVar1 != Success) {
    *(EPropertyBagResult *)param_1 = EVar1;
    *(undefined1 *)((longlong)param_1 + 4) = 1;
    return (TValueOrError<float,EPropertyBagResult>)param_1;
  }
  *(undefined1 *)((longlong)param_1 + 4) = 0;
  *(float *)param_1 = (float)local_res20;
  return (TValueOrError<float,EPropertyBagResult>)param_1;
}

// GetValueInt32 @ 141f88dd0

TValueOrError<int,EPropertyBagResult> __thiscall
FInstancedPropertyBag::GetValueInt32(FInstancedPropertyBag *this,FPropertyBagPropertyDesc *param_1)

{
  uchar *puVar1;
  bool bVar2;
  EPropertyBagResult EVar3;
  uchar *puVar4;
  FPropertyBagPropertyDesc *in_R8;
  long64 local_res20;
  
  bVar2 = OwnsPropertyDesc(this,in_R8);
  if (!bVar2) {
    *(undefined1 *)&(param_1->ValueTypeObject).field0_0x0 = 3;
    *(undefined1 *)((longlong)&(param_1->ValueTypeObject).field0_0x0 + 4) = 1;
    return (TValueOrError<int,EPropertyBagResult>)
           (TVariant<int,TValueOrError<int,EPropertyBagResult>::FWrapErrorType,TValueOrError<int,EPropertyBagResult>::FEmptyType>
            )param_1;
  }
  puVar4 = (uchar *)0x0;
  local_res20 = 0;
  if (((in_R8 != (FPropertyBagPropertyDesc *)0x0) &&
      (puVar1 = (this->Value).StructMemory, puVar1 != (uchar *)0x0)) &&
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0)) {
    puVar4 = puVar1 + in_R8->CachedProperty->Offset_Internal;
  }
  EVar3 = UE::StructUtils::Private::GetPropertyAsInt64(in_R8,puVar4,&local_res20);
  if (EVar3 != Success) {
    *(EPropertyBagResult *)&(param_1->ValueTypeObject).field0_0x0 = EVar3;
    *(undefined1 *)((longlong)&(param_1->ValueTypeObject).field0_0x0 + 4) = 1;
    return (TValueOrError<int,EPropertyBagResult>)
           (TVariant<int,TValueOrError<int,EPropertyBagResult>::FWrapErrorType,TValueOrError<int,EPropertyBagResult>::FEmptyType>
            )param_1;
  }
  *(undefined4 *)&(param_1->ValueTypeObject).field0_0x0 = (undefined4)local_res20;
  *(undefined1 *)((longlong)&(param_1->ValueTypeObject).field0_0x0 + 4) = 0;
  return (TValueOrError<int,EPropertyBagResult>)
         (TVariant<int,TValueOrError<int,EPropertyBagResult>::FWrapErrorType,TValueOrError<int,EPropertyBagResult>::FEmptyType>
          )param_1;
}

// GetValueInt32 @ 141f88e80

TValueOrError<int,EPropertyBagResult> __thiscall
FInstancedPropertyBag::GetValueInt32(FInstancedPropertyBag *this,FName param_1)

{
  uchar *puVar1;
  EPropertyBagResult EVar2;
  FPropertyBagPropertyDesc *pFVar3;
  uchar *puVar4;
  FName in_R8;
  long64 local_res20;
  
  pFVar3 = FindPropertyDescByName(this,in_R8);
  puVar4 = (uchar *)0x0;
  local_res20 = 0;
  if (((pFVar3 != (FPropertyBagPropertyDesc *)0x0) &&
      (puVar1 = (this->Value).StructMemory, puVar1 != (uchar *)0x0)) &&
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0)) {
    puVar4 = puVar1 + pFVar3->CachedProperty->Offset_Internal;
  }
  EVar2 = UE::StructUtils::Private::GetPropertyAsInt64(pFVar3,puVar4,&local_res20);
  if (EVar2 != Success) {
    *(EPropertyBagResult *)param_1 = EVar2;
    *(undefined1 *)((longlong)param_1 + 4) = 1;
    return (TValueOrError<int,EPropertyBagResult>)param_1;
  }
  *(undefined4 *)param_1 = (undefined4)local_res20;
  *(undefined1 *)((longlong)param_1 + 4) = 0;
  return (TValueOrError<int,EPropertyBagResult>)param_1;
}

// GetValueInt64 @ 141f88f90

TValueOrError<__int64,EPropertyBagResult> * __thiscall
FInstancedPropertyBag::GetValueInt64
          (FInstancedPropertyBag *this,
          TValueOrError<__int64,EPropertyBagResult> *__return_storage_ptr__,
          FPropertyBagPropertyDesc *param_1)

{
  uchar *puVar1;
  bool bVar2;
  EPropertyBagResult EVar3;
  uchar *puVar4;
  long64 local_res20;
  
  bVar2 = OwnsPropertyDesc(this,param_1);
  if (!bVar2) {
    *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 3;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    return __return_storage_ptr__;
  }
  puVar4 = (uchar *)0x0;
  local_res20 = 0;
  if (((param_1 != (FPropertyBagPropertyDesc *)0x0) &&
      (puVar1 = (this->Value).StructMemory, puVar1 != (uchar *)0x0)) &&
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0)) {
    puVar4 = puVar1 + param_1->CachedProperty->Offset_Internal;
  }
  EVar3 = UE::StructUtils::Private::GetPropertyAsInt64(param_1,puVar4,&local_res20);
  if (EVar3 != Success) {
    *(EPropertyBagResult *)&(__return_storage_ptr__->Variant)._padding_ = EVar3;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Variant)._padding_ = local_res20;
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// GetValueInt64 @ 141f89050

TValueOrError<__int64,EPropertyBagResult> * __thiscall
FInstancedPropertyBag::GetValueInt64
          (FInstancedPropertyBag *this,
          TValueOrError<__int64,EPropertyBagResult> *__return_storage_ptr__,FName param_1)

{
  uchar *puVar1;
  EPropertyBagResult EVar2;
  FPropertyBagPropertyDesc *pFVar3;
  uchar *puVar4;
  long64 local_res20;
  
  pFVar3 = FindPropertyDescByName(this,param_1);
  puVar4 = (uchar *)0x0;
  local_res20 = 0;
  if (((pFVar3 != (FPropertyBagPropertyDesc *)0x0) &&
      (puVar1 = (this->Value).StructMemory, puVar1 != (uchar *)0x0)) &&
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0)) {
    puVar4 = puVar1 + pFVar3->CachedProperty->Offset_Internal;
  }
  EVar2 = UE::StructUtils::Private::GetPropertyAsInt64(pFVar3,puVar4,&local_res20);
  if (EVar2 != Success) {
    *(EPropertyBagResult *)&(__return_storage_ptr__->Variant)._padding_ = EVar2;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Variant)._padding_ = local_res20;
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// GetValueName @ 141f89170

TValueOrError<FName,EPropertyBagResult> * __thiscall
FInstancedPropertyBag::GetValueName
          (FInstancedPropertyBag *this,
          TValueOrError<FName,EPropertyBagResult> *__return_storage_ptr__,
          FPropertyBagPropertyDesc *param_1)

{
  uchar uVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  bool bVar8;
  undefined1 uVar9;
  uchar *puVar10;
  
  bVar8 = OwnsPropertyDesc(this,param_1);
  if (!bVar8) {
    *(undefined1 *)&__return_storage_ptr__->Variant = 3;
    goto LAB_141f8920c;
  }
  if (((param_1 == (FPropertyBagPropertyDesc *)0x0) ||
      (puVar10 = (this->Value).StructMemory, puVar10 == (uchar *)0x0)) ||
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    puVar10 = (uchar *)0x0;
    if (param_1 != (FPropertyBagPropertyDesc *)0x0) goto LAB_141f891c1;
LAB_141f89208:
    uVar9 = 3;
  }
  else {
    puVar10 = puVar10 + param_1->CachedProperty->Offset_Internal;
LAB_141f891c1:
    if (param_1->CachedProperty == (FProperty *)0x0) goto LAB_141f89208;
    if (puVar10 == (uchar *)0x0) {
      uVar9 = 2;
    }
    else {
      if (((param_1->ContainerTypes).NumContainers == '\0') &&
         ((*(uint *)(param_1->CachedProperty->_padding_ + 0x18) >> 0xd & 1) != 0)) {
        uVar1 = puVar10[1];
        uVar2 = puVar10[2];
        uVar3 = puVar10[3];
        uVar4 = puVar10[4];
        uVar5 = puVar10[5];
        uVar6 = puVar10[6];
        uVar7 = puVar10[7];
        (__return_storage_ptr__->Variant).field_0x0 = puVar10[0];
        (__return_storage_ptr__->Variant).field_0x1 = uVar1;
        (__return_storage_ptr__->Variant).field_0x2 = uVar2;
        (__return_storage_ptr__->Variant).field_0x3 = uVar3;
        (__return_storage_ptr__->Variant).field_0x4 = uVar4;
        (__return_storage_ptr__->Variant).field_0x5 = uVar5;
        (__return_storage_ptr__->Variant).field_0x6 = uVar6;
        (__return_storage_ptr__->Variant).field_0x7 = uVar7;
        (__return_storage_ptr__->Variant).TypeIndex = '\0';
        return __return_storage_ptr__;
      }
      uVar9 = 1;
    }
  }
  *(undefined1 *)&__return_storage_ptr__->Variant = uVar9;
LAB_141f8920c:
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// GetValueName @ 141f89230

TValueOrError<FName,EPropertyBagResult> * __thiscall
FInstancedPropertyBag::GetValueName
          (FInstancedPropertyBag *this,
          TValueOrError<FName,EPropertyBagResult> *__return_storage_ptr__,FName param_1)

{
  uchar uVar1;
  uchar uVar2;
  uchar uVar3;
  uchar uVar4;
  uchar uVar5;
  uchar uVar6;
  uchar uVar7;
  undefined1 uVar8;
  FPropertyBagPropertyDesc *pFVar9;
  uchar *puVar10;
  
  pFVar9 = FindPropertyDescByName(this,param_1);
  if (((pFVar9 == (FPropertyBagPropertyDesc *)0x0) ||
      (puVar10 = (this->Value).StructMemory, puVar10 == (uchar *)0x0)) ||
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    puVar10 = (uchar *)0x0;
    if (pFVar9 != (FPropertyBagPropertyDesc *)0x0) goto LAB_141f89270;
  }
  else {
    puVar10 = puVar10 + pFVar9->CachedProperty->Offset_Internal;
LAB_141f89270:
    if (pFVar9->CachedProperty != (FProperty *)0x0) {
      if (puVar10 == (uchar *)0x0) {
        uVar8 = 2;
      }
      else {
        if (((pFVar9->ContainerTypes).NumContainers == '\0') &&
           ((*(uint *)(pFVar9->CachedProperty->_padding_ + 0x18) >> 0xd & 1) != 0)) {
          uVar1 = puVar10[1];
          uVar2 = puVar10[2];
          uVar3 = puVar10[3];
          uVar4 = puVar10[4];
          uVar5 = puVar10[5];
          uVar6 = puVar10[6];
          uVar7 = puVar10[7];
          (__return_storage_ptr__->Variant).field_0x0 = puVar10[0];
          (__return_storage_ptr__->Variant).field_0x1 = uVar1;
          (__return_storage_ptr__->Variant).field_0x2 = uVar2;
          (__return_storage_ptr__->Variant).field_0x3 = uVar3;
          (__return_storage_ptr__->Variant).field_0x4 = uVar4;
          (__return_storage_ptr__->Variant).field_0x5 = uVar5;
          (__return_storage_ptr__->Variant).field_0x6 = uVar6;
          (__return_storage_ptr__->Variant).field_0x7 = uVar7;
          (__return_storage_ptr__->Variant).TypeIndex = '\0';
          return __return_storage_ptr__;
        }
        uVar8 = 1;
      }
      goto LAB_141f892b4;
    }
  }
  uVar8 = 3;
LAB_141f892b4:
  *(undefined1 *)&__return_storage_ptr__->Variant = uVar8;
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// GetValueObject @ 141f89380

TValueOrError<UObject_*,EPropertyBagResult> * __thiscall
FInstancedPropertyBag::GetValueObject
          (FInstancedPropertyBag *this,
          TValueOrError<UObject_*,EPropertyBagResult> *__return_storage_ptr__,
          FPropertyBagPropertyDesc *param_1,UClass *param_2)

{
  int iVar1;
  uchar *puVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  TValueOrError<UObject_*,EPropertyBagResult> *pTVar6;
  longlong lVar7;
  FProperty *pFVar8;
  FProperty *pFVar9;
  
  bVar4 = OwnsPropertyDesc(this,param_1);
  if (!bVar4) {
    *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 3;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    return __return_storage_ptr__;
  }
  if (((param_1 == (FPropertyBagPropertyDesc *)0x0) ||
      (puVar2 = (this->Value).StructMemory, puVar2 == (uchar *)0x0)) ||
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    pFVar8 = (FProperty *)0x0;
    if (param_1 != (FPropertyBagPropertyDesc *)0x0) goto LAB_141f893ec;
  }
  else {
    pFVar8 = (FProperty *)(puVar2 + param_1->CachedProperty->Offset_Internal);
LAB_141f893ec:
    pFVar9 = param_1->CachedProperty;
    if (pFVar9 != (FProperty *)0x0) {
      if ((param_1->ValueType == Object) || ((byte)(param_1->ValueType - SoftObject) < 3)) {
        if (pFVar8 == (FProperty *)0x0) {
          uVar5 = 2;
          goto LAB_141f894d6;
        }
        if ((param_1->ContainerTypes).NumContainers == '\0') {
          if (((*(uint *)(pFVar9->_padding_ + 0x18) >> 0x1a & 1) == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("CastResult",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                 ,0x480,L"CastFieldChecked failed with 0x%016llx"),
             pFVar9 = (FProperty *)0x0, bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar6 = (TValueOrError<UObject_*,EPropertyBagResult> *)(*pcVar3)();
            return pTVar6;
          }
          if ((pFVar9[1]._padding_ == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("ObjectProperty->PropertyClass",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\StructUtils\\PropertyBag.cpp"
                                 ,0x36b,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            pTVar6 = (TValueOrError<UObject_*,EPropertyBagResult> *)(*pcVar3)();
            return pTVar6;
          }
          if (param_2 == (UClass *)0x0) {
LAB_141f894bc:
            lVar7 = (**(code **)(pFVar9->_padding_ + 0x1f8))(pFVar9,pFVar8);
            (__return_storage_ptr__->Variant)._padding_ = lVar7;
            (__return_storage_ptr__->Variant).TypeIndex = '\0';
            return __return_storage_ptr__;
          }
          lVar7 = pFVar9[1]._padding_;
          if (lVar7 != 0) {
            iVar1 = (int)param_2->_padding_;
            if ((iVar1 <= *(int *)(lVar7 + 0x38)) &&
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar7 + 0x30) + (longlong)iVar1 * 8) ==
                &param_2->_padding_)) goto LAB_141f894bc;
          }
        }
      }
      uVar5 = 1;
      goto LAB_141f894d6;
    }
  }
  uVar5 = 3;
LAB_141f894d6:
  *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = uVar5;
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// GetValueObject @ 141f89500

TValueOrError<UObject_*,EPropertyBagResult> * __thiscall
FInstancedPropertyBag::GetValueObject
          (FInstancedPropertyBag *this,
          TValueOrError<UObject_*,EPropertyBagResult> *__return_storage_ptr__,FName param_1,
          UClass *param_2)

{
  int iVar1;
  uchar *puVar2;
  code *pcVar3;
  undefined1 uVar4;
  bool bVar5;
  FPropertyBagPropertyDesc *pFVar6;
  TValueOrError<UObject_*,EPropertyBagResult> *pTVar7;
  longlong lVar8;
  FProperty *pFVar9;
  FProperty *pFVar10;
  
  pFVar6 = FindPropertyDescByName(this,param_1);
  if (((pFVar6 == (FPropertyBagPropertyDesc *)0x0) ||
      (puVar2 = (this->Value).StructMemory, puVar2 == (uchar *)0x0)) ||
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    pFVar9 = (FProperty *)0x0;
    if (pFVar6 != (FPropertyBagPropertyDesc *)0x0) goto LAB_141f89556;
  }
  else {
    pFVar9 = (FProperty *)(puVar2 + pFVar6->CachedProperty->Offset_Internal);
LAB_141f89556:
    pFVar10 = pFVar6->CachedProperty;
    if (pFVar10 != (FProperty *)0x0) {
      if ((pFVar6->ValueType == Object) || ((byte)(pFVar6->ValueType - SoftObject) < 3)) {
        if (pFVar9 == (FProperty *)0x0) {
          uVar4 = 2;
          goto LAB_141f89641;
        }
        if ((pFVar6->ContainerTypes).NumContainers == '\0') {
          if (((*(uint *)(pFVar10->_padding_ + 0x18) >> 0x1a & 1) == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("CastResult",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                 ,0x480,L"CastFieldChecked failed with 0x%016llx"),
             pFVar10 = (FProperty *)0x0, bVar5)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TValueOrError<UObject_*,EPropertyBagResult> *)(*pcVar3)();
            return pTVar7;
          }
          if ((pFVar10[1]._padding_ == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("ObjectProperty->PropertyClass",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\StructUtils\\PropertyBag.cpp"
                                 ,0x36b,L""), bVar5)) {
            pcVar3 = (code *)swi(3);
            pTVar7 = (TValueOrError<UObject_*,EPropertyBagResult> *)(*pcVar3)();
            return pTVar7;
          }
          if (param_2 == (UClass *)0x0) {
LAB_141f89627:
            lVar8 = (**(code **)(pFVar10->_padding_ + 0x1f8))(pFVar10,pFVar9);
            (__return_storage_ptr__->Variant)._padding_ = lVar8;
            (__return_storage_ptr__->Variant).TypeIndex = '\0';
            return __return_storage_ptr__;
          }
          lVar8 = pFVar10[1]._padding_;
          if (lVar8 != 0) {
            iVar1 = (int)param_2->_padding_;
            if ((iVar1 <= *(int *)(lVar8 + 0x38)) &&
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar8 + 0x30) + (longlong)iVar1 * 8) ==
                &param_2->_padding_)) goto LAB_141f89627;
          }
        }
      }
      uVar4 = 1;
      goto LAB_141f89641;
    }
  }
  uVar4 = 3;
LAB_141f89641:
  *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = uVar4;
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// GetValueSerializedString @ 141f897f0

/* WARNING: Enum "Type": Some values do not have unique names */

TValueOrError<FString,EPropertyBagResult> * __thiscall
FInstancedPropertyBag::GetValueSerializedString
          (FInstancedPropertyBag *this,
          TValueOrError<FString,EPropertyBagResult> *__return_storage_ptr__,FName param_1)

{
  int *piVar1;
  FProperty *this_00;
  uchar *puVar2;
  code *pcVar3;
  ForAnyElementType _Src;
  bool bVar4;
  FPropertyBagPropertyDesc *pFVar5;
  TValueOrError<FString,EPropertyBagResult> *pTVar6;
  longlong lVar7;
  uchar *puVar8;
  FString local_38;
  FString local_28;
  
  pFVar5 = FindPropertyDescByName(this,param_1);
  if (pFVar5 == (FPropertyBagPropertyDesc *)0x0) {
    *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 3;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    return __return_storage_ptr__;
  }
  this_00 = pFVar5->CachedProperty;
  if ((this_00 == (FProperty *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Property",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\StructUtils\\PropertyBag.cpp"
                         ,0x9ae,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pTVar6 = (TValueOrError<FString,EPropertyBagResult> *)(*pcVar3)();
    return pTVar6;
  }
  puVar2 = (this->Value).StructMemory;
  puVar8 = (uchar *)0x0;
  if ((puVar2 != (uchar *)0x0) &&
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0)) {
    puVar8 = puVar2 + pFVar5->CachedProperty->Offset_Internal;
  }
  local_38.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_38.Data.ArrayNum = 0;
  local_38.Data.ArrayMax = 0;
  bVar4 = FProperty::ExportText_Direct
                    (this_00,&local_38,puVar8,puVar8,(UObject *)0x0,0,(UObject *)0x0);
  _Src.Data = local_38.Data.AllocatorInstance.Data;
  if (bVar4) {
    lVar7 = (longlong)local_38.Data.ArrayNum;
    piVar1 = (int *)((longlong)&(__return_storage_ptr__->Variant)._padding_ + 4);
    (__return_storage_ptr__->Variant)._padding_ = 0;
    *(int *)&(__return_storage_ptr__->Variant)._padding_ = local_38.Data.ArrayNum;
    if (local_38.Data.ArrayNum == 0) {
      *piVar1 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (2,2,local_38.Data.ArrayNum,0,(ForAnyElementType *)__return_storage_ptr__,
                 local_38.Data.ArrayNum,piVar1);
      memcpy((void *)(__return_storage_ptr__->Variant)._padding_,_Src.Data,lVar7 * 2);
    }
    (__return_storage_ptr__->Variant).TypeIndex = '\0';
  }
  else {
    if (2 < (byte)LogCore._0_1_) {
      ::FName::ToString(&pFVar5->Name,&local_28);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 1;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  return __return_storage_ptr__;
}

// GetValueSoftPath @ 141f899a0

TValueOrError<FSoftObjectPath,EPropertyBagResult> * __thiscall
FInstancedPropertyBag::GetValueSoftPath
          (FInstancedPropertyBag *this,
          TValueOrError<FSoftObjectPath,EPropertyBagResult> *__return_storage_ptr__,
          FPropertyBagPropertyDesc *param_1)

{
  uchar *puVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  TValueOrError<FSoftObjectPath,EPropertyBagResult> *pTVar5;
  FProperty *pFVar6;
  FProperty *pFVar7;
  FSoftObjectPath local_28;
  
  bVar3 = OwnsPropertyDesc(this,param_1);
  if (!bVar3) {
    *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 3;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    return __return_storage_ptr__;
  }
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  if (((param_1 == (FPropertyBagPropertyDesc *)0x0) ||
      (puVar1 = (this->Value).StructMemory, puVar1 == (uchar *)0x0)) ||
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    pFVar7 = (FProperty *)0x0;
    if (param_1 != (FPropertyBagPropertyDesc *)0x0) goto LAB_141f89a26;
  }
  else {
    pFVar7 = (FProperty *)(puVar1 + param_1->CachedProperty->Offset_Internal);
LAB_141f89a26:
    pFVar6 = param_1->CachedProperty;
    if (pFVar6 != (FProperty *)0x0) {
      if ((param_1->ValueType == SoftObject) || (param_1->ValueType == SoftClass)) {
        if (pFVar7 == (FProperty *)0x0) {
          uVar4 = 2;
          goto LAB_141f89af7;
        }
        if ((param_1->ContainerTypes).NumContainers == '\0') {
          if (((*(uint *)(pFVar6->_padding_ + 0x18) >> 0x1d & 1) == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("CastResult",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                 ,0x480,L"CastFieldChecked failed with 0x%016llx"),
             pFVar6 = (FProperty *)0x0, bVar3)) {
            pcVar2 = (code *)swi(3);
            pTVar5 = (TValueOrError<FSoftObjectPath,EPropertyBagResult> *)(*pcVar2)();
            return pTVar5;
          }
          if ((pFVar6[1]._padding_ == 0) &&
             (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                                ("SoftObjectProperty->PropertyClass",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\StructUtils\\PropertyBag.cpp"
                                 ,0x38c,L""), bVar3)) {
            pcVar2 = (code *)swi(3);
            pTVar5 = (TValueOrError<FSoftObjectPath,EPropertyBagResult> *)(*pcVar2)();
            return pTVar5;
          }
          FSoftObjectPath::operator=(&local_28,(FSoftObjectPath *)&pFVar7->_padding_);
          (__return_storage_ptr__->Variant)._padding_ = (longlong)local_28.AssetPath.PackageName;
          (__return_storage_ptr__->Variant)._padding_ = (longlong)local_28.AssetPath.AssetName;
          (__return_storage_ptr__->Variant)._padding_ =
               (longlong)local_28.SubPathString.Data.AllocatorInstance.Data;
          *(int *)&(__return_storage_ptr__->Variant)._padding_ =
               local_28.SubPathString.Data.ArrayNum;
          *(int *)((longlong)&(__return_storage_ptr__->Variant)._padding_ + 4) =
               local_28.SubPathString.Data.ArrayMax;
          (__return_storage_ptr__->Variant).TypeIndex = '\0';
          return __return_storage_ptr__;
        }
      }
      uVar4 = 1;
      goto LAB_141f89af7;
    }
  }
  uVar4 = 3;
LAB_141f89af7:
  *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = uVar4;
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// GetValueSoftPath @ 141f89b20

TValueOrError<FSoftObjectPath,EPropertyBagResult> * __thiscall
FInstancedPropertyBag::GetValueSoftPath
          (FInstancedPropertyBag *this,
          TValueOrError<FSoftObjectPath,EPropertyBagResult> *__return_storage_ptr__,FName param_1)

{
  uchar *puVar1;
  code *pcVar2;
  undefined1 uVar3;
  bool bVar4;
  FPropertyBagPropertyDesc *pFVar5;
  TValueOrError<FSoftObjectPath,EPropertyBagResult> *pTVar6;
  FProperty *pFVar7;
  FProperty *pFVar8;
  FSoftObjectPath local_28;
  
  pFVar5 = FindPropertyDescByName(this,param_1);
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  if (((pFVar5 == (FPropertyBagPropertyDesc *)0x0) ||
      (puVar1 = (this->Value).StructMemory, puVar1 == (uchar *)0x0)) ||
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    pFVar8 = (FProperty *)0x0;
    if (pFVar5 != (FPropertyBagPropertyDesc *)0x0) goto LAB_141f89b82;
  }
  else {
    pFVar8 = (FProperty *)(puVar1 + pFVar5->CachedProperty->Offset_Internal);
LAB_141f89b82:
    pFVar7 = pFVar5->CachedProperty;
    if (pFVar7 != (FProperty *)0x0) {
      if ((pFVar5->ValueType == SoftObject) || (pFVar5->ValueType == SoftClass)) {
        if (pFVar8 == (FProperty *)0x0) {
          uVar3 = 2;
          goto LAB_141f89c64;
        }
        if ((pFVar5->ContainerTypes).NumContainers == '\0') {
          if (((*(uint *)(pFVar7->_padding_ + 0x18) >> 0x1d & 1) == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("CastResult",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                 ,0x480,L"CastFieldChecked failed with 0x%016llx"),
             pFVar7 = (FProperty *)0x0, bVar4)) {
            pcVar2 = (code *)swi(3);
            pTVar6 = (TValueOrError<FSoftObjectPath,EPropertyBagResult> *)(*pcVar2)();
            return pTVar6;
          }
          if ((pFVar7[1]._padding_ == 0) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("SoftObjectProperty->PropertyClass",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\StructUtils\\PropertyBag.cpp"
                                 ,0x38c,L""), bVar4)) {
            pcVar2 = (code *)swi(3);
            pTVar6 = (TValueOrError<FSoftObjectPath,EPropertyBagResult> *)(*pcVar2)();
            return pTVar6;
          }
          FSoftObjectPath::operator=(&local_28,(FSoftObjectPath *)&pFVar8->_padding_);
          (__return_storage_ptr__->Variant)._padding_ = (longlong)local_28.AssetPath.PackageName;
          (__return_storage_ptr__->Variant)._padding_ = (longlong)local_28.AssetPath.AssetName;
          (__return_storage_ptr__->Variant)._padding_ =
               (longlong)local_28.SubPathString.Data.AllocatorInstance.Data;
          *(int *)&(__return_storage_ptr__->Variant)._padding_ =
               local_28.SubPathString.Data.ArrayNum;
          *(int *)((longlong)&(__return_storage_ptr__->Variant)._padding_ + 4) =
               local_28.SubPathString.Data.ArrayMax;
          (__return_storage_ptr__->Variant).TypeIndex = '\0';
          return __return_storage_ptr__;
        }
      }
      uVar3 = 1;
      goto LAB_141f89c64;
    }
  }
  uVar3 = 3;
LAB_141f89c64:
  *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = uVar3;
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// GetValueString @ 141f89e10

TValueOrError<FString,EPropertyBagResult> * __thiscall
FInstancedPropertyBag::GetValueString
          (FInstancedPropertyBag *this,
          TValueOrError<FString,EPropertyBagResult> *__return_storage_ptr__,
          FPropertyBagPropertyDesc *param_1)

{
  int *piVar1;
  uchar *puVar2;
  ForAnyElementType _Src;
  bool bVar3;
  undefined1 uVar4;
  FString *pFVar5;
  longlong lVar6;
  FString local_18;
  
  bVar3 = OwnsPropertyDesc(this,param_1);
  if (!bVar3) {
    *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 3;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    return __return_storage_ptr__;
  }
  pFVar5 = (FString *)0x0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  if (((param_1 == (FPropertyBagPropertyDesc *)0x0) ||
      (puVar2 = (this->Value).StructMemory, puVar2 == (uchar *)0x0)) ||
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    if (param_1 != (FPropertyBagPropertyDesc *)0x0) goto LAB_141f89e8b;
  }
  else {
    pFVar5 = (FString *)(puVar2 + param_1->CachedProperty->Offset_Internal);
LAB_141f89e8b:
    if (param_1->CachedProperty != (FProperty *)0x0) {
      if (pFVar5 == (FString *)0x0) {
        uVar4 = 2;
      }
      else {
        if (((param_1->ContainerTypes).NumContainers == '\0') &&
           ((*(uint *)(param_1->CachedProperty->_padding_ + 0x18) >> 0xe & 1) != 0)) {
          ::FString::operator=(&local_18,pFVar5);
          _Src.Data = local_18.Data.AllocatorInstance.Data;
          lVar6 = (longlong)local_18.Data.ArrayNum;
          piVar1 = (int *)((longlong)&(__return_storage_ptr__->Variant)._padding_ + 4);
          (__return_storage_ptr__->Variant)._padding_ = 0;
          *(int *)&(__return_storage_ptr__->Variant)._padding_ = local_18.Data.ArrayNum;
          if (local_18.Data.ArrayNum == 0) {
            *piVar1 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)__return_storage_ptr__,
                       local_18.Data.ArrayNum,piVar1);
            memcpy((void *)(__return_storage_ptr__->Variant)._padding_,_Src.Data,lVar6 * 2);
          }
          (__return_storage_ptr__->Variant).TypeIndex = '\0';
          if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return __return_storage_ptr__;
          }
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
          return __return_storage_ptr__;
        }
        uVar4 = 1;
      }
      goto LAB_141f89f2d;
    }
  }
  uVar4 = 3;
LAB_141f89f2d:
  *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = uVar4;
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// GetValueString @ 141f89f60

TValueOrError<FString,EPropertyBagResult> * __thiscall
FInstancedPropertyBag::GetValueString
          (FInstancedPropertyBag *this,
          TValueOrError<FString,EPropertyBagResult> *__return_storage_ptr__,FName param_1)

{
  int *piVar1;
  uchar *puVar2;
  ForAnyElementType _Src;
  undefined1 uVar3;
  FPropertyBagPropertyDesc *pFVar4;
  FString *pFVar5;
  longlong lVar6;
  FString local_18;
  
  pFVar4 = FindPropertyDescByName(this,param_1);
  pFVar5 = (FString *)0x0;
  local_18.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.Data.ArrayNum = 0;
  local_18.Data.ArrayMax = 0;
  if (((pFVar4 == (FPropertyBagPropertyDesc *)0x0) ||
      (puVar2 = (this->Value).StructMemory, puVar2 == (uchar *)0x0)) ||
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    if (pFVar4 != (FPropertyBagPropertyDesc *)0x0) goto LAB_141f89fb8;
  }
  else {
    pFVar5 = (FString *)(puVar2 + pFVar4->CachedProperty->Offset_Internal);
LAB_141f89fb8:
    if (pFVar4->CachedProperty != (FProperty *)0x0) {
      if (pFVar5 == (FString *)0x0) {
        uVar3 = 2;
      }
      else {
        if (((pFVar4->ContainerTypes).NumContainers == '\0') &&
           ((*(uint *)(pFVar4->CachedProperty->_padding_ + 0x18) >> 0xe & 1) != 0)) {
          ::FString::operator=(&local_18,pFVar5);
          _Src.Data = local_18.Data.AllocatorInstance.Data;
          lVar6 = (longlong)local_18.Data.ArrayNum;
          piVar1 = (int *)((longlong)&(__return_storage_ptr__->Variant)._padding_ + 4);
          (__return_storage_ptr__->Variant)._padding_ = 0;
          *(int *)&(__return_storage_ptr__->Variant)._padding_ = local_18.Data.ArrayNum;
          if (local_18.Data.ArrayNum == 0) {
            *piVar1 = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_18.Data.ArrayNum,0,(ForAnyElementType *)__return_storage_ptr__,
                       local_18.Data.ArrayNum,piVar1);
            memcpy((void *)(__return_storage_ptr__->Variant)._padding_,_Src.Data,lVar6 * 2);
          }
          (__return_storage_ptr__->Variant).TypeIndex = '\0';
          if (local_18.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
            return __return_storage_ptr__;
          }
          FMemory::Free(local_18.Data.AllocatorInstance.Data);
          return __return_storage_ptr__;
        }
        uVar3 = 1;
      }
      goto LAB_141f8a078;
    }
  }
  uVar3 = 3;
LAB_141f8a078:
  *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = uVar3;
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// GetValueStruct @ 141f8a210

TValueOrError<FStructView,EPropertyBagResult> * __thiscall
FInstancedPropertyBag::GetValueStruct
          (FInstancedPropertyBag *this,
          TValueOrError<FStructView,EPropertyBagResult> *__return_storage_ptr__,
          FPropertyBagPropertyDesc *param_1,UScriptStruct *param_2)

{
  int iVar1;
  uchar *puVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  TValueOrError<FStructView,EPropertyBagResult> *pTVar7;
  FProperty *pFVar8;
  FProperty *pFVar9;
  
  bVar5 = OwnsPropertyDesc(this,param_1);
  if (!bVar5) {
    *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 3;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    return __return_storage_ptr__;
  }
  if (((param_1 == (FPropertyBagPropertyDesc *)0x0) ||
      (puVar2 = (this->Value).StructMemory, puVar2 == (uchar *)0x0)) ||
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    pFVar9 = (FProperty *)0x0;
    if (param_1 != (FPropertyBagPropertyDesc *)0x0) goto LAB_141f8a27c;
  }
  else {
    pFVar9 = (FProperty *)(puVar2 + param_1->CachedProperty->Offset_Internal);
LAB_141f8a27c:
    pFVar8 = param_1->CachedProperty;
    if (pFVar8 != (FProperty *)0x0) {
      if (param_1->ValueType == Struct) {
        if (pFVar9 == (FProperty *)0x0) {
          uVar6 = 2;
          goto LAB_141f8a362;
        }
        if ((param_1->ContainerTypes).NumContainers == '\0') {
          if (((*(uint *)(pFVar8->_padding_ + 0x18) >> 0x14 & 1) == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("CastResult",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                 ,0x480,L"CastFieldChecked failed with 0x%016llx"),
             pFVar8 = (FProperty *)0x0, bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar7 = (TValueOrError<FStructView,EPropertyBagResult> *)(*pcVar4)();
            return pTVar7;
          }
          if ((pFVar8[1]._padding_ == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("StructProperty->Struct",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\StructUtils\\PropertyBag.cpp"
                                 ,0x348,L""), bVar5)) {
            pcVar4 = (code *)swi(3);
            pTVar7 = (TValueOrError<FStructView,EPropertyBagResult> *)(*pcVar4)();
            return pTVar7;
          }
          if (param_2 == (UScriptStruct *)0x0) {
LAB_141f8a344:
            (__return_storage_ptr__->Variant)._padding_ = pFVar8[1]._padding_;
            (__return_storage_ptr__->Variant)._padding_ = (longlong)pFVar9;
            (__return_storage_ptr__->Variant).TypeIndex = '\0';
            return __return_storage_ptr__;
          }
          lVar3 = pFVar8[1]._padding_;
          if (lVar3 != 0) {
            iVar1 = (int)param_2->_padding_;
            if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) ==
                &param_2->_padding_)) goto LAB_141f8a344;
          }
        }
      }
      uVar6 = 1;
      goto LAB_141f8a362;
    }
  }
  uVar6 = 3;
LAB_141f8a362:
  *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = uVar6;
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// GetValueStruct @ 141f8a390

TValueOrError<FStructView,EPropertyBagResult> * __thiscall
FInstancedPropertyBag::GetValueStruct
          (FInstancedPropertyBag *this,
          TValueOrError<FStructView,EPropertyBagResult> *__return_storage_ptr__,FName param_1,
          UScriptStruct *param_2)

{
  int iVar1;
  uchar *puVar2;
  longlong lVar3;
  code *pcVar4;
  undefined1 uVar5;
  bool bVar6;
  FPropertyBagPropertyDesc *pFVar7;
  TValueOrError<FStructView,EPropertyBagResult> *pTVar8;
  FProperty *pFVar9;
  FProperty *pFVar10;
  
  pFVar7 = FindPropertyDescByName(this,param_1);
  if (((pFVar7 == (FPropertyBagPropertyDesc *)0x0) ||
      (puVar2 = (this->Value).StructMemory, puVar2 == (uchar *)0x0)) ||
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    pFVar9 = (FProperty *)0x0;
    if (pFVar7 != (FPropertyBagPropertyDesc *)0x0) goto LAB_141f8a3e6;
  }
  else {
    pFVar9 = (FProperty *)(puVar2 + pFVar7->CachedProperty->Offset_Internal);
LAB_141f8a3e6:
    pFVar10 = pFVar7->CachedProperty;
    if (pFVar10 != (FProperty *)0x0) {
      if (pFVar7->ValueType == Struct) {
        if (pFVar9 == (FProperty *)0x0) {
          uVar5 = 2;
          goto LAB_141f8a4cc;
        }
        if ((pFVar7->ContainerTypes).NumContainers == '\0') {
          if (((*(uint *)(pFVar10->_padding_ + 0x18) >> 0x14 & 1) == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("CastResult",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                 ,0x480,L"CastFieldChecked failed with 0x%016llx"),
             pFVar10 = (FProperty *)0x0, bVar6)) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TValueOrError<FStructView,EPropertyBagResult> *)(*pcVar4)();
            return pTVar8;
          }
          if ((pFVar10[1]._padding_ == 0) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("StructProperty->Struct",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\StructUtils\\PropertyBag.cpp"
                                 ,0x348,L""), bVar6)) {
            pcVar4 = (code *)swi(3);
            pTVar8 = (TValueOrError<FStructView,EPropertyBagResult> *)(*pcVar4)();
            return pTVar8;
          }
          if (param_2 == (UScriptStruct *)0x0) {
LAB_141f8a4ae:
            (__return_storage_ptr__->Variant)._padding_ = pFVar10[1]._padding_;
            (__return_storage_ptr__->Variant)._padding_ = (longlong)pFVar9;
            (__return_storage_ptr__->Variant).TypeIndex = '\0';
            return __return_storage_ptr__;
          }
          lVar3 = pFVar10[1]._padding_;
          if (lVar3 != 0) {
            iVar1 = (int)param_2->_padding_;
            if ((iVar1 <= *(int *)(lVar3 + 0x38)) &&
               ((longlong *)*(undefined1 **)(*(longlong *)(lVar3 + 0x30) + (longlong)iVar1 * 8) ==
                &param_2->_padding_)) goto LAB_141f8a4ae;
          }
        }
      }
      uVar5 = 1;
      goto LAB_141f8a4cc;
    }
  }
  uVar5 = 3;
LAB_141f8a4cc:
  *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = uVar5;
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
  return __return_storage_ptr__;
}

// GetValueText @ 141f8a670

TValueOrError<FText,EPropertyBagResult> * __thiscall
FInstancedPropertyBag::GetValueText
          (FInstancedPropertyBag *this,
          TValueOrError<FText,EPropertyBagResult> *__return_storage_ptr__,
          FPropertyBagPropertyDesc *param_1)

{
  uchar *puVar1;
  ITextData *pIVar2;
  TRefCountPtr<ITextData> TVar3;
  bool bVar4;
  undefined1 uVar5;
  longlong *plVar6;
  undefined1 local_res20 [8];
  FText local_18;
  
  bVar4 = OwnsPropertyDesc(this,param_1);
  if (!bVar4) {
    *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 3;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    return __return_storage_ptr__;
  }
  FText::FText(&local_18);
  TVar3.Reference = local_18.TextData.Reference;
  if (((param_1 == (FPropertyBagPropertyDesc *)0x0) ||
      (puVar1 = (this->Value).StructMemory, puVar1 == (uchar *)0x0)) ||
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    plVar6 = (longlong *)0x0;
    if (param_1 != (FPropertyBagPropertyDesc *)0x0) goto LAB_141f8a6e4;
LAB_141f8a788:
    uVar5 = 3;
  }
  else {
    plVar6 = (longlong *)(puVar1 + param_1->CachedProperty->Offset_Internal);
LAB_141f8a6e4:
    if (param_1->CachedProperty == (FProperty *)0x0) goto LAB_141f8a788;
    if (plVar6 == (longlong *)0x0) {
      uVar5 = 2;
    }
    else if ((param_1->ContainerTypes).NumContainers == '\0') {
      if ((*(uint *)(param_1->CachedProperty->_padding_ + 0x18) >> 0x1e & 1) != 0) {
        pIVar2 = (ITextData *)*plVar6;
        if (local_18.TextData.Reference != pIVar2) {
          local_18.TextData.Reference = pIVar2;
          if (pIVar2 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res20);
          }
          if (TVar3.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*TVar3.Reference + 0x10))(TVar3.Reference);
          }
        }
        local_18.Flags = *(uint *)(plVar6 + 1);
        (__return_storage_ptr__->Variant)._padding_ = (longlong)local_18.TextData.Reference;
        if (local_18.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_18.TextData.Reference + 8))
                    (local_18.TextData.Reference,local_res20);
        }
        *(uint *)&(__return_storage_ptr__->Variant)._padding_ = local_18.Flags;
        (__return_storage_ptr__->Variant).TypeIndex = '\0';
        goto LAB_141f8a795;
      }
      uVar5 = 1;
    }
    else {
      uVar5 = 1;
    }
  }
  *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = uVar5;
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
LAB_141f8a795:
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetValueText @ 141f8a7c0

TValueOrError<FText,EPropertyBagResult> * __thiscall
FInstancedPropertyBag::GetValueText
          (FInstancedPropertyBag *this,
          TValueOrError<FText,EPropertyBagResult> *__return_storage_ptr__,FName param_1)

{
  uchar *puVar1;
  ITextData *pIVar2;
  TRefCountPtr<ITextData> TVar3;
  undefined1 uVar4;
  FPropertyBagPropertyDesc *pFVar5;
  longlong *plVar6;
  undefined1 local_res20 [8];
  FText local_18;
  
  pFVar5 = FindPropertyDescByName(this,param_1);
  FText::FText(&local_18);
  TVar3.Reference = local_18.TextData.Reference;
  if (((pFVar5 == (FPropertyBagPropertyDesc *)0x0) ||
      (puVar1 = (this->Value).StructMemory, puVar1 == (uchar *)0x0)) ||
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    plVar6 = (longlong *)0x0;
    if (pFVar5 != (FPropertyBagPropertyDesc *)0x0) goto LAB_141f8a816;
LAB_141f8a8ba:
    uVar4 = 3;
  }
  else {
    plVar6 = (longlong *)(puVar1 + pFVar5->CachedProperty->Offset_Internal);
LAB_141f8a816:
    if (pFVar5->CachedProperty == (FProperty *)0x0) goto LAB_141f8a8ba;
    if (plVar6 == (longlong *)0x0) {
      uVar4 = 2;
    }
    else if ((pFVar5->ContainerTypes).NumContainers == '\0') {
      if ((*(uint *)(pFVar5->CachedProperty->_padding_ + 0x18) >> 0x1e & 1) != 0) {
        pIVar2 = (ITextData *)*plVar6;
        if (local_18.TextData.Reference != pIVar2) {
          local_18.TextData.Reference = pIVar2;
          if (pIVar2 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res20);
          }
          if (TVar3.Reference != (ITextData *)0x0) {
            (**(code **)((longlong)*TVar3.Reference + 0x10))(TVar3.Reference);
          }
        }
        local_18.Flags = *(uint *)(plVar6 + 1);
        (__return_storage_ptr__->Variant)._padding_ = (longlong)local_18.TextData.Reference;
        if (local_18.TextData.Reference != (ITextData *)0x0) {
          (**(code **)((longlong)*local_18.TextData.Reference + 8))
                    (local_18.TextData.Reference,local_res20);
        }
        *(uint *)&(__return_storage_ptr__->Variant)._padding_ = local_18.Flags;
        (__return_storage_ptr__->Variant).TypeIndex = '\0';
        goto LAB_141f8a8c7;
      }
      uVar4 = 1;
    }
    else {
      uVar4 = 1;
    }
  }
  *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = uVar4;
  (__return_storage_ptr__->Variant).TypeIndex = '\x01';
LAB_141f8a8c7:
  if (local_18.TextData.Reference != (ITextData *)0x0) {
    (**(code **)((longlong)*local_18.TextData.Reference + 0x10))();
  }
  return __return_storage_ptr__;
}

// GetValueUInt32 @ 141f8adb0

TValueOrError<unsigned_int,EPropertyBagResult> __thiscall
FInstancedPropertyBag::GetValueUInt32(FInstancedPropertyBag *this,FPropertyBagPropertyDesc *param_1)

{
  uchar *puVar1;
  bool bVar2;
  EPropertyBagResult EVar3;
  uchar *puVar4;
  FPropertyBagPropertyDesc *in_R8;
  ulong64 local_res20;
  
  bVar2 = OwnsPropertyDesc(this,in_R8);
  if (!bVar2) {
    *(undefined1 *)&(param_1->ValueTypeObject).field0_0x0 = 3;
    *(undefined1 *)((longlong)&(param_1->ValueTypeObject).field0_0x0 + 4) = 1;
    return (TValueOrError<unsigned_int,EPropertyBagResult>)
           (TVariant<unsigned_int,TValueOrError<unsigned_int,EPropertyBagResult>::FWrapErrorType,TValueOrError<unsigned_int,EPropertyBagResult>::FEmptyType>
            )param_1;
  }
  puVar4 = (uchar *)0x0;
  local_res20 = 0;
  if (((in_R8 != (FPropertyBagPropertyDesc *)0x0) &&
      (puVar1 = (this->Value).StructMemory, puVar1 != (uchar *)0x0)) &&
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0)) {
    puVar4 = puVar1 + in_R8->CachedProperty->Offset_Internal;
  }
  EVar3 = UE::StructUtils::Private::GetPropertyAsUInt64(in_R8,puVar4,&local_res20);
  if (EVar3 != Success) {
    *(EPropertyBagResult *)&(param_1->ValueTypeObject).field0_0x0 = EVar3;
    *(undefined1 *)((longlong)&(param_1->ValueTypeObject).field0_0x0 + 4) = 1;
    return (TValueOrError<unsigned_int,EPropertyBagResult>)
           (TVariant<unsigned_int,TValueOrError<unsigned_int,EPropertyBagResult>::FWrapErrorType,TValueOrError<unsigned_int,EPropertyBagResult>::FEmptyType>
            )param_1;
  }
  *(undefined4 *)&(param_1->ValueTypeObject).field0_0x0 = (undefined4)local_res20;
  *(undefined1 *)((longlong)&(param_1->ValueTypeObject).field0_0x0 + 4) = 0;
  return (TValueOrError<unsigned_int,EPropertyBagResult>)
         (TVariant<unsigned_int,TValueOrError<unsigned_int,EPropertyBagResult>::FWrapErrorType,TValueOrError<unsigned_int,EPropertyBagResult>::FEmptyType>
          )param_1;
}

// GetValueUInt32 @ 141f8ae60

TValueOrError<unsigned_int,EPropertyBagResult> __thiscall
FInstancedPropertyBag::GetValueUInt32(FInstancedPropertyBag *this,FName param_1)

{
  uchar *puVar1;
  EPropertyBagResult EVar2;
  FPropertyBagPropertyDesc *pFVar3;
  uchar *puVar4;
  FName in_R8;
  ulong64 local_res20;
  
  pFVar3 = FindPropertyDescByName(this,in_R8);
  puVar4 = (uchar *)0x0;
  local_res20 = 0;
  if (((pFVar3 != (FPropertyBagPropertyDesc *)0x0) &&
      (puVar1 = (this->Value).StructMemory, puVar1 != (uchar *)0x0)) &&
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0)) {
    puVar4 = puVar1 + pFVar3->CachedProperty->Offset_Internal;
  }
  EVar2 = UE::StructUtils::Private::GetPropertyAsUInt64(pFVar3,puVar4,&local_res20);
  if (EVar2 != Success) {
    *(EPropertyBagResult *)param_1 = EVar2;
    *(undefined1 *)((longlong)param_1 + 4) = 1;
    return (TValueOrError<unsigned_int,EPropertyBagResult>)param_1;
  }
  *(undefined4 *)param_1 = (undefined4)local_res20;
  *(undefined1 *)((longlong)param_1 + 4) = 0;
  return (TValueOrError<unsigned_int,EPropertyBagResult>)param_1;
}

// GetValueUInt64 @ 141f8af70

TValueOrError<unsigned___int64,EPropertyBagResult> * __thiscall
FInstancedPropertyBag::GetValueUInt64
          (FInstancedPropertyBag *this,
          TValueOrError<unsigned___int64,EPropertyBagResult> *__return_storage_ptr__,
          FPropertyBagPropertyDesc *param_1)

{
  uchar *puVar1;
  bool bVar2;
  EPropertyBagResult EVar3;
  uchar *puVar4;
  ulong64 local_res20;
  
  bVar2 = OwnsPropertyDesc(this,param_1);
  if (!bVar2) {
    *(undefined1 *)&(__return_storage_ptr__->Variant)._padding_ = 3;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    return __return_storage_ptr__;
  }
  puVar4 = (uchar *)0x0;
  local_res20 = 0;
  if (((param_1 != (FPropertyBagPropertyDesc *)0x0) &&
      (puVar1 = (this->Value).StructMemory, puVar1 != (uchar *)0x0)) &&
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0)) {
    puVar4 = puVar1 + param_1->CachedProperty->Offset_Internal;
  }
  EVar3 = UE::StructUtils::Private::GetPropertyAsUInt64(param_1,puVar4,&local_res20);
  if (EVar3 != Success) {
    *(EPropertyBagResult *)&(__return_storage_ptr__->Variant)._padding_ = EVar3;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Variant)._padding_ = local_res20;
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// GetValueUInt64 @ 141f8b030

TValueOrError<unsigned___int64,EPropertyBagResult> * __thiscall
FInstancedPropertyBag::GetValueUInt64
          (FInstancedPropertyBag *this,
          TValueOrError<unsigned___int64,EPropertyBagResult> *__return_storage_ptr__,FName param_1)

{
  uchar *puVar1;
  EPropertyBagResult EVar2;
  FPropertyBagPropertyDesc *pFVar3;
  uchar *puVar4;
  ulong64 local_res20;
  
  pFVar3 = FindPropertyDescByName(this,param_1);
  puVar4 = (uchar *)0x0;
  local_res20 = 0;
  if (((pFVar3 != (FPropertyBagPropertyDesc *)0x0) &&
      (puVar1 = (this->Value).StructMemory, puVar1 != (uchar *)0x0)) &&
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0)) {
    puVar4 = puVar1 + pFVar3->CachedProperty->Offset_Internal;
  }
  EVar2 = UE::StructUtils::Private::GetPropertyAsUInt64(pFVar3,puVar4,&local_res20);
  if (EVar2 != Success) {
    *(EPropertyBagResult *)&(__return_storage_ptr__->Variant)._padding_ = EVar2;
    (__return_storage_ptr__->Variant).TypeIndex = '\x01';
    return __return_storage_ptr__;
  }
  (__return_storage_ptr__->Variant)._padding_ = local_res20;
  (__return_storage_ptr__->Variant).TypeIndex = '\0';
  return __return_storage_ptr__;
}

// HasSameLayout @ 141f8b6c0

bool __thiscall
FInstancedPropertyBag::HasSameLayout(FInstancedPropertyBag *this,FInstancedPropertyBag *param_1)

{
  int iVar1;
  bool bVar2;
  UClass *pUVar3;
  UScriptStruct *pUVar4;
  UScriptStruct *pUVar5;
  
  if (((this->Value).StructMemory == (uchar *)0x0) ||
     (pUVar5 = (this->Value).ScriptStruct.field0_0x0.DebugPtr, pUVar5 == (UScriptStruct *)0x0)) {
LAB_141f8b6ff:
    pUVar5 = (UScriptStruct *)0x0;
  }
  else {
    pUVar3 = UPropertyBag::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((*(int *)(pUVar5->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar5->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar3->_padding_)) goto LAB_141f8b6ff;
  }
  if (((param_1->Value).StructMemory != (uchar *)0x0) &&
     (pUVar4 = (param_1->Value).ScriptStruct.field0_0x0.DebugPtr, pUVar4 != (UScriptStruct *)0x0)) {
    pUVar3 = UPropertyBag::StaticClass();
    iVar1 = (int)pUVar3->_padding_;
    if ((iVar1 <= *(int *)(pUVar4->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar4->_padding_ + 0x30) + (longlong)iVar1 * 8)
        == &pUVar3->_padding_)) goto LAB_141f8b735;
  }
  pUVar4 = (UScriptStruct *)0x0;
LAB_141f8b735:
  bVar2 = FStructUtils::TheSameLayout((UStruct *)pUVar5,(UStruct *)pUVar4,false);
  return bVar2;
}

// Identical @ 141f8bf90

bool __thiscall
FInstancedPropertyBag::Identical
          (FInstancedPropertyBag *this,FInstancedPropertyBag *param_1,uint param_2)

{
  bool bVar1;
  
  if (param_1 != (FInstancedPropertyBag *)0x0) {
    bVar1 = FInstancedStruct::Identical(&this->Value,&param_1->Value,param_2);
    if (bVar1) {
      return true;
    }
  }
  return false;
}

// InitializeFromBagStruct @ 141f8ddd0

void __thiscall
FInstancedPropertyBag::InitializeFromBagStruct(FInstancedPropertyBag *this,UPropertyBag *param_1)

{
  uchar **ppuVar1;
  UPropertyBag *this_00;
  UScriptStruct *pUVar2;
  uchar *puVar3;
  uint uVar4;
  uint uVar5;
  
  if ((param_1 != (UPropertyBag *)0x0) &&
     (this_00 = (UPropertyBag *)(this->Value).ScriptStruct.field0_0x0.DebugPtr, param_1 == this_00))
  {
    UScriptStruct::ClearScriptStruct((UScriptStruct *)this_00,(this->Value).StructMemory,1);
    return;
  }
  puVar3 = (this->Value).StructMemory;
  if (puVar3 != (uchar *)0x0) {
    pUVar2 = (this->Value).ScriptStruct.field0_0x0.DebugPtr;
    if ((pUVar2 != (UScriptStruct *)0x0) && ((pUVar2->_padding_ & 0x40018000) == 0)) {
      pUVar2 = (this->Value).ScriptStruct.field0_0x0.DebugPtr;
      (**(code **)(pUVar2->_padding_ + 0x300))(pUVar2,(this->Value).StructMemory,1);
    }
    FMemory::Free(puVar3);
  }
  ppuVar1 = &(this->Value).StructMemory;
  *ppuVar1 = (uchar *)0x0;
  (this->Value).ScriptStruct.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  if (param_1 != (UPropertyBag *)0x0) {
    uVar5 = (uint)*(short *)((longlong)&param_1->_padding_ + 4);
    uVar4 = (int)param_1->_padding_ + -1 + uVar5 & -uVar5;
    if ((int)uVar4 < 1) {
      uVar4 = 1;
    }
    puVar3 = FMemory::Malloc((longlong)(int)uVar4,uVar5);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (this->Value).ScriptStruct.field0_0x0.DebugPtr = (UScriptStruct *)param_1;
    *ppuVar1 = puVar3;
    (**(code **)(param_1->_padding_ + 0x2f8))(param_1,puVar3,1);
  }
  return;
}

// IsPropertyNameValid @ 141f90310

bool __cdecl FInstancedPropertyBag::IsPropertyNameValid(FString *param_1)

{
  bool bVar1;
  bool bVar2;
  FString local_18;
  
  bVar2 = false;
  if (1 < (param_1->Data).ArrayNum) {
    ::FString::FString(&local_18,L"\"\'/.:&!?~\\\n\r\t@#(){}[]<>=;^%$`");
    bVar2 = true;
    bVar1 = ::FName::IsValidXName(param_1,&local_18,(FText *)0x0,(FText *)0x0);
    if (bVar1) {
      bVar1 = true;
      goto LAB_141f9035e;
    }
  }
  bVar1 = false;
LAB_141f9035e:
  if ((bVar2) && (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// IsPropertyNameValid @ 141f90390

bool __cdecl FInstancedPropertyBag::IsPropertyNameValid(FName param_1)

{
  bool bVar1;
  FString *pFVar2;
  bool bVar3;
  FName local_res8;
  undefined4 local_res10;
  FString local_28;
  FString local_18;
  
  bVar3 = false;
  local_res10 = 0;
  local_res8 = param_1;
  pFVar2 = ::FName::ToString(&local_res8,&local_18);
  if (1 < (pFVar2->Data).ArrayNum) {
    ::FString::FString(&local_28,L"\"\'/.:&!?~\\\n\r\t@#(){}[]<>=;^%$`");
    bVar3 = true;
    bVar1 = ::FName::IsValidXName(pFVar2,&local_28,(FText *)0x0,(FText *)0x0);
    if (bVar1) {
      bVar1 = true;
      goto LAB_141f903f2;
    }
  }
  bVar1 = false;
LAB_141f903f2:
  if ((bVar3) && (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
    FMemory::Free(local_28.Data.AllocatorInstance.Data);
  }
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return bVar1;
}

// MigrateToNewBagInstance @ 141f93740

void __thiscall
FInstancedPropertyBag::MigrateToNewBagInstance
          (FInstancedPropertyBag *this,FInstancedPropertyBag *param_1)

{
  TObjectPtr<UScriptStruct_const_>_u_0 TVar1;
  undefined1 local_res8 [8];
  TObjectPtr<UScriptStruct_const_>_u_0 local_48;
  TObjectPtr<UScriptStruct_const_>_u_0 TStack_40;
  code *local_38;
  undefined1 *local_30;
  TObjectPtr<UScriptStruct_const_>_u_0 local_28;
  uchar *local_20;
  TObjectPtr<UScriptStruct_const_>_u_0 local_18;
  TObjectPtr<UScriptStruct_const_>_u_0 TStack_10;
  
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&local_48.ObjectPtr,&param_1->Value);
  local_30 = local_res8;
  local_18.DebugPtr = local_48.DebugPtr;
  TStack_10.DebugPtr = TStack_40.DebugPtr;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`UE::StructUtils::Private::CopyMatchingValuesByID'::__l2::<lambda_1>,FPropertyBagPropertyDesc_const_*,TNotNull<UPropertyBag_const_*>,FPropertyBagPropertyDesc_const_&>
             ::Call;
  local_28 = (this->Value).ScriptStruct.field0_0x0;
  local_20 = (this->Value).StructMemory;
  UE::StructUtils::Private::CopyMatchingValues
            ((FConstStructView *)&local_28.ObjectPtr,(FStructView *)&local_18.ObjectPtr,
             (TFunctionRef<FPropertyBagPropertyDesc_const_*___cdecl(TNotNull<UPropertyBag_const_*>,FPropertyBagPropertyDesc_const_&)>
              *)&local_38);
  TVar1 = TStack_40;
  if ((TObjectPtr<UScriptStruct_const_>_u_0 *)this != &local_48) {
    FInstancedStruct::Reset(&this->Value);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_48.DebugPtr != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_48.DebugPtr);
    }
    (this->Value).ScriptStruct.field0_0x0.DebugPtr = (UScriptStruct *)local_48;
    (this->Value).StructMemory = (uchar *)TStack_40;
    local_48.DebugPtr = (UScriptStruct *)0x0;
    TVar1.DebugPtr = (UScriptStruct *)0x0;
  }
  if (TVar1.DebugPtr != (UScriptStruct *)0x0) {
    if ((local_48.DebugPtr != (UScriptStruct *)0x0) &&
       (((local_48.DebugPtr)->_padding_ & 0x40018000) == 0)) {
      (**(code **)((local_48.DebugPtr)->_padding_ + 0x300))(local_48.DebugPtr,TVar1.DebugPtr,1);
    }
    FMemory::Free(TVar1.DebugPtr);
  }
  return;
}

// MigrateToNewBagInstanceWithOverrides @ 141f93830

void __thiscall
FInstancedPropertyBag::MigrateToNewBagInstanceWithOverrides
          (FInstancedPropertyBag *this,FInstancedPropertyBag *param_1,
          TArrayView<FGuid_const_,int> *param_2)

{
  TObjectPtr<UScriptStruct_const_>_u_0 TVar1;
  FGuid **local_res8;
  TObjectPtr<UScriptStruct_const_>_u_0 local_58;
  TObjectPtr<UScriptStruct_const_>_u_0 TStack_50;
  code *local_48;
  FGuid ***local_40;
  TObjectPtr<UScriptStruct_const_>_u_0 local_38;
  uchar *local_30;
  FGuid *local_28;
  undefined8 uStack_20;
  TObjectPtr<UScriptStruct_const_>_u_0 local_18;
  TObjectPtr<UScriptStruct_const_>_u_0 TStack_10;
  
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)&local_58.ObjectPtr,&param_1->Value);
  local_28 = param_2->DataPtr;
  uStack_20 = *(undefined8 *)&param_2->ArrayNum;
  local_res8 = &local_28;
  local_40 = &local_res8;
  local_18.DebugPtr = local_58.DebugPtr;
  TStack_10.DebugPtr = TStack_50.DebugPtr;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`UE::StructUtils::Private::CopyMatchingValuesByIDWithOverrides'::__l2::<lambda_1>,FPropertyBagPropertyDesc_const_*,TNotNull<UPropertyBag_const_*>,FPropertyBagPropertyDesc_const_&>
             ::Call;
  local_38 = (this->Value).ScriptStruct.field0_0x0;
  local_30 = (this->Value).StructMemory;
  UE::StructUtils::Private::CopyMatchingValues
            ((FConstStructView *)&local_38.ObjectPtr,(FStructView *)&local_18.ObjectPtr,
             (TFunctionRef<FPropertyBagPropertyDesc_const_*___cdecl(TNotNull<UPropertyBag_const_*>,FPropertyBagPropertyDesc_const_&)>
              *)&local_48);
  TVar1 = TStack_50;
  if ((TObjectPtr<UScriptStruct_const_>_u_0 *)this != &local_58) {
    FInstancedStruct::Reset(&this->Value);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       (local_58.DebugPtr != (UScriptStruct *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)local_58.DebugPtr);
    }
    (this->Value).ScriptStruct.field0_0x0.DebugPtr = (UScriptStruct *)local_58;
    (this->Value).StructMemory = (uchar *)TStack_50;
    local_58.DebugPtr = (UScriptStruct *)0x0;
    TVar1.DebugPtr = (UScriptStruct *)0x0;
  }
  if (TVar1.DebugPtr != (UScriptStruct *)0x0) {
    if ((local_58.DebugPtr != (UScriptStruct *)0x0) &&
       (((local_58.DebugPtr)->_padding_ & 0x40018000) == 0)) {
      (**(code **)((local_58.DebugPtr)->_padding_ + 0x300))(local_58.DebugPtr,TVar1.DebugPtr,1);
    }
    FMemory::Free(TVar1.DebugPtr);
  }
  return;
}

// MigrateToNewBagStruct @ 141f93940

void __thiscall
FInstancedPropertyBag::MigrateToNewBagStruct(FInstancedPropertyBag *this,UPropertyBag *param_1)

{
  TObjectPtr<UScriptStruct_const_>_u_0 TVar1;
  uint uVar2;
  TObjectPtr<UScriptStruct_const_>_u_0 TVar3;
  uint uVar4;
  undefined1 local_res8 [8];
  code *local_58;
  undefined1 *local_50;
  TObjectPtr<UScriptStruct_const_>_u_0 local_48;
  TObjectPtr<UScriptStruct_const_>_u_0 local_40;
  TObjectPtr<UScriptStruct_const_>_u_0 local_38;
  uchar *local_30;
  FInstancedPropertyBag local_28;
  
  TVar1.DebugPtr = (UScriptStruct *)0x0;
  TVar3.DebugPtr = TVar1.DebugPtr;
  if (param_1 != (UPropertyBag *)0x0) {
    uVar2 = (uint)*(short *)((longlong)&param_1->_padding_ + 4);
    uVar4 = (int)param_1->_padding_ + -1 + uVar2 & -uVar2;
    if ((int)uVar4 < 1) {
      uVar4 = 1;
    }
    TVar1.DebugPtr = FMemory::Malloc((longlong)(int)uVar4,uVar2);
    if (UE::GC::GIsIncrementalReachabilityPending != false) {
      UE::GC::MarkAsReachable((UObject *)param_1);
    }
    (**(code **)(param_1->_padding_ + 0x2f8))(param_1,TVar1.DebugPtr,1);
    TVar3 = (TObjectPtr<UScriptStruct_const_>_u_0)param_1;
  }
  local_50 = local_res8;
  local_38 = (this->Value).ScriptStruct.field0_0x0;
  local_30 = (this->Value).StructMemory;
  local_58 = UE::Core::Private::Function::
             TFunctionRefCaller<`UE::StructUtils::Private::CopyMatchingValuesByID'::__l2::<lambda_1>,FPropertyBagPropertyDesc_const_*,TNotNull<UPropertyBag_const_*>,FPropertyBagPropertyDesc_const_&>
             ::Call;
  local_48 = TVar3;
  local_40 = TVar1;
  UE::StructUtils::Private::CopyMatchingValues
            ((FConstStructView *)&local_38.ObjectPtr,(FStructView *)&local_48.ObjectPtr,
             (TFunctionRef<FPropertyBagPropertyDesc_const_*___cdecl(TNotNull<UPropertyBag_const_*>,FPropertyBagPropertyDesc_const_&)>
              *)&local_58);
  if (this != &local_28) {
    FInstancedStruct::Reset(&this->Value);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
       ((UPropertyBag *)TVar3.DebugPtr != (UPropertyBag *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)TVar3.DebugPtr);
    }
    (this->Value).ScriptStruct.field0_0x0.DebugPtr = (UScriptStruct *)TVar3;
    (this->Value).StructMemory = (uchar *)TVar1;
    TVar3.DebugPtr = (UScriptStruct *)0x0;
    TVar1.DebugPtr = (UScriptStruct *)0x0;
  }
  if ((UPropertyBag *)TVar1.DebugPtr != (UPropertyBag *)0x0) {
    if (((UPropertyBag *)TVar3.DebugPtr != (UPropertyBag *)0x0) &&
       (((TVar3.DebugPtr)->_padding_ & 0x40018000) == 0)) {
      (**(code **)((TVar3.DebugPtr)->_padding_ + 0x300))(TVar3.DebugPtr,TVar1.DebugPtr,1);
    }
    FMemory::Free(TVar1.DebugPtr);
  }
  return;
}

// OwnsPropertyDesc @ 141f94410

bool __thiscall
FInstancedPropertyBag::OwnsPropertyDesc
          (FInstancedPropertyBag *this,FPropertyBagPropertyDesc *param_1)

{
  int iVar1;
  UClass *pUVar2;
  UScriptStruct *pUVar3;
  
  if (((this->Value).StructMemory != (uchar *)0x0) &&
     (pUVar3 = (this->Value).ScriptStruct.field0_0x0.DebugPtr, pUVar3 != (UScriptStruct *)0x0)) {
    pUVar2 = UPropertyBag::StaticClass();
    iVar1 = (int)pUVar2->_padding_;
    if ((*(int *)(pUVar3->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar3->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar2->_padding_)) {
      pUVar3 = (UScriptStruct *)0x0;
    }
    if (((pUVar3 != (UScriptStruct *)0x0) &&
        ((FPropertyBagPropertyDesc *)pUVar3[1]._padding_ <= param_1)) &&
       (param_1 < (FPropertyBagPropertyDesc *)pUVar3[1]._padding_ + (int)pUVar3[1]._padding_)) {
      return true;
    }
  }
  return false;
}

// RemovePropertiesByName @ 141f98700

/* WARNING: Enum "EPropertyBagAlterationResult": Some values do not have unique names */

EPropertyBagAlterationResult __thiscall
FInstancedPropertyBag::RemovePropertiesByName
          (FInstancedPropertyBag *this,TArrayView<FName_const_,int> *param_1)

{
  FName *pFVar1;
  FPropertyBagPropertyDesc *pFVar2;
  FName FVar3;
  code *pcVar4;
  bool bVar5;
  EPropertyBagAlterationResult EVar6;
  uint uVar7;
  int iVar8;
  UClass *pUVar9;
  UPropertyBag *pUVar10;
  UScriptStruct *pUVar11;
  uint uVar12;
  FName *pFVar13;
  longlong lVar14;
  ForAnyElementType local_58;
  undefined8 local_50;
  FPropertyBagPropertyDesc *local_48;
  int iStack_40;
  undefined4 uStack_3c;
  TArrayView<FPropertyBagPropertyDesc_const_,int> local_38;
  
  local_50._0_4_ = 0;
  local_58.Data = (FScriptContainerElement *)0x0;
  local_50 = 0;
  if (((this->Value).StructMemory != (uchar *)0x0) &&
     (pUVar11 = (this->Value).ScriptStruct.field0_0x0.DebugPtr, pUVar11 != (UScriptStruct *)0x0)) {
    pUVar9 = UPropertyBag::StaticClass();
    iVar8 = (int)pUVar9->_padding_;
    if ((*(int *)(pUVar11->_padding_ + 0x38) < iVar8) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar11->_padding_ + 0x30) + (longlong)iVar8 * 8)
        != &pUVar9->_padding_)) {
      pUVar11 = (UScriptStruct *)0x0;
    }
    if (pUVar11 != (UScriptStruct *)0x0) {
      iVar8 = (int)pUVar11[1]._padding_;
      pFVar2 = (FPropertyBagPropertyDesc *)pUVar11[1]._padding_;
      if ((iVar8 < 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar5)) {
        pcVar4 = (code *)swi(3);
        EVar6 = (*pcVar4)();
        return EVar6;
      }
      local_50 = CONCAT44(local_50._4_4_,iVar8);
      if ((iVar8 == 0) && (local_50._4_4_ == 0)) {
        local_50 = 0;
        local_50._0_4_ = 0;
        goto LAB_141f98803;
      }
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x40,8,iVar8,local_50._4_4_,&local_58,iVar8,(int *)((longlong)&local_50 + 4));
      ConstructItems<FPropertyBagPropertyDesc,FPropertyBagPropertyDesc,int>
                (local_58.Data,pFVar2,iVar8);
    }
  }
LAB_141f98803:
  pFVar13 = param_1->DataPtr;
  pFVar1 = pFVar13 + param_1->ArrayNum;
  iStack_40 = (int)local_50;
  for (; pFVar13 != pFVar1; pFVar13 = pFVar13 + 1) {
    FVar3 = *pFVar13;
    uVar12 = 0;
    if (0 < iStack_40) {
      lVar14 = 0;
      do {
        uVar7 = 0;
        if ((int)uVar12 < iStack_40) {
          uVar7 = ~uVar12 >> 0x1f;
        }
        if (uVar7 == 0) {
          bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar5) {
            pcVar4 = (code *)swi(3);
            EVar6 = (*pcVar4)();
            return EVar6;
          }
          iStack_40 = (int)local_50;
        }
        if (*(FName *)(local_58.Data + lVar14 + 0x18) == FVar3) {
          uVar7 = 0;
          if ((int)uVar12 < iStack_40) {
            uVar7 = ~uVar12 >> 0x1f;
          }
          if (uVar7 == 0) {
            bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
            ;
            if (bVar5) {
              pcVar4 = (code *)swi(3);
              EVar6 = (*pcVar4)();
              return EVar6;
            }
            iStack_40 = (int)local_50;
          }
          iVar8 = (iStack_40 - uVar12) + -1;
          if (iVar8 != 0) {
            memmove(local_58.Data + (longlong)(int)uVar12 * 0x40,
                    local_58.Data + (longlong)(int)uVar12 * 0x40 + 0x40,(longlong)iVar8 << 6);
            iStack_40 = (int)local_50;
          }
          local_50 = CONCAT44(local_50._4_4_,iStack_40 + -1);
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,8,&local_58,iStack_40 + -1,(int *)((longlong)&local_50 + 4));
          uVar12 = uVar12 - 1;
          lVar14 = lVar14 + -0x40;
          iStack_40 = (int)local_50;
        }
        uVar12 = uVar12 + 1;
        lVar14 = lVar14 + 0x40;
      } while ((int)uVar12 < iStack_40);
    }
  }
  local_48 = (FPropertyBagPropertyDesc *)local_58.Data;
  if ((iStack_40 < 0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    EVar6 = (*pcVar4)();
    return EVar6;
  }
  local_38._12_4_ = uStack_3c;
  local_38.ArrayNum = iStack_40;
  local_38.DataPtr = local_48;
  pUVar10 = UPropertyBag::GetOrCreateFromDescs(&local_38,(wchar_t *)0x0);
  MigrateToNewBagStruct(this,pUVar10);
  if (local_58.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_58.Data);
  }
  return NoOperation;
}

// RemovePropertyByName @ 141f98a10

/* WARNING: Enum "EPropertyBagAlterationResult": Some values do not have unique names */

EPropertyBagAlterationResult __thiscall
FInstancedPropertyBag::RemovePropertyByName(FInstancedPropertyBag *this,FName param_1)

{
  EPropertyBagAlterationResult EVar1;
  FName local_res10 [3];
  TArrayView<FName_const_,int> local_18;
  
  local_18.ArrayNum = 1;
  local_18.DataPtr = local_res10;
  local_res10[0] = param_1;
  EVar1 = RemovePropertiesByName(this,&local_18);
  return EVar1;
}

// RenameProperty @ 141f98d50

/* WARNING: Enum "EPropertyBagAlterationResult": Some values do not have unique names */

EPropertyBagAlterationResult __thiscall
FInstancedPropertyBag::RenameProperty(FInstancedPropertyBag *this,FName param_1,FName param_2)

{
  int iVar1;
  FPropertyBagPropertyDesc *pFVar2;
  code *pcVar3;
  bool bVar4;
  EPropertyBagAlterationResult EVar5;
  UClass *pUVar6;
  UPropertyBag *pUVar7;
  UScriptStruct *pUVar8;
  TArray<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_> local_48;
  FPropertyBagPropertyDesc *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  TArrayView<FPropertyBagPropertyDesc_const_,int> local_28;
  
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  if (((this->Value).StructMemory != (uchar *)0x0) &&
     (pUVar8 = (this->Value).ScriptStruct.field0_0x0.DebugPtr, pUVar8 != (UScriptStruct *)0x0)) {
    pUVar6 = UPropertyBag::StaticClass();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(pUVar8->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar6->_padding_)) {
      pUVar8 = (UScriptStruct *)0x0;
    }
    if (pUVar8 != (UScriptStruct *)0x0) {
      pFVar2 = (FPropertyBagPropertyDesc *)pUVar8[1]._padding_;
      iVar1 = (int)pUVar8[1]._padding_;
      if ((iVar1 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar4)) {
        pcVar3 = (code *)swi(3);
        EVar5 = (*pcVar3)();
        return EVar5;
      }
      local_48.ArrayNum = iVar1;
      if ((iVar1 == 0) && (local_48.ArrayMax == 0)) {
        local_48.ArrayNum = 0;
        local_48.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,iVar1,local_48.ArrayMax,&local_48.AllocatorInstance,iVar1,
                   &local_48.ArrayMax);
        ConstructItems<FPropertyBagPropertyDesc,FPropertyBagPropertyDesc,int>
                  (local_48.AllocatorInstance.Data,pFVar2,iVar1);
      }
    }
  }
  EVar5 = UE::StructUtils::Private::RenameProperty(&local_48,param_1,param_2);
  if (EVar5 == NoOperation) {
    iVar1 = local_48.ArrayNum;
    local_38 = (FPropertyBagPropertyDesc *)local_48.AllocatorInstance.Data;
    if ((local_48.ArrayNum < 0) &&
       (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L""), bVar4)) {
      pcVar3 = (code *)swi(3);
      EVar5 = (*pcVar3)();
      return EVar5;
    }
    iStack_30 = iVar1;
    local_28._12_4_ = uStack_2c;
    local_28.ArrayNum = iVar1;
    local_28.DataPtr = local_38;
    pUVar7 = UPropertyBag::GetOrCreateFromDescs(&local_28,(wchar_t *)0x0);
    MigrateToNewBagStruct(this,pUVar7);
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return EVar5;
}

// ReorderProperty @ 141f991b0

/* WARNING: Enum "EPropertyBagAlterationResult": Some values do not have unique names */

EPropertyBagAlterationResult __thiscall
FInstancedPropertyBag::ReorderProperty
          (FInstancedPropertyBag *this,int param_1,int param_2,bool param_3)

{
  int iVar1;
  FPropertyBagPropertyDesc *pFVar2;
  code *pcVar3;
  bool bVar4;
  EPropertyBagAlterationResult EVar5;
  UClass *pUVar6;
  UPropertyBag *pUVar7;
  UScriptStruct *pUVar8;
  TArray<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_> local_48;
  FPropertyBagPropertyDesc *local_38;
  int iStack_30;
  undefined4 uStack_2c;
  TArrayView<FPropertyBagPropertyDesc_const_,int> local_28;
  
  local_48.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_48.ArrayNum = 0;
  local_48.ArrayMax = 0;
  if (((this->Value).StructMemory != (uchar *)0x0) &&
     (pUVar8 = (this->Value).ScriptStruct.field0_0x0.DebugPtr, pUVar8 != (UScriptStruct *)0x0)) {
    pUVar6 = UPropertyBag::StaticClass();
    iVar1 = (int)pUVar6->_padding_;
    if ((*(int *)(pUVar8->_padding_ + 0x38) < iVar1) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar8->_padding_ + 0x30) + (longlong)iVar1 * 8)
        != &pUVar6->_padding_)) {
      pUVar8 = (UScriptStruct *)0x0;
    }
    if (pUVar8 != (UScriptStruct *)0x0) {
      pFVar2 = (FPropertyBagPropertyDesc *)pUVar8[1]._padding_;
      iVar1 = (int)pUVar8[1]._padding_;
      if (iVar1 < 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("InCount >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                           ,0xeb,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          EVar5 = (*pcVar3)();
          return EVar5;
        }
      }
      local_48.ArrayNum = iVar1;
      if ((iVar1 == 0) && (local_48.ArrayMax == 0)) {
        local_48.ArrayNum = 0;
        local_48.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x40,8,iVar1,local_48.ArrayMax,&local_48.AllocatorInstance,iVar1,
                   &local_48.ArrayMax);
        ConstructItems<FPropertyBagPropertyDesc,FPropertyBagPropertyDesc,int>
                  (local_48.AllocatorInstance.Data,pFVar2,iVar1);
      }
    }
  }
  EVar5 = UE::StructUtils::Private::ReorderProperty(&local_48,param_1,param_2,param_3);
  if (EVar5 == NoOperation) {
    iVar1 = local_48.ArrayNum;
    local_38 = (FPropertyBagPropertyDesc *)local_48.AllocatorInstance.Data;
    if (local_48.ArrayNum < 0) {
      bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        EVar5 = (*pcVar3)();
        return EVar5;
      }
    }
    iStack_30 = iVar1;
    local_28._12_4_ = uStack_2c;
    local_28.ArrayNum = iVar1;
    local_28.DataPtr = local_38;
    pUVar7 = UPropertyBag::GetOrCreateFromDescs(&local_28,(wchar_t *)0x0);
    MigrateToNewBagStruct(this,pUVar7);
  }
  if (local_48.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_48.AllocatorInstance.Data);
  }
  return EVar5;
}

// ReorderProperty @ 141f993a0

/* WARNING: Enum "EPropertyBagAlterationResult": Some values do not have unique names */

EPropertyBagAlterationResult __thiscall
FInstancedPropertyBag::ReorderProperty
          (FInstancedPropertyBag *this,FName param_1,FName param_2,bool param_3)

{
  EPropertyBagAlterationResult EVar1;
  UClass *pUVar2;
  longlong lVar3;
  longlong lVar4;
  int iVar5;
  int iVar6;
  UScriptStruct *pUVar7;
  longlong lVar8;
  int iVar9;
  
  iVar6 = -1;
  iVar5 = -1;
  iVar9 = iVar5;
  if (((this->Value).StructMemory != (uchar *)0x0) &&
     (pUVar7 = (this->Value).ScriptStruct.field0_0x0.DebugPtr, pUVar7 != (UScriptStruct *)0x0)) {
    pUVar2 = UPropertyBag::StaticClass();
    iVar9 = (int)pUVar2->_padding_;
    if ((*(int *)(pUVar7->_padding_ + 0x38) < iVar9) ||
       ((longlong *)*(undefined1 **)(*(longlong *)(pUVar7->_padding_ + 0x30) + (longlong)iVar9 * 8)
        != &pUVar2->_padding_)) {
      pUVar7 = (UScriptStruct *)0x0;
    }
    iVar9 = -1;
    if (pUVar7 != (UScriptStruct *)0x0) {
      lVar3 = pUVar7[1]._padding_;
      lVar8 = (longlong)(int)pUVar7[1]._padding_ * 0x40 + lVar3;
      lVar4 = lVar3;
      if (lVar3 != lVar8) {
        do {
          if (*(FName *)(lVar4 + 0x18) == param_1) {
            iVar9 = iVar5;
            if (lVar4 != 0) {
              iVar9 = *(int *)(lVar4 + 0x38);
              goto LAB_141f99445;
            }
            break;
          }
          lVar4 = lVar4 + 0x40;
          iVar9 = iVar5;
        } while (lVar4 != lVar8);
        do {
          if (lVar3 == lVar8) break;
LAB_141f99445:
          if (*(FName *)(lVar3 + 0x18) == param_2) {
            if (lVar3 != 0) {
              iVar6 = *(int *)(lVar3 + 0x38);
            }
            break;
          }
          lVar3 = lVar3 + 0x40;
        } while( true );
      }
    }
  }
  EVar1 = ReorderProperty(this,iVar9,iVar6,param_3);
  return EVar1;
}

// ReplaceAllPropertiesAndValues @ 141f99720

EPropertyBagResult __thiscall
FInstancedPropertyBag::ReplaceAllPropertiesAndValues
          (FInstancedPropertyBag *this,TArrayView<FPropertyBagPropertyDesc_const_,int> *param_1,
          TArrayView<TArrayView<unsigned_char_const_,int>_const_,int> *param_2)

{
  uchar **ppuVar1;
  UPropertyBag *this_00;
  UScriptStruct *pUVar2;
  FScriptContainerElement *pFVar3;
  longlong *plVar4;
  code *pcVar5;
  bool bVar6;
  EPropertyBagResult EVar7;
  UPropertyBag *pUVar8;
  uchar *puVar9;
  uint uVar10;
  uint uVar11;
  uchar *_Dst;
  longlong lVar12;
  longlong lVar13;
  TArrayView<FPropertyBagPropertyDesc_const_,int> local_38;
  
  if (param_1->ArrayNum != param_2->ArrayNum) {
    return OutOfBounds;
  }
  FInstancedStruct::Reset(&this->Value);
  local_38.DataPtr = param_1->DataPtr;
  local_38.ArrayNum = param_1->ArrayNum;
  local_38._12_4_ = *(undefined4 *)&param_1->field_0xc;
  pUVar8 = UPropertyBag::GetOrCreateFromDescs(&local_38,(wchar_t *)0x0);
  if ((pUVar8 == (UPropertyBag *)0x0) ||
     (this_00 = (UPropertyBag *)(this->Value).ScriptStruct.field0_0x0.DebugPtr, pUVar8 != this_00))
  {
    puVar9 = (this->Value).StructMemory;
    ppuVar1 = &(this->Value).StructMemory;
    if (puVar9 != (uchar *)0x0) {
      pUVar2 = (this->Value).ScriptStruct.field0_0x0.DebugPtr;
      if ((pUVar2 != (UScriptStruct *)0x0) && ((pUVar2->_padding_ & 0x40018000) == 0)) {
        pUVar2 = (this->Value).ScriptStruct.field0_0x0.DebugPtr;
        (**(code **)(pUVar2->_padding_ + 0x300))(pUVar2,*ppuVar1,1);
      }
      FMemory::Free(puVar9);
    }
    *ppuVar1 = (uchar *)0x0;
    (this->Value).ScriptStruct.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
    if (pUVar8 != (UPropertyBag *)0x0) {
      uVar10 = (uint)*(short *)((longlong)&pUVar8->_padding_ + 4);
      uVar11 = (int)pUVar8->_padding_ + -1 + uVar10 & -uVar10;
      if ((int)uVar11 < 1) {
        uVar11 = 1;
      }
      puVar9 = FMemory::Malloc((longlong)(int)uVar11,uVar10);
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable((UObject *)pUVar8);
      }
      (this->Value).ScriptStruct.field0_0x0.DebugPtr = (UScriptStruct *)pUVar8;
      (this->Value).StructMemory = puVar9;
      (**(code **)(pUVar8->_padding_ + 0x2f8))(pUVar8,puVar9,1);
    }
  }
  else {
    UScriptStruct::ClearScriptStruct((UScriptStruct *)this_00,(this->Value).StructMemory,1);
  }
  uVar11 = 0;
  if (0 < (pUVar8->PropertyDescs).ArrayNum) {
    lVar12 = 0;
    lVar13 = 0;
    do {
      uVar10 = 0;
      if ((int)uVar11 < (pUVar8->PropertyDescs).ArrayNum) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        EVar7 = (*pcVar5)();
        return EVar7;
      }
      pFVar3 = (pUVar8->PropertyDescs).AllocatorInstance.Data;
      uVar10 = 0;
      if ((int)uVar11 < param_2->ArrayNum) {
        uVar10 = ~uVar11 >> 0x1f;
      }
      if ((uVar10 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0x14f,L"Array index out of bounds: %lld from an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        EVar7 = (*pcVar5)();
        return EVar7;
      }
      plVar4 = *(longlong **)(pFVar3 + lVar12 + 0x30);
      if (*(int *)((longlong)&param_2->DataPtr->ArrayNum + lVar13) !=
          *(int *)((longlong)plVar4 + 0x34) * (int)plVar4[6]) {
        return TypeMismatch;
      }
      _Dst = (this->Value).StructMemory + *(int *)((longlong)plVar4 + 0x44);
      puVar9 = *(uchar **)((longlong)&param_2->DataPtr->DataPtr + lVar13);
      if (_Dst != puVar9) {
        if ((*(uint *)(plVar4 + 7) >> 0x1e & 1) == 0) {
          (**(code **)(*plVar4 + 0xf0))(plVar4,_Dst,puVar9);
        }
        else {
          memcpy(_Dst,puVar9,(longlong)*(int *)((longlong)plVar4 + 0x34) * (longlong)(int)plVar4[6])
          ;
        }
      }
      uVar11 = uVar11 + 1;
      lVar13 = lVar13 + 0x10;
      lVar12 = lVar12 + 0x40;
    } while ((int)uVar11 < (pUVar8->PropertyDescs).ArrayNum);
  }
  return Success;
}

// SanitizePropertyName @ 141f9a850

FName __cdecl FInstancedPropertyBag::SanitizePropertyName(FString *param_1,wchar_t param_2)

{
  wchar_t _C;
  void *_Src;
  code *pcVar1;
  wchar_t wVar2;
  bool bVar3;
  int iVar4;
  FString *pFVar5;
  FName FVar6;
  FName *pFVar7;
  undefined6 in_register_00000012;
  wchar_t *pwVar8;
  longlong lVar9;
  wchar_t in_R8W;
  FName local_res10;
  wchar_t local_res18 [4];
  FString local_88;
  wchar_t *local_78;
  undefined8 local_70;
  FScriptContainerElement *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TStringView<wchar_t> local_58;
  TStringView<wchar_t> local_48;
  FString local_38;
  
  local_88.Data.ArrayNum = *(int *)((undefined8 *)CONCAT62(in_register_00000012,param_2) + 1);
  lVar9 = (longlong)local_88.Data.ArrayNum;
  if (local_88.Data.ArrayNum < 2) {
    ::FName::FName((FName *)param_1,"Property");
    return (FName)param_1;
  }
  _Src = *(void **)CONCAT62(in_register_00000012,param_2);
  local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_res18[0] = in_R8W;
  UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (2,2,local_88.Data.ArrayNum,0,(ForAnyElementType *)&local_88,local_88.Data.ArrayNum,
             &local_88.Data.ArrayMax);
  memcpy(local_88.Data.AllocatorInstance.Data,_Src,lVar9 * 2);
  pwVar8 = L" \"\',/.:|&!?~\\\n\r\t@#(){}[]<>=;^%$`+*";
  local_78 = L" \"\',/.:|&!?~\\\n\r\t@#(){}[]<>=;^%$`+*";
  local_70 = 0x22;
  pFVar5 = ::FString::FString(&local_38,1,local_res18);
  local_58.Size = 0x22;
  local_68 = (pFVar5->Data).AllocatorInstance.Data;
  iVar4 = (pFVar5->Data).ArrayNum;
  iStack_60 = iVar4 + -1;
  if (iVar4 == 0) {
    iStack_60 = 0;
  }
  local_48._12_4_ = uStack_5c;
  local_48.Size = iStack_60;
  local_58.DataPtr = L" \"\',/.:|&!?~\\\n\r\t@#(){}[]<>=;^%$`+*";
  local_48.DataPtr = (wchar_t *)local_68;
  iVar4 = UE::String::FindFirst(&local_58,&local_48,CaseSensitive);
  if (iVar4 == -1) {
    iVar4 = -1;
  }
  if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_38.Data.AllocatorInstance.Data);
  }
  if ((iVar4 != -1) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("!InvalidChars.Contains(FString(1, &ReplacementChar))",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\StructUtils\\PropertyBag.cpp"
                         ,0xd8c,L"Invalid replacement character."), bVar3)) {
    pcVar1 = (code *)swi(3);
    FVar6 = (FName)(*pcVar1)();
    return FVar6;
  }
  do {
    wVar2 = local_res18[0];
    _C = *pwVar8;
    iVar4 = iswalpha(_C);
    if (iVar4 == 0) {
      ::FString::ReplaceCharInlineCaseSensitive(&local_88,_C,wVar2);
    }
    else {
      ::FString::ReplaceCharInlineIgnoreCase(&local_88,_C,wVar2);
    }
    pwVar8 = pwVar8 + 1;
  } while (pwVar8 != L"");
  iVar4 = local_88.Data.ArrayNum + -1;
  if (local_88.Data.ArrayNum == 0) {
    iVar4 = 0;
  }
  pFVar7 = ::FName::FName(&local_res10,iVar4,(wchar_t *)local_88.Data.AllocatorInstance.Data,
                          FNAME_Add);
  (param_1->Data).AllocatorInstance.Data = (FScriptContainerElement *)*pFVar7;
  if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_88.Data.AllocatorInstance.Data);
  }
  return (FName)param_1;
}

// SanitizePropertyName @ 141f9aa60

FName __cdecl FInstancedPropertyBag::SanitizePropertyName(FName param_1,wchar_t param_2)

{
  FString *pFVar1;
  undefined6 in_register_00000012;
  FName local_res10 [3];
  FString local_18;
  
  local_res10[0]._2_6_ = in_register_00000012;
  local_res10[0].ComparisonIndex.Value._0_2_ = param_2;
  pFVar1 = ::FName::ToString(local_res10,&local_18);
  SanitizePropertyName((FString *)param_1,(wchar_t)pFVar1);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return param_1;
}

// Serialize @ 141f9adf0

/* WARNING: Enum "Type": Some values do not have unique names */

bool __thiscall FInstancedPropertyBag::Serialize(FInstancedPropertyBag *this,FArchive *param_1)

{
  undefined1 *puVar1;
  uint *puVar2;
  uchar **ppuVar3;
  longlong *plVar4;
  ulonglong *puVar5;
  UPropertyBag *this_00;
  longlong lVar6;
  FPropertyBagPropertyDesc *pFVar7;
  code *pcVar8;
  byte bVar9;
  undefined1 uVar10;
  int iVar11;
  UClass *pUVar12;
  UPropertyBag *this_01;
  uchar *puVar13;
  longlong lVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  uint uVar17;
  uint uVar18;
  UScriptStruct *pUVar19;
  ForAnyElementType FVar20;
  longlong lVar21;
  FScriptContainerElement *pFVar22;
  bool bVar23;
  char local_res8 [8];
  undefined1 local_res10 [8];
  uint local_res18 [2];
  uint local_res20 [2];
  uint local_98 [2];
  TArray<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_> local_90;
  TArray<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_> local_80;
  FPropertyBagPropertyDesc *local_68;
  int iStack_60;
  undefined4 uStack_5c;
  TArrayView<FPropertyBagPropertyDesc_const_,int> local_58;
  
  local_res8[0] = '\x01';
  (**(code **)(*(longlong *)param_1 + 0x230))(param_1,&FPropertyBagCustomVersion::GUID);
  iVar11 = FArchiveState::CustomVer((FArchiveState *)param_1,&FPropertyBagCustomVersion::GUID);
  if (iVar11 < 1) {
    plVar4 = *(longlong **)&param_1->field_0x8;
    if ((char *)plVar4[1] < (char *)*plVar4 + 1) {
      (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res8,1);
    }
    else {
      local_res8[0] = *(char *)*plVar4;
      *plVar4 = *plVar4 + 1;
    }
  }
  pUVar19 = (this->Value).ScriptStruct.field0_0x0.DebugPtr;
  if (pUVar19 == (UScriptStruct *)0x0) {
LAB_141f9ae9d:
    pUVar19 = (UScriptStruct *)0x0;
  }
  else {
    pUVar12 = UPropertyBag::StaticClass();
    iVar11 = (int)pUVar12->_padding_;
    if ((*(int *)(pUVar19->_padding_ + 0x38) < iVar11) ||
       ((longlong *)
        *(undefined1 **)(*(longlong *)(pUVar19->_padding_ + 0x30) + (longlong)iVar11 * 8) !=
        &pUVar12->_padding_)) goto LAB_141f9ae9d;
  }
  puVar5 = *(ulonglong **)&param_1->field_0x8;
  puVar1 = &param_1->field_0x28;
  bVar23 = pUVar19 != (UScriptStruct *)0x0;
  puVar2 = (uint *)*puVar5 + 1;
  if ((uint *)puVar5[1] < puVar2) {
    local_98[0] = 0;
    if ((*puVar1 & 1) == 0) {
      local_98[0] = (uint)(pUVar19 != (UScriptStruct *)0x0);
    }
    (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_98,4);
    if (1 < local_98[0]) {
      FArchiveState::SetError((FArchiveState *)param_1);
    }
    uVar17 = local_98[0];
    if ((*puVar1 & 1) == 0) goto LAB_141f9af0d;
  }
  else {
    uVar17 = *(uint *)*puVar5;
    *puVar5 = (ulonglong)puVar2;
  }
  bVar23 = uVar17 != 0;
LAB_141f9af0d:
  bVar9 = *puVar1 & 1;
  if (bVar23) {
    if (bVar9 == 0) {
      if (((*puVar1 & 4) != 0) || ((param_1->field_0x2b & 5) != 0)) {
        if ((pUVar19 == (UScriptStruct *)0x0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("BagStruct",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\StructUtils\\PropertyBag.cpp"
                                ,0xce6,L""), bVar23)) {
          pcVar8 = (code *)swi(3);
          uVar10 = (*pcVar8)();
          return (bool)uVar10;
        }
        iVar11 = (int)pUVar19[1]._padding_;
        pFVar7 = (FPropertyBagPropertyDesc *)pUVar19[1]._padding_;
        local_80.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_80.ArrayNum = iVar11;
        if (iVar11 == 0) {
          local_80.ArrayMax = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x40,8,iVar11,0,&local_80.AllocatorInstance,iVar11,&local_80.ArrayMax);
          ConstructItems<FPropertyBagPropertyDesc,FPropertyBagPropertyDesc,int>
                    (local_80.AllocatorInstance.Data,pFVar7,iVar11);
        }
        TArrayPrivateFriend::Serialize<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_>
                  (param_1,&local_80);
        uVar15 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
        plVar4 = *(longlong **)&param_1->field_0x8;
        local_res18[0] = 0;
        if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,local_res18);
          }
        }
        else {
          local_res18[0] = *(uint *)*plVar4;
          *plVar4 = *plVar4 + 4;
        }
        iVar11 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
        if (((this->Value).StructMemory == (uchar *)0x0) &&
           (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                               ("Value.GetMutableMemory() != nullptr",
                                "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\StructUtils\\PropertyBag.cpp"
                                ,0xd04,L""), bVar23)) {
          pcVar8 = (code *)swi(3);
          uVar10 = (*pcVar8)();
          return (bool)uVar10;
        }
        UScriptStruct::SerializeItem(pUVar19,param_1,(this->Value).StructMemory,(void *)0x0);
        uVar16 = (**(code **)(*(longlong *)param_1 + 0x28))(param_1);
        (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,uVar15);
        plVar4 = *(longlong **)&param_1->field_0x8;
        local_res18[0] = (int)uVar16 - iVar11;
        if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res18,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,local_res18);
          }
        }
        else {
          local_res18[0] = *(uint *)*plVar4;
          *plVar4 = *plVar4 + 4;
        }
        (**(code **)(*(longlong *)param_1 + 0x1b8))(param_1,uVar16);
        if (local_80.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_80.AllocatorInstance.Data);
        }
      }
    }
    else {
      local_90.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_90.ArrayNum = 0;
      local_90.ArrayMax = 0;
      TArrayPrivateFriend::Serialize<FPropertyBagPropertyDesc,TSizedDefaultAllocator<32>_>
                (param_1,&local_90);
      iVar11 = local_90.ArrayNum;
      pFVar22 = local_90.AllocatorInstance.Data + (longlong)local_90.ArrayNum * 0x40;
      FVar20.Data = local_90.AllocatorInstance.Data;
      while( true ) {
        if (local_90.ArrayNum != iVar11) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<FPropertyBagPropertyDesc,int,0>::operator!='::__l2::<lambda_1>::
          operator()(local_res10);
        }
        if (FVar20.Data == pFVar22) break;
        if (*(longlong *)FVar20.Data != 0) {
          (**(code **)(*(longlong *)param_1 + 0x1b0))(param_1);
        }
        FVar20.Data = FVar20.Data + 0x40;
      }
      iVar11 = local_90.ArrayNum;
      local_68 = (FPropertyBagPropertyDesc *)local_90.AllocatorInstance.Data;
      if ((local_90.ArrayNum < 0) &&
         (bVar23 = ::FDebug::CheckVerifyFailedImpl2
                             ("InCount >= 0",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                              ,0xeb,L""), bVar23)) {
        pcVar8 = (code *)swi(3);
        uVar10 = (*pcVar8)();
        return (bool)uVar10;
      }
      iStack_60 = iVar11;
      local_58._12_4_ = uStack_5c;
      local_58.ArrayNum = iVar11;
      local_58.DataPtr = local_68;
      this_01 = UPropertyBag::GetOrCreateFromDescs(&local_58,(wchar_t *)0x0);
      this_00 = (UPropertyBag *)(this->Value).ScriptStruct.field0_0x0.DebugPtr;
      if ((this_01 == (UPropertyBag *)0x0) || (this_01 != this_00)) {
        puVar13 = (this->Value).StructMemory;
        ppuVar3 = &(this->Value).StructMemory;
        if (puVar13 != (uchar *)0x0) {
          if ((this_00 != (UPropertyBag *)0x0) && ((this_00->_padding_ & 0x40018000) == 0)) {
            pUVar19 = (this->Value).ScriptStruct.field0_0x0.DebugPtr;
            (**(code **)(pUVar19->_padding_ + 0x300))(pUVar19,*ppuVar3,1);
          }
          FMemory::Free(puVar13);
        }
        *ppuVar3 = (uchar *)0x0;
        (this->Value).ScriptStruct.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
        if (this_01 != (UPropertyBag *)0x0) {
          uVar18 = (uint)*(short *)((longlong)&this_01->_padding_ + 4);
          uVar17 = (int)this_01->_padding_ + -1 + uVar18 & ~(uVar18 - 1);
          if ((int)uVar17 < 1) {
            uVar17 = 1;
          }
          puVar13 = FMemory::Malloc((longlong)(int)uVar17,uVar18);
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)this_01);
          }
          (this->Value).ScriptStruct.field0_0x0.DebugPtr = (UScriptStruct *)this_01;
          *ppuVar3 = puVar13;
          (**(code **)(this_01->_padding_ + 0x2f8))(this_01,puVar13,1);
        }
      }
      else {
        UScriptStruct::ClearScriptStruct((UScriptStruct *)this_00,(this->Value).StructMemory,1);
      }
      local_res20[0] = 0;
      if (local_res8[0] != '\0') {
        plVar4 = *(longlong **)&param_1->field_0x8;
        if ((uint *)plVar4[1] < (uint *)*plVar4 + 1) {
          if ((param_1->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)param_1 + 0x188))(param_1,local_res20,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(param_1,local_res20);
          }
        }
        else {
          local_res20[0] = *(uint *)*plVar4;
          *plVar4 = *plVar4 + 4;
        }
      }
      if ((this_01 == (UPropertyBag *)0x0) ||
         (puVar13 = (this->Value).StructMemory, puVar13 == (uchar *)0x0)) {
        if (2 < (byte)LogCore._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
        }
        lVar6 = *(longlong *)param_1;
        lVar21 = (longlong)(int)local_res20[0];
        lVar14 = (**(code **)(lVar6 + 0x28))(param_1);
        (**(code **)(lVar6 + 0x1b8))(param_1,lVar21 + lVar14);
      }
      else {
        UScriptStruct::SerializeItem((UScriptStruct *)this_01,param_1,puVar13,(void *)0x0);
      }
      if (local_90.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_90.AllocatorInstance.Data);
      }
    }
  }
  else if (bVar9 != 0) {
    puVar13 = (this->Value).StructMemory;
    ppuVar3 = &(this->Value).StructMemory;
    if (puVar13 != (uchar *)0x0) {
      pUVar19 = (this->Value).ScriptStruct.field0_0x0.DebugPtr;
      if ((pUVar19 != (UScriptStruct *)0x0) && ((pUVar19->_padding_ & 0x40018000) == 0)) {
        pUVar19 = (this->Value).ScriptStruct.field0_0x0.DebugPtr;
        (**(code **)(pUVar19->_padding_ + 0x300))(pUVar19,*ppuVar3,1);
      }
      FMemory::Free(puVar13);
    }
    *ppuVar3 = (uchar *)0x0;
    (this->Value).ScriptStruct.field0_0x0.DebugPtr = (UScriptStruct *)0x0;
  }
  return true;
}

// SetValue @ 141fabdc0

EPropertyBagResult __thiscall
FInstancedPropertyBag::SetValue
          (FInstancedPropertyBag *this,FName param_1,FProperty *param_2,void *param_3)

{
  FProperty *pFVar1;
  code *pcVar2;
  bool bVar3;
  EPropertyBagResult EVar4;
  FPropertyBagPropertyDesc *pFVar5;
  uchar *_Src;
  uchar *_Dst;
  
  pFVar5 = FindPropertyDescByName(this,param_1);
  if (((pFVar5 == (FPropertyBagPropertyDesc *)0x0) || (param_2 == (FProperty *)0x0)) ||
     (param_3 == (void *)0x0)) {
    EVar4 = PropertyNotFound;
  }
  else {
    if ((pFVar5->CachedProperty == (FProperty *)0x0) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("Desc->CachedProperty",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\StructUtils\\PropertyBag.cpp"
                           ,0xb9a,L""), bVar3)) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    _Dst = (this->Value).StructMemory + pFVar5->CachedProperty->Offset_Internal;
    if ((param_2->ArrayDim < 1) &&
       (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar3)
       ) {
      pcVar2 = (code *)swi(3);
      EVar4 = (*pcVar2)();
      return EVar4;
    }
    pFVar1 = pFVar5->CachedProperty;
    _Src = (uchar *)((longlong)param_2->Offset_Internal + (longlong)param_3);
    if (param_2->_padding_ == pFVar1->_padding_) {
      if (_Dst != _Src) {
        if (((uint)(int)pFVar1->PropertyFlags >> 0x1e & 1) == 0) {
          (**(code **)(pFVar1->_padding_ + 0xf0))(pFVar1,_Dst,_Src,pFVar1->ArrayDim);
        }
        else {
          memcpy(_Dst,_Src,(longlong)pFVar1->ElementSize * (longlong)pFVar1->ArrayDim);
        }
      }
      EVar4 = Success;
    }
    else {
      EVar4 = TypeMismatch;
    }
  }
  return EVar4;
}

// SetValueBool @ 141fabef0

EPropertyBagResult __thiscall
FInstancedPropertyBag::SetValueBool
          (FInstancedPropertyBag *this,FPropertyBagPropertyDesc *param_1,bool param_2)

{
  bool bVar1;
  EPropertyBagResult EVar2;
  uchar *puVar3;
  
  bVar1 = OwnsPropertyDesc(this,param_1);
  if (!bVar1) {
    return PropertyNotFound;
  }
  if (((param_1 == (FPropertyBagPropertyDesc *)0x0) ||
      (puVar3 = (this->Value).StructMemory, puVar3 == (uchar *)0x0)) ||
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    puVar3 = (uchar *)0x0;
  }
  else {
    puVar3 = puVar3 + param_1->CachedProperty->Offset_Internal;
  }
  EVar2 = UE::StructUtils::Private::SetPropertyFromInt64(param_1,puVar3,(ulonglong)param_2);
  return EVar2;
}

// SetValueBool @ 141fabf70

EPropertyBagResult __thiscall
FInstancedPropertyBag::SetValueBool(FInstancedPropertyBag *this,FName param_1,bool param_2)

{
  EPropertyBagResult EVar1;
  FPropertyBagPropertyDesc *pFVar2;
  uchar *puVar3;
  
  pFVar2 = FindPropertyDescByName(this,param_1);
  if (((pFVar2 == (FPropertyBagPropertyDesc *)0x0) ||
      (puVar3 = (this->Value).StructMemory, puVar3 == (uchar *)0x0)) ||
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    puVar3 = (uchar *)0x0;
  }
  else {
    puVar3 = puVar3 + pFVar2->CachedProperty->Offset_Internal;
  }
  EVar1 = UE::StructUtils::Private::SetPropertyFromInt64(pFVar2,puVar3,(ulonglong)param_2);
  return EVar1;
}

// SetValueByte @ 141fac030

EPropertyBagResult __thiscall
FInstancedPropertyBag::SetValueByte
          (FInstancedPropertyBag *this,FPropertyBagPropertyDesc *param_1,uchar param_2)

{
  bool bVar1;
  EPropertyBagResult EVar2;
  uchar *puVar3;
  
  bVar1 = OwnsPropertyDesc(this,param_1);
  if (!bVar1) {
    return PropertyNotFound;
  }
  if (((param_1 == (FPropertyBagPropertyDesc *)0x0) ||
      (puVar3 = (this->Value).StructMemory, puVar3 == (uchar *)0x0)) ||
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    puVar3 = (uchar *)0x0;
  }
  else {
    puVar3 = puVar3 + param_1->CachedProperty->Offset_Internal;
  }
  EVar2 = UE::StructUtils::Private::SetPropertyFromUInt64(param_1,puVar3,(ulonglong)param_2);
  return EVar2;
}

// SetValueByte @ 141fac0b0

EPropertyBagResult __thiscall
FInstancedPropertyBag::SetValueByte(FInstancedPropertyBag *this,FName param_1,uchar param_2)

{
  EPropertyBagResult EVar1;
  FPropertyBagPropertyDesc *pFVar2;
  uchar *puVar3;
  
  pFVar2 = FindPropertyDescByName(this,param_1);
  if (((pFVar2 == (FPropertyBagPropertyDesc *)0x0) ||
      (puVar3 = (this->Value).StructMemory, puVar3 == (uchar *)0x0)) ||
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    puVar3 = (uchar *)0x0;
  }
  else {
    puVar3 = puVar3 + pFVar2->CachedProperty->Offset_Internal;
  }
  EVar1 = UE::StructUtils::Private::SetPropertyFromUInt64(pFVar2,puVar3,(ulonglong)param_2);
  return EVar1;
}

// SetValueClass @ 141fac170

EPropertyBagResult __thiscall
FInstancedPropertyBag::SetValueClass
          (FInstancedPropertyBag *this,FPropertyBagPropertyDesc *param_1,UClass *param_2)

{
  bool bVar1;
  EPropertyBagResult EVar2;
  uchar *puVar3;
  
  bVar1 = OwnsPropertyDesc(this,param_1);
  if (!bVar1) {
    return PropertyNotFound;
  }
  if (((param_1 == (FPropertyBagPropertyDesc *)0x0) ||
      (puVar3 = (this->Value).StructMemory, puVar3 == (uchar *)0x0)) ||
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    puVar3 = (uchar *)0x0;
  }
  else {
    puVar3 = puVar3 + param_1->CachedProperty->Offset_Internal;
  }
  EVar2 = UE::StructUtils::Private::SetPropertyValueAsObject(param_1,puVar3,(UObject *)param_2);
  return EVar2;
}

// SetValueClass @ 141fac1f0

EPropertyBagResult __thiscall
FInstancedPropertyBag::SetValueClass(FInstancedPropertyBag *this,FName param_1,UClass *param_2)

{
  EPropertyBagResult EVar1;
  FPropertyBagPropertyDesc *pFVar2;
  uchar *puVar3;
  
  pFVar2 = FindPropertyDescByName(this,param_1);
  if (((pFVar2 == (FPropertyBagPropertyDesc *)0x0) ||
      (puVar3 = (this->Value).StructMemory, puVar3 == (uchar *)0x0)) ||
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    puVar3 = (uchar *)0x0;
  }
  else {
    puVar3 = puVar3 + pFVar2->CachedProperty->Offset_Internal;
  }
  EVar1 = UE::StructUtils::Private::SetPropertyValueAsObject(pFVar2,puVar3,(UObject *)param_2);
  return EVar1;
}

// SetValueDouble @ 141fac2b0

EPropertyBagResult __thiscall
FInstancedPropertyBag::SetValueDouble
          (FInstancedPropertyBag *this,FPropertyBagPropertyDesc *param_1,double param_2)

{
  bool bVar1;
  EPropertyBagResult EVar2;
  uchar *puVar3;
  
  bVar1 = OwnsPropertyDesc(this,param_1);
  if (!bVar1) {
    return PropertyNotFound;
  }
  if (((param_1 == (FPropertyBagPropertyDesc *)0x0) ||
      (puVar3 = (this->Value).StructMemory, puVar3 == (uchar *)0x0)) ||
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    puVar3 = (uchar *)0x0;
  }
  else {
    puVar3 = puVar3 + param_1->CachedProperty->Offset_Internal;
  }
  EVar2 = UE::StructUtils::Private::SetPropertyFromDouble(param_1,puVar3,param_2);
  return EVar2;
}

// SetValueDouble @ 141fac330

EPropertyBagResult __thiscall
FInstancedPropertyBag::SetValueDouble(FInstancedPropertyBag *this,FName param_1,double param_2)

{
  EPropertyBagResult EVar1;
  FPropertyBagPropertyDesc *pFVar2;
  uchar *puVar3;
  
  pFVar2 = FindPropertyDescByName(this,param_1);
  if (((pFVar2 == (FPropertyBagPropertyDesc *)0x0) ||
      (puVar3 = (this->Value).StructMemory, puVar3 == (uchar *)0x0)) ||
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    puVar3 = (uchar *)0x0;
  }
  else {
    puVar3 = puVar3 + pFVar2->CachedProperty->Offset_Internal;
  }
  EVar1 = UE::StructUtils::Private::SetPropertyFromDouble(pFVar2,puVar3,param_2);
  return EVar1;
}

// SetValueEnum @ 141fac3f0

EPropertyBagResult __thiscall
FInstancedPropertyBag::SetValueEnum
          (FInstancedPropertyBag *this,FPropertyBagPropertyDesc *param_1,uchar param_2,
          UEnum *param_3)

{
  bool bVar1;
  EPropertyBagResult EVar2;
  uchar *puVar3;
  
  bVar1 = OwnsPropertyDesc(this,param_1);
  if (bVar1) {
    if (((param_1 == (FPropertyBagPropertyDesc *)0x0) ||
        (puVar3 = (this->Value).StructMemory, puVar3 == (uchar *)0x0)) ||
       ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
      puVar3 = (uchar *)0x0;
    }
    else {
      puVar3 = puVar3 + param_1->CachedProperty->Offset_Internal;
    }
    EVar2 = UE::StructUtils::Private::SetPropertyValueAsEnum(param_1,puVar3,param_2,param_3);
  }
  else {
    EVar2 = PropertyNotFound;
  }
  return EVar2;
}

// SetValueEnum @ 141fac470

EPropertyBagResult __thiscall
FInstancedPropertyBag::SetValueEnum
          (FInstancedPropertyBag *this,FName param_1,uchar param_2,UEnum *param_3)

{
  EPropertyBagResult EVar1;
  FPropertyBagPropertyDesc *pFVar2;
  uchar *puVar3;
  
  pFVar2 = FindPropertyDescByName(this,param_1);
  if (((pFVar2 == (FPropertyBagPropertyDesc *)0x0) ||
      (puVar3 = (this->Value).StructMemory, puVar3 == (uchar *)0x0)) ||
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    puVar3 = (uchar *)0x0;
  }
  else {
    puVar3 = puVar3 + pFVar2->CachedProperty->Offset_Internal;
  }
  EVar1 = UE::StructUtils::Private::SetPropertyValueAsEnum(pFVar2,puVar3,param_2,param_3);
  return EVar1;
}

// SetValueFloat @ 141fac540

EPropertyBagResult __thiscall
FInstancedPropertyBag::SetValueFloat
          (FInstancedPropertyBag *this,FPropertyBagPropertyDesc *param_1,float param_2)

{
  bool bVar1;
  EPropertyBagResult EVar2;
  uchar *puVar3;
  
  bVar1 = OwnsPropertyDesc(this,param_1);
  if (!bVar1) {
    return PropertyNotFound;
  }
  if (((param_1 == (FPropertyBagPropertyDesc *)0x0) ||
      (puVar3 = (this->Value).StructMemory, puVar3 == (uchar *)0x0)) ||
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    puVar3 = (uchar *)0x0;
  }
  else {
    puVar3 = puVar3 + param_1->CachedProperty->Offset_Internal;
  }
  EVar2 = UE::StructUtils::Private::SetPropertyFromDouble(param_1,puVar3,(double)param_2);
  return EVar2;
}

// SetValueFloat @ 141fac5c0

EPropertyBagResult __thiscall
FInstancedPropertyBag::SetValueFloat(FInstancedPropertyBag *this,FName param_1,float param_2)

{
  EPropertyBagResult EVar1;
  FPropertyBagPropertyDesc *pFVar2;
  uchar *puVar3;
  
  pFVar2 = FindPropertyDescByName(this,param_1);
  if (((pFVar2 == (FPropertyBagPropertyDesc *)0x0) ||
      (puVar3 = (this->Value).StructMemory, puVar3 == (uchar *)0x0)) ||
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    puVar3 = (uchar *)0x0;
  }
  else {
    puVar3 = puVar3 + pFVar2->CachedProperty->Offset_Internal;
  }
  EVar1 = UE::StructUtils::Private::SetPropertyFromDouble(pFVar2,puVar3,(double)param_2);
  return EVar1;
}

// SetValueInt32 @ 141fac680

EPropertyBagResult __thiscall
FInstancedPropertyBag::SetValueInt32
          (FInstancedPropertyBag *this,FPropertyBagPropertyDesc *param_1,int param_2)

{
  bool bVar1;
  EPropertyBagResult EVar2;
  uchar *puVar3;
  
  bVar1 = OwnsPropertyDesc(this,param_1);
  if (!bVar1) {
    return PropertyNotFound;
  }
  if (((param_1 == (FPropertyBagPropertyDesc *)0x0) ||
      (puVar3 = (this->Value).StructMemory, puVar3 == (uchar *)0x0)) ||
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    puVar3 = (uchar *)0x0;
  }
  else {
    puVar3 = puVar3 + param_1->CachedProperty->Offset_Internal;
  }
  EVar2 = UE::StructUtils::Private::SetPropertyFromInt64(param_1,puVar3,(longlong)param_2);
  return EVar2;
}

// SetValueInt32 @ 141fac700

EPropertyBagResult __thiscall
FInstancedPropertyBag::SetValueInt32(FInstancedPropertyBag *this,FName param_1,int param_2)

{
  EPropertyBagResult EVar1;
  FPropertyBagPropertyDesc *pFVar2;
  uchar *puVar3;
  
  pFVar2 = FindPropertyDescByName(this,param_1);
  if (((pFVar2 == (FPropertyBagPropertyDesc *)0x0) ||
      (puVar3 = (this->Value).StructMemory, puVar3 == (uchar *)0x0)) ||
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    puVar3 = (uchar *)0x0;
  }
  else {
    puVar3 = puVar3 + pFVar2->CachedProperty->Offset_Internal;
  }
  EVar1 = UE::StructUtils::Private::SetPropertyFromInt64(pFVar2,puVar3,(longlong)param_2);
  return EVar1;
}

// SetValueInt64 @ 141fac7c0

EPropertyBagResult __thiscall
FInstancedPropertyBag::SetValueInt64
          (FInstancedPropertyBag *this,FPropertyBagPropertyDesc *param_1,long64 param_2)

{
  bool bVar1;
  EPropertyBagResult EVar2;
  uchar *puVar3;
  
  bVar1 = OwnsPropertyDesc(this,param_1);
  if (!bVar1) {
    return PropertyNotFound;
  }
  if (((param_1 == (FPropertyBagPropertyDesc *)0x0) ||
      (puVar3 = (this->Value).StructMemory, puVar3 == (uchar *)0x0)) ||
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    puVar3 = (uchar *)0x0;
  }
  else {
    puVar3 = puVar3 + param_1->CachedProperty->Offset_Internal;
  }
  EVar2 = UE::StructUtils::Private::SetPropertyFromInt64(param_1,puVar3,param_2);
  return EVar2;
}

// SetValueInt64 @ 141fac840

EPropertyBagResult __thiscall
FInstancedPropertyBag::SetValueInt64(FInstancedPropertyBag *this,FName param_1,long64 param_2)

{
  EPropertyBagResult EVar1;
  FPropertyBagPropertyDesc *pFVar2;
  uchar *puVar3;
  
  pFVar2 = FindPropertyDescByName(this,param_1);
  if (((pFVar2 == (FPropertyBagPropertyDesc *)0x0) ||
      (puVar3 = (this->Value).StructMemory, puVar3 == (uchar *)0x0)) ||
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    puVar3 = (uchar *)0x0;
  }
  else {
    puVar3 = puVar3 + pFVar2->CachedProperty->Offset_Internal;
  }
  EVar1 = UE::StructUtils::Private::SetPropertyFromInt64(pFVar2,puVar3,param_2);
  return EVar1;
}

// SetValueName @ 141fac900

EPropertyBagResult __thiscall
FInstancedPropertyBag::SetValueName
          (FInstancedPropertyBag *this,FPropertyBagPropertyDesc *param_1,FName param_2)

{
  uchar *puVar1;
  bool bVar2;
  FName *pFVar3;
  
  bVar2 = OwnsPropertyDesc(this,param_1);
  if (bVar2) {
    if (((param_1 == (FPropertyBagPropertyDesc *)0x0) ||
        (puVar1 = (this->Value).StructMemory, puVar1 == (uchar *)0x0)) ||
       ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
      pFVar3 = (FName *)0x0;
      if (param_1 == (FPropertyBagPropertyDesc *)0x0) {
        return PropertyNotFound;
      }
    }
    else {
      pFVar3 = (FName *)(puVar1 + param_1->CachedProperty->Offset_Internal);
    }
    if (param_1->CachedProperty != (FProperty *)0x0) {
      if (pFVar3 == (FName *)0x0) {
        return OutOfBounds;
      }
      if (((param_1->ContainerTypes).NumContainers == '\0') &&
         ((*(uint *)(param_1->CachedProperty->_padding_ + 0x18) >> 0xd & 1) != 0)) {
        *pFVar3 = param_2;
        return Success;
      }
      return TypeMismatch;
    }
  }
  return PropertyNotFound;
}

// SetValueName @ 141fac9c0

EPropertyBagResult __thiscall
FInstancedPropertyBag::SetValueName(FInstancedPropertyBag *this,FName param_1,FName param_2)

{
  uchar *puVar1;
  FPropertyBagPropertyDesc *pFVar2;
  FName *pFVar3;
  
  pFVar2 = FindPropertyDescByName(this,param_1);
  if (((pFVar2 == (FPropertyBagPropertyDesc *)0x0) ||
      (puVar1 = (this->Value).StructMemory, puVar1 == (uchar *)0x0)) ||
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    pFVar3 = (FName *)0x0;
    if (pFVar2 == (FPropertyBagPropertyDesc *)0x0) {
      return PropertyNotFound;
    }
  }
  else {
    pFVar3 = (FName *)(puVar1 + pFVar2->CachedProperty->Offset_Internal);
  }
  if (pFVar2->CachedProperty == (FProperty *)0x0) {
    return PropertyNotFound;
  }
  if (pFVar3 == (FName *)0x0) {
    return OutOfBounds;
  }
  if (((pFVar2->ContainerTypes).NumContainers == '\0') &&
     ((*(uint *)(pFVar2->CachedProperty->_padding_ + 0x18) >> 0xd & 1) != 0)) {
    *pFVar3 = param_2;
    return Success;
  }
  return TypeMismatch;
}

// SetValueObject @ 141facae0

EPropertyBagResult __thiscall
FInstancedPropertyBag::SetValueObject
          (FInstancedPropertyBag *this,FPropertyBagPropertyDesc *param_1,UObject *param_2)

{
  bool bVar1;
  EPropertyBagResult EVar2;
  uchar *puVar3;
  
  bVar1 = OwnsPropertyDesc(this,param_1);
  if (!bVar1) {
    return PropertyNotFound;
  }
  if (((param_1 == (FPropertyBagPropertyDesc *)0x0) ||
      (puVar3 = (this->Value).StructMemory, puVar3 == (uchar *)0x0)) ||
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    puVar3 = (uchar *)0x0;
  }
  else {
    puVar3 = puVar3 + param_1->CachedProperty->Offset_Internal;
  }
  EVar2 = UE::StructUtils::Private::SetPropertyValueAsObject(param_1,puVar3,param_2);
  return EVar2;
}

// SetValueObject @ 141facb60

EPropertyBagResult __thiscall
FInstancedPropertyBag::SetValueObject(FInstancedPropertyBag *this,FName param_1,UObject *param_2)

{
  EPropertyBagResult EVar1;
  FPropertyBagPropertyDesc *pFVar2;
  uchar *puVar3;
  
  pFVar2 = FindPropertyDescByName(this,param_1);
  if (((pFVar2 == (FPropertyBagPropertyDesc *)0x0) ||
      (puVar3 = (this->Value).StructMemory, puVar3 == (uchar *)0x0)) ||
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    puVar3 = (uchar *)0x0;
  }
  else {
    puVar3 = puVar3 + pFVar2->CachedProperty->Offset_Internal;
  }
  EVar1 = UE::StructUtils::Private::SetPropertyValueAsObject(pFVar2,puVar3,param_2);
  return EVar1;
}

// SetValueSerializedString @ 141facc20

/* WARNING: Enum "Type": Some values do not have unique names */

EPropertyBagResult __thiscall
FInstancedPropertyBag::SetValueSerializedString
          (FInstancedPropertyBag *this,FName param_1,FString *param_2)

{
  FProperty *this_00;
  code *pcVar1;
  FFeedbackContext *pFVar2;
  bool bVar3;
  EPropertyBagResult EVar4;
  FPropertyBagPropertyDesc *pFVar5;
  longlong lVar6;
  uchar *puVar7;
  wchar_t *pwVar8;
  FString local_28;
  
  pFVar5 = FindPropertyDescByName(this,param_1);
  if (pFVar5 == (FPropertyBagPropertyDesc *)0x0) {
    return PropertyNotFound;
  }
  this_00 = pFVar5->CachedProperty;
  if ((this_00 == (FProperty *)0x0) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Property",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\StructUtils\\PropertyBag.cpp"
                         ,0xb88,L""), bVar3)) {
    pcVar1 = (code *)swi(3);
    EVar4 = (*pcVar1)();
    return EVar4;
  }
  pFVar2 = GWarn;
  puVar7 = (this->Value).StructMemory;
  if ((puVar7 == (uchar *)0x0) ||
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    puVar7 = (uchar *)0x0;
  }
  else {
    puVar7 = puVar7 + pFVar5->CachedProperty->Offset_Internal;
  }
  if ((param_2->Data).ArrayNum == 0) {
    pwVar8 = L"";
  }
  else {
    pwVar8 = (wchar_t *)(param_2->Data).AllocatorInstance.Data;
  }
  bVar3 = FProperty::ValidateImportFlags(this_00,0,(FOutputDevice *)GWarn);
  if (((bVar3) && ((FScriptContainerElement *)pwVar8 != (FScriptContainerElement *)0x0)) &&
     (lVar6 = (**(code **)(this_00->_padding_ + 0xe8))(this_00,pwVar8,puVar7,0,0,0x8000000,pFVar2),
     lVar6 != 0)) {
    EVar4 = Success;
  }
  else {
    if (2 < (byte)LogCore._0_1_) {
      ::FName::ToString(&pFVar5->Name,&local_28);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogCore);
      if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_28.Data.AllocatorInstance.Data);
      }
    }
    EVar4 = TypeMismatch;
  }
  return EVar4;
}

// SetValueSoftPath @ 141facd90

EPropertyBagResult __thiscall
FInstancedPropertyBag::SetValueSoftPath
          (FInstancedPropertyBag *this,FPropertyBagPropertyDesc *param_1,FSoftObjectPath *param_2)

{
  bool bVar1;
  EPropertyBagResult EVar2;
  uchar *puVar3;
  
  bVar1 = OwnsPropertyDesc(this,param_1);
  if (!bVar1) {
    return PropertyNotFound;
  }
  if (((param_1 == (FPropertyBagPropertyDesc *)0x0) ||
      (puVar3 = (this->Value).StructMemory, puVar3 == (uchar *)0x0)) ||
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    puVar3 = (uchar *)0x0;
  }
  else {
    puVar3 = puVar3 + param_1->CachedProperty->Offset_Internal;
  }
  EVar2 = UE::StructUtils::Private::SetPropertyValueAsSoftPath
                    (param_1,puVar3,param_2,(UObject *)0x0);
  return EVar2;
}

// SetValueSoftPath @ 141face10

EPropertyBagResult __thiscall
FInstancedPropertyBag::SetValueSoftPath
          (FInstancedPropertyBag *this,FPropertyBagPropertyDesc *param_1,UObject *param_2)

{
  uchar *puVar1;
  bool bVar2;
  EPropertyBagResult EVar3;
  uchar *puVar4;
  FSoftObjectPath local_28;
  
  bVar2 = OwnsPropertyDesc(this,param_1);
  if (!bVar2) {
    return PropertyNotFound;
  }
  puVar4 = (uchar *)0x0;
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_28,param_2);
  if (((param_1 != (FPropertyBagPropertyDesc *)0x0) &&
      (puVar1 = (this->Value).StructMemory, puVar1 != (uchar *)0x0)) &&
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0)) {
    puVar4 = puVar1 + param_1->CachedProperty->Offset_Internal;
  }
  EVar3 = UE::StructUtils::Private::SetPropertyValueAsSoftPath(param_1,puVar4,&local_28,param_2);
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  return EVar3;
}

// SetValueSoftPath @ 141faced0

EPropertyBagResult __thiscall
FInstancedPropertyBag::SetValueSoftPath
          (FInstancedPropertyBag *this,FName param_1,FSoftObjectPath *param_2)

{
  EPropertyBagResult EVar1;
  FPropertyBagPropertyDesc *pFVar2;
  uchar *puVar3;
  
  pFVar2 = FindPropertyDescByName(this,param_1);
  if (((pFVar2 == (FPropertyBagPropertyDesc *)0x0) ||
      (puVar3 = (this->Value).StructMemory, puVar3 == (uchar *)0x0)) ||
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    puVar3 = (uchar *)0x0;
  }
  else {
    puVar3 = puVar3 + pFVar2->CachedProperty->Offset_Internal;
  }
  EVar1 = UE::StructUtils::Private::SetPropertyValueAsSoftPath(pFVar2,puVar3,param_2,(UObject *)0x0)
  ;
  return EVar1;
}

// SetValueSoftPath @ 141facf30

EPropertyBagResult __thiscall
FInstancedPropertyBag::SetValueSoftPath(FInstancedPropertyBag *this,FName param_1,UObject *param_2)

{
  uchar *puVar1;
  EPropertyBagResult EVar2;
  FPropertyBagPropertyDesc *pFVar3;
  uchar *puVar4;
  FSoftObjectPath local_28;
  
  pFVar3 = FindPropertyDescByName(this,param_1);
  puVar4 = (uchar *)0x0;
  local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
  local_28.AssetPath.PackageName.Number = 0;
  local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
  local_28.AssetPath.AssetName.Number = 0;
  local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_28.SubPathString.Data.ArrayNum = 0;
  local_28.SubPathString.Data.ArrayMax = 0;
  FSoftObjectPath::SetPath(&local_28,param_2);
  if (((pFVar3 != (FPropertyBagPropertyDesc *)0x0) &&
      (puVar1 = (this->Value).StructMemory, puVar1 != (uchar *)0x0)) &&
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr != (UScriptStruct *)0x0)) {
    puVar4 = puVar1 + pFVar3->CachedProperty->Offset_Internal;
  }
  EVar2 = UE::StructUtils::Private::SetPropertyValueAsSoftPath(pFVar3,puVar4,&local_28,param_2);
  if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
  }
  return EVar2;
}

// SetValueString @ 141fad100

EPropertyBagResult __thiscall
FInstancedPropertyBag::SetValueString
          (FInstancedPropertyBag *this,FPropertyBagPropertyDesc *param_1,FString *param_2)

{
  uchar *puVar1;
  bool bVar2;
  FString *this_00;
  
  bVar2 = OwnsPropertyDesc(this,param_1);
  if (bVar2) {
    if (((param_1 == (FPropertyBagPropertyDesc *)0x0) ||
        (puVar1 = (this->Value).StructMemory, puVar1 == (uchar *)0x0)) ||
       ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
      this_00 = (FString *)0x0;
      if (param_1 == (FPropertyBagPropertyDesc *)0x0) {
        return PropertyNotFound;
      }
    }
    else {
      this_00 = (FString *)(puVar1 + param_1->CachedProperty->Offset_Internal);
    }
    if (param_1->CachedProperty != (FProperty *)0x0) {
      if (this_00 == (FString *)0x0) {
        return OutOfBounds;
      }
      if (((param_1->ContainerTypes).NumContainers == '\0') &&
         ((*(uint *)(param_1->CachedProperty->_padding_ + 0x18) >> 0xe & 1) != 0)) {
        ::FString::operator=(this_00,param_2);
        return Success;
      }
      return TypeMismatch;
    }
  }
  return PropertyNotFound;
}

// SetValueString @ 141fad1d0

EPropertyBagResult __thiscall
FInstancedPropertyBag::SetValueString(FInstancedPropertyBag *this,FName param_1,FString *param_2)

{
  uchar *puVar1;
  FPropertyBagPropertyDesc *pFVar2;
  FString *this_00;
  
  pFVar2 = FindPropertyDescByName(this,param_1);
  if (((pFVar2 == (FPropertyBagPropertyDesc *)0x0) ||
      (puVar1 = (this->Value).StructMemory, puVar1 == (uchar *)0x0)) ||
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    this_00 = (FString *)0x0;
    if (pFVar2 == (FPropertyBagPropertyDesc *)0x0) {
      return PropertyNotFound;
    }
  }
  else {
    this_00 = (FString *)(puVar1 + pFVar2->CachedProperty->Offset_Internal);
  }
  if (pFVar2->CachedProperty == (FProperty *)0x0) {
    return PropertyNotFound;
  }
  if (this_00 == (FString *)0x0) {
    return OutOfBounds;
  }
  if (((pFVar2->ContainerTypes).NumContainers == '\0') &&
     ((*(uint *)(pFVar2->CachedProperty->_padding_ + 0x18) >> 0xe & 1) != 0)) {
    ::FString::operator=(this_00,param_2);
    return Success;
  }
  return TypeMismatch;
}

// SetValueStruct @ 141fad320

EPropertyBagResult __thiscall
FInstancedPropertyBag::SetValueStruct
          (FInstancedPropertyBag *this,FPropertyBagPropertyDesc *param_1,FConstStructView *param_2)

{
  bool bVar1;
  EPropertyBagResult EVar2;
  uchar *puVar3;
  FConstStructView local_18;
  
  bVar1 = OwnsPropertyDesc(this,param_1);
  if (!bVar1) {
    return PropertyNotFound;
  }
  if (((param_1 == (FPropertyBagPropertyDesc *)0x0) ||
      (puVar3 = (this->Value).StructMemory, puVar3 == (uchar *)0x0)) ||
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    puVar3 = (uchar *)0x0;
  }
  else {
    puVar3 = puVar3 + param_1->CachedProperty->Offset_Internal;
  }
  local_18.ScriptStruct = param_2->ScriptStruct;
  local_18.StructMemory = param_2->StructMemory;
  EVar2 = UE::StructUtils::Private::SetPropertyValueAsStruct(param_1,puVar3,&local_18);
  return EVar2;
}

// SetValueStruct @ 141fad3b0

EPropertyBagResult __thiscall
FInstancedPropertyBag::SetValueStruct
          (FInstancedPropertyBag *this,FName param_1,FConstStructView *param_2)

{
  EPropertyBagResult EVar1;
  FPropertyBagPropertyDesc *pFVar2;
  uchar *puVar3;
  FConstStructView local_18;
  
  pFVar2 = FindPropertyDescByName(this,param_1);
  if (((pFVar2 == (FPropertyBagPropertyDesc *)0x0) ||
      (puVar3 = (this->Value).StructMemory, puVar3 == (uchar *)0x0)) ||
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    puVar3 = (uchar *)0x0;
  }
  else {
    puVar3 = puVar3 + pFVar2->CachedProperty->Offset_Internal;
  }
  local_18.ScriptStruct = param_2->ScriptStruct;
  local_18.StructMemory = param_2->StructMemory;
  EVar1 = UE::StructUtils::Private::SetPropertyValueAsStruct(pFVar2,puVar3,&local_18);
  return EVar1;
}

// SetValueText @ 141fad480

EPropertyBagResult __thiscall
FInstancedPropertyBag::SetValueText
          (FInstancedPropertyBag *this,FPropertyBagPropertyDesc *param_1,FText *param_2)

{
  uchar *puVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  bool bVar4;
  longlong *plVar5;
  undefined1 local_res20 [8];
  
  bVar4 = OwnsPropertyDesc(this,param_1);
  if (bVar4) {
    if (((param_1 == (FPropertyBagPropertyDesc *)0x0) ||
        (puVar1 = (this->Value).StructMemory, puVar1 == (uchar *)0x0)) ||
       ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
      plVar5 = (longlong *)0x0;
      if (param_1 == (FPropertyBagPropertyDesc *)0x0) {
        return PropertyNotFound;
      }
    }
    else {
      plVar5 = (longlong *)(puVar1 + param_1->CachedProperty->Offset_Internal);
    }
    if (param_1->CachedProperty != (FProperty *)0x0) {
      if (plVar5 == (longlong *)0x0) {
        return OutOfBounds;
      }
      if (((param_1->ContainerTypes).NumContainers == '\0') &&
         ((*(uint *)(param_1->CachedProperty->_padding_ + 0x18) >> 0x1e & 1) != 0)) {
        pIVar2 = (param_2->TextData).Reference;
        pIVar3 = (ITextData *)*plVar5;
        if (pIVar3 != pIVar2) {
          *plVar5 = (longlong)pIVar2;
          if (pIVar2 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res20);
          }
          if (pIVar3 != (ITextData *)0x0) {
            (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
          }
        }
        *(uint *)(plVar5 + 1) = param_2->Flags;
        return Success;
      }
      return TypeMismatch;
    }
  }
  return PropertyNotFound;
}

// SetValueText @ 141fad580

EPropertyBagResult __thiscall
FInstancedPropertyBag::SetValueText(FInstancedPropertyBag *this,FName param_1,FText *param_2)

{
  uchar *puVar1;
  ITextData *pIVar2;
  ITextData *pIVar3;
  FPropertyBagPropertyDesc *pFVar4;
  longlong *plVar5;
  undefined1 local_res20 [8];
  
  pFVar4 = FindPropertyDescByName(this,param_1);
  if (((pFVar4 == (FPropertyBagPropertyDesc *)0x0) ||
      (puVar1 = (this->Value).StructMemory, puVar1 == (uchar *)0x0)) ||
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    plVar5 = (longlong *)0x0;
    if (pFVar4 == (FPropertyBagPropertyDesc *)0x0) {
      return PropertyNotFound;
    }
  }
  else {
    plVar5 = (longlong *)(puVar1 + pFVar4->CachedProperty->Offset_Internal);
  }
  if (pFVar4->CachedProperty == (FProperty *)0x0) {
    return PropertyNotFound;
  }
  if (plVar5 == (longlong *)0x0) {
    return OutOfBounds;
  }
  if (((pFVar4->ContainerTypes).NumContainers == '\0') &&
     ((*(uint *)(pFVar4->CachedProperty->_padding_ + 0x18) >> 0x1e & 1) != 0)) {
    pIVar2 = (param_2->TextData).Reference;
    pIVar3 = (ITextData *)*plVar5;
    if (pIVar3 != pIVar2) {
      *plVar5 = (longlong)pIVar2;
      if (pIVar2 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar2 + 8))(pIVar2,local_res20);
      }
      if (pIVar3 != (ITextData *)0x0) {
        (**(code **)((longlong)*pIVar3 + 0x10))(pIVar3);
      }
    }
    *(uint *)(plVar5 + 1) = param_2->Flags;
    return Success;
  }
  return TypeMismatch;
}

// SetValueUInt32 @ 141fad760

EPropertyBagResult __thiscall
FInstancedPropertyBag::SetValueUInt32
          (FInstancedPropertyBag *this,FPropertyBagPropertyDesc *param_1,uint param_2)

{
  bool bVar1;
  EPropertyBagResult EVar2;
  uchar *puVar3;
  
  bVar1 = OwnsPropertyDesc(this,param_1);
  if (!bVar1) {
    return PropertyNotFound;
  }
  if (((param_1 == (FPropertyBagPropertyDesc *)0x0) ||
      (puVar3 = (this->Value).StructMemory, puVar3 == (uchar *)0x0)) ||
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    puVar3 = (uchar *)0x0;
  }
  else {
    puVar3 = puVar3 + param_1->CachedProperty->Offset_Internal;
  }
  EVar2 = UE::StructUtils::Private::SetPropertyFromUInt64(param_1,puVar3,(ulonglong)param_2);
  return EVar2;
}

// SetValueUInt32 @ 141fad7e0

EPropertyBagResult __thiscall
FInstancedPropertyBag::SetValueUInt32(FInstancedPropertyBag *this,FName param_1,uint param_2)

{
  EPropertyBagResult EVar1;
  FPropertyBagPropertyDesc *pFVar2;
  uchar *puVar3;
  
  pFVar2 = FindPropertyDescByName(this,param_1);
  if (((pFVar2 == (FPropertyBagPropertyDesc *)0x0) ||
      (puVar3 = (this->Value).StructMemory, puVar3 == (uchar *)0x0)) ||
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    puVar3 = (uchar *)0x0;
  }
  else {
    puVar3 = puVar3 + pFVar2->CachedProperty->Offset_Internal;
  }
  EVar1 = UE::StructUtils::Private::SetPropertyFromUInt64(pFVar2,puVar3,(ulonglong)param_2);
  return EVar1;
}

// SetValueUInt64 @ 141fad8a0

EPropertyBagResult __thiscall
FInstancedPropertyBag::SetValueUInt64
          (FInstancedPropertyBag *this,FPropertyBagPropertyDesc *param_1,ulong64 param_2)

{
  bool bVar1;
  EPropertyBagResult EVar2;
  uchar *puVar3;
  
  bVar1 = OwnsPropertyDesc(this,param_1);
  if (!bVar1) {
    return PropertyNotFound;
  }
  if (((param_1 == (FPropertyBagPropertyDesc *)0x0) ||
      (puVar3 = (this->Value).StructMemory, puVar3 == (uchar *)0x0)) ||
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    puVar3 = (uchar *)0x0;
  }
  else {
    puVar3 = puVar3 + param_1->CachedProperty->Offset_Internal;
  }
  EVar2 = UE::StructUtils::Private::SetPropertyFromUInt64(param_1,puVar3,param_2);
  return EVar2;
}

// SetValueUInt64 @ 141fad920

EPropertyBagResult __thiscall
FInstancedPropertyBag::SetValueUInt64(FInstancedPropertyBag *this,FName param_1,ulong64 param_2)

{
  EPropertyBagResult EVar1;
  FPropertyBagPropertyDesc *pFVar2;
  uchar *puVar3;
  
  pFVar2 = FindPropertyDescByName(this,param_1);
  if (((pFVar2 == (FPropertyBagPropertyDesc *)0x0) ||
      (puVar3 = (this->Value).StructMemory, puVar3 == (uchar *)0x0)) ||
     ((this->Value).ScriptStruct.field0_0x0.DebugPtr == (UScriptStruct *)0x0)) {
    puVar3 = (uchar *)0x0;
  }
  else {
    puVar3 = puVar3 + pFVar2->CachedProperty->Offset_Internal;
  }
  EVar1 = UE::StructUtils::Private::SetPropertyFromUInt64(pFVar2,puVar3,param_2);
  return EVar1;
}

