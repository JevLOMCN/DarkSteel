// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 30

// StaticStruct @ 1462c5c30

UScriptStruct * __cdecl FDataflowVariableOverrides::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FDataflowVariableOverrides.OuterSingleton ==
      (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_DataflowEngine();
    Z_Registration_Info_UScriptStruct_FDataflowVariableOverrides.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FDataflowVariableOverrides,(UObject *)pUVar1,
                         L"DataflowVariableOverrides");
  }
  return Z_Registration_Info_UScriptStruct_FDataflowVariableOverrides.OuterSingleton;
}

// FDataflowVariableOverrides @ 1462ce980

FDataflowVariableOverrides * __thiscall
FDataflowVariableOverrides::FDataflowVariableOverrides
          (FDataflowVariableOverrides *this,FDataflowInstance *param_1)

{
  FInstancedStruct::FInstancedStruct((FInstancedStruct *)this);
  this->Owner = param_1;
  (this->OverriddenVariableGuids).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->OverriddenVariableGuids).ArrayNum = 0;
  (this->OverriddenVariableGuids).ArrayMax = 0;
  return this;
}

// operator= @ 1462d0820

FDataflowVariableOverrides * __thiscall
FDataflowVariableOverrides::operator=
          (FDataflowVariableOverrides *this,FDataflowVariableOverrides *param_1)

{
  int *piVar1;
  FGuid *pFVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  undefined8 uVar6;
  bool bVar7;
  int iVar8;
  FPropertyBagPropertyDesc *pFVar9;
  FDataflowVariableOverrides *pFVar10;
  FScriptContainerElement *pFVar11;
  FScriptContainerElement *pFVar12;
  undefined1 local_res8 [8];
  FGuid local_38;
  
  if (this != param_1) {
    FInstancedStruct::InitializeAs
              ((FInstancedStruct *)this,(param_1->Variables).Value.ScriptStruct.field0_0x0.DebugPtr,
               (param_1->Variables).Value.StructMemory);
    piVar1 = &(this->OverriddenVariableGuids).ArrayMax;
    (this->OverriddenVariableGuids).ArrayNum = 0;
    if (*piVar1 != 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&(this->OverriddenVariableGuids).AllocatorInstance,0,piVar1);
    }
    iVar3 = (param_1->OverriddenVariableGuids).ArrayNum;
    pFVar11 = (param_1->OverriddenVariableGuids).AllocatorInstance.Data;
    pFVar12 = pFVar11 + (longlong)iVar3 * 0x10;
    while( true ) {
      if ((param_1->OverriddenVariableGuids).ArrayNum != iVar3) {
        local_res8[0] = 0;
        `TCheckedPointerIterator<FGuid_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_res8);
      }
      if (pFVar11 == pFVar12) break;
      local_38._0_8_ = *(undefined8 *)pFVar11;
      local_38._8_8_ = *(undefined8 *)(pFVar11 + 8);
      pFVar9 = FInstancedPropertyBag::FindPropertyDescByID(&param_1->Variables,&local_38);
      if (pFVar9 != (FPropertyBagPropertyDesc *)0x0) {
        pFVar4 = (this->OverriddenVariableGuids).AllocatorInstance.Data;
        pFVar2 = &pFVar9->ID;
        if (((pFVar4 <= pFVar2) && (pFVar2 < pFVar4 + (longlong)*piVar1 * 0x10)) &&
           (bVar7 = ::FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar5 = (code *)swi(3);
          pFVar10 = (FDataflowVariableOverrides *)(*pcVar5)();
          return pFVar10;
        }
        iVar8 = (this->OverriddenVariableGuids).ArrayNum;
        if (iVar8 == *piVar1) {
          iVar8 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x410,&(this->OverriddenVariableGuids).AllocatorInstance,piVar1);
        }
        (this->OverriddenVariableGuids).ArrayNum = iVar8 + 1;
        uVar6 = *(undefined8 *)&(pFVar9->ID).C;
        pFVar4 = (this->OverriddenVariableGuids).AllocatorInstance.Data + (longlong)iVar8 * 0x10;
        *(undefined8 *)pFVar4 = *(undefined8 *)pFVar2;
        *(undefined8 *)(pFVar4 + 8) = uVar6;
      }
      pFVar11 = pFVar11 + 0x10;
    }
  }
  return this;
}

// GetDefaultVariablesFromAsset @ 1462dcbb0

FInstancedPropertyBag * __thiscall
FDataflowVariableOverrides::GetDefaultVariablesFromAsset(FDataflowVariableOverrides *this)

{
  UDataflow *pUVar1;
  FInstancedPropertyBag *pFVar2;
  
  pFVar2 = (FInstancedPropertyBag *)0x0;
  if ((this->Owner != (FDataflowInstance *)0x0) &&
     (pUVar1 = (this->Owner->DataflowAsset).field0_0x0.DebugPtr, pUVar1 != (UDataflow *)0x0)) {
    pFVar2 = &pUVar1->Variables;
  }
  return pFVar2;
}

// GetOverridenVariables @ 1462dd990

FInstancedPropertyBag * __thiscall
FDataflowVariableOverrides::GetOverridenVariables(FDataflowVariableOverrides *this)

{
  return &this->Variables;
}

// GetVariablePropertyName @ 1462df1a0

FName __cdecl FDataflowVariableOverrides::GetVariablePropertyName(void)

{
  FName *pFVar1;
  FName in_RCX;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,9,L"Variables",FNAME_Add);
  *(FName *)in_RCX = *pFVar1;
  return in_RCX;
}

// GetVariables @ 1462df200

FInstancedPropertyBag * __thiscall
FDataflowVariableOverrides::GetVariables(FDataflowVariableOverrides *this)

{
  return &this->Variables;
}

// GetVariables @ 1462df210

FInstancedPropertyBag * __thiscall
FDataflowVariableOverrides::GetVariables(FDataflowVariableOverrides *this)

{
  return &this->Variables;
}

// HasVariable @ 1462df920

bool __thiscall
FDataflowVariableOverrides::HasVariable(FDataflowVariableOverrides *this,FName param_1)

{
  FPropertyBagPropertyDesc *pFVar1;
  
  pFVar1 = FInstancedPropertyBag::FindPropertyDescByName(&this->Variables,param_1);
  return pFVar1 != (FPropertyBagPropertyDesc *)0x0;
}

// IsVariableOverridden @ 1462dfef0

bool __thiscall
FDataflowVariableOverrides::IsVariableOverridden(FDataflowVariableOverrides *this,FGuid *param_1)

{
  bool bVar1;
  
  bVar1 = TArray<FGuid,TSizedDefaultAllocator<32>_>::Contains<FGuid>
                    (&this->OverriddenVariableGuids,param_1);
  return bVar1;
}

// IsVariableOverridden @ 1462dff10

bool __thiscall
FDataflowVariableOverrides::IsVariableOverridden(FDataflowVariableOverrides *this,FName param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  FPropertyBagPropertyDesc *pFVar5;
  FScriptContainerElement *pFVar6;
  FScriptContainerElement *pFVar7;
  int local_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  pFVar5 = FInstancedPropertyBag::FindPropertyDescByName(&this->Variables,param_1);
  if (pFVar5 != (FPropertyBagPropertyDesc *)0x0) {
    uVar1 = (pFVar5->ID).A;
    uVar2 = (pFVar5->ID).B;
    uVar3 = (pFVar5->ID).C;
    uVar4 = (pFVar5->ID).D;
    pFVar6 = (this->OverriddenVariableGuids).AllocatorInstance.Data;
    pFVar7 = pFVar6 + (longlong)(this->OverriddenVariableGuids).ArrayNum * 0x10;
    if (pFVar6 != pFVar7) {
      do {
        if (((uVar4 == *(int *)(pFVar6 + 0xc) && uVar3 == *(int *)(pFVar6 + 8)) &&
            uVar2 == *(int *)(pFVar6 + 4)) && uVar1 == *(int *)pFVar6) {
          return true;
        }
        pFVar6 = pFVar6 + 0x10;
      } while (pFVar6 != pFVar7);
    }
  }
  return false;
}

// OverrideVariableBool @ 1462e11a0

bool __thiscall
FDataflowVariableOverrides::OverrideVariableBool
          (FDataflowVariableOverrides *this,FName param_1,bool param_2)

{
  EPropertyBagResult EVar1;
  FPropertyBagPropertyDesc *pFVar2;
  
  pFVar2 = FInstancedPropertyBag::FindPropertyDescByName(&this->Variables,param_1);
  if (pFVar2 != (FPropertyBagPropertyDesc *)0x0) {
    EVar1 = FInstancedPropertyBag::SetValueBool(&this->Variables,pFVar2,param_2);
    if (EVar1 == Success) {
      SetVariableOverrideAndNotify(this,&pFVar2->ID,true);
      return true;
    }
  }
  return false;
}

// OverrideVariableBoolArray @ 1462e1210

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FDataflowVariableOverrides::OverrideVariableBoolArray
          (FDataflowVariableOverrides *this,FName param_1,
          TArray<bool,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  EPropertyBagResult EVar4;
  uint uVar5;
  FPropertyBagPropertyDesc *pFVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  bool bVar10;
  ulonglong uVar11;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  FGuid local_b8;
  TValueOrError<FPropertyBagArrayRef,EPropertyBagResult> local_a8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_e8;
  uVar9 = 0;
  local_b8.A = 0;
  local_b8.B = 0;
  local_b8.C = 0;
  local_b8.D = 0;
  pFVar6 = FInstancedPropertyBag::FindPropertyDescByName(&this->Variables,param_1);
  if (pFVar6 == (FPropertyBagPropertyDesc *)0x0) {
    return false;
  }
  FInstancedPropertyBag::GetMutableArrayRef(&this->Variables,&local_a8,pFVar6);
  if (local_a8.Variant.TypeIndex != '\0') {
    return false;
  }
  bVar10 = true;
  FScriptArrayHelper::EmptyValues((FScriptArrayHelper *)&local_a8,0);
  FScriptArrayHelper::AddValues((FScriptArrayHelper *)&local_a8,param_2->ArrayNum);
  iVar7 = param_2->ArrayNum;
  uVar11 = uVar9;
  bVar2 = bVar10;
  if (0 < iVar7) {
    do {
      uVar8 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar8 < iVar7) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
        local_c0 = (longlong)iVar7;
        local_c8 = (longlong)(int)uVar8;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      EVar4 = FPropertyBagArrayRef::SetValueBool
                        ((FPropertyBagArrayRef *)&local_a8,uVar8,
                         (bool)(param_2->AllocatorInstance).Data[uVar11]);
      bVar2 = false;
      if (EVar4 == Success) {
        bVar2 = bVar10;
      }
      uVar9 = (ulonglong)(uVar8 + 1);
      iVar7 = param_2->ArrayNum;
      uVar11 = uVar11 + 1;
      bVar10 = bVar2;
    } while ((int)(uVar8 + 1) < iVar7);
    if (bVar2 == false) goto LAB_1462e134c;
  }
  local_b8.A = (pFVar6->ID).A;
  local_b8.B = (pFVar6->ID).B;
  local_b8.C = (pFVar6->ID).C;
  local_b8.D = (pFVar6->ID).D;
LAB_1462e134c:
  if (bVar2 != false) {
    SetVariableOverrideAndNotify(this,&local_b8,true);
    return bVar2;
  }
  return false;
}

// OverrideVariableFloat @ 1462e13b0

bool __thiscall
FDataflowVariableOverrides::OverrideVariableFloat
          (FDataflowVariableOverrides *this,FName param_1,float param_2)

{
  EPropertyBagResult EVar1;
  FPropertyBagPropertyDesc *pFVar2;
  
  pFVar2 = FInstancedPropertyBag::FindPropertyDescByName(&this->Variables,param_1);
  if (pFVar2 != (FPropertyBagPropertyDesc *)0x0) {
    EVar1 = FInstancedPropertyBag::SetValueFloat(&this->Variables,pFVar2,param_2);
    if (EVar1 == Success) {
      SetVariableOverrideAndNotify(this,&pFVar2->ID,true);
      return true;
    }
  }
  return false;
}

// OverrideVariableFloatArray @ 1462e1420

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FDataflowVariableOverrides::OverrideVariableFloatArray
          (FDataflowVariableOverrides *this,FName param_1,
          TArray<float,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  EPropertyBagResult EVar4;
  uint uVar5;
  FPropertyBagPropertyDesc *pFVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  ulonglong uVar10;
  bool bVar11;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  FGuid local_b8;
  TValueOrError<FPropertyBagArrayRef,EPropertyBagResult> local_a8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_e8;
  uVar9 = 0;
  local_b8.A = 0;
  local_b8.B = 0;
  local_b8.C = 0;
  local_b8.D = 0;
  pFVar6 = FInstancedPropertyBag::FindPropertyDescByName(&this->Variables,param_1);
  if (pFVar6 == (FPropertyBagPropertyDesc *)0x0) {
    return false;
  }
  FInstancedPropertyBag::GetMutableArrayRef(&this->Variables,&local_a8,pFVar6);
  if (local_a8.Variant.TypeIndex != '\0') {
    return false;
  }
  bVar11 = true;
  FScriptArrayHelper::EmptyValues((FScriptArrayHelper *)&local_a8,0);
  FScriptArrayHelper::AddValues((FScriptArrayHelper *)&local_a8,param_2->ArrayNum);
  iVar7 = param_2->ArrayNum;
  uVar10 = uVar9;
  bVar2 = bVar11;
  if (0 < iVar7) {
    do {
      uVar8 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar8 < iVar7) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
        local_c0 = (longlong)iVar7;
        local_c8 = (longlong)(int)uVar8;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      EVar4 = FPropertyBagArrayRef::SetValueFloat
                        ((FPropertyBagArrayRef *)&local_a8,uVar8,
                         *(float *)((param_2->AllocatorInstance).Data + uVar10));
      bVar2 = false;
      if (EVar4 == Success) {
        bVar2 = bVar11;
      }
      uVar9 = (ulonglong)(uVar8 + 1);
      iVar7 = param_2->ArrayNum;
      uVar10 = uVar10 + 4;
      bVar11 = bVar2;
    } while ((int)(uVar8 + 1) < iVar7);
    if (bVar2 == false) goto LAB_1462e155f;
  }
  local_b8.A = (pFVar6->ID).A;
  local_b8.B = (pFVar6->ID).B;
  local_b8.C = (pFVar6->ID).C;
  local_b8.D = (pFVar6->ID).D;
LAB_1462e155f:
  if (bVar2 != false) {
    SetVariableOverrideAndNotify(this,&local_b8,true);
    return bVar2;
  }
  return false;
}

// OverrideVariableInt32Array @ 1462e15c0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FDataflowVariableOverrides::OverrideVariableInt32Array
          (FDataflowVariableOverrides *this,FName param_1,
          TArray<int,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  EPropertyBagResult EVar4;
  uint uVar5;
  FPropertyBagPropertyDesc *pFVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  bool bVar10;
  ulonglong uVar11;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  FGuid local_b8;
  TValueOrError<FPropertyBagArrayRef,EPropertyBagResult> local_a8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_e8;
  uVar9 = 0;
  local_b8.A = 0;
  local_b8.B = 0;
  local_b8.C = 0;
  local_b8.D = 0;
  pFVar6 = FInstancedPropertyBag::FindPropertyDescByName(&this->Variables,param_1);
  if (pFVar6 == (FPropertyBagPropertyDesc *)0x0) {
    return false;
  }
  FInstancedPropertyBag::GetMutableArrayRef(&this->Variables,&local_a8,pFVar6);
  if (local_a8.Variant.TypeIndex != '\0') {
    return false;
  }
  bVar10 = true;
  FScriptArrayHelper::EmptyValues((FScriptArrayHelper *)&local_a8,0);
  FScriptArrayHelper::AddValues((FScriptArrayHelper *)&local_a8,param_2->ArrayNum);
  iVar7 = param_2->ArrayNum;
  uVar11 = uVar9;
  bVar2 = bVar10;
  if (0 < iVar7) {
    do {
      uVar8 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar8 < iVar7) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
        local_c0 = (longlong)iVar7;
        local_c8 = (longlong)(int)uVar8;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      EVar4 = FPropertyBagArrayRef::SetValueInt32
                        ((FPropertyBagArrayRef *)&local_a8,uVar8,
                         *(int *)((param_2->AllocatorInstance).Data + uVar11));
      bVar2 = false;
      if (EVar4 == Success) {
        bVar2 = bVar10;
      }
      uVar9 = (ulonglong)(uVar8 + 1);
      iVar7 = param_2->ArrayNum;
      uVar11 = uVar11 + 4;
      bVar10 = bVar2;
    } while ((int)(uVar8 + 1) < iVar7);
    if (bVar2 == false) goto LAB_1462e16fc;
  }
  local_b8.A = (pFVar6->ID).A;
  local_b8.B = (pFVar6->ID).B;
  local_b8.C = (pFVar6->ID).C;
  local_b8.D = (pFVar6->ID).D;
LAB_1462e16fc:
  if (bVar2 != false) {
    SetVariableOverrideAndNotify(this,&local_b8,true);
    return bVar2;
  }
  return false;
}

// OverrideVariableInt64Array @ 1462e1760

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FDataflowVariableOverrides::OverrideVariableInt64Array
          (FDataflowVariableOverrides *this,FName param_1,
          TArray<__int64,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  EPropertyBagResult EVar4;
  uint uVar5;
  FPropertyBagPropertyDesc *pFVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  bool bVar10;
  ulonglong uVar11;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  FGuid local_b8;
  TValueOrError<FPropertyBagArrayRef,EPropertyBagResult> local_a8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_e8;
  uVar9 = 0;
  local_b8.A = 0;
  local_b8.B = 0;
  local_b8.C = 0;
  local_b8.D = 0;
  pFVar6 = FInstancedPropertyBag::FindPropertyDescByName(&this->Variables,param_1);
  if (pFVar6 == (FPropertyBagPropertyDesc *)0x0) {
    return false;
  }
  FInstancedPropertyBag::GetMutableArrayRef(&this->Variables,&local_a8,pFVar6);
  if (local_a8.Variant.TypeIndex != '\0') {
    return false;
  }
  bVar10 = true;
  FScriptArrayHelper::EmptyValues((FScriptArrayHelper *)&local_a8,0);
  FScriptArrayHelper::AddValues((FScriptArrayHelper *)&local_a8,param_2->ArrayNum);
  iVar7 = param_2->ArrayNum;
  uVar11 = uVar9;
  bVar2 = bVar10;
  if (0 < iVar7) {
    do {
      uVar8 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar8 < iVar7) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
        local_c0 = (longlong)iVar7;
        local_c8 = (longlong)(int)uVar8;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      EVar4 = FPropertyBagArrayRef::SetValueInt64
                        ((FPropertyBagArrayRef *)&local_a8,uVar8,
                         *(long64 *)((param_2->AllocatorInstance).Data + uVar11));
      bVar2 = false;
      if (EVar4 == Success) {
        bVar2 = bVar10;
      }
      uVar9 = (ulonglong)(uVar8 + 1);
      iVar7 = param_2->ArrayNum;
      uVar11 = uVar11 + 8;
      bVar10 = bVar2;
    } while ((int)(uVar8 + 1) < iVar7);
    if (bVar2 == false) goto LAB_1462e189c;
  }
  local_b8.A = (pFVar6->ID).A;
  local_b8.B = (pFVar6->ID).B;
  local_b8.C = (pFVar6->ID).C;
  local_b8.D = (pFVar6->ID).D;
LAB_1462e189c:
  if (bVar2 != false) {
    SetVariableOverrideAndNotify(this,&local_b8,true);
    return bVar2;
  }
  return false;
}

// OverrideVariableInt @ 1462e1900

bool __thiscall
FDataflowVariableOverrides::OverrideVariableInt
          (FDataflowVariableOverrides *this,FName param_1,long64 param_2)

{
  EPropertyBagResult EVar1;
  FPropertyBagPropertyDesc *pFVar2;
  
  pFVar2 = FInstancedPropertyBag::FindPropertyDescByName(&this->Variables,param_1);
  if (pFVar2 != (FPropertyBagPropertyDesc *)0x0) {
    EVar1 = FInstancedPropertyBag::SetValueInt64(&this->Variables,pFVar2,param_2);
    if (EVar1 == Success) {
      SetVariableOverrideAndNotify(this,&pFVar2->ID,true);
      return true;
    }
  }
  return false;
}

// OverrideVariableName @ 1462e1970

bool __thiscall
FDataflowVariableOverrides::OverrideVariableName
          (FDataflowVariableOverrides *this,FName param_1,FName param_2)

{
  EPropertyBagResult EVar1;
  FPropertyBagPropertyDesc *pFVar2;
  
  pFVar2 = FInstancedPropertyBag::FindPropertyDescByName(&this->Variables,param_1);
  if (pFVar2 != (FPropertyBagPropertyDesc *)0x0) {
    EVar1 = FInstancedPropertyBag::SetValueName(&this->Variables,pFVar2,param_2);
    if (EVar1 == Success) {
      SetVariableOverrideAndNotify(this,&pFVar2->ID,true);
      return true;
    }
  }
  return false;
}

// OverrideVariableName @ 1462e19e0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FDataflowVariableOverrides::OverrideVariableName
          (FDataflowVariableOverrides *this,FName param_1,
          TArray<FName,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  EPropertyBagResult EVar4;
  uint uVar5;
  FPropertyBagPropertyDesc *pFVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  FGuid local_a8;
  TValueOrError<FPropertyBagArrayRef,EPropertyBagResult> local_98;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_d8;
  uVar8 = 0;
  local_a8.A = 0;
  local_a8.B = 0;
  local_a8.C = 0;
  local_a8.D = 0;
  pFVar6 = FInstancedPropertyBag::FindPropertyDescByName(&this->Variables,param_1);
  if (pFVar6 == (FPropertyBagPropertyDesc *)0x0) {
    return false;
  }
  FInstancedPropertyBag::GetMutableArrayRef(&this->Variables,&local_98,pFVar6);
  if (local_98.Variant.TypeIndex != '\0') {
    return false;
  }
  bVar9 = true;
  FScriptArrayHelper::EmptyValues((FScriptArrayHelper *)&local_98,0);
  FScriptArrayHelper::AddValues((FScriptArrayHelper *)&local_98,param_2->ArrayNum);
  iVar7 = param_2->ArrayNum;
  bVar2 = bVar9;
  if (0 < iVar7) {
    do {
      uVar5 = 0;
      if ((int)uVar8 < iVar7) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
        local_b0 = (longlong)iVar7;
        local_b8 = (longlong)(int)uVar8;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      EVar4 = FPropertyBagArrayRef::SetValueName
                        ((FPropertyBagArrayRef *)&local_98,uVar8,
                         *(FName *)((param_2->AllocatorInstance).Data + (longlong)(int)uVar8 * 8));
      bVar2 = false;
      if (EVar4 == Success) {
        bVar2 = bVar9;
      }
      uVar8 = uVar8 + 1;
      iVar7 = param_2->ArrayNum;
      bVar9 = bVar2;
    } while ((int)uVar8 < iVar7);
    if (bVar2 == false) goto LAB_1462e1b13;
  }
  local_a8.A = (pFVar6->ID).A;
  local_a8.B = (pFVar6->ID).B;
  local_a8.C = (pFVar6->ID).C;
  local_a8.D = (pFVar6->ID).D;
LAB_1462e1b13:
  if (bVar2 != false) {
    SetVariableOverrideAndNotify(this,&local_a8,true);
    return bVar2;
  }
  return false;
}

// OverrideVariableObject @ 1462e1b70

bool __thiscall
FDataflowVariableOverrides::OverrideVariableObject
          (FDataflowVariableOverrides *this,FName param_1,UObject *param_2)

{
  EPropertyBagResult EVar1;
  FPropertyBagPropertyDesc *pFVar2;
  
  pFVar2 = FInstancedPropertyBag::FindPropertyDescByName(&this->Variables,param_1);
  if (pFVar2 != (FPropertyBagPropertyDesc *)0x0) {
    EVar1 = FInstancedPropertyBag::SetValueObject(&this->Variables,pFVar2,param_2);
    if (EVar1 == Success) {
      SetVariableOverrideAndNotify(this,&pFVar2->ID,true);
      return true;
    }
  }
  return false;
}

// OverrideVariableObjectArray @ 1462e1be0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FDataflowVariableOverrides::OverrideVariableObjectArray
          (FDataflowVariableOverrides *this,FName param_1,
          TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  EPropertyBagResult EVar4;
  uint uVar5;
  FPropertyBagPropertyDesc *pFVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  bool bVar10;
  ulonglong uVar11;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  FGuid local_b8;
  TValueOrError<FPropertyBagArrayRef,EPropertyBagResult> local_a8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_e8;
  uVar9 = 0;
  local_b8.A = 0;
  local_b8.B = 0;
  local_b8.C = 0;
  local_b8.D = 0;
  pFVar6 = FInstancedPropertyBag::FindPropertyDescByName(&this->Variables,param_1);
  if (pFVar6 == (FPropertyBagPropertyDesc *)0x0) {
    return false;
  }
  FInstancedPropertyBag::GetMutableArrayRef(&this->Variables,&local_a8,pFVar6);
  if (local_a8.Variant.TypeIndex != '\0') {
    return false;
  }
  bVar10 = true;
  FScriptArrayHelper::EmptyValues((FScriptArrayHelper *)&local_a8,0);
  FScriptArrayHelper::AddValues((FScriptArrayHelper *)&local_a8,param_2->ArrayNum);
  iVar7 = param_2->ArrayNum;
  uVar11 = uVar9;
  bVar2 = bVar10;
  if (0 < iVar7) {
    do {
      uVar8 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar8 < iVar7) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
        local_c0 = (longlong)iVar7;
        local_c8 = (longlong)(int)uVar8;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      EVar4 = FPropertyBagArrayRef::SetValueObject
                        ((FPropertyBagArrayRef *)&local_a8,uVar8,
                         *(UObject **)((param_2->AllocatorInstance).Data + uVar11));
      bVar2 = false;
      if (EVar4 == Success) {
        bVar2 = bVar10;
      }
      uVar9 = (ulonglong)(uVar8 + 1);
      iVar7 = param_2->ArrayNum;
      uVar11 = uVar11 + 8;
      bVar10 = bVar2;
    } while ((int)(uVar8 + 1) < iVar7);
    if (bVar2 == false) goto LAB_1462e1d1c;
  }
  local_b8.A = (pFVar6->ID).A;
  local_b8.B = (pFVar6->ID).B;
  local_b8.C = (pFVar6->ID).C;
  local_b8.D = (pFVar6->ID).D;
LAB_1462e1d1c:
  if (bVar2 != false) {
    SetVariableOverrideAndNotify(this,&local_b8,true);
    return bVar2;
  }
  return false;
}

// OverrideVariableObjectArray @ 1462e1d80

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FDataflowVariableOverrides::OverrideVariableObjectArray
          (FDataflowVariableOverrides *this,FName param_1,
          TArray<TObjectPtr<UObject>,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  EPropertyBagResult EVar4;
  uint uVar5;
  FPropertyBagPropertyDesc *pFVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  bool bVar10;
  ulonglong uVar11;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  FGuid local_b8;
  TValueOrError<FPropertyBagArrayRef,EPropertyBagResult> local_a8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_e8;
  uVar9 = 0;
  local_b8.A = 0;
  local_b8.B = 0;
  local_b8.C = 0;
  local_b8.D = 0;
  pFVar6 = FInstancedPropertyBag::FindPropertyDescByName(&this->Variables,param_1);
  if (pFVar6 == (FPropertyBagPropertyDesc *)0x0) {
    return false;
  }
  FInstancedPropertyBag::GetMutableArrayRef(&this->Variables,&local_a8,pFVar6);
  if (local_a8.Variant.TypeIndex != '\0') {
    return false;
  }
  bVar10 = true;
  FScriptArrayHelper::EmptyValues((FScriptArrayHelper *)&local_a8,0);
  FScriptArrayHelper::AddValues((FScriptArrayHelper *)&local_a8,param_2->ArrayNum);
  iVar7 = param_2->ArrayNum;
  uVar11 = uVar9;
  bVar2 = bVar10;
  if (0 < iVar7) {
    do {
      uVar8 = (uint)uVar9;
      uVar5 = 0;
      if ((int)uVar8 < iVar7) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
        local_c0 = (longlong)iVar7;
        local_c8 = (longlong)(int)uVar8;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      EVar4 = FPropertyBagArrayRef::SetValueObject
                        ((FPropertyBagArrayRef *)&local_a8,uVar8,
                         *(UObject **)((param_2->AllocatorInstance).Data + uVar11));
      bVar2 = false;
      if (EVar4 == Success) {
        bVar2 = bVar10;
      }
      uVar9 = (ulonglong)(uVar8 + 1);
      iVar7 = param_2->ArrayNum;
      uVar11 = uVar11 + 8;
      bVar10 = bVar2;
    } while ((int)(uVar8 + 1) < iVar7);
    if (bVar2 == false) goto LAB_1462e1ebc;
  }
  local_b8.A = (pFVar6->ID).A;
  local_b8.B = (pFVar6->ID).B;
  local_b8.C = (pFVar6->ID).C;
  local_b8.D = (pFVar6->ID).D;
LAB_1462e1ebc:
  if (bVar2 != false) {
    SetVariableOverrideAndNotify(this,&local_b8,true);
    return bVar2;
  }
  return false;
}

// OverrideVariableString @ 1462e1f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __thiscall
FDataflowVariableOverrides::OverrideVariableString
          (FDataflowVariableOverrides *this,FName param_1,
          TArray<FString,TSizedDefaultAllocator<32>_> *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  EPropertyBagResult EVar4;
  uint uVar5;
  FPropertyBagPropertyDesc *pFVar6;
  int iVar7;
  uint uVar8;
  bool bVar9;
  undefined1 auStack_d8 [32];
  longlong local_b8;
  longlong local_b0;
  FGuid local_a8;
  TValueOrError<FPropertyBagArrayRef,EPropertyBagResult> local_98;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_d8;
  uVar8 = 0;
  local_a8.A = 0;
  local_a8.B = 0;
  local_a8.C = 0;
  local_a8.D = 0;
  pFVar6 = FInstancedPropertyBag::FindPropertyDescByName(&this->Variables,param_1);
  if (pFVar6 == (FPropertyBagPropertyDesc *)0x0) {
    return false;
  }
  FInstancedPropertyBag::GetMutableArrayRef(&this->Variables,&local_98,pFVar6);
  if (local_98.Variant.TypeIndex != '\0') {
    return false;
  }
  bVar9 = true;
  FScriptArrayHelper::EmptyValues((FScriptArrayHelper *)&local_98,0);
  FScriptArrayHelper::AddValues((FScriptArrayHelper *)&local_98,param_2->ArrayNum);
  iVar7 = param_2->ArrayNum;
  bVar2 = bVar9;
  if (0 < iVar7) {
    do {
      uVar5 = 0;
      if ((int)uVar8 < iVar7) {
        uVar5 = ~uVar8 >> 0x1f;
      }
      if (uVar5 == 0) {
        local_b0 = (longlong)iVar7;
        local_b8 = (longlong)(int)uVar8;
        bVar2 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar2) {
          pcVar1 = (code *)swi(3);
          uVar3 = (*pcVar1)();
          return (bool)uVar3;
        }
      }
      EVar4 = FPropertyBagArrayRef::SetValueString
                        ((FPropertyBagArrayRef *)&local_98,uVar8,
                         (FString *)
                         ((param_2->AllocatorInstance).Data + (longlong)(int)uVar8 * 0x10));
      bVar2 = false;
      if (EVar4 == Success) {
        bVar2 = bVar9;
      }
      uVar8 = uVar8 + 1;
      iVar7 = param_2->ArrayNum;
      bVar9 = bVar2;
    } while ((int)uVar8 < iVar7);
    if (bVar2 == false) goto LAB_1462e2053;
  }
  local_a8.A = (pFVar6->ID).A;
  local_a8.B = (pFVar6->ID).B;
  local_a8.C = (pFVar6->ID).C;
  local_a8.D = (pFVar6->ID).D;
LAB_1462e2053:
  if (bVar2 != false) {
    SetVariableOverrideAndNotify(this,&local_a8,true);
    return bVar2;
  }
  return false;
}

// OverrideVariableString @ 1462e20b0

bool __thiscall
FDataflowVariableOverrides::OverrideVariableString
          (FDataflowVariableOverrides *this,FName param_1,FString *param_2)

{
  FScriptContainerElement *pFVar1;
  EPropertyBagResult EVar2;
  FPropertyBagPropertyDesc *pFVar3;
  
  pFVar3 = FInstancedPropertyBag::FindPropertyDescByName(&this->Variables,param_1);
  if (pFVar3 != (FPropertyBagPropertyDesc *)0x0) {
    EVar2 = FInstancedPropertyBag::SetValueString(&this->Variables,pFVar3,param_2);
    if (EVar2 == Success) {
      SetVariableOverrideAndNotify(this,&pFVar3->ID,true);
      pFVar1 = (param_2->Data).AllocatorInstance.Data;
      if (pFVar1 != (FScriptContainerElement *)0x0) {
        FMemory::Free(pFVar1);
      }
      return true;
    }
  }
  pFVar1 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  return false;
}

// RemoveAllVariables @ 1462e37c0

void __thiscall FDataflowVariableOverrides::RemoveAllVariables(FDataflowVariableOverrides *this)

{
  FInstancedStruct::Reset((FInstancedStruct *)this);
  (this->OverriddenVariableGuids).ArrayNum = 0;
  if ((this->OverriddenVariableGuids).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&(this->OverriddenVariableGuids).AllocatorInstance,0,
               &(this->OverriddenVariableGuids).ArrayMax);
  }
  return;
}

// RemoveOverridenVariablesNotInDataflowAsset @ 1462e38a0

void __thiscall
FDataflowVariableOverrides::RemoveOverridenVariablesNotInDataflowAsset
          (FDataflowVariableOverrides *this)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  int iVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  UPropertyBag *this_00;
  FPropertyBagPropertyDesc *pFVar8;
  uint uVar9;
  FGuid local_38;
  
  if ((this->OverriddenVariableGuids).ArrayNum != 0) {
    this_00 = FInstancedPropertyBag::GetPropertyBagStruct(&this->Variables);
    if (this_00 == (UPropertyBag *)0x0) {
      (this->OverriddenVariableGuids).ArrayNum = 0;
      if ((this->OverriddenVariableGuids).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (0x10,4,0,&(this->OverriddenVariableGuids).AllocatorInstance,0,
                   &(this->OverriddenVariableGuids).ArrayMax);
        return;
      }
    }
    else {
      for (uVar9 = 0; (-1 < (int)uVar9 && ((int)uVar9 < (this->OverriddenVariableGuids).ArrayNum));
          uVar9 = uVar9 + 1) {
        if (((int)uVar9 < 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (this->OverriddenVariableGuids).AllocatorInstance.Data +
                 (longlong)(int)uVar9 * 0x10;
        local_38._0_8_ = *(undefined8 *)pFVar2;
        local_38._8_8_ = *(undefined8 *)(pFVar2 + 8);
        pFVar8 = UPropertyBag::FindPropertyDescByID(this_00,&local_38);
        if (pFVar8 == (FPropertyBagPropertyDesc *)0x0) {
          uVar6 = 0;
          if ((int)uVar9 < (this->OverriddenVariableGuids).ArrayNum) {
            uVar6 = ~uVar9 >> 0x1f;
          }
          if ((uVar6 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar4 = (code *)swi(3);
            (*pcVar4)();
            return;
          }
          iVar3 = (this->OverriddenVariableGuids).ArrayNum;
          pFVar2 = (this->OverriddenVariableGuids).AllocatorInstance.Data;
          iVar7 = iVar3 + ~uVar9;
          if (1 < iVar7) {
            iVar7 = 1;
          }
          if (iVar7 != 0) {
            memmove(pFVar2 + (longlong)(int)uVar9 * 0x10,pFVar2 + (longlong)(iVar3 - iVar7) * 0x10,
                    (longlong)iVar7 << 4);
          }
          piVar1 = &(this->OverriddenVariableGuids).ArrayNum;
          *piVar1 = *piVar1 + -1;
          UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x10,4,&(this->OverriddenVariableGuids).AllocatorInstance,
                     (this->OverriddenVariableGuids).ArrayNum,
                     &(this->OverriddenVariableGuids).ArrayMax);
          uVar9 = uVar9 - 1;
        }
      }
    }
  }
  return;
}

// SetVariableOverridden @ 1462e5f00

void __thiscall
FDataflowVariableOverrides::SetVariableOverridden
          (FDataflowVariableOverrides *this,FGuid *param_1,bool param_2)

{
  SetVariableOverrideAndNotify(this,param_1,param_2);
  SyncVariables(this);
  return;
}

// SetVariableOverrideAndNotify @ 1462e5f30

void __thiscall
FDataflowVariableOverrides::SetVariableOverrideAndNotify
          (FDataflowVariableOverrides *this,FGuid *param_1,bool param_2)

{
  FName FVar1;
  longlong *plVar2;
  code *pcVar3;
  bool bVar4;
  bool bVar5;
  char cVar6;
  uint uVar7;
  FPropertyBagPropertyDesc *pFVar8;
  longlong lVar9;
  uint uVar10;
  UDataflow *pUVar11;
  FGuid local_48;
  FDestructionSentinel local_38;
  
  local_48.A = param_1->A;
  local_48.B = param_1->B;
  local_48.C = param_1->C;
  local_48.D = param_1->D;
  pFVar8 = FInstancedPropertyBag::FindPropertyDescByID(&this->Variables,&local_48);
  if (pFVar8 != (FPropertyBagPropertyDesc *)0x0) {
    if (param_2) {
      TArray<FGuid,TSizedDefaultAllocator<32>_>::AddUniqueImpl<FGuid_const_&>
                (&this->OverriddenVariableGuids,&pFVar8->ID);
    }
    else {
      TArray<FGuid,TSizedDefaultAllocator<32>_>::Remove(&this->OverriddenVariableGuids,&pFVar8->ID);
    }
    bVar4 = TMulticastDelegateBase<FDefaultDelegateUserPolicy>::IsBound
                      ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                       &FDataflowAssetDelegates::OnVariablesOverrideStateChanged);
    if (bVar4) {
      if (this->Owner == (FDataflowInstance *)0x0) {
        pUVar11 = (UDataflow *)0x0;
      }
      else {
        pUVar11 = (this->Owner->DataflowAsset).field0_0x0.DebugPtr;
      }
      FVar1 = pFVar8->Name;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)
                 &FDataflowAssetDelegates::OnVariablesOverrideStateChanged,
                 (FWriteAccessScope *)&local_38);
      bVar4 = false;
      FDataflowAssetDelegates::OnVariablesOverrideStateChanged._28_4_ =
           FDataflowAssetDelegates::OnVariablesOverrideStateChanged._28_4_ + 1;
      uVar10 = FDataflowAssetDelegates::OnVariablesOverrideStateChanged._16_4_ - 1;
      if (-1 < (int)uVar10) {
        lVar9 = (longlong)(int)uVar10 << 4;
        bVar4 = false;
        do {
          uVar7 = 0;
          if ((int)uVar10 < (int)FDataflowAssetDelegates::OnVariablesOverrideStateChanged._16_4_) {
            uVar7 = ~uVar10 >> 0x1f;
          }
          if ((uVar7 == 0) &&
             (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                ("(Index >= 0) & (Index < ArrayNum)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x447,
                                 L"Array index out of bounds: %lld into an array of size %lld"),
             bVar5)) {
            pcVar3 = (code *)swi(3);
            (*pcVar3)();
            return;
          }
          if (((*(int *)(lVar9 + 8 + FDataflowAssetDelegates::OnVariablesOverrideStateChanged._8_8_)
                == 0) ||
              (plVar2 = *(longlong **)
                         (lVar9 + FDataflowAssetDelegates::OnVariablesOverrideStateChanged._8_8_),
              plVar2 == (longlong *)0x0)) ||
             (cVar6 = (**(code **)(*plVar2 + 0x68))(plVar2,pUVar11,FVar1,param_2), cVar6 == '\0')) {
            bVar4 = true;
          }
          lVar9 = lVar9 + -0x10;
          uVar10 = uVar10 - 1;
        } while (-1 < (int)uVar10);
      }
      FDataflowAssetDelegates::OnVariablesOverrideStateChanged._28_4_ =
           FDataflowAssetDelegates::OnVariablesOverrideStateChanged._28_4_ + -1;
      if (bVar4) {
        TMulticastDelegateBase<FDefaultDelegateUserPolicy>::CompactInvocationList
                  ((TMulticastDelegateBase<FDefaultDelegateUserPolicy> *)
                   &FDataflowAssetDelegates::OnVariablesOverrideStateChanged,false);
      }
      if (local_38.bDestroyed == false) {
        FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_38.Accessor,&local_38);
      }
    }
  }
  return;
}

// SyncVariables @ 1462e6620

void __thiscall FDataflowVariableOverrides::SyncVariables(FDataflowVariableOverrides *this)

{
  FInstancedPropertyBag *pFVar1;
  int iVar2;
  UDataflow *pUVar3;
  FGuid *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined4 uStack_1c;
  TArrayView<FGuid_const_,int> local_18;
  
  if ((this->Owner != (FDataflowInstance *)0x0) &&
     (pUVar3 = (this->Owner->DataflowAsset).field0_0x0.DebugPtr, pUVar3 != (UDataflow *)0x0)) {
    pFVar1 = &pUVar3->Variables;
    if (pFVar1 != (FInstancedPropertyBag *)0x0) {
      pFVar4 = (FGuid *)(this->OverriddenVariableGuids).AllocatorInstance.Data;
      iVar2 = (this->OverriddenVariableGuids).ArrayNum;
      if ((iVar2 < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("InCount >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                             ,0xeb,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
      local_18._12_4_ = uStack_1c;
      local_18.ArrayNum = iVar2;
      local_18.DataPtr = pFVar4;
      FInstancedPropertyBag::MigrateToNewBagInstanceWithOverrides(&this->Variables,pFVar1,&local_18)
      ;
      RemoveOverridenVariablesNotInDataflowAsset(this);
      return;
    }
  }
  FInstancedStruct::Reset((FInstancedStruct *)this);
  (this->OverriddenVariableGuids).ArrayNum = 0;
  if ((this->OverriddenVariableGuids).ArrayMax < 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,4,0,&(this->OverriddenVariableGuids).AllocatorInstance,0,
               &(this->OverriddenVariableGuids).ArrayMax);
  }
  return;
}

