// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: DataflowEngine
// Functions: 26

// StaticClass @ 1462bfff0

UClass * __cdecl UDataflowBlueprintLibrary::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataflowBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DataflowEngine",L"DataflowBlueprintLibrary",
               &Z_Registration_Info_UClass_UDataflowBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUDataflowBlueprintLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDataflowBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UDataflowBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataflowBlueprintLibrary.InnerSingleton;
}

// UDataflowBlueprintLibrary @ 1462cf0a0

UDataflowBlueprintLibrary * __thiscall
UDataflowBlueprintLibrary::UDataflowBlueprintLibrary
          (UDataflowBlueprintLibrary *this,FVTableHelper *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UDataflowBlueprintLibrary__6B_;
  return this;
}

// UDataflowBlueprintLibrary @ 1462cf0d0

UDataflowBlueprintLibrary * __thiscall
UDataflowBlueprintLibrary::UDataflowBlueprintLibrary
          (UDataflowBlueprintLibrary *this,FObjectInitializer *param_1)

{
  UBlueprintFunctionLibrary::UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this,param_1);
  *(undefined ***)this = &___7UDataflowBlueprintLibrary__6B_;
  return this;
}

// ~UDataflowBlueprintLibrary @ 1462d0240

void __thiscall
UDataflowBlueprintLibrary::~UDataflowBlueprintLibrary(UDataflowBlueprintLibrary *this)

{
  *(undefined ***)this = &___7UDataflowBlueprintLibrary__6B_;
  UBlueprintFunctionLibrary::~UBlueprintFunctionLibrary((UBlueprintFunctionLibrary *)this);
  return;
}

// EvaluateTerminalNodeByName @ 1462daea0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
UDataflowBlueprintLibrary::EvaluateTerminalNodeByName
          (UDataflow *param_1,FName param_2,UObject *param_3)

{
  FGraph *this;
  code *pcVar1;
  bool bVar2;
  FDataflowNode *this_00;
  FName local_res10 [3];
  undefined1 auStack_438 [32];
  FName local_418;
  FName local_410;
  UObject *local_408;
  FString local_400;
  TSharedPtr<FDataflowNode,1> local_3f0;
  FString local_3e0;
  FString local_3d0;
  FString local_3c0;
  FContext local_3b0;
  UObject *local_50;
  ulonglong local_48;
  
  if (param_1 != (UDataflow *)0x0) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_438;
    this = (param_1->Dataflow).Object;
    if (this != (FGraph *)0x0) {
      local_res10[0] = param_2;
      ::FName::FName(&local_418,"FDataflowTerminalNode");
      UE::Dataflow::FGraph::FindFilteredNode(this,&local_3f0,&local_418,param_2);
      if (local_3f0.Object == (FDataflowNode *)0x0) {
        if (2 < (byte)LogChaos._0_1_) {
          ::FName::ToString(local_res10,&local_3c0);
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogChaos);
          if (local_3c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_3c0.Data.AllocatorInstance.Data);
          }
        }
      }
      else {
        if ((local_3f0.Object == (FDataflowNode *)0x0) &&
           (bVar2 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValid()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\SharedPointer.h"
                               ,0x458,L""), bVar2)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        this_00 = (FDataflowNode *)
                  FDataflowNode::AsType<FDataflowTerminalNode_const_>(local_3f0.Object);
        if (this_00 != (FDataflowNode *)0x0) {
          if (5 < (byte)LogChaosDataflow._0_1_) {
            ::FName::ToString(local_res10,&local_3e0);
            UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaosDataflow);
            if (local_3e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_3e0.Data.AllocatorInstance.Data);
            }
          }
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(param_3);
          }
          memset(&local_3b0,0,0x360);
          UE::Dataflow::FContext::FContext(&local_3b0);
          local_3b0._padding_ =
               (longlong)
               &UE::Dataflow::TEngineContext<UE::Dataflow::FContextSingle>::
                _vftable__for__UE__Dataflow__IContextCacheStore__;
          local_3b0._padding_ =
               (longlong)
               &UE::Dataflow::TEngineContext<UE::Dataflow::FContextSingle>::
                _vftable__for__UE__Dataflow__IContextAssetStoreInterface__;
          local_50 = param_3;
          if ((UE::GC::GIsIncrementalReachabilityPending != false) && (param_3 != (UObject *)0x0)) {
            UE::GC::MarkAsReachable(param_3);
          }
          (**(code **)(this_00->_padding_ + 0x160))(this_00);
          bVar2 = FDataflowNode::IsActive(this_00,false);
          if ((bVar2) && (param_3 != (UObject *)0x0)) {
            if (5 < (byte)LogChaosDataflow._0_1_) {
              local_410.ComparisonIndex.Value = *(uint *)&param_3->field_0x18;
              local_410.Number = *(uint *)&param_3->field_0x1c;
              ::FName::ToString(&local_410,&local_400);
              ::FName::ToString(local_res10,&local_3d0);
              UE::Logging::Private::BasicLog<6>(&::LOG_Static,(FLogCategoryBase *)&LogChaosDataflow)
              ;
              if (local_3d0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_3d0.Data.AllocatorInstance.Data);
              }
              if (local_400.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_400.Data.AllocatorInstance.Data);
              }
            }
            pcVar1 = *(code **)(this_00->_padding_ + 0x158);
            local_408 = param_3;
            if (UE::GC::GIsIncrementalReachabilityPending != false) {
              UE::GC::MarkAsReachable(param_3);
            }
            (*pcVar1)(this_00,&local_408,&local_3b0);
          }
          local_3b0._padding_ =
               (longlong)
               &UE::Dataflow::TEngineContext<UE::Dataflow::FContextSingle>::
                _vftable__for__UE__Dataflow__IContextCacheStore__;
          local_3b0._padding_ =
               (longlong)
               &UE::Dataflow::TEngineContext<UE::Dataflow::FContextSingle>::
                _vftable__for__UE__Dataflow__IContextAssetStoreInterface__;
          UE::Dataflow::FContext::~FContext(&local_3b0);
        }
      }
      SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
                (local_3f0.SharedReferenceCount.ReferenceController);
    }
  }
  return;
}

// GetPrivateStaticClass @ 1462ddbb0

UClass * __cdecl UDataflowBlueprintLibrary::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDataflowBlueprintLibrary.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/DataflowEngine",L"DataflowBlueprintLibrary",
               &Z_Registration_Info_UClass_UDataflowBlueprintLibrary.InnerSingleton,
               StaticRegisterNativesUDataflowBlueprintLibrary,0x28,8,CLASS_Intrinsic,CASTCLASS_None,
               L"Engine",InternalConstructor<UDataflowBlueprintLibrary>,
               InternalVTableHelperCtorCaller<UDataflowBlueprintLibrary>,local_res8,
               UBlueprintFunctionLibrary::StaticClass,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDataflowBlueprintLibrary.InnerSingleton;
}

// OverrideDataflowVariableBool @ 1462e0780

bool __cdecl
UDataflowBlueprintLibrary::OverrideDataflowVariableBool(UObject *param_1,FName param_2,bool param_3)

{
  FDataflowVariableOverrides *this;
  EPropertyBagResult EVar1;
  UClass *pUVar2;
  longlong *plVar3;
  longlong lVar4;
  FPropertyBagPropertyDesc *pFVar5;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = UDataflowInstanceInterface::StaticClass();
    plVar3 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar2);
    if (plVar3 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
      this = (FDataflowVariableOverrides *)(lVar4 + 0x10);
      pFVar5 = FInstancedPropertyBag::FindPropertyDescByName((FInstancedPropertyBag *)this,param_2);
      if (pFVar5 != (FPropertyBagPropertyDesc *)0x0) {
        EVar1 = FInstancedPropertyBag::SetValueBool((FInstancedPropertyBag *)this,pFVar5,param_3);
        if (EVar1 == Success) {
          FDataflowVariableOverrides::SetVariableOverrideAndNotify(this,&pFVar5->ID,true);
          return true;
        }
      }
    }
  }
  return false;
}

// OverrideDataflowVariableBoolArray @ 1462e0830

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UDataflowBlueprintLibrary::OverrideDataflowVariableBoolArray
          (UObject *param_1,FName param_2,TArray<bool,TSizedDefaultAllocator<32>_> *param_3)

{
  FDataflowVariableOverrides *this;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  EPropertyBagResult EVar4;
  uint uVar5;
  UClass *pUVar6;
  longlong *plVar7;
  longlong lVar8;
  FPropertyBagPropertyDesc *pFVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  bool bVar13;
  ulonglong uVar14;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  FGuid local_b8;
  TValueOrError<FPropertyBagArrayRef,EPropertyBagResult> local_a8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_1 == (UObject *)0x0) {
    return false;
  }
  pUVar6 = UDataflowInstanceInterface::StaticClass();
  plVar7 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar6);
  if (plVar7 == (longlong *)0x0) {
    return false;
  }
  lVar8 = (**(code **)(*plVar7 + 0x10))(plVar7);
  uVar12 = 0;
  local_b8.A = 0;
  local_b8.B = 0;
  local_b8.C = 0;
  local_b8.D = 0;
  this = (FDataflowVariableOverrides *)(lVar8 + 0x10);
  pFVar9 = FInstancedPropertyBag::FindPropertyDescByName((FInstancedPropertyBag *)this,param_2);
  if (pFVar9 == (FPropertyBagPropertyDesc *)0x0) {
    return false;
  }
  FInstancedPropertyBag::GetMutableArrayRef((FInstancedPropertyBag *)this,&local_a8,pFVar9);
  if (local_a8.Variant.TypeIndex != '\0') {
    return false;
  }
  bVar13 = true;
  bVar2 = true;
  FScriptArrayHelper::EmptyValues((FScriptArrayHelper *)&local_a8,0);
  FScriptArrayHelper::AddValues((FScriptArrayHelper *)&local_a8,param_3->ArrayNum);
  iVar10 = param_3->ArrayNum;
  uVar14 = uVar12;
  if (0 < iVar10) {
    do {
      uVar11 = (uint)uVar12;
      uVar5 = 0;
      if ((int)uVar11 < iVar10) {
        uVar5 = ~uVar11 >> 0x1f;
      }
      if (uVar5 == 0) {
        local_c0 = (longlong)iVar10;
        local_c8 = (longlong)(int)uVar11;
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
                        ((FPropertyBagArrayRef *)&local_a8,uVar11,
                         (bool)(param_3->AllocatorInstance).Data[uVar14]);
      bVar2 = false;
      if (EVar4 == Success) {
        bVar2 = bVar13;
      }
      uVar12 = (ulonglong)(uVar11 + 1);
      iVar10 = param_3->ArrayNum;
      uVar14 = uVar14 + 1;
      bVar13 = bVar2;
    } while ((int)(uVar11 + 1) < iVar10);
    if (bVar2 == false) goto LAB_1462e09ac;
  }
  local_b8.A = (pFVar9->ID).A;
  local_b8.B = (pFVar9->ID).B;
  local_b8.C = (pFVar9->ID).C;
  local_b8.D = (pFVar9->ID).D;
LAB_1462e09ac:
  if (bVar2 != false) {
    FDataflowVariableOverrides::SetVariableOverrideAndNotify(this,&local_b8,true);
    return bVar2;
  }
  return false;
}

// OverrideDataflowVariableFloat @ 1462e0a10

bool __cdecl
UDataflowBlueprintLibrary::OverrideDataflowVariableFloat
          (UObject *param_1,FName param_2,float param_3)

{
  FDataflowVariableOverrides *this;
  EPropertyBagResult EVar1;
  UClass *pUVar2;
  longlong *plVar3;
  longlong lVar4;
  FPropertyBagPropertyDesc *pFVar5;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = UDataflowInstanceInterface::StaticClass();
    plVar3 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar2);
    if (plVar3 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
      this = (FDataflowVariableOverrides *)(lVar4 + 0x10);
      pFVar5 = FInstancedPropertyBag::FindPropertyDescByName((FInstancedPropertyBag *)this,param_2);
      if (pFVar5 != (FPropertyBagPropertyDesc *)0x0) {
        EVar1 = FInstancedPropertyBag::SetValueFloat((FInstancedPropertyBag *)this,pFVar5,param_3);
        if (EVar1 == Success) {
          FDataflowVariableOverrides::SetVariableOverrideAndNotify(this,&pFVar5->ID,true);
          return true;
        }
      }
    }
  }
  return false;
}

// OverrideDataflowVariableFloatArray @ 1462e0ab0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UDataflowBlueprintLibrary::OverrideDataflowVariableFloatArray
          (UObject *param_1,FName param_2,TArray<float,TSizedDefaultAllocator<32>_> *param_3)

{
  FDataflowVariableOverrides *this;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  EPropertyBagResult EVar4;
  uint uVar5;
  UClass *pUVar6;
  longlong *plVar7;
  longlong lVar8;
  FPropertyBagPropertyDesc *pFVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  bool bVar14;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  FGuid local_b8;
  TValueOrError<FPropertyBagArrayRef,EPropertyBagResult> local_a8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_1 == (UObject *)0x0) {
    return false;
  }
  pUVar6 = UDataflowInstanceInterface::StaticClass();
  plVar7 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar6);
  if (plVar7 == (longlong *)0x0) {
    return false;
  }
  lVar8 = (**(code **)(*plVar7 + 0x10))(plVar7);
  uVar12 = 0;
  local_b8.A = 0;
  local_b8.B = 0;
  local_b8.C = 0;
  local_b8.D = 0;
  this = (FDataflowVariableOverrides *)(lVar8 + 0x10);
  pFVar9 = FInstancedPropertyBag::FindPropertyDescByName((FInstancedPropertyBag *)this,param_2);
  if (pFVar9 == (FPropertyBagPropertyDesc *)0x0) {
    return false;
  }
  FInstancedPropertyBag::GetMutableArrayRef((FInstancedPropertyBag *)this,&local_a8,pFVar9);
  if (local_a8.Variant.TypeIndex != '\0') {
    return false;
  }
  bVar14 = true;
  bVar2 = true;
  FScriptArrayHelper::EmptyValues((FScriptArrayHelper *)&local_a8,0);
  FScriptArrayHelper::AddValues((FScriptArrayHelper *)&local_a8,param_3->ArrayNum);
  iVar10 = param_3->ArrayNum;
  uVar13 = uVar12;
  if (0 < iVar10) {
    do {
      uVar11 = (uint)uVar12;
      uVar5 = 0;
      if ((int)uVar11 < iVar10) {
        uVar5 = ~uVar11 >> 0x1f;
      }
      if (uVar5 == 0) {
        local_c0 = (longlong)iVar10;
        local_c8 = (longlong)(int)uVar11;
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
                        ((FPropertyBagArrayRef *)&local_a8,uVar11,
                         *(float *)((param_3->AllocatorInstance).Data + uVar13));
      bVar2 = false;
      if (EVar4 == Success) {
        bVar2 = bVar14;
      }
      uVar12 = (ulonglong)(uVar11 + 1);
      iVar10 = param_3->ArrayNum;
      uVar13 = uVar13 + 4;
      bVar14 = bVar2;
    } while ((int)(uVar11 + 1) < iVar10);
    if (bVar2 == false) goto LAB_1462e0c2e;
  }
  local_b8.A = (pFVar9->ID).A;
  local_b8.B = (pFVar9->ID).B;
  local_b8.C = (pFVar9->ID).C;
  local_b8.D = (pFVar9->ID).D;
LAB_1462e0c2e:
  if (bVar2 != false) {
    FDataflowVariableOverrides::SetVariableOverrideAndNotify(this,&local_b8,true);
    return bVar2;
  }
  return false;
}

// OverrideDataflowVariableInt @ 1462e0ca0

bool __cdecl
UDataflowBlueprintLibrary::OverrideDataflowVariableInt
          (UObject *param_1,FName param_2,long64 param_3)

{
  FDataflowVariableOverrides *this;
  EPropertyBagResult EVar1;
  UClass *pUVar2;
  longlong *plVar3;
  longlong lVar4;
  FPropertyBagPropertyDesc *pFVar5;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = UDataflowInstanceInterface::StaticClass();
    plVar3 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar2);
    if (plVar3 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
      this = (FDataflowVariableOverrides *)(lVar4 + 0x10);
      pFVar5 = FInstancedPropertyBag::FindPropertyDescByName((FInstancedPropertyBag *)this,param_2);
      if (pFVar5 != (FPropertyBagPropertyDesc *)0x0) {
        EVar1 = FInstancedPropertyBag::SetValueInt64((FInstancedPropertyBag *)this,pFVar5,param_3);
        if (EVar1 == Success) {
          FDataflowVariableOverrides::SetVariableOverrideAndNotify(this,&pFVar5->ID,true);
          return true;
        }
      }
    }
  }
  return false;
}

// OverrideDataflowVariableIntArray @ 1462e0d40

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UDataflowBlueprintLibrary::OverrideDataflowVariableIntArray
          (UObject *param_1,FName param_2,TArray<int,TSizedDefaultAllocator<32>_> *param_3)

{
  FDataflowVariableOverrides *this;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  EPropertyBagResult EVar4;
  uint uVar5;
  UClass *pUVar6;
  longlong *plVar7;
  longlong lVar8;
  FPropertyBagPropertyDesc *pFVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  bool bVar13;
  ulonglong uVar14;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  FGuid local_b8;
  TValueOrError<FPropertyBagArrayRef,EPropertyBagResult> local_a8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_1 == (UObject *)0x0) {
    return false;
  }
  pUVar6 = UDataflowInstanceInterface::StaticClass();
  plVar7 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar6);
  if (plVar7 == (longlong *)0x0) {
    return false;
  }
  lVar8 = (**(code **)(*plVar7 + 0x10))(plVar7);
  uVar12 = 0;
  local_b8.A = 0;
  local_b8.B = 0;
  local_b8.C = 0;
  local_b8.D = 0;
  this = (FDataflowVariableOverrides *)(lVar8 + 0x10);
  pFVar9 = FInstancedPropertyBag::FindPropertyDescByName((FInstancedPropertyBag *)this,param_2);
  if (pFVar9 == (FPropertyBagPropertyDesc *)0x0) {
    return false;
  }
  FInstancedPropertyBag::GetMutableArrayRef((FInstancedPropertyBag *)this,&local_a8,pFVar9);
  if (local_a8.Variant.TypeIndex != '\0') {
    return false;
  }
  bVar13 = true;
  bVar2 = true;
  FScriptArrayHelper::EmptyValues((FScriptArrayHelper *)&local_a8,0);
  FScriptArrayHelper::AddValues((FScriptArrayHelper *)&local_a8,param_3->ArrayNum);
  iVar10 = param_3->ArrayNum;
  uVar14 = uVar12;
  if (0 < iVar10) {
    do {
      uVar11 = (uint)uVar12;
      uVar5 = 0;
      if ((int)uVar11 < iVar10) {
        uVar5 = ~uVar11 >> 0x1f;
      }
      if (uVar5 == 0) {
        local_c0 = (longlong)iVar10;
        local_c8 = (longlong)(int)uVar11;
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
                        ((FPropertyBagArrayRef *)&local_a8,uVar11,
                         *(int *)((param_3->AllocatorInstance).Data + uVar14));
      bVar2 = false;
      if (EVar4 == Success) {
        bVar2 = bVar13;
      }
      uVar12 = (ulonglong)(uVar11 + 1);
      iVar10 = param_3->ArrayNum;
      uVar14 = uVar14 + 4;
      bVar13 = bVar2;
    } while ((int)(uVar11 + 1) < iVar10);
    if (bVar2 == false) goto LAB_1462e0ebc;
  }
  local_b8.A = (pFVar9->ID).A;
  local_b8.B = (pFVar9->ID).B;
  local_b8.C = (pFVar9->ID).C;
  local_b8.D = (pFVar9->ID).D;
LAB_1462e0ebc:
  if (bVar2 != false) {
    FDataflowVariableOverrides::SetVariableOverrideAndNotify(this,&local_b8,true);
    return bVar2;
  }
  return false;
}

// OverrideDataflowVariableObject @ 1462e0f20

bool __cdecl
UDataflowBlueprintLibrary::OverrideDataflowVariableObject
          (UObject *param_1,FName param_2,UObject *param_3)

{
  FDataflowVariableOverrides *this;
  EPropertyBagResult EVar1;
  UClass *pUVar2;
  longlong *plVar3;
  longlong lVar4;
  FPropertyBagPropertyDesc *pFVar5;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = UDataflowInstanceInterface::StaticClass();
    plVar3 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar2);
    if (plVar3 != (longlong *)0x0) {
      lVar4 = (**(code **)(*plVar3 + 0x10))(plVar3);
      this = (FDataflowVariableOverrides *)(lVar4 + 0x10);
      pFVar5 = FInstancedPropertyBag::FindPropertyDescByName((FInstancedPropertyBag *)this,param_2);
      if (pFVar5 != (FPropertyBagPropertyDesc *)0x0) {
        EVar1 = FInstancedPropertyBag::SetValueObject((FInstancedPropertyBag *)this,pFVar5,param_3);
        if (EVar1 == Success) {
          FDataflowVariableOverrides::SetVariableOverrideAndNotify(this,&pFVar5->ID,true);
          return true;
        }
      }
    }
  }
  return false;
}

// OverrideDataflowVariableObjectArray @ 1462e0fc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool __cdecl
UDataflowBlueprintLibrary::OverrideDataflowVariableObjectArray
          (UObject *param_1,FName param_2,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_3)

{
  FDataflowVariableOverrides *this;
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  EPropertyBagResult EVar4;
  uint uVar5;
  UClass *pUVar6;
  longlong *plVar7;
  longlong lVar8;
  FPropertyBagPropertyDesc *pFVar9;
  int iVar10;
  uint uVar11;
  ulonglong uVar12;
  bool bVar13;
  ulonglong uVar14;
  undefined1 auStack_e8 [32];
  longlong local_c8;
  longlong local_c0;
  FGuid local_b8;
  TValueOrError<FPropertyBagArrayRef,EPropertyBagResult> local_a8;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_1 == (UObject *)0x0) {
    return false;
  }
  pUVar6 = UDataflowInstanceInterface::StaticClass();
  plVar7 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar6);
  if (plVar7 == (longlong *)0x0) {
    return false;
  }
  lVar8 = (**(code **)(*plVar7 + 0x10))(plVar7);
  uVar12 = 0;
  local_b8.A = 0;
  local_b8.B = 0;
  local_b8.C = 0;
  local_b8.D = 0;
  this = (FDataflowVariableOverrides *)(lVar8 + 0x10);
  pFVar9 = FInstancedPropertyBag::FindPropertyDescByName((FInstancedPropertyBag *)this,param_2);
  if (pFVar9 == (FPropertyBagPropertyDesc *)0x0) {
    return false;
  }
  FInstancedPropertyBag::GetMutableArrayRef((FInstancedPropertyBag *)this,&local_a8,pFVar9);
  if (local_a8.Variant.TypeIndex != '\0') {
    return false;
  }
  bVar13 = true;
  bVar2 = true;
  FScriptArrayHelper::EmptyValues((FScriptArrayHelper *)&local_a8,0);
  FScriptArrayHelper::AddValues((FScriptArrayHelper *)&local_a8,param_3->ArrayNum);
  iVar10 = param_3->ArrayNum;
  uVar14 = uVar12;
  if (0 < iVar10) {
    do {
      uVar11 = (uint)uVar12;
      uVar5 = 0;
      if ((int)uVar11 < iVar10) {
        uVar5 = ~uVar11 >> 0x1f;
      }
      if (uVar5 == 0) {
        local_c0 = (longlong)iVar10;
        local_c8 = (longlong)(int)uVar11;
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
                        ((FPropertyBagArrayRef *)&local_a8,uVar11,
                         *(UObject **)((param_3->AllocatorInstance).Data + uVar14));
      bVar2 = false;
      if (EVar4 == Success) {
        bVar2 = bVar13;
      }
      uVar12 = (ulonglong)(uVar11 + 1);
      iVar10 = param_3->ArrayNum;
      uVar14 = uVar14 + 8;
      bVar13 = bVar2;
    } while ((int)(uVar11 + 1) < iVar10);
    if (bVar2 == false) goto LAB_1462e113c;
  }
  local_b8.A = (pFVar9->ID).A;
  local_b8.B = (pFVar9->ID).B;
  local_b8.C = (pFVar9->ID).C;
  local_b8.D = (pFVar9->ID).D;
LAB_1462e113c:
  if (bVar2 != false) {
    FDataflowVariableOverrides::SetVariableOverrideAndNotify(this,&local_b8,true);
    return bVar2;
  }
  return false;
}

// RegenerateAssetFromDataflow @ 1462e2d40

bool __cdecl UDataflowBlueprintLibrary::RegenerateAssetFromDataflow(UObject *param_1,bool param_2)

{
  bool bVar1;
  UClass *pUVar2;
  longlong *plVar3;
  FDataflowInstance *this;
  
  if (param_1 != (UObject *)0x0) {
    pUVar2 = UDataflowInstanceInterface::StaticClass();
    plVar3 = UObjectBaseUtility::GetInterfaceAddress((UObjectBaseUtility *)param_1,pUVar2);
    if (plVar3 != (longlong *)0x0) {
      this = (FDataflowInstance *)(**(code **)(*plVar3 + 0x10))(plVar3);
      bVar1 = FDataflowInstance::UpdateOwnerAsset(this,param_2);
      return bVar1;
    }
  }
  return false;
}

// StaticRegisterNativesUDataflowBlueprintLibrary @ 1462e6200

void __cdecl UDataflowBlueprintLibrary::StaticRegisterNativesUDataflowBlueprintLibrary(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 10;
  local_18.DataPtr = Z_Construct_UClass_UDataflowBlueprintLibrary_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execEvaluateTerminalNodeByName @ 1462e9010

void __cdecl
UDataflowBlueprintLibrary::execEvaluateTerminalNodeByName
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  FName local_res10 [2];
  UObject *local_res20;
  UDataflow *local_18 [2];
  
  local_18[0] = (UDataflow *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_18);
  }
  local_res10[0].ComparisonIndex.Value = 0;
  local_res10[0].Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
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
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  EvaluateTerminalNodeByName(local_18[0],local_res10[0],local_res20);
  return;
}

// execOverrideDataflowVariableBool @ 1462e9120

void __cdecl
UDataflowBlueprintLibrary::execOverrideDataflowVariableBool
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FDataflowVariableOverrides *this;
  FField **ppFVar1;
  FProperty *pFVar2;
  FName FVar3;
  UObjectBaseUtility *this_00;
  EPropertyBagResult EVar4;
  UClass *pUVar5;
  longlong *plVar6;
  longlong lVar7;
  FPropertyBagPropertyDesc *pFVar8;
  bool bVar9;
  int local_res10 [2];
  FName local_res18;
  UObjectBaseUtility *local_res20;
  
  local_res20 = (UObjectBaseUtility *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  this_00 = local_res20;
  FVar3 = local_res18;
  bVar9 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 != (UObjectBaseUtility *)0x0) {
    pUVar5 = UDataflowInstanceInterface::StaticClass();
    plVar6 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar5);
    if (plVar6 != (longlong *)0x0) {
      lVar7 = (**(code **)(*plVar6 + 0x10))(plVar6);
      this = (FDataflowVariableOverrides *)(lVar7 + 0x10);
      pFVar8 = FInstancedPropertyBag::FindPropertyDescByName((FInstancedPropertyBag *)this,FVar3);
      if (pFVar8 != (FPropertyBagPropertyDesc *)0x0) {
        EVar4 = FInstancedPropertyBag::SetValueBool((FInstancedPropertyBag *)this,pFVar8,bVar9);
        if (EVar4 == Success) {
          FDataflowVariableOverrides::SetVariableOverrideAndNotify(this,&pFVar8->ID,true);
          *(undefined1 *)param_3 = 1;
          return;
        }
      }
      *(undefined1 *)param_3 = 0;
      return;
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execOverrideDataflowVariableBoolArray @ 1462e92a0

void __cdecl
UDataflowBlueprintLibrary::execOverrideDataflowVariableBoolArray
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TArray<bool,TSizedDefaultAllocator<32>_> *pTVar3;
  FName local_res10;
  UObject *local_res18;
  TArray<bool,TSizedDefaultAllocator<32>_> local_18;
  
  local_res18 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
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
  pTVar3 = &local_18;
  if ((TArray<bool,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<bool,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<bool,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = OverrideDataflowVariableBoolArray(local_res18,local_res10,pTVar3);
  *(bool *)param_3 = bVar2;
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execOverrideDataflowVariableFloat @ 1462e93e0

void __cdecl
UDataflowBlueprintLibrary::execOverrideDataflowVariableFloat
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FDataflowVariableOverrides *this;
  FField **ppFVar1;
  FProperty *pFVar2;
  float fVar3;
  FName FVar4;
  UObjectBaseUtility *this_00;
  EPropertyBagResult EVar5;
  UClass *pUVar6;
  longlong *plVar7;
  longlong lVar8;
  FPropertyBagPropertyDesc *pFVar9;
  float local_res10 [2];
  FName local_res18;
  UObjectBaseUtility *local_res20;
  
  local_res20 = (UObjectBaseUtility *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res18.ComparisonIndex.Value = 0;
  local_res18.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0.0;
  FFloatProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  this_00 = local_res20;
  FVar4 = local_res18;
  fVar3 = local_res10[0];
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 != (UObjectBaseUtility *)0x0) {
    pUVar6 = UDataflowInstanceInterface::StaticClass();
    plVar7 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar6);
    if (plVar7 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar7 + 0x10))(plVar7);
      this = (FDataflowVariableOverrides *)(lVar8 + 0x10);
      pFVar9 = FInstancedPropertyBag::FindPropertyDescByName((FInstancedPropertyBag *)this,FVar4);
      if (pFVar9 != (FPropertyBagPropertyDesc *)0x0) {
        EVar5 = FInstancedPropertyBag::SetValueFloat((FInstancedPropertyBag *)this,pFVar9,fVar3);
        if (EVar5 == Success) {
          FDataflowVariableOverrides::SetVariableOverrideAndNotify(this,&pFVar9->ID,true);
          *(undefined1 *)param_3 = 1;
          return;
        }
      }
      *(undefined1 *)param_3 = 0;
      return;
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execOverrideDataflowVariableFloatArray @ 1462e9570

void __cdecl
UDataflowBlueprintLibrary::execOverrideDataflowVariableFloatArray
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TArray<float,TSizedDefaultAllocator<32>_> *pTVar3;
  FName local_res10;
  UObject *local_res18;
  TArray<float,TSizedDefaultAllocator<32>_> local_18;
  
  local_res18 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
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
  pTVar3 = &local_18;
  if ((TArray<float,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<float,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<float,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = OverrideDataflowVariableFloatArray(local_res18,local_res10,pTVar3);
  *(bool *)param_3 = bVar2;
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execOverrideDataflowVariableInt @ 1462e96b0

void __cdecl
UDataflowBlueprintLibrary::execOverrideDataflowVariableInt
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FDataflowVariableOverrides *this;
  FField **ppFVar1;
  FProperty *pFVar2;
  FName FVar3;
  long64 lVar4;
  UObjectBaseUtility *this_00;
  EPropertyBagResult EVar5;
  UClass *pUVar6;
  longlong *plVar7;
  longlong lVar8;
  FPropertyBagPropertyDesc *pFVar9;
  FName local_res10;
  long64 local_res18;
  UObjectBaseUtility *local_res20;
  
  local_res20 = (UObjectBaseUtility *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res18 = 0;
  FInt64Property::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  this_00 = local_res20;
  lVar4 = local_res18;
  FVar3 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 != (UObjectBaseUtility *)0x0) {
    pUVar6 = UDataflowInstanceInterface::StaticClass();
    plVar7 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar6);
    if (plVar7 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar7 + 0x10))(plVar7);
      this = (FDataflowVariableOverrides *)(lVar8 + 0x10);
      pFVar9 = FInstancedPropertyBag::FindPropertyDescByName((FInstancedPropertyBag *)this,FVar3);
      if (pFVar9 != (FPropertyBagPropertyDesc *)0x0) {
        EVar5 = FInstancedPropertyBag::SetValueInt64((FInstancedPropertyBag *)this,pFVar9,lVar4);
        if (EVar5 == Success) {
          FDataflowVariableOverrides::SetVariableOverrideAndNotify(this,&pFVar9->ID,true);
          *(undefined1 *)param_3 = 1;
          return;
        }
      }
      *(undefined1 *)param_3 = 0;
      return;
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execOverrideDataflowVariableIntArray @ 1462e9830

void __cdecl
UDataflowBlueprintLibrary::execOverrideDataflowVariableIntArray
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TArray<int,TSizedDefaultAllocator<32>_> *pTVar3;
  FName local_res10;
  UObject *local_res18;
  TArray<int,TSizedDefaultAllocator<32>_> local_18;
  
  local_res18 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
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
  pTVar3 = &local_18;
  if ((TArray<int,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<int,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<int,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = OverrideDataflowVariableIntArray(local_res18,local_res10,pTVar3);
  *(bool *)param_3 = bVar2;
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execOverrideDataflowVariableObject @ 1462e9970

void __cdecl
UDataflowBlueprintLibrary::execOverrideDataflowVariableObject
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FDataflowVariableOverrides *this;
  FField **ppFVar1;
  FProperty *pFVar2;
  FName FVar3;
  UObject *pUVar4;
  UObjectBaseUtility *this_00;
  EPropertyBagResult EVar5;
  UClass *pUVar6;
  longlong *plVar7;
  longlong lVar8;
  FPropertyBagPropertyDesc *pFVar9;
  FName local_res10;
  UObject *local_res18;
  UObjectBaseUtility *local_res20;
  
  local_res20 = (UObjectBaseUtility *)0x0;
  FObjectPropertyBase::StaticClass();
  ppFVar1 = &param_2->PropertyChainForCompiledIn;
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res20,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res20);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_res18 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)*ppFVar1;
    *ppFVar1 = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  this_00 = local_res20;
  pUVar4 = local_res18;
  FVar3 = local_res10;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res20 != (UObjectBaseUtility *)0x0) {
    pUVar6 = UDataflowInstanceInterface::StaticClass();
    plVar7 = UObjectBaseUtility::GetInterfaceAddress(this_00,pUVar6);
    if (plVar7 != (longlong *)0x0) {
      lVar8 = (**(code **)(*plVar7 + 0x10))(plVar7);
      this = (FDataflowVariableOverrides *)(lVar8 + 0x10);
      pFVar9 = FInstancedPropertyBag::FindPropertyDescByName((FInstancedPropertyBag *)this,FVar3);
      if (pFVar9 != (FPropertyBagPropertyDesc *)0x0) {
        EVar5 = FInstancedPropertyBag::SetValueObject((FInstancedPropertyBag *)this,pFVar9,pUVar4);
        if (EVar5 == Success) {
          FDataflowVariableOverrides::SetVariableOverrideAndNotify(this,&pFVar9->ID,true);
          *(undefined1 *)param_3 = 1;
          return;
        }
      }
      *(undefined1 *)param_3 = 0;
      return;
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

// execOverrideDataflowVariableObjectArray @ 1462e9af0

void __cdecl
UDataflowBlueprintLibrary::execOverrideDataflowVariableObjectArray
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  bool bVar2;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *pTVar3;
  FName local_res10;
  UObject *local_res18;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> local_18;
  
  local_res18 = (UObject *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10.ComparisonIndex.Value = 0;
  local_res10.Number = 0;
  FNameProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res10);
  }
  local_18.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_18.ArrayNum = 0;
  local_18.ArrayMax = 0;
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
  pTVar3 = &local_18;
  if ((TArray<UObject_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress !=
      (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)0x0) {
    pTVar3 = (TArray<UObject_*,TSizedDefaultAllocator<32>_> *)param_2->MostRecentPropertyAddress;
  }
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  bVar2 = OverrideDataflowVariableObjectArray(local_res18,local_res10,pTVar3);
  *(bool *)param_3 = bVar2;
  if (local_18.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.AllocatorInstance.Data);
  }
  return;
}

// execRegenerateAssetFromDataflow @ 1462e9c30

void __cdecl
UDataflowBlueprintLibrary::execRegenerateAssetFromDataflow
          (UObject *param_1,FFrame *param_2,void *param_3)

{
  FProperty *pFVar1;
  UObjectBaseUtility *this;
  UClass *pUVar2;
  longlong *plVar3;
  FDataflowInstance *this_00;
  bool bVar4;
  int local_res10 [2];
  UObjectBaseUtility *local_res18;
  
  local_res18 = (UObjectBaseUtility *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res18,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res18);
  }
  local_res10[0] = 0;
  FBoolProperty::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar1 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar1->_padding_;
    FFrame::StepExplicitProperty(param_2,local_res10,pFVar1);
  }
  else {
    FFrame::Step(param_2,param_2->Object,local_res10);
  }
  this = local_res18;
  bVar4 = local_res10[0] != 0;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  if (local_res18 != (UObjectBaseUtility *)0x0) {
    pUVar2 = UDataflowInstanceInterface::StaticClass();
    plVar3 = UObjectBaseUtility::GetInterfaceAddress(this,pUVar2);
    if (plVar3 != (longlong *)0x0) {
      this_00 = (FDataflowInstance *)(**(code **)(*plVar3 + 0x10))(plVar3);
      bVar4 = FDataflowInstance::UpdateOwnerAsset(this_00,bVar4);
      *(bool *)param_3 = bVar4;
      return;
    }
  }
  *(undefined1 *)param_3 = 0;
  return;
}

