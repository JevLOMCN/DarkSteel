// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 126

// EmptyDelegate'' @ 140f289e0

void __cdecl `dynamic_initializer_for_'FMulticastDelegateProperty::EmptyDelegate__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FMulticastDelegateProperty::EmptyDelegate__);
  return;
}

// RootNodeID'' @ 140f28a00

void __cdecl `dynamic_initializer_for_'FOverriddenPropertySet::RootNodeID__(void)

{
  FOverriddenPropertyNodeID::RootNodeId(&FOverriddenPropertySet::RootNodeID);
  atexit(`dynamic_atexit_destructor_for_'FOverriddenPropertySet::RootNodeID__);
  return;
}

// `dynamic_initializer_for_'GPropertyTypeNameTable'' @ 140f28a30

void __cdecl UE::_dynamic_initializer_for__GPropertyTypeNameTable__(void)

{
  byte bVar1;
  atomic<unsigned_char> aVar2;
  bool bVar3;
  
  LOCK();
  bVar3 = GPropertyTypeNameTable.BlockAllocationMutex.State == (atomic<unsigned_char>)0x0;
  if (bVar3) {
    GPropertyTypeNameTable.BlockAllocationMutex.State = (atomic<unsigned_char>)0x1;
  }
  UNLOCK();
  if (!bVar3) {
    FMutex::LockSlow(&GPropertyTypeNameTable.BlockAllocationMutex);
  }
  if (GPropertyTypeNameTable.Blocks[0] == (atomic<UE::FPropertyTypeNameNode_*>)0x0) {
    GPropertyTypeNameTable.Blocks[0] =
         (atomic<UE::FPropertyTypeNameNode_*>)FMemory::MallocZeroed(0x18000,4);
  }
  LOCK();
  aVar2 = GPropertyTypeNameTable.BlockAllocationMutex.State + -1;
  UNLOCK();
  bVar1 = (byte)GPropertyTypeNameTable.BlockAllocationMutex.State & 2;
  GPropertyTypeNameTable.BlockAllocationMutex.State = aVar2;
  if (bVar1 != 0) {
    FMutex::WakeWaitingThread(&GPropertyTypeNameTable.BlockAllocationMutex);
  }
  atexit(_dynamic_atexit_destructor_for__GPropertyTypeNameTable__);
  return;
}

// `dynamic_initializer_for_'InitString'' @ 140f28ab0

void __cdecl _dynamic_initializer_for__InitString__(void)

{
  FString::FString(&InitString,L"__INIT__");
  atexit(_dynamic_atexit_destructor_for__InitString__);
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_FPropertyTypeName'' @ 140f28ae0

void __cdecl UE::_dynamic_initializer_for__LLMTagDeclaration_FPropertyTypeName__(void)

{
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_FPropertyTypeName,L"FPropertyTypeName",(FName)0x0,(FName)0x0,
             (FName)0x0,(FName)0x0,None);
  return;
}

// `dynamic_initializer_for_'LegacyFOptionPropertyCustomVersion'' @ 140f28b30

void __cdecl _dynamic_initializer_for__LegacyFOptionPropertyCustomVersion__(void)

{
  FGuid local_18;
  
  local_18 = LegacyFOptionPropertyCustomVersion.GUID;
  LegacyFOptionPropertyCustomVersion.Registration.Key = LegacyFOptionPropertyCustomVersion.GUID;
  FCurrentCustomVersions::Register
            (&local_18,3,L"FPropertyOption",
             (_func___cdecl_bool_FCustomVersion_ptr_TArray<FCustomVersion,TSizedDefaultAllocator<32>_>_ptr_wchar_t_ptr
              *)0x0);
  atexit(_dynamic_atexit_destructor_for__LegacyFOptionPropertyCustomVersion__);
  return;
}

// `dynamic_initializer_for_'LogOptionalProperty'' @ 140f28b80

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogOptionalProperty__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogOptionalProperty,L"LogOptionalProperty",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogOptionalProperty__);
  return;
}

// `dynamic_initializer_for_'NAME_Key'' @ 140f28bc0

void __cdecl UE::_dynamic_initializer_for__NAME_Key__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,3,"Key",FNAME_Add);
  NAME_Key = *pFVar1;
  return;
}

// `dynamic_initializer_for_'NAME_Value'' @ 140f28c00

void __cdecl UE::_dynamic_initializer_for__NAME_Value__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  pFVar1 = ::FName::FName(local_res8,5,"Value",FNAME_Add);
  NAME_Value = *pFVar1;
  return;
}

// `dynamic_initializer_for_'PropertyVisibilityOverrideName'' @ 140f28c40

void __cdecl PropertyNames::_dynamic_initializer_for__PropertyVisibilityOverrideName__(void)

{
  ::FName::FName(&PropertyVisibilityOverrideName,L"PropertyVisibilityOverride");
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Private_UObject_PropertyHelper_h__Script_CoreUObject_200572588'' @ 140f28c60

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Private_UObject_PropertyHelper_h__Script_CoreUObject_200572588__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/CoreUObject",(FClassRegisterCompiledInInfo *)0x0,0,
             (FStructRegisterCompiledInInfo *)0x0,0,
             Z_CompiledInDeferFile_FID_Engine_Source_Runtime_CoreUObject_Private_UObject_PropertyHelper_h__Script_CoreUObject_Statics
             ::EnumInfo,1);
  return;
}

// EFallbackEnum_StaticEnum @ 142155900

UEnum * __cdecl EFallbackEnum_StaticEnum(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFallbackEnum.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EFallbackEnum.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EFallbackEnum,(UObject *)pUVar1,
                       L"EFallbackEnum");
  }
  return Z_Registration_Info_UEnum_EFallbackEnum.OuterSingleton;
}

// operator<<<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_> @ 142155940

FArchive * __cdecl
operator<<<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
          (FArchive *param_1,
          TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
          *param_2)

{
  int *piVar1;
  code *pcVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  FArchive *pFVar6;
  longlong *plVar7;
  uint uVar8;
  FScriptContainerElement *pFVar9;
  uint uVar10;
  int iVar11;
  uint auStackX_10 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 4);
  iVar11 = 0;
  auStackX_10[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_10[0] = param_2->ArrayNum;
  }
  plVar7 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar7[1] < (uint *)*plVar7 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_10);
    }
  }
  else {
    auStackX_10[0] = *(uint *)*plVar7;
    *plVar7 = *plVar7 + 4;
  }
  if (auStackX_10[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_10[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_10[0] < 0x100001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_10[0];
          uVar10 = 0;
          uVar8 = auStackX_10[0];
          if (0 < (int)auStackX_10[0]) {
            do {
              uVar3 = 0;
              if ((int)uVar10 < (int)uVar8) {
                uVar3 = ~uVar10 >> 0x1f;
              }
              if (uVar3 == 0) {
                bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar2 = (code *)swi(3);
                  pFVar6 = (FArchive *)(*pcVar2)();
                  return pFVar6;
                }
              }
              pFVar9 = (param_2->AllocatorInstance).Data + (longlong)(int)uVar10 * 0x10;
              plVar7 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x138))(param_1,pFVar9);
              (**(code **)(*plVar7 + 0x178))(plVar7,pFVar9 + 8);
              uVar8 = param_2->ArrayNum;
              uVar10 = uVar10 + 1;
            } while ((int)uVar10 < (int)uVar8);
          }
        }
        else {
          TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
          ::Empty(param_2,auStackX_10[0]);
          if (0 < (int)auStackX_10[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                  (0x410,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              pFVar9 = (param_2->AllocatorInstance).Data + (longlong)iVar5 * 0x10;
              *(undefined8 *)pFVar9 = 0;
              *(undefined8 *)(pFVar9 + 8) = 0;
              plVar7 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x138))(param_1,pFVar9);
              (**(code **)(*plVar7 + 0x178))(plVar7,pFVar9 + 8);
              iVar11 = iVar11 + 1;
            } while (iVar11 < (int)auStackX_10[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar2 = (code *)swi(3);
        pFVar6 = (FArchive *)(*pcVar2)();
        return pFVar6;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// operator<<<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_> @ 142155950

FArchive * __cdecl
operator<<<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          (FArchive *param_1,
          TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          *param_2)

{
  int *piVar1;
  ForElementType<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_> FVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  uint uVar6;
  FArchive *pFVar7;
  longlong *plVar8;
  ForElementType<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_> FVar9;
  uint uVar10;
  undefined8 *puVar11;
  longlong lVar12;
  uint uVar13;
  int iVar14;
  uint auStackX_10 [2];
  
  piVar1 = &param_2->ArrayMax;
  (**(code **)(*(longlong *)param_1 + 0x10))(param_1,(longlong)param_2->ArrayNum << 4);
  iVar14 = 0;
  auStackX_10[0] = 0;
  if ((param_1->field_0x28 & 1) == 0) {
    auStackX_10[0] = param_2->ArrayNum;
  }
  plVar8 = *(longlong **)&param_1->field_0x8;
  if ((uint *)plVar8[1] < (uint *)*plVar8 + 1) {
    if ((param_1->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)param_1 + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(param_1,auStackX_10);
    }
  }
  else {
    auStackX_10[0] = *(uint *)*plVar8;
    *plVar8 = *plVar8 + 4;
  }
  if (auStackX_10[0] == 0) {
    if (((param_1->field_0x28 & 1) != 0) && (param_2->ArrayNum = 0, *piVar1 != 0)) {
      UE::Core::Private::
      ReallocTo<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_>_>
                (0x10,4,0,&param_2->AllocatorInstance,0,piVar1);
      return param_1;
    }
  }
  else {
    if (((param_1->field_0x29 & 2) == 0) && (-1 < (int)auStackX_10[0])) {
      if ((-1 < (char)param_1->field_0x2b) || ((int)auStackX_10[0] < 0x100001)) {
        if ((param_1->field_0x28 & 1) == 0) {
          param_2->ArrayNum = auStackX_10[0];
          uVar13 = 0;
          uVar10 = auStackX_10[0];
          if (0 < (int)auStackX_10[0]) {
            do {
              uVar6 = 0;
              if ((int)uVar13 < (int)uVar10) {
                uVar6 = ~uVar13 >> 0x1f;
              }
              if (uVar6 == 0) {
                bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld");
                if (bVar4) {
                  pcVar3 = (code *)swi(3);
                  pFVar7 = (FArchive *)(*pcVar3)();
                  return pFVar7;
                }
              }
              FVar2 = (param_2->AllocatorInstance).SecondaryData;
              FVar9 = (ForElementType<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_>)
                      param_2;
              if (FVar2 != (ForElementType<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_>)
                           0x0) {
                FVar9 = FVar2;
              }
              lVar12 = (longlong)(int)uVar13 * 0x10 + (longlong)FVar9;
              plVar8 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x138))(param_1,lVar12);
              (**(code **)(*plVar8 + 0x178))(plVar8,lVar12 + 8);
              uVar10 = param_2->ArrayNum;
              uVar13 = uVar13 + 1;
            } while ((int)uVar13 < (int)uVar10);
          }
        }
        else {
          TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
          ::Empty(param_2,auStackX_10[0]);
          if (0 < (int)auStackX_10[0]) {
            do {
              iVar5 = param_2->ArrayNum;
              if (iVar5 == *piVar1) {
                iVar5 = UE::Core::Private::
                        ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_>_>
                                  (0x410,&param_2->AllocatorInstance,piVar1);
              }
              param_2->ArrayNum = iVar5 + 1;
              FVar2 = (param_2->AllocatorInstance).SecondaryData;
              FVar9 = (ForElementType<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_>)
                      param_2;
              if (FVar2 != (ForElementType<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_>)
                           0x0) {
                FVar9 = FVar2;
              }
              puVar11 = (undefined8 *)((longlong)iVar5 * 0x10 + (longlong)FVar9);
              *puVar11 = 0;
              puVar11[1] = 0;
              plVar8 = (longlong *)(**(code **)(*(longlong *)param_1 + 0x138))(param_1,puVar11);
              (**(code **)(*plVar8 + 0x178))(plVar8,puVar11 + 1);
              iVar14 = iVar14 + 1;
            } while (iVar14 < (int)auStackX_10[0]);
            return param_1;
          }
        }
        return param_1;
      }
      bVar4 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<2846541355549724645>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0xfe5,"!Ar.IsNetArchive() || SerializeNum <= MaxNetArraySerialize");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        pFVar7 = (FArchive *)(*pcVar3)();
        return pFVar7;
      }
    }
    FArchiveState::SetError((FArchiveState *)param_1);
  }
  return param_1;
}

// Call<`UE::TryResolvePropertyPathForChangeEvent'::__l2::<lambda_1>_> @ 142155b10

void __cdecl
UE::
TFunctionWithContext<void___cdecl(UE::FPropertyPathNameSegment_const_&,UE::FPropertyValueInContainer_&)>
::Call<_UE::TryResolvePropertyPathForChangeEvent_::__l2::<lambda_1>_>
          (void *param_1,FPropertyPathNameSegment *param_2,FPropertyValueInContainer *param_3)

{
  longlong *plVar1;
  FProperty *pFVar2;
  TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator> *this;
  bool bVar3;
  undefined8 *puVar4;
  FString FStack_38;
  FString *pFStack_28;
  int *piStack_20;
  
  plVar1 = *(longlong **)param_1;
  pFVar2 = param_3->Property;
  puVar4 = ::operator_new(0x18);
  if (puVar4 != (undefined8 *)0x0) {
    *puVar4 = pFVar2;
    puVar4[1] = 0;
    puVar4[2] = 0;
    if (plVar1[2] == 0) {
      plVar1[1] = (longlong)puVar4;
    }
    else {
      *(undefined8 **)(plVar1[2] + 8) = puVar4;
      puVar4[2] = plVar1[2];
    }
    plVar1[2] = (longlong)puVar4;
    (**(code **)(*plVar1 + 8))(plVar1,(int)plVar1[3] + 1);
  }
  if (param_2->Index != -1) {
    pFVar2 = param_3->Property;
    this = *(TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>
             **)((longlong)param_1 + 8);
    bVar3 = IsThisNotNull(pFVar2,"FField::GetName");
    if (bVar3) {
      ::FName::ToString((FName *)&pFVar2->_padding_,&FStack_38);
    }
    else {
      ::FString::FString(&FStack_38,L"None");
    }
    pFStack_28 = &FStack_38;
    piStack_20 = &param_2->Index;
    TSet<TTuple<FString,int>,TDefaultMapHashableKeyFuncs<FString,int,0>,FDefaultSetAllocator>::
    Emplace<TPairInitializer<FString_&&,int_const_&>_>
              (this,(TPairInitializer<FString_&&,int_const_&> *)&stack0x00000008,(bool *)&pFStack_28
              );
    if (FStack_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(FStack_38.Data.AllocatorInstance.Data);
    }
  }
  return;
}

// CastChecked<USparseDelegateFunction,UFunction> @ 142155b20

USparseDelegateFunction * __cdecl
CastChecked<USparseDelegateFunction,UFunction>(TObjectPtr<UFunction> *param_1,Type param_2)

{
  bool bVar1;
  UClass *pUVar2;
  FString *pFVar3;
  USparseDelegateFunction *pUVar4;
  wchar_t *pwVar5;
  wchar_t *pwVar6;
  FString local_28;
  FString local_18;
  
  if ((param_1->field0_0x0).DebugPtr == (UFunction *)0x0) {
    if (param_2 == NullChecked) {
      pFVar3 = GetTypeName<USparseDelegateFunction>(&local_18);
      if ((pFVar3->Data).ArrayNum == 0) {
        pwVar5 = L"";
      }
      else {
        pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(L"nullptr",pwVar5);
    }
    pUVar4 = (USparseDelegateFunction *)0x0;
  }
  else {
    pUVar2 = Z_Construct_UClass_USparseDelegateFunction_NoRegister();
    bVar1 = FObjectPtr::IsA((FObjectPtr *)param_1,pUVar2);
    if ((!bVar1) ||
       (pUVar4 = (USparseDelegateFunction *)(param_1->field0_0x0).DebugPtr,
       pUVar4 == (USparseDelegateFunction *)0x0)) {
      pFVar3 = GetTypeName<USparseDelegateFunction>(&local_28);
      pwVar5 = L"";
      if ((pFVar3->Data).ArrayNum == 0) {
        pwVar6 = L"";
      }
      else {
        pwVar6 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
      pFVar3 = GetFullNameForCastLogError<UFunction>(&local_18,(param_1->field0_0x0).DebugPtr);
      if ((pFVar3->Data).ArrayNum != 0) {
        pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
      }
                    /* WARNING: Subroutine does not return */
      CastLogError(pwVar5,pwVar6);
    }
  }
  return pUVar4;
}

// ConstructItems<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,int> @ 142155be0

void __cdecl
ConstructItems<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,int>
          (void *param_1,TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode> *param_2,int param_3)

{
  int iVar1;
  FName *pFVar2;
  
  if (param_3 != 0) {
    pFVar2 = (FName *)((longlong)param_1 + 8);
    do {
      pFVar2[-1].ComparisonIndex = 0;
      pFVar2[-1].Number = 0;
      pFVar2->ComparisonIndex = 0;
      pFVar2->Number = 0;
      iVar1 = (param_2->Object).ObjectSerialNumber;
      pFVar2[-1].ComparisonIndex = (FNameEntryId)(param_2->Object).ObjectIndex;
      pFVar2[-1].Number = iVar1;
      *pFVar2 = param_2->FunctionName;
      param_3 = param_3 + -1;
      pFVar2 = pFVar2 + 2;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  return;
}

// DefaultConstructItems<UE::FPropertyTypeNameNode,int> @ 142155c20

void __cdecl DefaultConstructItems<UE::FPropertyTypeNameNode,int>(void *param_1,int param_2)

{
  undefined4 *puVar1;
  
  if (param_2 != 0) {
    puVar1 = (undefined4 *)((longlong)param_1 + 8);
    do {
      *(undefined8 *)(puVar1 + -2) = 0;
      *puVar1 = 0;
      puVar1 = puVar1 + 3;
      param_2 = param_2 + -1;
    } while (param_2 != 0);
  }
  return;
}

// FindUField<UEnum> @ 1421563c0

UEnum * __cdecl FindUField<UEnum>(UStruct *param_1,FName param_2,EFieldIterationFlags param_3)

{
  int iVar1;
  UClass *pUVar2;
  TFieldIterator<UEnum> local_28;
  
  if (param_2 == (FName)0x0) {
    return (UEnum *)0x0;
  }
  if (param_1 == (UStruct *)0x0) {
    local_28.Field = (UField *)0x0;
  }
  else {
    local_28.Field = *(UField **)&(param_1->Children).field0_0x0;
  }
  local_28.InterfaceIndex = -1;
  local_28.bIncludeSuper = (bool)(param_3 & IncludeSuper);
  local_28.bIncludeDeprecated = (bool)(param_3 >> 1 & 1);
  local_28.Struct = param_1;
  if (((param_3 & IncludeInterfaces) != None) && (param_1 != (UStruct *)0x0)) {
    pUVar2 = Z_Construct_UClass_UClass_NoRegister();
    iVar1 = (int)pUVar2->_padding_;
    if ((iVar1 <= *(int *)(param_1->_padding_ + 0x38)) &&
       (local_28.bIncludeInterface = true,
       (longlong *)*(undefined1 **)(*(longlong *)(param_1->_padding_ + 0x30) + (longlong)iVar1 * 8)
       == &pUVar2->_padding_)) goto LAB_14215644d;
  }
  local_28.bIncludeInterface = false;
LAB_14215644d:
  TFieldIterator<UEnum>::IterateToNext(&local_28);
  while( true ) {
    if ((UEnum *)local_28.Field == (UEnum *)0x0) {
      return (UEnum *)0x0;
    }
    if ((FName)(local_28.Field)->_padding_ == param_2) break;
    local_28.Field = ((local_28.Field)->Next).field0_0x0.DebugPtr;
    TFieldIterator<UEnum>::IterateToNext(&local_28);
  }
  return (UEnum *)local_28.Field;
}

// HeapSortInternal<UE::FPropertyPathNameTree::FKey,int,FIdentityFunctor,TDereferenceWrapper<UE::FPropertyPathNameTree::FKey,TLess<void>_>_> @ 1421575c0

void __cdecl
AlgoImpl::
HeapSortInternal<UE::FPropertyPathNameTree::FKey,int,FIdentityFunctor,TDereferenceWrapper<UE::FPropertyPathNameTree::FKey,TLess<void>_>_>
          (FKey *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::FPropertyPathNameTree::FKey,TLess<void>_> param_4)

{
  FKey *this;
  FKey *pFVar1;
  FName FVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  FKey *pFVar8;
  int iVar9;
  int iVar10;
  longlong lVar11;
  TLess<void> *local_res20;
  
  local_res20 = param_4.Predicate;
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  HeapifyInternal<UE::FPropertyPathNameTree::FKey,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<UE::FPropertyPathNameTree::FKey,TLess<void>_>_>_>
            (param_1,param_2,param_3,
             (TDereferenceWrapper<UE::FPropertyPathNameTree::FKey,TLess<void>_> *)&local_res20);
  iVar10 = param_2 + -1;
  lVar11 = (longlong)iVar10;
  if (0 < iVar10) {
    pFVar8 = param_1 + lVar11;
    do {
      FVar2 = param_1->Name;
      iVar7 = (param_1->Type).Index;
      param_1->Name = pFVar8->Name;
      (param_1->Type).Index = (pFVar8->Type).Index;
      pFVar8->Name = FVar2;
      (pFVar8->Type).Index = iVar7;
      iVar7 = 0;
      if (1 < iVar10) {
        do {
          iVar4 = iVar7 * 2;
          iVar9 = iVar4 + 1;
          if (iVar4 + 2 < iVar10) {
            iVar6 = ::FName::Compare(&param_1[iVar4 + 2].Name,&param_1[iVar9].Name);
            if (iVar6 == 0) {
              bVar5 = UE::operator<(&param_1[iVar4 + 2].Type,&param_1[iVar9].Type);
            }
            else {
              bVar5 = SUB41((uint)iVar6 >> 0x1f,0);
            }
            if (bVar5 != false) {
              iVar9 = iVar4;
            }
            iVar9 = iVar9 + 1;
          }
          this = param_1 + iVar7;
          pFVar1 = param_1 + iVar9;
          iVar7 = ::FName::Compare(&this->Name,&pFVar1->Name);
          if (iVar7 == 0) {
            bVar5 = UE::operator<(&this->Type,&pFVar1->Type);
          }
          else {
            bVar5 = SUB41((uint)iVar7 >> 0x1f,0);
          }
          if (bVar5 == false) break;
          FVar2 = this->Name;
          iVar7 = (this->Type).Index;
          this->Name = pFVar1->Name;
          (this->Type).Index = (pFVar1->Type).Index;
          pFVar1->Name = FVar2;
          (pFVar1->Type).Index = iVar7;
          iVar7 = iVar9;
        } while (iVar9 * 2 + 1 < iVar10);
      }
      pFVar8 = pFVar8 + -1;
      iVar10 = iVar10 + -1;
      lVar11 = lVar11 + -1;
    } while (0 < lVar11);
  }
  return;
}

// HeapifyInternal<UE::FPropertyPathNameTree::FKey,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<UE::FPropertyPathNameTree::FKey,TLess<void>_>_>_> @ 142157790

void __cdecl
AlgoImpl::
HeapifyInternal<UE::FPropertyPathNameTree::FKey,int,FIdentityFunctor,TReversePredicate<TDereferenceWrapper<UE::FPropertyPathNameTree::FKey,TLess<void>_>_>_>
          (FKey *param_1,int param_2,FIdentityFunctor param_3,
          TReversePredicate<TDereferenceWrapper<UE::FPropertyPathNameTree::FKey,TLess<void>_>_>
          param_4)

{
  FKey *this;
  FKey *pFVar1;
  FName FVar2;
  code *pcVar3;
  int iVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  if (param_2 < 0) {
    bVar5 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar5) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar6 = (param_2 + -2) / 2;
  iVar8 = iVar6 * 2 + 1;
  iVar4 = iVar8;
  iVar10 = iVar6;
  do {
    while (param_2 <= iVar8) {
LAB_1421578da:
      if (iVar10 == 0) {
        return;
      }
      iVar6 = iVar10 + -1;
      iVar8 = iVar4 + -2;
      iVar4 = iVar8;
      iVar10 = iVar6;
    }
    iVar8 = iVar6 * 2;
    iVar9 = iVar8 + 1;
    if (iVar8 + 2 < param_2) {
      iVar7 = ::FName::Compare(&param_1[iVar8 + 2].Name,&param_1[iVar9].Name);
      if (iVar7 == 0) {
        bVar5 = UE::operator<(&param_1[iVar8 + 2].Type,&param_1[iVar9].Type);
      }
      else {
        bVar5 = SUB41((uint)iVar7 >> 0x1f,0);
      }
      if (bVar5 != false) {
        iVar9 = iVar8;
      }
      iVar9 = iVar9 + 1;
    }
    this = param_1 + iVar6;
    pFVar1 = param_1 + iVar9;
    iVar8 = ::FName::Compare(&this->Name,&pFVar1->Name);
    if (iVar8 == 0) {
      bVar5 = UE::operator<(&this->Type,&pFVar1->Type);
    }
    else {
      bVar5 = SUB41((uint)iVar8 >> 0x1f,0);
    }
    if (bVar5 == false) goto LAB_1421578da;
    FVar2 = this->Name;
    iVar8 = iVar9 * 2 + 1;
    iVar6 = (this->Type).Index;
    this->Name = pFVar1->Name;
    (this->Type).Index = (pFVar1->Type).Index;
    pFVar1->Name = FVar2;
    (pFVar1->Type).Index = iVar6;
    iVar6 = iVar9;
  } while( true );
}

// IntCastChecked<unsigned_char,__int64> @ 142157920

uchar __cdecl IntCastChecked<unsigned_char,__int64>(long64 param_1)

{
  code *pcVar1;
  bool bVar2;
  uchar uVar3;
  
  if ((param_1 != (param_1 & 0xffU)) || (param_1 < 0)) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("IntFitsIn<OutType>(In)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                       ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return uVar3;
    }
  }
  return (uchar)param_1;
}

// IntroSortInternal<UE::FPropertyPathNameTree::FKey,int,FIdentityFunctor,TDereferenceWrapper<UE::FPropertyPathNameTree::FKey,TLess<void>_>_> @ 142157980

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<UE::FPropertyPathNameTree::FKey,int,FIdentityFunctor,TDereferenceWrapper<UE::FPropertyPathNameTree::FKey,TLess<void>_>_>
          (FKey *param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<UE::FPropertyPathNameTree::FKey,TLess<void>_> param_4)

{
  FName FVar1;
  int iVar2;
  bool bVar3;
  longlong lVar4;
  int iVar5;
  FKey *pFVar6;
  FKey *pFVar7;
  FKey *pFVar8;
  FKey **ppFVar9;
  int iVar10;
  FKey *this;
  FKey *pFVar11;
  FKey *pFVar12;
  float fVar13;
  undefined1 auStack_388 [48];
  FKey *local_358;
  FKey *local_348;
  FKey *local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
  if (1 < param_2) {
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar13 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar13;
    memset(local_330,0,0x2e8);
    ppFVar9 = &local_348;
    do {
      pFVar12 = ppFVar9[1];
      pFVar11 = *ppFVar9;
      local_358 = ppFVar9[2];
      iVar5 = (int)(((longlong)pFVar12 - (longlong)pFVar11) / 0xc) + 1;
      this = pFVar11;
      iVar10 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_142157a60:
        if (8 < iVar5) {
          pFVar6 = pFVar12 + 1;
          iVar5 = iVar5 / 2;
          FVar1 = this[iVar5].Name;
          iVar2 = this[iVar5].Type.Index;
          this[iVar5].Name = this->Name;
          this[iVar5].Type.Index = (this->Type).Index;
          this->Name = FVar1;
          (this->Type).Index = iVar2;
          pFVar11 = this;
LAB_142157aa6:
          pFVar8 = pFVar11;
          pFVar11 = pFVar8 + 1;
          if (pFVar11 <= pFVar12) goto code_r0x000142157aaf;
          goto LAB_142157ad4;
        }
        for (; pFVar11 = this, pFVar6 = this, this < pFVar12; pFVar12 = pFVar12 + -1) {
          while (pFVar8 = pFVar11, pFVar11 = pFVar6 + 1, pFVar11 <= pFVar12) {
            iVar10 = ::FName::Compare(&pFVar8->Name,&pFVar11->Name);
            if (iVar10 == 0) {
              bVar3 = UE::operator<(&pFVar8->Type,&pFVar6[1].Type);
            }
            else {
              bVar3 = SUB41((uint)iVar10 >> 0x1f,0);
            }
            pFVar6 = pFVar11;
            if (bVar3 == false) {
              pFVar11 = pFVar8;
            }
          }
          FVar1 = pFVar8->Name;
          iVar10 = (pFVar8->Type).Index;
          pFVar8->Name = pFVar12->Name;
          (pFVar8->Type).Index = (pFVar12->Type).Index;
          pFVar12->Name = FVar1;
          (pFVar12->Type).Index = iVar10;
        }
        goto LAB_142157c1c;
      }
LAB_142157c03:
      HeapSortInternal<UE::FPropertyPathNameTree::FKey,int,FIdentityFunctor,TDereferenceWrapper<UE::FPropertyPathNameTree::FKey,TLess<void>_>_>
                (pFVar11,iVar5,param_3,param_4);
LAB_142157c1c:
      ppFVar9 = ppFVar9 + -3;
    } while (&local_348 <= ppFVar9);
  }
  return;
code_r0x000142157aaf:
  iVar5 = ::FName::Compare(&this->Name,&pFVar11->Name);
  if (iVar5 == 0) {
    bVar3 = UE::operator<(&this->Type,&pFVar8[1].Type);
  }
  else {
    bVar3 = SUB41((uint)iVar5 >> 0x1f,0);
  }
  if (bVar3 == false) goto LAB_142157aa6;
LAB_142157ad4:
  do {
    pFVar7 = pFVar6;
    pFVar6 = pFVar7 + -1;
    if (pFVar6 <= this) break;
    iVar5 = ::FName::Compare(&pFVar6->Name,&this->Name);
    if (iVar5 == 0) {
      bVar3 = UE::operator<(&pFVar7[-1].Type,&this->Type);
    }
    else {
      bVar3 = SUB41((uint)iVar5 >> 0x1f,0);
    }
  } while (bVar3 == false);
  if (pFVar11 <= pFVar6) {
    FVar1 = pFVar11->Name;
    iVar5 = pFVar8[1].Type.Index;
    pFVar11->Name = pFVar6->Name;
    pFVar8[1].Type.Index = pFVar7[-1].Type.Index;
    pFVar6->Name = FVar1;
    pFVar7[-1].Type.Index = iVar5;
    goto LAB_142157aa6;
  }
  iVar5 = (this->Type).Index;
  FVar1 = this->Name;
  iVar10 = iVar10 + -1;
  this->Name = pFVar6->Name;
  (this->Type).Index = pFVar7[-1].Type.Index;
  pFVar6->Name = FVar1;
  pFVar7[-1].Type.Index = iVar5;
  lVar4 = (longlong)pFVar6 + (-0xc - (longlong)this);
  lVar4 = lVar4 / 6 + (lVar4 >> 0x3f);
  if ((lVar4 >> 1) - (lVar4 >> 0x3f) < ((longlong)pFVar12 - (longlong)pFVar11) / 0xc) {
    if (pFVar11 < pFVar12) {
      *ppFVar9 = pFVar11;
      ppFVar9[1] = pFVar12;
      *(int *)(ppFVar9 + 2) = iVar10;
      ppFVar9 = ppFVar9 + 3;
    }
    if (pFVar6 <= this + 1) goto LAB_142157c1c;
    pFVar12 = pFVar7 + -2;
    pFVar11 = this;
  }
  else {
    if (this + 1 < pFVar6) {
      *ppFVar9 = this;
      ppFVar9[1] = pFVar7 + -2;
      *(int *)(ppFVar9 + 2) = iVar10;
      ppFVar9 = ppFVar9 + 3;
    }
    if (pFVar12 <= pFVar11) goto LAB_142157c1c;
  }
  iVar5 = (int)(((longlong)pFVar12 - (longlong)pFVar11) / 0xc) + 1;
  this = pFVar11;
  if (iVar10 == 0) goto LAB_142157c03;
  goto LAB_142157a60;
}

// LoadFromType<signed_char> @ 142157d00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
LoadFromType<signed_char>
          (FBoolProperty *param_1,FPropertyTag *param_2,FStructuredArchiveSlot param_3,
          uchar *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  char *pcVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  char local_res18 [16];
  FString local_38;
  FString local_28;
  
  plVar4 = *(longlong **)(*(longlong *)param_3 + 8);
  pcVar5 = *(char **)plVar4[1];
  if ((char *)((undefined8 *)plVar4[1])[1] < pcVar5 + 1) {
    (**(code **)(*plVar4 + 0x188))(plVar4,local_res18);
  }
  else {
    local_res18[0] = *pcVar5;
    *(longlong *)plVar4[1] = *(longlong *)plVar4[1] + 1;
  }
  if (local_res18[0] == '\0') {
    iVar1 = param_2->ArrayIndex;
    if (((iVar1 < 0) || ((int)param_1->_padding_ <= iVar1)) &&
       (bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar8)
       ) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((param_4 == (uchar *)0x0) &&
       (bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar2 = *(int *)((longlong)&param_1->_padding_ + 4);
    iVar3 = *(int *)((longlong)&param_1->_padding_ + 4);
    if ((param_1->FieldSize == '\0') &&
       (bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("FieldSize != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0xa61,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    param_4[(ulonglong)param_1->ByteOffset + (longlong)iVar3 + (longlong)iVar1 * (longlong)iVar2] =
         param_4[(ulonglong)param_1->ByteOffset +
                 (longlong)iVar3 + (longlong)iVar1 * (longlong)iVar2] & ~param_1->FieldMask;
    return;
  }
  if ((local_res18[0] != '\x01') && (4 < (byte)LogClass._0_1_)) {
    FField::GetPathName((FField *)param_1,&local_28,(UObject *)0x0);
    FName::ToString(&param_2->Type,&local_38);
    UE::Logging::Private::BasicLog<5>
              (&`void___cdecl_LoadFromType<signed_char>(FBoolProperty*___ptr64,FPropertyTag_const&___ptr64,FStructuredArchiveSlot,unsigned_char*___ptr64)'
                ::__l10::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  iVar1 = param_2->ArrayIndex;
  if (((iVar1 < 0) || ((int)param_1->_padding_ <= iVar1)) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar8))
  {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((param_4 == (uchar *)0x0) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar7 = (longlong)*(int *)((longlong)&param_1->_padding_ + 4) +
          (longlong)iVar1 * (longlong)*(int *)((longlong)&param_1->_padding_ + 4);
  if ((param_1->FieldSize == '\0') &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("FieldSize != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0xa61,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  param_4[(ulonglong)param_1->ByteOffset + lVar7] =
       ~param_1->FieldMask & param_4[(ulonglong)param_1->ByteOffset + lVar7] | param_1->ByteMask;
  return;
}

// LoadFromType<unsigned_char> @ 142157fa0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
LoadFromType<unsigned_char>
          (FBoolProperty *param_1,FPropertyTag *param_2,FStructuredArchiveSlot param_3,
          uchar *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  longlong *plVar4;
  char *pcVar5;
  code *pcVar6;
  longlong lVar7;
  bool bVar8;
  char local_res18 [16];
  FString local_38;
  FString local_28;
  
  plVar4 = *(longlong **)(*(longlong *)param_3 + 8);
  pcVar5 = *(char **)plVar4[1];
  if ((char *)((undefined8 *)plVar4[1])[1] < pcVar5 + 1) {
    (**(code **)(*plVar4 + 0x188))(plVar4,local_res18);
  }
  else {
    local_res18[0] = *pcVar5;
    *(longlong *)plVar4[1] = *(longlong *)plVar4[1] + 1;
  }
  if (local_res18[0] == '\0') {
    iVar1 = param_2->ArrayIndex;
    if (((iVar1 < 0) || ((int)param_1->_padding_ <= iVar1)) &&
       (bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar8)
       ) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    if ((param_4 == (uchar *)0x0) &&
       (bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    iVar2 = *(int *)((longlong)&param_1->_padding_ + 4);
    iVar3 = *(int *)((longlong)&param_1->_padding_ + 4);
    if ((param_1->FieldSize == '\0') &&
       (bVar8 = FDebug::CheckVerifyFailedImpl2
                          ("FieldSize != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0xa61,L""), bVar8)) {
      pcVar6 = (code *)swi(3);
      (*pcVar6)();
      return;
    }
    param_4[(ulonglong)param_1->ByteOffset + (longlong)iVar3 + (longlong)iVar1 * (longlong)iVar2] =
         param_4[(ulonglong)param_1->ByteOffset +
                 (longlong)iVar3 + (longlong)iVar1 * (longlong)iVar2] & ~param_1->FieldMask;
    return;
  }
  if ((local_res18[0] != '\x01') && (4 < (byte)LogClass._0_1_)) {
    FField::GetPathName((FField *)param_1,&local_28,(UObject *)0x0);
    FName::ToString(&param_2->Type,&local_38);
    UE::Logging::Private::BasicLog<5>
              (&`void___cdecl_LoadFromType<unsigned_char>(FBoolProperty*___ptr64,FPropertyTag_const&___ptr64,FStructuredArchiveSlot,unsigned_char*___ptr64)'
                ::__l10::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  iVar1 = param_2->ArrayIndex;
  if (((iVar1 < 0) || ((int)param_1->_padding_ <= iVar1)) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar8))
  {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  if ((param_4 == (uchar *)0x0) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  lVar7 = (longlong)*(int *)((longlong)&param_1->_padding_ + 4) +
          (longlong)iVar1 * (longlong)*(int *)((longlong)&param_1->_padding_ + 4);
  if ((param_1->FieldSize == '\0') &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("FieldSize != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0xa61,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  param_4[(ulonglong)param_1->ByteOffset + lVar7] =
       ~param_1->FieldMask & param_4[(ulonglong)param_1->ByteOffset + lVar7] | param_1->ByteMask;
  return;
}

// LoadFromType<short> @ 142158240

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
LoadFromType<short>(FBoolProperty *param_1,FPropertyTag *param_2,FStructuredArchiveSlot param_3,
                   uchar *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FArchive *this;
  ushort *puVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  ushort local_res18 [8];
  FString local_38;
  FString local_28;
  
  this = *(FArchive **)(*(longlong *)param_3 + 8);
  puVar4 = (ushort *)**(undefined8 **)&this->field_0x8;
  if ((ushort *)(*(undefined8 **)&this->field_0x8)[1] < puVar4 + 1) {
    if ((this->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(this,local_res18);
    }
  }
  else {
    local_res18[0] = *puVar4;
    **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 2;
  }
  if (local_res18[0] == 0) {
    iVar1 = param_2->ArrayIndex;
    if (((iVar1 < 0) || ((int)param_1->_padding_ <= iVar1)) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar7)
       ) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((param_4 == (uchar *)0x0) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar2 = *(int *)((longlong)&param_1->_padding_ + 4);
    iVar3 = *(int *)((longlong)&param_1->_padding_ + 4);
    if ((param_1->FieldSize == '\0') &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("FieldSize != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0xa61,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    param_4[(ulonglong)param_1->ByteOffset + (longlong)iVar3 + (longlong)iVar1 * (longlong)iVar2] =
         param_4[(ulonglong)param_1->ByteOffset +
                 (longlong)iVar3 + (longlong)iVar1 * (longlong)iVar2] & ~param_1->FieldMask;
    return;
  }
  if ((local_res18[0] != 1) && (4 < (byte)LogClass._0_1_)) {
    FField::GetPathName((FField *)param_1,&local_28,(UObject *)0x0);
    FName::ToString(&param_2->Type,&local_38);
    UE::Logging::Private::BasicLog<5>
              (&`void___cdecl_LoadFromType<short>(FBoolProperty*___ptr64,FPropertyTag_const&___ptr64,FStructuredArchiveSlot,unsigned_char*___ptr64)'
                ::__l10::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  iVar1 = param_2->ArrayIndex;
  if (((iVar1 < 0) || ((int)param_1->_padding_ <= iVar1)) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar7))
  {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_4 == (uchar *)0x0) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar6 = (longlong)*(int *)((longlong)&param_1->_padding_ + 4) +
          (longlong)iVar1 * (longlong)*(int *)((longlong)&param_1->_padding_ + 4);
  if ((param_1->FieldSize == '\0') &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("FieldSize != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0xa61,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  param_4[(ulonglong)param_1->ByteOffset + lVar6] =
       ~param_1->FieldMask & param_4[(ulonglong)param_1->ByteOffset + lVar6] | param_1->ByteMask;
  return;
}

// LoadFromType<unsigned_short> @ 1421584f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
LoadFromType<unsigned_short>
          (FBoolProperty *param_1,FPropertyTag *param_2,FStructuredArchiveSlot param_3,
          uchar *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FArchive *this;
  ushort *puVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  ushort local_res18 [8];
  FString local_38;
  FString local_28;
  
  this = *(FArchive **)(*(longlong *)param_3 + 8);
  puVar4 = (ushort *)**(undefined8 **)&this->field_0x8;
  if ((ushort *)(*(undefined8 **)&this->field_0x8)[1] < puVar4 + 1) {
    if ((this->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(this,local_res18);
    }
  }
  else {
    local_res18[0] = *puVar4;
    **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 2;
  }
  if (local_res18[0] == 0) {
    iVar1 = param_2->ArrayIndex;
    if (((iVar1 < 0) || ((int)param_1->_padding_ <= iVar1)) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar7)
       ) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((param_4 == (uchar *)0x0) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar2 = *(int *)((longlong)&param_1->_padding_ + 4);
    iVar3 = *(int *)((longlong)&param_1->_padding_ + 4);
    if ((param_1->FieldSize == '\0') &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("FieldSize != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0xa61,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    param_4[(ulonglong)param_1->ByteOffset + (longlong)iVar3 + (longlong)iVar1 * (longlong)iVar2] =
         param_4[(ulonglong)param_1->ByteOffset +
                 (longlong)iVar3 + (longlong)iVar1 * (longlong)iVar2] & ~param_1->FieldMask;
    return;
  }
  if ((local_res18[0] != 1) && (4 < (byte)LogClass._0_1_)) {
    FField::GetPathName((FField *)param_1,&local_28,(UObject *)0x0);
    FName::ToString(&param_2->Type,&local_38);
    UE::Logging::Private::BasicLog<5>
              (&`void___cdecl_LoadFromType<unsigned_short>(FBoolProperty*___ptr64,FPropertyTag_const&___ptr64,FStructuredArchiveSlot,unsigned_char*___ptr64)'
                ::__l10::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  iVar1 = param_2->ArrayIndex;
  if (((iVar1 < 0) || ((int)param_1->_padding_ <= iVar1)) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar7))
  {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_4 == (uchar *)0x0) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar6 = (longlong)*(int *)((longlong)&param_1->_padding_ + 4) +
          (longlong)iVar1 * (longlong)*(int *)((longlong)&param_1->_padding_ + 4);
  if ((param_1->FieldSize == '\0') &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("FieldSize != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0xa61,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  param_4[(ulonglong)param_1->ByteOffset + lVar6] =
       ~param_1->FieldMask & param_4[(ulonglong)param_1->ByteOffset + lVar6] | param_1->ByteMask;
  return;
}

// LoadFromType<int> @ 1421587a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
LoadFromType<int>(FBoolProperty *param_1,FPropertyTag *param_2,FStructuredArchiveSlot param_3,
                 uchar *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FArchive *this;
  uint *puVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  uint local_res18 [4];
  FString local_38;
  FString local_28;
  
  this = *(FArchive **)(*(longlong *)param_3 + 8);
  puVar4 = (uint *)**(undefined8 **)&this->field_0x8;
  if ((uint *)(*(undefined8 **)&this->field_0x8)[1] < puVar4 + 1) {
    if ((this->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(this,local_res18);
    }
  }
  else {
    local_res18[0] = *puVar4;
    **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 4;
  }
  if (local_res18[0] == 0) {
    iVar1 = param_2->ArrayIndex;
    if (((iVar1 < 0) || ((int)param_1->_padding_ <= iVar1)) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar7)
       ) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((param_4 == (uchar *)0x0) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar2 = *(int *)((longlong)&param_1->_padding_ + 4);
    iVar3 = *(int *)((longlong)&param_1->_padding_ + 4);
    if ((param_1->FieldSize == '\0') &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("FieldSize != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0xa61,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    param_4[(ulonglong)param_1->ByteOffset + (longlong)iVar3 + (longlong)iVar1 * (longlong)iVar2] =
         param_4[(ulonglong)param_1->ByteOffset +
                 (longlong)iVar3 + (longlong)iVar1 * (longlong)iVar2] & ~param_1->FieldMask;
    return;
  }
  if ((local_res18[0] != 1) && (4 < (byte)LogClass._0_1_)) {
    FField::GetPathName((FField *)param_1,&local_28,(UObject *)0x0);
    FName::ToString(&param_2->Type,&local_38);
    UE::Logging::Private::BasicLog<5>
              (&`void___cdecl_LoadFromType<int>(FBoolProperty*___ptr64,FPropertyTag_const&___ptr64,FStructuredArchiveSlot,unsigned_char*___ptr64)'
                ::__l10::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  iVar1 = param_2->ArrayIndex;
  if (((iVar1 < 0) || ((int)param_1->_padding_ <= iVar1)) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar7))
  {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_4 == (uchar *)0x0) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar6 = (longlong)*(int *)((longlong)&param_1->_padding_ + 4) +
          (longlong)iVar1 * (longlong)*(int *)((longlong)&param_1->_padding_ + 4);
  if ((param_1->FieldSize == '\0') &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("FieldSize != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0xa61,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  param_4[(ulonglong)param_1->ByteOffset + lVar6] =
       ~param_1->FieldMask & param_4[(ulonglong)param_1->ByteOffset + lVar6] | param_1->ByteMask;
  return;
}

// LoadFromType<unsigned_int> @ 142158a50

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
LoadFromType<unsigned_int>
          (FBoolProperty *param_1,FPropertyTag *param_2,FStructuredArchiveSlot param_3,
          uchar *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FArchive *this;
  uint *puVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  uint local_res18 [4];
  FString local_38;
  FString local_28;
  
  this = *(FArchive **)(*(longlong *)param_3 + 8);
  puVar4 = (uint *)**(undefined8 **)&this->field_0x8;
  if ((uint *)(*(undefined8 **)&this->field_0x8)[1] < puVar4 + 1) {
    if ((this->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(this,local_res18);
    }
  }
  else {
    local_res18[0] = *puVar4;
    **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 4;
  }
  if (local_res18[0] == 0) {
    iVar1 = param_2->ArrayIndex;
    if (((iVar1 < 0) || ((int)param_1->_padding_ <= iVar1)) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar7)
       ) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((param_4 == (uchar *)0x0) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar2 = *(int *)((longlong)&param_1->_padding_ + 4);
    iVar3 = *(int *)((longlong)&param_1->_padding_ + 4);
    if ((param_1->FieldSize == '\0') &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("FieldSize != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0xa61,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    param_4[(ulonglong)param_1->ByteOffset + (longlong)iVar3 + (longlong)iVar1 * (longlong)iVar2] =
         param_4[(ulonglong)param_1->ByteOffset +
                 (longlong)iVar3 + (longlong)iVar1 * (longlong)iVar2] & ~param_1->FieldMask;
    return;
  }
  if ((local_res18[0] != 1) && (4 < (byte)LogClass._0_1_)) {
    FField::GetPathName((FField *)param_1,&local_28,(UObject *)0x0);
    FName::ToString(&param_2->Type,&local_38);
    UE::Logging::Private::BasicLog<5>
              (&`void___cdecl_LoadFromType<unsigned_int>(FBoolProperty*___ptr64,FPropertyTag_const&___ptr64,FStructuredArchiveSlot,unsigned_char*___ptr64)'
                ::__l10::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  iVar1 = param_2->ArrayIndex;
  if (((iVar1 < 0) || ((int)param_1->_padding_ <= iVar1)) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar7))
  {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_4 == (uchar *)0x0) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar6 = (longlong)*(int *)((longlong)&param_1->_padding_ + 4) +
          (longlong)iVar1 * (longlong)*(int *)((longlong)&param_1->_padding_ + 4);
  if ((param_1->FieldSize == '\0') &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("FieldSize != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0xa61,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  param_4[(ulonglong)param_1->ByteOffset + lVar6] =
       ~param_1->FieldMask & param_4[(ulonglong)param_1->ByteOffset + lVar6] | param_1->ByteMask;
  return;
}

// LoadFromType<__int64> @ 142158d00

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
LoadFromType<__int64>
          (FBoolProperty *param_1,FPropertyTag *param_2,FStructuredArchiveSlot param_3,
          uchar *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FArchive *this;
  ulong64 *puVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  ulong64 local_res18 [2];
  FString local_38;
  FString local_28;
  
  this = *(FArchive **)(*(longlong *)param_3 + 8);
  puVar4 = (ulong64 *)**(longlong **)&this->field_0x8;
  if ((ulong64 *)(*(longlong **)&this->field_0x8)[1] < puVar4 + 1) {
    if ((this->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(this,local_res18);
    }
  }
  else {
    local_res18[0] = *puVar4;
    **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 8;
  }
  if (local_res18[0] == 0) {
    iVar1 = param_2->ArrayIndex;
    if (((iVar1 < 0) || ((int)param_1->_padding_ <= iVar1)) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar7)
       ) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((param_4 == (uchar *)0x0) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar2 = *(int *)((longlong)&param_1->_padding_ + 4);
    iVar3 = *(int *)((longlong)&param_1->_padding_ + 4);
    if ((param_1->FieldSize == '\0') &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("FieldSize != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0xa61,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    param_4[(ulonglong)param_1->ByteOffset + (longlong)iVar3 + (longlong)iVar1 * (longlong)iVar2] =
         param_4[(ulonglong)param_1->ByteOffset +
                 (longlong)iVar3 + (longlong)iVar1 * (longlong)iVar2] & ~param_1->FieldMask;
    return;
  }
  if ((local_res18[0] != 1) && (4 < (byte)LogClass._0_1_)) {
    FField::GetPathName((FField *)param_1,&local_28,(UObject *)0x0);
    FName::ToString(&param_2->Type,&local_38);
    UE::Logging::Private::BasicLog<5>
              (&`void___cdecl_LoadFromType<__int64>(FBoolProperty*___ptr64,FPropertyTag_const&___ptr64,FStructuredArchiveSlot,unsigned_char*___ptr64)'
                ::__l10::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  iVar1 = param_2->ArrayIndex;
  if (((iVar1 < 0) || ((int)param_1->_padding_ <= iVar1)) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar7))
  {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_4 == (uchar *)0x0) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar6 = (longlong)*(int *)((longlong)&param_1->_padding_ + 4) +
          (longlong)iVar1 * (longlong)*(int *)((longlong)&param_1->_padding_ + 4);
  if ((param_1->FieldSize == '\0') &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("FieldSize != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0xa61,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  param_4[(ulonglong)param_1->ByteOffset + lVar6] =
       ~param_1->FieldMask & param_4[(ulonglong)param_1->ByteOffset + lVar6] | param_1->ByteMask;
  return;
}

// LoadFromType<unsigned___int64> @ 142158fb0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
LoadFromType<unsigned___int64>
          (FBoolProperty *param_1,FPropertyTag *param_2,FStructuredArchiveSlot param_3,
          uchar *param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  FArchive *this;
  ulong64 *puVar4;
  code *pcVar5;
  longlong lVar6;
  bool bVar7;
  ulong64 local_res18 [2];
  FString local_38;
  FString local_28;
  
  this = *(FArchive **)(*(longlong *)param_3 + 8);
  puVar4 = (ulong64 *)**(longlong **)&this->field_0x8;
  if ((ulong64 *)(*(longlong **)&this->field_0x8)[1] < puVar4 + 1) {
    if ((this->field_0x2a & 1) == 0) {
      (**(code **)(*(longlong *)this + 0x188))();
    }
    else {
      FArchive::SerializeByteOrderSwapped(this,local_res18);
    }
  }
  else {
    local_res18[0] = *puVar4;
    **(longlong **)&this->field_0x8 = **(longlong **)&this->field_0x8 + 8;
  }
  if (local_res18[0] == 0) {
    iVar1 = param_2->ArrayIndex;
    if (((iVar1 < 0) || ((int)param_1->_padding_ <= iVar1)) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar7)
       ) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    if ((param_4 == (uchar *)0x0) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("ContainerPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x2de,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar2 = *(int *)((longlong)&param_1->_padding_ + 4);
    iVar3 = *(int *)((longlong)&param_1->_padding_ + 4);
    if ((param_1->FieldSize == '\0') &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("FieldSize != 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0xa61,L""), bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    param_4[(ulonglong)param_1->ByteOffset + (longlong)iVar3 + (longlong)iVar1 * (longlong)iVar2] =
         param_4[(ulonglong)param_1->ByteOffset +
                 (longlong)iVar3 + (longlong)iVar1 * (longlong)iVar2] & ~param_1->FieldMask;
    return;
  }
  if ((local_res18[0] != 1) && (4 < (byte)LogClass._0_1_)) {
    FField::GetPathName((FField *)param_1,&local_28,(UObject *)0x0);
    FName::ToString(&param_2->Type,&local_38);
    UE::Logging::Private::BasicLog<5>
              (&`void___cdecl_LoadFromType<unsigned___int64>(FBoolProperty*___ptr64,FPropertyTag_const&___ptr64,FStructuredArchiveSlot,unsigned_char*___ptr64)'
                ::__l10::LOG_Static,(FLogCategoryBase *)&LogClass);
    if (local_38.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_38.Data.AllocatorInstance.Data);
    }
    if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.Data.AllocatorInstance.Data);
    }
  }
  iVar1 = param_2->ArrayIndex;
  if (((iVar1 < 0) || ((int)param_1->_padding_ <= iVar1)) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i"), bVar7))
  {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if ((param_4 == (uchar *)0x0) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  lVar6 = (longlong)*(int *)((longlong)&param_1->_padding_ + 4) +
          (longlong)iVar1 * (longlong)*(int *)((longlong)&param_1->_padding_ + 4);
  if ((param_1->FieldSize == '\0') &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("FieldSize != 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0xa61,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  param_4[(ulonglong)param_1->ByteOffset + lVar6] =
       ~param_1->FieldMask & param_4[(ulonglong)param_1->ByteOffset + lVar6] | param_1->ByteMask;
  return;
}

// MutableView<TObjectPtr<UObject>_> @ 142159260

TMutableView<TObjectPtr<UObject>_> __cdecl
MutableView<TObjectPtr<UObject>_>(TObjectPtr<UObject> *param_1)

{
  TObjectPtr<UObject>_u_0 in_RDX;
  
  param_1->field0_0x0 = in_RDX;
  return (TMutableView<TObjectPtr<UObject>_>)(UObject **)param_1;
}

// RemoveAllSwap<`TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList'::__l2::<lambda_1>_> @ 142159bb0

/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

int __thiscall
TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
          (TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
           *this,<lambda_1> *param_1,EAllowShrinking param_2)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  int iVar6;
  UObject *pUVar7;
  int iVar8;
  FWeakObjectPtr *this_00;
  uint uVar9;
  longlong lVar10;
  
  iVar6 = this->ArrayNum;
  bVar3 = false;
  uVar9 = 0;
  if (0 < iVar6) {
    lVar10 = 0;
    iVar8 = iVar6;
    do {
      uVar5 = 0;
      if ((int)uVar9 < iVar8) {
        uVar5 = ~uVar9 >> 0x1f;
      }
      if (uVar5 == 0) {
        bVar4 = ::FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar4) {
          pcVar2 = (code *)swi(3);
          iVar6 = (*pcVar2)();
          return iVar6;
        }
      }
      this_00 = (FWeakObjectPtr *)((this->AllocatorInstance).Data + lVar10);
      if (this_00[1] == (FWeakObjectPtr)0x0) {
LAB_142159c64:
        bVar3 = true;
        uVar5 = 0;
        if ((int)uVar9 < this->ArrayNum) {
          uVar5 = ~uVar9 >> 0x1f;
        }
        if (uVar5 == 0) {
          bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
          if (bVar4) {
            pcVar2 = (code *)swi(3);
            iVar6 = (*pcVar2)();
            return iVar6;
          }
        }
        pFVar1 = (this->AllocatorInstance).Data;
        iVar8 = ~uVar9 + this->ArrayNum;
        if (1 < iVar8) {
          iVar8 = 1;
        }
        if (iVar8 != 0) {
          memmove(pFVar1 + (longlong)(int)uVar9 * 0x10,
                  pFVar1 + (longlong)(this->ArrayNum - iVar8) * 0x10,(longlong)iVar8 << 4);
        }
        this->ArrayNum = this->ArrayNum + -1;
      }
      else {
        pUVar7 = FWeakObjectPtr::Get(this_00,true);
        if (pUVar7 == (UObject *)0x0) goto LAB_142159c64;
        uVar9 = uVar9 + 1;
        lVar10 = lVar10 + 0x10;
      }
      iVar8 = this->ArrayNum;
    } while ((int)uVar9 < iVar8);
    if ((bVar3) && (param_2 == Default)) {
      UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (0x10,4,&this->AllocatorInstance,iVar8,&this->ArrayMax);
    }
  }
  return iVar6 - this->ArrayNum;
}

// SerializeSingleField<FProperty> @ 14215a460

void __cdecl
SerializeSingleField<FProperty>(FArchive *param_1,FProperty **param_2,FFieldVariant param_3)

{
  code *pcVar1;
  bool bVar2;
  FProperty *pFVar3;
  FName local_res8;
  FName local_res20;
  undefined8 local_28 [2];
  
  if ((param_1->field_0x28 & 1) == 0) {
    if (*param_2 == (FProperty *)0x0) {
      local_28[0] = 0;
    }
    else {
      local_28[0] = *(undefined8 *)(*param_2)->_padding_;
    }
    (**(code **)(*(longlong *)param_1 + 0x178))(param_1,local_28);
    pFVar3 = *param_2;
    if (pFVar3 == (FProperty *)0x0) {
      return;
    }
  }
  else {
    local_res8.ComparisonIndex.Value = 0;
    local_res8.Number = 0;
    (**(code **)(*(longlong *)param_1 + 0x178))(param_1,&local_res8);
    if (local_res8 == (FName)0x0) {
      *param_2 = (FProperty *)0x0;
      return;
    }
    local_res20.ComparisonIndex.Value = 0;
    local_res20.Number = 0;
    pFVar3 = (FProperty *)
             FField::Construct(&local_res8,(FFieldVariant *)param_3.Container,&local_res20,
                               RF_NoFlags);
    if ((pFVar3 == (FProperty *)0x0) ||
       (((uint)(int)((FFieldClass *)pFVar3->_padding_)->CastFlags >> 0xf & 1) == 0)) {
      *param_2 = (FProperty *)0x0;
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("Field",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                         ,0x4aa,L"");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
      pFVar3 = *param_2;
    }
    else {
      *param_2 = pFVar3;
    }
  }
  (**(code **)(pFVar3->_padding_ + 0x10))(pFVar3,param_1);
  return;
}

// StaticEnum<enum_EFallbackEnum> @ 14215b2c0

UEnum * __cdecl StaticEnum<enum_EFallbackEnum>(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UEnum_EFallbackEnum.OuterSingleton == (UEnum *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_CoreUObject();
    Z_Registration_Info_UEnum_EFallbackEnum.OuterSingleton =
         GetStaticEnum(Z_Construct_UEnum_CoreUObject_EFallbackEnum,(UObject *)pUVar1,
                       L"EFallbackEnum");
  }
  return Z_Registration_Info_UEnum_EFallbackEnum.OuterSingleton;
}

// WithScriptMap<`FScriptMapHelper::FindMapIndexWithKey'::__l2::<lambda_1>_> @ 14215b300

int __thiscall
FScriptMapHelper::WithScriptMap<_FScriptMapHelper::FindMapIndexWithKey_::__l2::<lambda_1>_>
          (FScriptMapHelper *this,<lambda_1> *param_1)

{
  uint uVar1;
  TScriptMap<TSetAllocator<TSparseArrayAllocator<TMemoryImageAllocator<0>,TMemoryImageAllocator<0>_>,TMemoryImageAllocator<0>_>,void>
  *pTVar2;
  longlong *plVar3;
  TScriptBitArray<TMemoryImageAllocator<0>,void> *pTVar4;
  code *pcVar5;
  bool bVar6;
  char cVar7;
  int iVar8;
  uint uVar9;
  ForElementType<unsigned_int> FVar10;
  ulonglong uVar11;
  uint uVar12;
  TScriptBitArray<TMemoryImageAllocator<0>,void> *pTVar13;
  
  pTVar2 = (this->field2_0x10).FreezableMap;
  uVar1 = (pTVar2->Pairs).Elements.Data.ArrayNum;
  if ((this->MapFlags & UsesMemoryImageAllocator) == None) {
    if (uVar1 != 0) {
      if ((int)uVar1 <= **(int **)(param_1 + 0x10)) {
        **(int **)(param_1 + 0x10) = 0;
      }
      if ((**(int **)(param_1 + 0x10) < 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("IndexHint >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                             ,0x1475,L""), bVar6)) {
        pcVar5 = (code *)swi(3);
        iVar8 = (*pcVar5)();
        return iVar8;
      }
      plVar3 = (longlong *)**(undefined8 **)param_1;
      uVar12 = **(uint **)(param_1 + 0x10);
      do {
        if ((-1 < (int)uVar12) && ((int)uVar12 < *(int *)&(pTVar2->Pairs).Hash)) {
          if ((*(int *)&(pTVar2->Pairs).Hash <= (int)uVar12) &&
             (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                                ("IsValidIndex(Index)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                                 ,0x8c4,L""), bVar6)) {
            pcVar5 = (code *)swi(3);
            iVar8 = (*pcVar5)();
            return iVar8;
          }
          pTVar4 = *(TScriptBitArray<TMemoryImageAllocator<0>,void> **)
                    &(pTVar2->Pairs).Elements.FirstFreeIndex;
          pTVar13 = &(pTVar2->Pairs).Elements.AllocationFlags;
          if (pTVar4 != (TScriptBitArray<TMemoryImageAllocator<0>,void> *)0x0) {
            pTVar13 = pTVar4;
          }
          uVar9 = uVar12;
          if ((int)uVar12 < 0) {
            uVar9 = uVar12 + 0x1f;
          }
          if (((*(uint *)(&(pTVar13->AllocatorInstance).field_0x0 + (longlong)((int)uVar9 >> 5) * 4)
                >> (uVar12 & 0x1f) & 1) != 0) &&
             (cVar7 = (**(code **)(*plVar3 + 0xb8))
                                (plVar3,*(undefined8 *)(param_1 + 8),
                                 (longlong)(int)(uVar12 * *(int *)(*(longlong *)param_1 + 0x2c)) +
                                 (pTVar2->Pairs).Elements.Data._padding_,0), cVar7 != '\0')) {
            return uVar12;
          }
        }
        uVar9 = uVar12 + 1;
        uVar12 = 0;
        if (uVar9 != uVar1) {
          uVar12 = uVar9;
        }
      } while (uVar12 != **(uint **)(param_1 + 0x10));
    }
  }
  else if (uVar1 != 0) {
    if ((int)uVar1 <= **(int **)(param_1 + 0x10)) {
      **(int **)(param_1 + 0x10) = 0;
    }
    if ((**(int **)(param_1 + 0x10) < 0) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("IndexHint >= 0",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                           ,0x1475,L""), bVar6)) {
      pcVar5 = (code *)swi(3);
      iVar8 = (*pcVar5)();
      return iVar8;
    }
    plVar3 = (longlong *)**(undefined8 **)param_1;
    uVar12 = **(uint **)(param_1 + 0x10);
    do {
      if ((-1 < (int)uVar12) && ((int)uVar12 < (pTVar2->Pairs).Elements.AllocationFlags.NumBits)) {
        pTVar4 = &(pTVar2->Pairs).Elements.AllocationFlags;
        if (((pTVar2->Pairs).Elements.AllocationFlags.NumBits <= (int)uVar12) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("IsValidIndex(Index)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                               ,0x8c4,L""), bVar6)) {
          pcVar5 = (code *)swi(3);
          iVar8 = (*pcVar5)();
          return iVar8;
        }
        FVar10 = pTVar4->AllocatorInstance;
        if (((ulonglong)FVar10 & 1) != 0) {
          FVar10 = (ForElementType<unsigned_int>)
                   ((longlong)&(pTVar4->AllocatorInstance).field_0x0 + ((longlong)FVar10 >> 0x18));
        }
        uVar9 = uVar12;
        if ((int)uVar12 < 0) {
          uVar9 = uVar12 + 0x1f;
        }
        if ((*(uint *)((longlong)FVar10 + (longlong)((int)uVar9 >> 5) * 4) >> (uVar12 & 0x1f) & 1)
            != 0) {
          uVar11 = (pTVar2->Pairs).Elements.Data._padding_;
          if ((uVar11 & 1) != 0) {
            uVar11 = (longlong)&(pTVar2->Pairs).Elements.Data._padding_ + ((longlong)uVar11 >> 0x18)
            ;
          }
          cVar7 = (**(code **)(*plVar3 + 0xb8))
                            (plVar3,*(undefined8 *)(param_1 + 8),
                             (longlong)(int)(uVar12 * *(int *)(*(longlong *)param_1 + 0x2c)) +
                             uVar11,0);
          if (cVar7 != '\0') {
            return uVar12;
          }
        }
      }
      uVar9 = uVar12 + 1;
      uVar12 = 0;
      if (uVar9 != uVar1) {
        uVar12 = uVar9;
      }
    } while (uVar12 != **(uint **)(param_1 + 0x10));
  }
  return -1;
}

// WriteToString<256,UE::FPropertyTypeName_&> @ 14215b5a0

TStringBuilderWithBuffer<wchar_t,256> * __cdecl
WriteToString<256,UE::FPropertyTypeName_&>
          (TStringBuilderWithBuffer<wchar_t,256> *__return_storage_ptr__,FPropertyTypeName *param_1)

{
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  UE::AppendNode((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,
                 (FPropertyTypeNameNode *)
                 ((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)param_1->Index >> 0xd] +
                 (ulonglong)(param_1->Index & 0x1fff) * 0xc));
  return __return_storage_ptr__;
}

// WriteToString<48,FGuid_const_&> @ 14215b600

TStringBuilderWithBuffer<wchar_t,48> * __cdecl
WriteToString<48,FGuid_const_&>
          (TStringBuilderWithBuffer<wchar_t,48> *__return_storage_ptr__,FGuid *param_1)

{
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  FGuid::AppendString(param_1,(TStringBuilderBase<wchar_t> *)__return_storage_ptr__,
                      DigitsWithHyphensLower);
  return __return_storage_ptr__;
}

// WriteToString<128,FName_&> @ 14215b650

TStringBuilderWithBuffer<wchar_t,128> * __cdecl
WriteToString<128,FName_&>
          (TStringBuilderWithBuffer<wchar_t,128> *__return_storage_ptr__,FName *param_1)

{
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  FName::AppendString(param_1,(TStringBuilderBase<wchar_t> *)__return_storage_ptr__);
  return __return_storage_ptr__;
}

// WriteToString<128,UE::FPropertyTypeName_const_&> @ 14215b6a0

TStringBuilderWithBuffer<wchar_t,128> * __cdecl
WriteToString<128,UE::FPropertyTypeName_const_&>
          (TStringBuilderWithBuffer<wchar_t,128> *__return_storage_ptr__,FPropertyTypeName *param_1)

{
  *(undefined2 *)&__return_storage_ptr__->_padding_ = 0;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)__return_storage_ptr__->StringBuffer;
  __return_storage_ptr__->_padding_ = (longlong)(__return_storage_ptr__ + 1);
  UE::AppendNode((TStringBuilderBase<wchar_t> *)__return_storage_ptr__,
                 (FPropertyTypeNameNode *)
                 ((longlong)UE::GPropertyTypeNameTable.Blocks[(longlong)param_1->Index >> 0xd] +
                 (ulonglong)(param_1->Index & 0x1fff) * 0xc));
  return __return_storage_ptr__;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<UE::FPropertyTypeNameNode_*>_> @ 14215b700

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<UE::FPropertyTypeNameNode_*>_>
          (_Atomic_padded<UE::FPropertyTypeNameNode_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_address_as<__int64,std::_Atomic_padded<UE::FPropertyTypeNameNode_*>_> @ 14215b710

long64 * __cdecl
std::_Atomic_address_as<__int64,std::_Atomic_padded<UE::FPropertyTypeNameNode_*>_>
          (_Atomic_padded<UE::FPropertyTypeNameNode_*> *param_1)

{
  return (long64 *)param_1;
}

// _Atomic_reinterpret_as<__int64,UE::FPropertyTypeNameNode_*> @ 14215b720

long64 __cdecl
std::_Atomic_reinterpret_as<__int64,UE::FPropertyTypeNameNode_*>(FPropertyTypeNameNode **param_1)

{
  return (long64)*param_1;
}

// __builtin_array_init_helper<std::atomic<UE::FPropertyTypeNameNode_*>_> @ 14215b730

void __cdecl
__builtin_array_init_helper<std::atomic<UE::FPropertyTypeNameNode_*>_>
          (atomic<UE::FPropertyTypeNameNode_*> *param_1,ulong64 param_2)

{
  if (param_2 != 0) {
    memset(param_1,0,param_2 * 8);
    return;
  }
  return;
}

// ~TScopeGuard<`FSetProperty::ImportText_Internal'::__l2::<lambda_1>_> @ 142163250

void __thiscall
ScopeExitSupport::TScopeGuard<`FSetProperty::ImportText_Internal'::__l2::<lambda_1>_>::
~TScopeGuard<_FSetProperty::ImportText_Internal_::__l2::<lambda_1>_>(void *this)

{
  uint uVar1;
  FScriptSetHelper *this_00;
  TScriptSparseSet<FDefaultSetAllocator> *this_01;
  ForElementType<FSetElementId> FVar2;
  int iVar3;
  int iVar4;
  
  FMemory::Free((void *)**(undefined8 **)this);
  if (**(char **)((longlong)this + 8) == '\0') {
    this_00 = *(FScriptSetHelper **)((longlong)this + 0x10);
    iVar4 = (this_00->Set->Elements).Data.ArrayNum - (this_00->Set->Elements).NumFreeIndices;
    if (iVar4 != 0) {
      FScriptSetHelper::DestructItems(this_00,0,iVar4);
      this_01 = this_00->Set;
      uVar1 = (this_00->SetLayout).SparseArrayLayout.Alignment;
      iVar4 = (this_00->SetLayout).SparseArrayLayout.Size;
      iVar3 = 0;
      (this_01->Elements).Data.ArrayNum = 0;
      if ((this_01->Elements).Data.ArrayMax != 0) {
        TScriptArray<TSizedDefaultAllocator<32>_>::ResizeTo
                  ((TScriptArray<TSizedDefaultAllocator<32>_> *)this_01,0,iVar4,uVar1);
      }
      (this_01->Elements).FirstFreeIndex = -1;
      (this_01->Elements).NumFreeIndices = 0;
      (this_01->Elements).AllocationFlags.NumBits = 0;
      if ((this_01->Elements).AllocationFlags.MaxBits != 0) {
        (this_01->Elements).AllocationFlags.MaxBits = 0;
        TScriptBitArray<FDefaultBitArrayAllocator,void>::Realloc
                  (&(this_01->Elements).AllocationFlags,0);
      }
      FVar2 = (this_01->Hash).SecondaryData;
      if (FVar2 == (ForElementType<FSetElementId>)0x0) {
        FVar2 = (ForElementType<FSetElementId>)&this_01->Hash;
      }
      if (0 < this_01->HashSize) {
        do {
          *(undefined4 *)FVar2 = 0xffffffff;
          FVar2 = (ForElementType<FSetElementId>)((longlong)FVar2 + 4);
          iVar3 = iVar3 + 1;
        } while (iVar3 < this_01->HashSize);
      }
    }
  }
  if ((void *)**(undefined8 **)((longlong)this + 0x18) == (void *)0x0) {
    return;
  }
  FProperty::SetValue_InContainer
            (*(FProperty **)((longlong)this + 0x20),(void *)**(undefined8 **)((longlong)this + 0x28)
             ,(void *)**(undefined8 **)((longlong)this + 0x18));
  FProperty::DestroyAndFreeValue
            (*(FProperty **)((longlong)this + 0x20),(void *)**(undefined8 **)((longlong)this + 0x18)
            );
  return;
}

// ~TScopeGuard<`FMapProperty::SerializeItem'::__l37::<lambda_2>_> @ 142163350

void __thiscall
ScopeExitSupport::TScopeGuard<`FMapProperty::SerializeItem'::__l37::<lambda_2>_>::
~TScopeGuard<_FMapProperty::SerializeItem_::__l37::<lambda_2>_>(void *this)

{
  longlong *plVar1;
  
  if (**(longlong **)this != 0) {
    plVar1 = *(longlong **)(*(longlong *)((longlong)this + 8) + 0x70);
    if ((plVar1[7] & 0x1000000000U) == 0) {
      (**(code **)(*plVar1 + 0x138))();
    }
    plVar1 = *(longlong **)(*(longlong *)((longlong)this + 8) + 0x78);
    if ((plVar1[7] & 0x1000000000U) == 0) {
      (**(code **)(*plVar1 + 0x138))
                (plVar1,(longlong)*(int *)(*(longlong *)((longlong)this + 8) + 0x80) +
                        **(longlong **)this);
    }
    FMemory::Free((void *)**(undefined8 **)this);
    return;
  }
  return;
}

// operator<< @ 142163b50

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

FArchive * __cdecl operator<<(FArchive *param_1,FPropertyTag *param_2)

{
  FStructuredArchiveFromArchive *this;
  FStructuredArchiveSlot FVar1;
  undefined1 auStack_1c8 [40];
  FStructuredArchiveFromArchive local_1a0;
  ulonglong local_10;
  
  local_10 = __security_cookie.value ^ (ulonglong)auStack_1c8;
  this = FStructuredArchiveFromArchive::FStructuredArchiveFromArchive(&local_1a0,param_1);
  FVar1 = FStructuredArchiveFromArchive::GetSlot(this);
  operator<<(*(FStructuredArchiveSlot *)FVar1,param_2);
  FStructuredArchiveFromArchive::~FStructuredArchiveFromArchive(&local_1a0);
  return param_1;
}

// operator<< @ 142163bd0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EAllowShrinking": Some values do not have unique names */

FArchive * __cdecl
operator<<(FArchive *param_1,TMulticastScriptDelegate<FNotThreadSafeDelegateMode> *param_2)

{
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_> *this;
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UObject *pUVar4;
  ForElementType<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_> FVar5;
  FArchive *pFVar6;
  FWeakObjectPtr *pFVar7;
  ForElementType<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_> this_00;
  ForElementType<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_> FVar8;
  undefined1 auStack_118 [32];
  ForElementType<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_> local_f8;
  ForElementType<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_> local_f0;
  longlong local_e8;
  longlong local_e0;
  undefined8 local_d8;
  undefined1 local_c8;
  <lambda_1> local_c7;
  undefined1 local_c6;
  undefined1 local_c5;
  FDestructionSentinel local_c0;
  FReadAccessScope local_a8;
  TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
  local_88;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStack_118;
  this = &param_2->InvocationList;
  if ((param_1->field_0x28 & 4) == 0) {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,
               (FWriteAccessScope *)&local_c0);
    TArrayPrivateFriend::
    Serialize<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>
              (param_1,this);
    if ((param_1->field_0x28 & 1) != 0) {
      TArray<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedDefaultAllocator<32>_>::
      RemoveAllSwap<_TMulticastScriptDelegate<FNotThreadSafeDelegateMode>::CompactInvocationList_::__l2::<lambda_1>_>
                (this,&local_c7,Default);
    }
    if (local_c0.bDestroyed == false) {
      FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_c0.Accessor,&local_c0);
    }
  }
  else {
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_2,&local_a8);
    iVar1 = (param_2->InvocationList).ArrayNum;
    this_00 = (ForElementType<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_>)
              (this->AllocatorInstance).Data;
    FVar8 = (ForElementType<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_>)
            ((longlong)iVar1 * 0x10 + (longlong)this_00);
    local_88.AllocatorInstance.SecondaryData =
         (ForElementType<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_>)0x0;
    local_88.ArrayNum = 0;
    local_88.ArrayMax = 4;
    while( true ) {
      if ((param_2->InvocationList).ArrayNum != iVar1) {
        local_c8 = 0;
        `TCheckedPointerIterator<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,int,0>::
        operator!='::__l2::<lambda_1>::operator()(&local_c8);
      }
      if (this_00 == FVar8) break;
      local_c6 = 0;
      if ((*(FWeakObjectPtr *)((longlong)this_00 + 8) != (FWeakObjectPtr)0x0) &&
         (pUVar4 = FWeakObjectPtr::Get((FWeakObjectPtr *)this_00,true), pUVar4 != (UObject *)0x0)) {
        FVar5 = (ForElementType<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_>)&local_88;
        if (local_88.AllocatorInstance.SecondaryData !=
            (ForElementType<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_>)0x0) {
          FVar5 = local_88.AllocatorInstance.SecondaryData;
        }
        if ((ulonglong)FVar5 <= (ulonglong)this_00) {
          FVar5 = (ForElementType<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_>)&local_88;
          if (local_88.AllocatorInstance.SecondaryData !=
              (ForElementType<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_>)0x0) {
            FVar5 = local_88.AllocatorInstance.SecondaryData;
          }
          if ((ulonglong)this_00 < (ulonglong)((longlong)local_88.ArrayMax * 0x10 + (longlong)FVar5)
             ) {
            local_e0 = (longlong)local_88.ArrayNum;
            local_d8 = 0x10;
            local_f0 = (ForElementType<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_>)
                       &local_88;
            if (local_88.AllocatorInstance.SecondaryData !=
                (ForElementType<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_>)0x0) {
              local_f0 = local_88.AllocatorInstance.SecondaryData;
            }
            local_f8 = this_00;
            local_e8 = (longlong)local_88.ArrayMax;
            bVar3 = FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              );
            if (bVar3) {
              pcVar2 = (code *)swi(3);
              pFVar6 = (FArchive *)(*pcVar2)();
              return pFVar6;
            }
          }
        }
        if (local_88.ArrayNum == local_88.ArrayMax) {
          local_88.ArrayNum =
               UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>::ForElementType<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_>_>
                         (0x410,&local_88.AllocatorInstance,&local_88.ArrayMax);
        }
        FVar5 = (ForElementType<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_>)&local_88;
        if (local_88.AllocatorInstance.SecondaryData !=
            (ForElementType<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_>)0x0) {
          FVar5 = local_88.AllocatorInstance.SecondaryData;
        }
        pFVar7 = (FWeakObjectPtr *)((longlong)local_88.ArrayNum * 0x10 + (longlong)FVar5);
        local_c5 = 0;
        local_88.ArrayNum = local_88.ArrayNum + 1;
        pFVar7->ObjectIndex = 0;
        pFVar7->ObjectSerialNumber = 0;
        pFVar7[1].ObjectIndex = 0;
        pFVar7[1].ObjectSerialNumber = 0;
        *pFVar7 = *(FWeakObjectPtr *)this_00;
        pFVar7[1] = *(FWeakObjectPtr *)((longlong)this_00 + 8);
      }
      this_00 = (ForElementType<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_>)
                ((longlong)this_00 + 0x10);
    }
    TArrayPrivateFriend::
    Serialize<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>,TSizedInlineAllocator<4,32,TSizedDefaultAllocator<32>_>_>
              (param_1,&local_88);
    if (local_88.AllocatorInstance.SecondaryData !=
        (ForElementType<TScriptDelegate<FNotThreadSafeNotCheckedDelegateMode>_>)0x0) {
      FMemory::Free((void *)local_88.AllocatorInstance.SecondaryData);
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_a8);
  }
  return param_1;
}

// operator<< @ 142163e20

void __cdecl operator<<(FStructuredArchiveSlot param_1,FPropertyTag *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  FArchive *pFVar3;
  int *piVar4;
  FName FVar5;
  byte *pbVar6;
  code *pcVar7;
  bool bVar8;
  char cVar9;
  EPropertyTagExtension EVar10;
  EPropertyTagSerializeType EVar11;
  FNameEntryId FVar12;
  FArchive *pFVar13;
  long64 lVar14;
  undefined4 extraout_var;
  FName FVar15;
  FSlotBase local_res8 [2];
  byte local_res18 [8];
  undefined1 local_res20 [8];
  int iStack_34;
  
  local_res8[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar13 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res8);
  uVar2 = *(undefined8 *)&pFVar13->field_0x40;
  if (((pFVar13->field_0x28 & 0x40) != 0) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("!UnderlyingArchive.GetArchiveState().UseUnversionedPropertySerialization()"
                         ,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyTag.cpp"
                         ,0x1ba,L""), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  if ((((pFVar13->field_0x28 & 4) != 0) && (param_2->Prop == (FProperty *)0x0)) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("!UnderlyingArchive.IsSaving() || Tag.GetProperty()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyTag.cpp"
                         ,0x1bb,
                         L"FPropertyTag must be constructed with a valid property when used for saving data!"
                        ), bVar8)) {
    pcVar7 = (code *)swi(3);
    (*pcVar7)();
    return;
  }
  iStack_34 = (int)((ulonglong)uVar2 >> 0x20);
  if (0x3f3 < iStack_34) {
    if ((pFVar13->field_0x28 & 4) != 0) {
      if (param_2->SerializeType == Skipped) {
        EVar11 = Skipped;
      }
      else {
        cVar9 = (**(code **)(param_2->Prop->_padding_ + 0x180))(param_2->Prop,pFVar13);
        EVar11 = (cVar9 != '\0') + Property;
      }
      param_2->SerializeType = EVar11;
    }
    pFVar3 = (local_res8[0].StructuredArchive)->Formatter->Inner;
    (**(code **)(*(longlong *)pFVar3 + 0x178))(pFVar3,&param_2->Name);
    if (param_2->Name != (FName)0x0) {
      UE::operator<<((FStructuredArchiveSlot)local_res8[0].StructuredArchive,&param_2->TypeName);
      if ((pFVar13->field_0x28 & 1) != 0) {
        FPropertyTag::SetType(param_2,(FPropertyTypeName)(param_2->TypeName).Index);
      }
      if ((pFVar13->field_0x28 & 4) != 0) {
        lVar14 = (**(code **)(*(longlong *)pFVar13 + 0x28))(pFVar13);
        param_2->SizeOffset = lVar14;
      }
      piVar1 = &param_2->Size;
      pFVar3 = (local_res8[0].StructuredArchive)->Formatter->Inner;
      piVar4 = (int *)**(undefined8 **)&pFVar3->field_0x8;
      if ((int *)(*(undefined8 **)&pFVar3->field_0x8)[1] < piVar4 + 1) {
        if ((pFVar3->field_0x2a & 1) == 0) {
          (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,piVar1,4);
        }
        else {
          FArchive::SerializeByteOrderSwapped(pFVar3,(uint *)piVar1);
        }
      }
      else {
        *piVar1 = *piVar4;
        **(longlong **)&pFVar3->field_0x8 = **(longlong **)&pFVar3->field_0x8 + 4;
      }
      local_res18[0] = 0;
      EVar10 = CalculatePropertyExtensionFlags(pFVar13,param_2);
      if ((pFVar13->field_0x28 & 4) != 0) {
        if (param_2->ArrayIndex != 0) {
          local_res18[0] = local_res18[0] | 1;
        }
        if (param_2->HasPropertyGuid != '\0') {
          local_res18[0] = 2;
        }
        if (EVar10 != NoExtension) {
          local_res18[0] = local_res18[0] | 4;
        }
        if (param_2->SerializeType == BinaryOrNative) {
          local_res18[0] = local_res18[0] | 8;
        }
        else if (param_2->SerializeType == Skipped) {
          local_res18[0] = local_res18[0] | 0x20;
        }
        if ((param_2->BoolVal != '\0') &&
           (FVar5 = param_2->Type, FVar12 = FNameEntryId::FromValidEName((EName)local_res20),
           FVar15.Number = 0,
           FVar15.ComparisonIndex.Value = *(uint *)CONCAT44(extraout_var,FVar12.Value),
           FVar5 == FVar15)) {
          local_res18[0] = local_res18[0] | 0x10;
        }
      }
      pFVar3 = (local_res8[0].StructuredArchive)->Formatter->Inner;
      pbVar6 = (byte *)**(undefined8 **)&pFVar3->field_0x8;
      if ((byte *)(*(undefined8 **)&pFVar3->field_0x8)[1] < pbVar6 + 1) {
        (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,local_res18,1);
      }
      else {
        local_res18[0] = *pbVar6;
        **(longlong **)&pFVar3->field_0x8 = **(longlong **)&pFVar3->field_0x8 + 1;
      }
      if ((pFVar13->field_0x28 & 1) != 0) {
        param_2->HasPropertyGuid = local_res18[0] >> 1 & 1;
        if ((local_res18[0] & 0x20) == 0) {
          EVar11 = local_res18[0] >> 3 & Skipped | Property;
        }
        else {
          EVar11 = Skipped;
        }
        param_2->SerializeType = EVar11;
        param_2->BoolVal = local_res18[0] >> 4 & 1;
      }
      piVar1 = &param_2->ArrayIndex;
      if ((local_res18[0] & 1) == 0) {
        *piVar1 = 0;
      }
      else {
        pFVar13 = (local_res8[0].StructuredArchive)->Formatter->Inner;
        piVar4 = (int *)**(undefined8 **)&pFVar13->field_0x8;
        if ((int *)(*(undefined8 **)&pFVar13->field_0x8)[1] < piVar4 + 1) {
          if ((pFVar13->field_0x2a & 1) == 0) {
            (**(code **)(*(longlong *)pFVar13 + 0x188))(pFVar13,piVar1,4);
          }
          else {
            FArchive::SerializeByteOrderSwapped(pFVar13,(uint *)piVar1);
          }
        }
        else {
          *piVar1 = *piVar4;
          **(longlong **)&pFVar13->field_0x8 = **(longlong **)&pFVar13->field_0x8 + 4;
        }
      }
      if ((local_res18[0] & 2) != 0) {
        operator<<((FStructuredArchiveSlot)local_res8[0].StructuredArchive,&param_2->PropertyGuid);
      }
      if ((local_res18[0] & 4) != 0) {
        SerializePropertyExtensions
                  ((FStructuredArchiveSlot)local_res8[0].StructuredArchive,EVar10,param_2);
      }
    }
    return;
  }
  LoadPropertyTagNoFullType((FStructuredArchiveSlot)local_res8[0].StructuredArchive,param_2);
  return;
}

// operator() @ 142164cc0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __thiscall
`LoadPropertyTagNoFullType'::__l2::<lambda_1>::operator()
          (void *this,FPropertyTypeNameBuilder *param_1,FName param_2)

{
  code *pcVar1;
  wchar_t *pwVar2;
  bool bVar3;
  FName *pFVar4;
  FName FVar5;
  int iVar6;
  wchar_t *pwVar7;
  wchar_t *pwVar8;
  ulonglong uVar9;
  FName local_res18;
  undefined1 auStackY_348 [32];
  wchar_t local_318 [4];
  TStringView<wchar_t> local_310;
  FPropertyTypeNameBuilder *local_300;
  TStringView<wchar_t> local_2f8;
  wchar_t *local_2e8;
  undefined4 uStack_2e0;
  undefined4 uStack_2dc;
  wchar_t *local_2d8;
  int iStack_2d0;
  undefined4 uStack_2cc;
  wchar_t *local_2c8;
  undefined4 uStack_2c0;
  undefined4 uStack_2bc;
  code *local_2b8;
  FPropertyTypeNameBuilder **local_2b0;
  FName local_2a8;
  FName local_2a0;
  TArrayView<wchar_t_const_,int> local_298;
  TStringView<wchar_t> local_288;
  TArrayView<wchar_t_const_,int> local_278;
  TStringView<wchar_t> local_268;
  TStringBuilderBase<wchar_t> local_258;
  wchar_t local_238 [256];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_348;
  local_258.Base = local_238;
  local_258.bIsDynamic = false;
  local_258.bIsExternal = false;
  local_258.CurPos = local_238;
  local_258.End = (wchar_t *)local_38;
  local_res18 = param_2;
  ::FName::AppendString(&local_res18,&local_258);
  pwVar2 = local_258.Base;
  uVar9 = 0;
  iVar6 = (int)((longlong)local_258.CurPos - (longlong)local_258.Base >> 1);
  FVar5 = local_res18;
  pwVar7 = local_258.Base;
  if (local_258.Base != local_258.Base + iVar6) {
    do {
      pwVar8 = pwVar7 + 1;
      uVar9 = uVar9 | 1L << ((byte)*pwVar7 & 0x3f) &
                      -(ulonglong)((ushort)*pwVar7 < 0x40) & 0x400400000000000;
      pwVar7 = pwVar8;
    } while (pwVar8 != local_258.Base + iVar6);
    if (uVar9 != 0) {
      local_2e8 = local_318;
      local_2d8 = local_258.Base;
      local_288._12_4_ = uStack_2cc;
      local_288.Size = iVar6;
      uStack_2e0 = 2;
      local_298._12_4_ = uStack_2dc;
      local_298.ArrayNum = 2;
      local_2f8.DataPtr = (wchar_t *)0x0;
      local_2f8.Size = 0;
      local_310.DataPtr = (wchar_t *)0x0;
      local_310.Size = 0;
      local_318[0] = L'.';
      local_318[1] = L':';
      local_288.DataPtr = local_258.Base;
      iStack_2d0 = iVar6;
      local_298.DataPtr = local_2e8;
      bVar3 = UE::String::SplitLastOfAnyChar
                        (&local_288,&local_298,&local_2f8,&local_310,CaseSensitive,(int *)0x0);
      if (bVar3) {
        pFVar4 = ::FName::FName(&local_2a8,local_310.Size,local_310.DataPtr,FNAME_Add);
        UE::FPropertyTypeNameBuilder::AddName(param_1,*pFVar4);
        if (((param_1->Nodes).ArrayNum == 0) &&
           (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                              ("!Nodes.IsEmpty()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyTypeName.cpp"
                               ,0x1ca,L"A type name must be added prior to setting type parameters."
                              ), bVar3)) {
          pcVar1 = (code *)swi(3);
          (*pcVar1)();
          return;
        }
        local_268._12_4_ = local_2f8._12_4_;
        local_268.Size = local_2f8.Size;
        uStack_2c0 = 2;
        param_1->ActiveIndex = (param_1->Nodes).ArrayNum + -1;
        local_2b0 = &local_300;
        local_318[2] = L'.';
        local_318[3] = L':';
        local_2b8 = UE::Core::Private::Function::
                    TFunctionRefCaller<`ParsePathName'::__l5::<lambda_1>,void,TStringView<wchar_t>_>
                    ::Call;
        local_2c8 = local_318 + 2;
        local_278._12_4_ = uStack_2bc;
        local_278.ArrayNum = 2;
        local_268.DataPtr = local_2f8.DataPtr;
        local_300 = param_1;
        local_278.DataPtr = local_2c8;
        UE::String::ParseTokensMultiple
                  (&local_268,&local_278,
                   (TFunctionRef<void___cdecl(TStringView<wchar_t>)> *)&local_2b8,None);
        UE::FPropertyTypeNameBuilder::EndParameters(param_1);
        goto LAB_142164ee7;
      }
      pFVar4 = ::FName::FName(&local_2a0,iVar6,pwVar2,FNAME_Add);
      FVar5 = *pFVar4;
    }
  }
  UE::FPropertyTypeNameBuilder::AddName(param_1,FVar5);
LAB_142164ee7:
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_258);
  return;
}

// `scalar_deleting_destructor' @ 142165310

void * __thiscall
TFObjectPropertyBase<FLazyObjectPtr>::_scalar_deleting_destructor_
          (TFObjectPropertyBase<FLazyObjectPtr> *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142165370

void * __thiscall
SharedPointerInternals::TIntrusiveReferenceController<FPropertyChangedChainEvent,1>::
_scalar_deleting_destructor_
          (TIntrusiveReferenceController<FPropertyChangedChainEvent,1> *this,uint param_1)

{
  this->_padding_ = (longlong)TReferenceControllerBase<1>::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0xa8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1421653b0

void * __thiscall
TProperty<signed_char,FNumericProperty>::_scalar_deleting_destructor_
          (TProperty<signed_char,FNumericProperty> *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142165410

void * __thiscall
TProperty<short,FNumericProperty>::_scalar_deleting_destructor_
          (TProperty<short,FNumericProperty> *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142165470

void * __thiscall
TProperty<unsigned_short,FNumericProperty>::_scalar_deleting_destructor_
          (TProperty<unsigned_short,FNumericProperty> *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1421654d0

void * __thiscall
TProperty<FLazyObjectPtr,FObjectPropertyBase>::_scalar_deleting_destructor_
          (TProperty<FLazyObjectPtr,FObjectPropertyBase> *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142165530

void * __thiscall
TProperty<FSparseDelegate,FMulticastDelegateProperty>::_scalar_deleting_destructor_
          (TProperty<FSparseDelegate,FMulticastDelegateProperty> *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142165590

void * __thiscall
TProperty<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,FMulticastDelegateProperty>::
_scalar_deleting_destructor_
          (TProperty<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>,FMulticastDelegateProperty>
           *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1421655f0

void * __thiscall
TProperty<TScriptDelegate<FNotThreadSafeDelegateMode>,FProperty>::_scalar_deleting_destructor_
          (TProperty<TScriptDelegate<FNotThreadSafeDelegateMode>,FProperty> *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142165650

void * __thiscall
TProperty<FScriptInterface,FProperty>::_scalar_deleting_destructor_
          (TProperty<FScriptInterface,FProperty> *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1421656b0

void * __thiscall
TProperty<FScriptMap,FProperty>::_scalar_deleting_destructor_
          (TProperty<FScriptMap,FProperty> *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142165710

void * __thiscall
TProperty_MulticastDelegate<FSparseDelegate>::_scalar_deleting_destructor_
          (TProperty_MulticastDelegate<FSparseDelegate> *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142165770

void * __thiscall
TProperty_MulticastDelegate<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>_>::
_scalar_deleting_destructor_
          (TProperty_MulticastDelegate<TMulticastScriptDelegate<FNotThreadSafeDelegateMode>_> *this,
          uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1421657d0

void * __thiscall
TProperty_Numeric<signed_char>::_scalar_deleting_destructor_
          (TProperty_Numeric<signed_char> *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142165830

void * __thiscall
TProperty_Numeric<short>::_scalar_deleting_destructor_(TProperty_Numeric<short> *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142165890

void * __thiscall
TProperty_Numeric<unsigned_short>::_scalar_deleting_destructor_
          (TProperty_Numeric<unsigned_short> *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1421658f0

void * __thiscall
TProperty_WithEqualityAndSerializer<signed_char,FNumericProperty>::_scalar_deleting_destructor_
          (TProperty_WithEqualityAndSerializer<signed_char,FNumericProperty> *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142165950

void * __thiscall
TProperty_WithEqualityAndSerializer<short,FNumericProperty>::_scalar_deleting_destructor_
          (TProperty_WithEqualityAndSerializer<short,FNumericProperty> *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1421659b0

void * __thiscall
TProperty_WithEqualityAndSerializer<unsigned_short,FNumericProperty>::_scalar_deleting_destructor_
          (TProperty_WithEqualityAndSerializer<unsigned_short,FNumericProperty> *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142165a10

void * __thiscall
FDelegateProperty::_scalar_deleting_destructor_(FDelegateProperty *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142165a70

void * __thiscall FInt16Property::_scalar_deleting_destructor_(FInt16Property *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142165ad0

void * __thiscall FInt8Property::_scalar_deleting_destructor_(FInt8Property *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142165b30

void * __thiscall
FInterfaceProperty::_scalar_deleting_destructor_(FInterfaceProperty *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142165b90

void * __thiscall
FLazyObjectProperty::_scalar_deleting_destructor_(FLazyObjectProperty *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142165bf0

void * __thiscall FMapProperty::_scalar_deleting_destructor_(FMapProperty *this,uint param_1)

{
  FProperty *pFVar1;
  
  this->_padding_ = (longlong)&___7FMapProperty__6B_;
  pFVar1 = this->KeyProp;
  if (pFVar1 != (FProperty *)0x0) {
    (**(code **)(pFVar1->_padding_ + 8))(pFVar1,1);
  }
  pFVar1 = this->ValueProp;
  this->KeyProp = (FProperty *)0x0;
  if (pFVar1 != (FProperty *)0x0) {
    (**(code **)(pFVar1->_padding_ + 8))(pFVar1,1);
  }
  this->ValueProp = (FProperty *)0x0;
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0xa0);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142165c90

void * __thiscall
FMulticastDelegateProperty::_scalar_deleting_destructor_
          (FMulticastDelegateProperty *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142165cf0

void * __thiscall
FMulticastInlineDelegateProperty::_scalar_deleting_destructor_
          (FMulticastInlineDelegateProperty *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142165d50

void * __thiscall
FMulticastSparseDelegateProperty::_scalar_deleting_destructor_
          (FMulticastSparseDelegateProperty *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142165db0

void * __thiscall
FOptionalProperty::_scalar_deleting_destructor_(FOptionalProperty *this,uint param_1)

{
  longlong *plVar1;
  
  *(undefined ***)this = &___7FOptionalProperty__6B_;
  plVar1 = *(longlong **)&this->field_0x70;
  if (plVar1 != (longlong *)0x0) {
    (**(code **)(*plVar1 + 8))(plVar1,1);
    *(undefined8 *)&this->field_0x70 = 0;
  }
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142165e30

void * __thiscall FUInt16Property::_scalar_deleting_destructor_(FUInt16Property *this,uint param_1)

{
  FField::~FField((FField *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      FMemory::Free(this);
      return this;
    }
    __empty_global_delete(this,0x70);
  }
  return this;
}

// AreInstancedObjectsIdentical @ 142167a70

bool __cdecl AreInstancedObjectsIdentical(UObject *param_1,UObject *param_2,uint param_3)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  char cVar5;
  char cVar6;
  longlong lVar7;
  UClass *pUVar8;
  UClass *pUVar9;
  int iVar10;
  ForAnyElementType FVar11;
  int iVar12;
  undefined1 *puVar13;
  FProperty *this;
  UObject *local_48;
  UObject *pUStack_40;
  uint local_38;
  undefined4 uStack_34;
  
  if (((param_1 == (UObject *)0x0) || (param_2 == (UObject *)0x0)) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("ObjectA && ObjectB",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyHelper.cpp"
                         ,0x22,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  cVar6 = '\x01';
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) < _TSS0) && (_Init_thread_header(&_TSS0), _TSS0 == -1)) {
    atexit(`AreInstancedObjectsIdentical'::__l2::_dynamic_atexit_destructor_for__RecursionCheck__);
    _Init_thread_footer(&_TSS0);
  }
  for (FVar11.Data = RecursionCheck.AllocatorInstance.Data;
      FVar11.Data !=
      RecursionCheck.AllocatorInstance.Data + (longlong)RecursionCheck.ArrayNum * 0x18;
      FVar11.Data = FVar11.Data + 0x18) {
    if (((*(UObject **)FVar11.Data == param_1) && (*(UObject **)(FVar11.Data + 8) == param_2)) &&
       (*(uint *)(FVar11.Data + 0x10) == param_3)) {
      return true;
    }
  }
  local_48 = param_1;
  pUStack_40 = param_2;
  local_38 = param_3;
  if (((RecursionCheck.AllocatorInstance.Data <= (FScriptContainerElement *)&local_48) &&
      ((FScriptContainerElement *)&local_48 <
       RecursionCheck.AllocatorInstance.Data + (longlong)RecursionCheck.ArrayMax * 0x18)) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  if (RecursionCheck.ArrayNum == RecursionCheck.ArrayMax) {
    RecursionCheck.ArrayNum =
         UE::Core::Private::
         ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                   (0x818,&RecursionCheck.AllocatorInstance,&RecursionCheck.ArrayMax);
  }
  FVar11.Data = RecursionCheck.AllocatorInstance.Data;
  lVar7 = (longlong)RecursionCheck.ArrayNum;
  RecursionCheck.ArrayNum = RecursionCheck.ArrayNum + 1;
  pFVar1 = RecursionCheck.AllocatorInstance.Data + lVar7 * 0x18;
  *(UObject **)pFVar1 = local_48;
  *(UObject **)(pFVar1 + 8) = pUStack_40;
  *(ulonglong *)(FVar11.Data + lVar7 * 0x18 + 0x10) = CONCAT44(uStack_34,local_38);
  this = *(FProperty **)(*(longlong *)&param_1->field_0x10 + 0x70);
  if (this != (FProperty *)0x0) {
    do {
      iVar12 = 0;
      if (cVar6 == '\0') goto LAB_142167d83;
      if ((param_3 >> 0xb & 1) == 0) {
        bVar3 = FProperty::ShouldPort(this,0);
        if (bVar3) {
          pUVar8 = Z_Construct_UClass_UObject_NoRegister();
          pUVar9 = FField::GetOwnerClass((FField *)this);
          if (pUVar9 != pUVar8) {
            uVar4 = CPF_Edit;
            goto LAB_142167c71;
          }
        }
        uVar4 = CPF_None;
      }
      else {
        uVar4 = (char)this->PropertyFlags & CPF_Edit;
      }
LAB_142167c71:
      if ((uVar4 != CPF_None) && (iVar10 = this->ArrayDim, 0 < iVar10)) {
        do {
          puVar13 = (undefined1 *)0x0;
          if (cVar6 == '\0') break;
          pcVar2 = *(code **)(this->_padding_ + 0xb8);
          if (param_2 != (UObject *)0x0) {
            if (((iVar12 < 0) || (iVar10 <= iVar12)) &&
               (bVar3 = FDebug::CheckVerifyFailedImpl2
                                  ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                   ,0x2dd,L"Array index out of bounds: %i from an array of size %i")
               , bVar3)) {
              pcVar2 = (code *)swi(3);
              uVar4 = (*pcVar2)();
              return (bool)uVar4;
            }
            iVar10 = this->ArrayDim;
            puVar13 = &param_2->field_0x0 +
                      (longlong)this->Offset_Internal +
                      (longlong)iVar12 * (longlong)this->ElementSize;
          }
          if (((iVar12 < 0) || (iVar10 <= iVar12)) &&
             (bVar3 = FDebug::CheckVerifyFailedImpl2
                                ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                                 ,0x2dd,L"Array index out of bounds: %i from an array of size %i"),
             bVar3)) {
            pcVar2 = (code *)swi(3);
            uVar4 = (*pcVar2)();
            return (bool)uVar4;
          }
          cVar5 = (*pcVar2)(this,&param_1->field_0x0 +
                                 (longlong)this->Offset_Internal +
                                 (longlong)iVar12 * (longlong)this->ElementSize,puVar13,param_3);
          iVar10 = this->ArrayDim;
          if (cVar5 == '\0') {
            cVar6 = '\0';
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < iVar10);
      }
      this = this->PropertyLinkNext;
    } while (this != (FProperty *)0x0);
    if (cVar6 == '\0') goto LAB_142167d83;
  }
  cVar6 = (**(code **)(*(longlong *)param_1 + 0x1a8))(param_1,param_2);
LAB_142167d83:
  if ((RecursionCheck.ArrayNum < 1) &&
     (bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar3)) {
    pcVar2 = (code *)swi(3);
    uVar4 = (*pcVar2)();
    return (bool)uVar4;
  }
  iVar12 = (RecursionCheck.ArrayNum - (RecursionCheck.ArrayNum + -1)) + -1;
  if (iVar12 != 0) {
    memmove(RecursionCheck.AllocatorInstance.Data + (longlong)(RecursionCheck.ArrayNum + -1) * 0x18,
            RecursionCheck.AllocatorInstance.Data + (longlong)(RecursionCheck.ArrayNum + -1) * 0x18
            + 0x18,(longlong)iVar12 * 0x18);
  }
  RecursionCheck.ArrayNum = RecursionCheck.ArrayNum + -1;
  UE::Core::Private::ReallocShrink<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
            (0x18,8,&RecursionCheck.AllocatorInstance,RecursionCheck.ArrayNum,
             &RecursionCheck.ArrayMax);
  return (bool)cVar6;
}

// CalculatePropertyExtensionFlags @ 142168e70

EPropertyTagExtension __cdecl
CalculatePropertyExtensionFlags(FArchive *param_1,FPropertyTag *param_2)

{
  longlong lVar1;
  EOverriddenPropertyOperation EVar2;
  EPropertyTagExtension EVar3;
  
  EVar3 = NoExtension;
  if ((param_1->field_0x28 & 4) != 0) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar1 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    if (*(char *)(lVar1 + 0xc98) == '\0') {
      EVar2 = None;
    }
    else {
      EVar3 = OverridableInformation;
      EVar2 = FOverridableSerializationLogic::GetOverriddenPropertyOperation
                        (param_1,param_2->Prop,(uchar *)0x0,(uchar *)0x0);
    }
    param_2->OverrideOperation = EVar2;
    if ((param_2->Prop->PropertyFlags & CPF_ExperimentalOverridableLogic) != CPF_None) {
      param_2->bExperimentalOverridableLogic = true;
      return OverridableInformation;
    }
    param_2->bExperimentalOverridableLogic = false;
  }
  return EVar3;
}

// EmptyLinkFunctionForGeneratedCodePropertyHelper @ 142175bb0

void __cdecl EmptyLinkFunctionForGeneratedCodePropertyHelper(void)

{
  return;
}

// ImportDelegateFromText @ 14217ee90

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Enum "Type": Some values do not have unique names */

wchar_t * __cdecl
DelegatePropertyTools::ImportDelegateFromText
          (TScriptDelegate<FNotThreadSafeDelegateMode> *param_1,UFunction *param_2,wchar_t *param_3,
          UObject *param_4,FOutputDevice *param_5)

{
  wchar_t wVar1;
  wchar_t wVar2;
  code *pcVar3;
  ulonglong uVar4;
  undefined8 uVar5;
  FName FVar6;
  FName FVar7;
  FName FVar8;
  FField *pFVar9;
  bool bVar10;
  int iVar11;
  int iVar12;
  FName *pFVar13;
  UClass *pUVar14;
  TObjectPtr<UObject>_u_0 this;
  TObjectPtr<UObject>_u_0 TVar15;
  FString *pFVar16;
  wchar_t *pwVar17;
  uint uVar18;
  FScriptContainerElement *pFVar19;
  FNameEntryId FVar20;
  FName FVar21;
  TObjectPtr<UField>_u_0 TVar22;
  ulong64 uVar23;
  FName FVar24;
  ulonglong uVar25;
  FName local_res18;
  FScriptContainerElement *local_258;
  TObjectPtr<UObject>_u_0 local_250;
  TObjectPtr<UField>_u_0 local_248;
  undefined4 local_240;
  undefined2 local_23c;
  undefined1 local_23a;
  FName local_238;
  TObjectPtr<UField>_u_0 local_230;
  longlong local_228;
  undefined4 local_220;
  undefined2 local_21c;
  undefined1 local_21a;
  TFieldIterator<FProperty> local_218;
  undefined8 local_200;
  ulonglong local_1f8;
  FString local_1f0;
  FString local_1e0;
  FName local_1c8;
  uint uStack_1c0;
  undefined4 uStack_1bc;
  FString local_1b8;
  undefined8 local_1a8;
  FName local_1a0;
  FName local_198;
  FName local_190;
  FName local_188;
  FName local_180;
  FName local_178;
  FName local_170;
  FString local_168;
  FString local_158;
  FString local_148;
  FString local_138;
  FString local_128;
  FString local_118;
  FName local_108;
  FName local_100;
  FDestructionSentinel local_f8;
  TStringView<wchar_t> local_d8;
  TStringView<wchar_t> local_c8;
  TStringView<wchar_t> local_b8;
  FString local_a8;
  FName local_98;
  FReadAccessScope local_90;
  FReadAccessScope local_78;
  FString local_60 [2];
  
  iVar11 = iswspace(*param_3);
  while (iVar11 != 0) {
    pwVar17 = (wchar_t *)((longlong)param_3 + 2);
    param_3 = (wchar_t *)((longlong)param_3 + 2);
    iVar11 = iswspace(*pwVar17);
  }
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,
             (FWriteAccessScope *)&local_f8);
  TVar15.DebugPtr = (UObject *)0x0;
  local_1f8 = 0;
  local_1a8 = 0;
  FWeakObjectPtr::operator=(&param_1->Object,(FObjectPtr)&local_1a8);
  iVar11 = 0;
  local_200 = 0;
  (param_1->FunctionName).ComparisonIndex = 0;
  (param_1->FunctionName).Number = 0;
  if (local_f8.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_f8.Accessor,&local_f8);
  }
  wVar1 = *param_3;
  while (wVar1 == L'(') {
    pwVar17 = (wchar_t *)((longlong)param_3 + 2);
    param_3 = (wchar_t *)((longlong)param_3 + 2);
    wVar1 = *pwVar17;
  }
  uVar25 = 1L << ((byte)wVar1 & 0x3f);
  uVar4 = uVar25 & -(ulonglong)((ushort)wVar1 < 0x40) & 0x120000000001;
  FVar24 = (FName)param_3;
  while (uVar4 == 0) {
    pwVar17 = (wchar_t *)((longlong)FVar24 + 2);
    FVar24 = (FName)((longlong)FVar24 + 2);
    uVar4 = (-(ulonglong)((ushort)*pwVar17 < 0x40) & 0x120000000001) >> ((byte)*pwVar17 & 0x3f) & 1;
  }
  wVar2 = *param_3;
  uVar25 = uVar25 & -(ulonglong)((ushort)wVar1 < 0x40) & 0x400000000001;
  FVar21 = (FName)param_3;
  while (FVar7 = FVar21, uVar25 == 0) {
    wVar2 = *(wchar_t *)((longlong)FVar21 + 2);
    FVar21 = (FName)((longlong)FVar21 + 2);
    uVar25 = (-(ulonglong)((ushort)wVar2 < 0x40) & 0x400000000001) >> ((byte)wVar2 & 0x3f) & 1;
  }
  while (FVar6 = FVar21, wVar2 != L'\0') {
    wVar2 = *(wchar_t *)((longlong)FVar6 + 2);
    uVar4 = (-(ulonglong)((ushort)wVar2 < 0x40) & 0x400000000001) >> ((byte)wVar2 & 0x3f);
    FVar8 = FVar6;
    while (FVar21 = (FName)((longlong)FVar8 + 2), FVar7 = FVar6, (uVar4 & 1) == 0) {
      wVar2 = *(wchar_t *)((longlong)FVar8 + 4);
      FVar8 = (FName)((longlong)FVar8 + 2);
      uVar4 = (-(ulonglong)((ushort)wVar2 < 0x40) & 0x400000000001) >> ((byte)wVar2 & 0x3f);
    }
  }
  if ((ulonglong)FVar24 < (ulonglong)FVar7) {
    return (wchar_t *)0x0;
  }
  if (*(wchar_t *)FVar7 != L'.') {
    return (wchar_t *)0x0;
  }
  local_238 = (FName)((longlong)FVar7 - (longlong)param_3 >> 1);
  FVar20 = local_238.ComparisonIndex.Value;
  uVar23 = (ulong64)(int)FVar20.Value;
  pwVar17 = (wchar_t *)((longlong)param_3 + uVar23 * 2);
  local_1c8 = (FName)param_3;
  uStack_1c0 = FVar20.Value;
  if ((((*(wchar_t *)((longlong)param_3 + uVar23 * 2) == L')') && (FVar20.Value != 0)) &&
      (iVar12 = FGenericPlatformStricmp::Strnicmp(param_3,L"null",uVar23), iVar12 == 0)) &&
     (L"null"[uVar23] == L'\0')) {
    bVar10 = true;
    pwVar17 = pwVar17 + 1;
  }
  else {
    bVar10 = false;
  }
  if (*pwVar17 == L'.') {
    param_3 = pwVar17 + 1;
    uVar4 = (-(ulonglong)((ushort)pwVar17[1] < 0x40) & 0x120000000001) >> ((byte)pwVar17[1] & 0x3f);
    FVar24 = (FName)param_3;
    while ((uVar4 & 1) == 0) {
      pwVar17 = (wchar_t *)((longlong)FVar24 + 2);
      FVar24 = (FName)((longlong)FVar24 + 2);
      uVar4 = (-(ulonglong)((ushort)*pwVar17 < 0x40) & 0x120000000001) >> ((byte)*pwVar17 & 0x3f);
    }
    FVar20.Value = (uint)((longlong)FVar24 - (longlong)param_3 >> 1);
    pwVar17 = (wchar_t *)((longlong)param_3 + (longlong)(int)FVar20.Value * 2);
    this.DebugPtr = TVar15.DebugPtr;
  }
  else {
    if (param_4 == (UObject *)0x0) {
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
                ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_90);
      local_res18 = param_1->FunctionName;
      TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
                (&local_90);
      ::FName::ToString(&local_res18,&local_168);
      if (param_2 == (UFunction *)0x0) {
        ::FString::FString(&local_1f0,L"None");
      }
      else {
        local_1a0 = (FName)param_2->_padding_;
        ::FName::ToString(&local_1a0,&local_1f0);
      }
      FOutputDevice::LogfImpl
                (param_5,Warning,
                 L"Cannot import unqualified delegate name; no object to search. Delegate=%s SignatureFunction=%s"
                );
      local_1b8.Data.AllocatorInstance.Data = local_168.Data.AllocatorInstance.Data;
      if (local_1f0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_1f0.Data.AllocatorInstance.Data);
        local_1b8.Data.AllocatorInstance.Data = local_168.Data.AllocatorInstance.Data;
      }
      goto LAB_14217f20d;
    }
    TVar15.DebugPtr = param_4;
    if ((((*(uint *)&param_4->field_0x8 >> 4 & 1) == 0) && (*(longlong *)&param_4->field_0x20 != 0))
       && ((*(uint *)(*(longlong *)&param_4->field_0x20 + 8) >> 4 & 1) != 0)) {
      TVar15.DebugPtr = *(TObjectPtr<UObject>_u_0 *)&param_4->field_0x20;
    }
    this = (TObjectPtr<UObject>_u_0)*(TObjectPtr<UObject>_u_0 *)&(TVar15.DebugPtr)->field_0x10;
  }
  local_res18 = (FName)param_3;
  if (bVar10) {
    pFVar13 = ::FName::FName(&local_98,FVar20.Value,param_3,FNAME_Add);
    if (*pFVar13 == (FName)0x0) {
      return pwVar17;
    }
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetReadAccessScope
              ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)param_1,&local_78);
    local_198 = param_1->FunctionName;
    TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::FReadAccessScope::~FReadAccessScope
              (&local_78);
    ::FName::ToString(&local_198,&local_158);
    if (param_2 == (UFunction *)0x0) {
      ::FString::FString(&local_1e0,L"None");
    }
    else {
      local_238 = (FName)param_2->_padding_;
      ::FName::ToString(&local_238,&local_1e0);
    }
    FOutputDevice::LogfImpl
              (param_5,Warning,
               L"Cannot import delegate with function name %.*s but null class. Delegate=%s SignatureFunction=%s"
              );
    local_1b8.Data.AllocatorInstance.Data = local_158.Data.AllocatorInstance.Data;
    if (local_1e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_1e0.Data.AllocatorInstance.Data);
      local_1b8.Data.AllocatorInstance.Data = local_158.Data.AllocatorInstance.Data;
    }
  }
  else {
    if ((UClass *)this.DebugPtr == (UClass *)0x0) {
      pUVar14 = Z_Construct_UClass_UClass_NoRegister();
      FVar24 = local_1c8;
      uVar5._4_4_ = uStack_1bc;
      uVar5._0_4_ = uStack_1c0;
      local_d8.DataPtr = (wchar_t *)local_1c8;
      local_d8._8_8_ = uVar5;
      this.DebugPtr = (UObject *)UClass::TryFindTypeSlow(pUVar14,&local_d8,None);
      if ((UClass *)this.DebugPtr == (UClass *)0x0) {
        while ((UClass *)TVar15.DebugPtr == (UClass *)0x0) {
          pUVar14 = Z_Construct_UClass_UObject_NoRegister();
          if (param_4 == (UObject *)0x0) {
            local_b8.DataPtr = (wchar_t *)FVar24;
            local_b8._8_8_ = uVar5;
            TVar15.DebugPtr =
                 StaticFindFirstObject
                           (pUVar14,&local_b8,EnsureIfAmbiguous|NativeFirst,NoLogging,(wchar_t *)0x0
                           );
            if ((UClass *)TVar15.DebugPtr == (UClass *)0x0) {
              FOutputDevice::LogfImpl(param_5,Warning,L"Unable to find object %.*s for delegate");
              return (wchar_t *)0x0;
            }
            break;
          }
          local_c8.DataPtr = (wchar_t *)FVar24;
          local_c8._8_8_ = uVar5;
          TVar15.DebugPtr = StaticFindObject(pUVar14,param_4,&local_c8,None);
          param_4 = *(UObject **)&param_4->field_0x20;
        }
        this = (TObjectPtr<UObject>_u_0)*(TObjectPtr<UObject>_u_0 *)&(TVar15.DebugPtr)->field_0x10;
      }
      else {
        if ((((TObjectPtr<UObject> *)&this.DebugPtr[6].field_0x20)->field0_0x0).DebugPtr ==
            (UObject *)0x0) {
          UClass::InternalCreateDefaultObjectWrapper((UClass *)this.DebugPtr);
        }
        TVar15 = (TObjectPtr<UObject>_u_0)
                 (((TObjectPtr<UObject> *)&this.DebugPtr[6].field_0x20)->field0_0x0).DebugPtr;
      }
    }
    local_258 = (FScriptContainerElement *)0x0;
    pFVar16 = ::FString::ConstructFromPtrSize(&local_a8,(wchar_t *)local_res18,FVar20.Value);
    if (local_60 != pFVar16) {
      local_258 = (pFVar16->Data).AllocatorInstance.Data;
      (pFVar16->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      iVar11 = (pFVar16->Data).ArrayNum;
      (pFVar16->Data).ArrayNum = 0;
      (pFVar16->Data).ArrayMax = 0;
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    pFVar19 = (FScriptContainerElement *)L"";
    if (iVar11 != 0) {
      pFVar19 = local_258;
    }
    ::FName::FName(&local_190,(wchar_t *)pFVar19,FNAME_Find);
    if (local_190 != (FName)0x0) {
      if ((UClass *)this.DebugPtr == (UClass *)0x0) {
        local_248.DebugPtr = (UField *)0x0;
      }
      else {
        local_248 = (TObjectPtr<UField>_u_0)*(TObjectPtr<UField>_u_0 *)&this.DebugPtr[1].field_0x20;
      }
      local_240 = 0xffffffff;
      local_23c = 0x101;
      local_23a = 0;
      local_250 = this;
      TFieldIterator<UFunction>::IterateToNext((TFieldIterator<UFunction> *)&local_250.ObjectPtr);
      TVar22 = local_248;
      while (local_248 = TVar22, TVar22.DebugPtr != (UField *)0x0) {
        if ((FName)(TVar22.DebugPtr)->_padding_ == local_190) goto LAB_14217f546;
        local_248 = (TObjectPtr<UField>_u_0)((TVar22.DebugPtr)->Next).field0_0x0.DebugPtr;
        TFieldIterator<UFunction>::IterateToNext((TFieldIterator<UFunction> *)&local_250.ObjectPtr);
        TVar22 = local_248;
      }
    }
    TVar22.DebugPtr = (UField *)0x0;
LAB_14217f546:
    if (local_258 != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_258);
    }
    if (TVar22.DebugPtr == (UField *)0x0) {
      if ((UClass *)this.DebugPtr == (UClass *)0x0) {
        ::FString::FString(&local_1b8,L"None");
      }
      else {
        local_188 = *(FName *)&(this.DebugPtr)->field_0x18;
        ::FName::ToString(&local_188,&local_1b8);
      }
      FOutputDevice::LogfImpl
                (param_5,Warning,
                 L"Unable to find function %.*s in object %.*s for delegate (found class: %s)");
    }
    else {
      if ((param_2 == (UFunction *)0x0) &&
         (bVar10 = ::FDebug::CheckVerifyFailedImpl2
                             ("SignatureFunction != nullptr && \"Invalid delegate property\"",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyHelper.cpp"
                              ,0x108,L""), bVar10)) {
        pcVar3 = (code *)swi(3);
        pwVar17 = (wchar_t *)(*pcVar3)();
        return pwVar17;
      }
      if (*(uchar *)((longlong)&TVar22.DebugPtr[3]._padding_ + 4) == param_2->NumParms) {
        local_228 = TVar22.DebugPtr[1]._padding_;
        local_220 = 0xffffffff;
        local_21c = 0x101;
        local_21a = 0;
        local_230 = TVar22;
        TFieldIterator<FProperty>::IterateToNext((TFieldIterator<FProperty> *)&local_230.ObjectPtr);
        local_218.Field = (FField *)param_2->_padding_;
        local_218.InterfaceIndex = -1;
        local_218.bIncludeSuper = true;
        local_218.bIncludeDeprecated = true;
        local_218.bIncludeInterface = false;
        local_218.Struct = (UStruct *)param_2;
        TFieldIterator<FProperty>::IterateToNext(&local_218);
        if (param_2->NumParms != '\0') {
          do {
            pFVar9 = local_218.Field;
            if ((*(FFieldClass **)(local_228 + 8) != (local_218.Field)->ClassPrivate) ||
               (((*(uint *)&local_218.Field[1].ClassPrivate ^ *(uint *)(local_228 + 0x38)) >> 8 & 1)
                != 0)) {
              local_170 = (FName)param_2->_padding_;
              ::FName::ToString(&local_170,&local_118);
              local_100 = (FName)(TVar22.DebugPtr)->_padding_;
              ::FName::ToString(&local_100,&local_128);
              FOutputDevice::LogfImpl
                        (param_5,Warning,
                         L"Function %s does not match param types with delegate signature %s");
              local_1b8.Data.AllocatorInstance.Data = local_118.Data.AllocatorInstance.Data;
              if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                FMemory::Free(local_128.Data.AllocatorInstance.Data);
                local_1b8.Data.AllocatorInstance.Data = local_118.Data.AllocatorInstance.Data;
              }
              goto LAB_14217f20d;
            }
            local_228 = *(longlong *)(local_228 + 0x18);
            TFieldIterator<FProperty>::IterateToNext
                      ((TFieldIterator<FProperty> *)&local_230.ObjectPtr);
            local_218.Field = pFVar9->Next;
            TFieldIterator<FProperty>::IterateToNext(&local_218);
            uVar18 = (int)local_1f8 + 1;
            local_1f8 = (ulonglong)uVar18;
          } while ((int)uVar18 < (int)(uint)param_2->NumParms);
        }
        local_108 = (FName)(TVar22.DebugPtr)->_padding_;
        TScriptDelegate<FNotThreadSafeDelegateMode>::BindUFunction
                  (param_1,TVar15.DebugPtr,&local_108);
        return pwVar17;
      }
      local_180 = (FName)param_2->_padding_;
      ::FName::ToString(&local_180,&local_138);
      local_178 = (FName)(TVar22.DebugPtr)->_padding_;
      ::FName::ToString(&local_178,&local_148);
      FOutputDevice::LogfImpl
                (param_5,Warning,
                 L"Function %s does not match number of params with delegate signature %s");
      local_1b8.Data.AllocatorInstance.Data = local_138.Data.AllocatorInstance.Data;
      if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_148.Data.AllocatorInstance.Data);
        local_1b8.Data.AllocatorInstance.Data = local_138.Data.AllocatorInstance.Data;
      }
    }
  }
LAB_14217f20d:
  if (local_1b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_1b8.Data.AllocatorInstance.Data);
  }
  return (wchar_t *)0x0;
}

// LoadPropertyTagNoFullType @ 1421855a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl LoadPropertyTagNoFullType(FStructuredArchiveSlot param_1,FPropertyTag *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  FArchive *pFVar3;
  int *piVar4;
  uchar *puVar5;
  code *pcVar6;
  FName FVar7;
  bool bVar8;
  EPropertyTagExtension EVar9;
  FNameEntryId FVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  FArchive *pFVar14;
  undefined4 extraout_var;
  FName *pFVar15;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  undefined4 extraout_var_06;
  undefined4 extraout_var_07;
  ForElementType<int> FVar16;
  ForElementType<UE::FPropertyTypeNameNode> FVar17;
  int iVar18;
  longlong lVar19;
  FSlotBase local_res8 [2];
  undefined1 auStack_268 [32];
  longlong local_248;
  longlong local_240;
  undefined1 local_238 [8];
  FName local_230;
  FGuid local_228;
  FName local_218;
  FName local_210;
  FName local_208;
  FName local_200;
  FName local_1f8;
  FName local_1f0;
  FName local_1e8;
  uint local_1e0;
  undefined4 uStack_1dc;
  undefined1 local_1d8 [4];
  undefined1 local_1d4 [4];
  undefined1 local_1d0 [4];
  undefined1 local_1cc [4];
  undefined1 local_1c8 [4];
  undefined1 local_1c4 [4];
  undefined1 local_1c0 [4];
  undefined1 local_1bc [4];
  undefined1 local_1b8 [8];
  undefined8 local_1b0;
  FSerializedPropertyScope local_1a8;
  FName local_198 [2];
  FPropertyTypeNameBuilder local_188;
  TStringBuilderBase<wchar_t> local_b8;
  wchar_t local_98 [48];
  ulonglong local_38 [2];
  
  local_38[0] = __security_cookie.value ^ (ulonglong)auStack_268;
  local_res8[0].StructuredArchive = (FStructuredArchive *)param_1;
  pFVar14 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(local_res8);
  uVar2 = *(undefined8 *)&pFVar14->field_0x40;
  local_1b0 = uVar2;
  if (((pFVar14->field_0x28 & 1) == 0) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("UnderlyingArchive.IsLoading()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyTag.cpp"
                         ,0xd6,L""), bVar8)) {
    pcVar6 = (code *)swi(3);
    (*pcVar6)();
    return;
  }
  pFVar3 = (local_res8[0].StructuredArchive)->Formatter->Inner;
  (**(code **)(*(longlong *)pFVar3 + 0x178))(pFVar3,&param_2->Name);
  if (param_2->Name != (FName)0x0) {
    pFVar3 = (local_res8[0].StructuredArchive)->Formatter->Inner;
    (**(code **)(*(longlong *)pFVar3 + 0x178))(pFVar3,&param_2->Type);
    piVar1 = &param_2->Size;
    pFVar3 = (local_res8[0].StructuredArchive)->Formatter->Inner;
    piVar4 = (int *)**(undefined8 **)&pFVar3->field_0x8;
    if ((int *)(*(undefined8 **)&pFVar3->field_0x8)[1] < piVar4 + 1) {
      if ((pFVar3->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,piVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar3,(uint *)piVar1);
      }
    }
    else {
      *piVar1 = *piVar4;
      **(longlong **)&pFVar3->field_0x8 = **(longlong **)&pFVar3->field_0x8 + 4;
    }
    piVar1 = &param_2->ArrayIndex;
    pFVar3 = (local_res8[0].StructuredArchive)->Formatter->Inner;
    piVar4 = (int *)**(undefined8 **)&pFVar3->field_0x8;
    if ((int *)(*(undefined8 **)&pFVar3->field_0x8)[1] < piVar4 + 1) {
      if ((pFVar3->field_0x2a & 1) == 0) {
        (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,piVar1,4);
      }
      else {
        FArchive::SerializeByteOrderSwapped(pFVar3,(uint *)piVar1);
      }
    }
    else {
      *piVar1 = *piVar4;
      **(longlong **)&pFVar3->field_0x8 = **(longlong **)&pFVar3->field_0x8 + 4;
    }
    iVar18 = (int)uVar2;
    if ((param_2->Type).Number == 0) {
      local_188.Nodes.ArrayMax = 10;
      local_188.Nodes.AllocatorInstance.SecondaryData =
           (ForElementType<UE::FPropertyTypeNameNode>)0x0;
      uVar12 = 0;
      local_188.Nodes.ArrayNum = 0;
      local_188.OuterNodeIndex.AllocatorInstance.SecondaryData = (ForElementType<int>)0x0;
      local_188.OuterNodeIndex.ArrayNum = 0;
      local_188.OuterNodeIndex.ArrayMax = 10;
      local_188.ActiveIndex = -1;
      UE::FPropertyTypeNameBuilder::AddName(&local_188,param_2->Type);
      uVar11 = (param_2->Type).ComparisonIndex.Value;
      FVar10 = FNameEntryId::FromValidENamePostInit((EName)local_1d8);
      if (uVar11 == *(uint *)CONCAT44(extraout_var,FVar10.Value)) {
        if ((local_188.Nodes.ArrayNum == 0) &&
           (bVar8 = FDebug::CheckVerifyFailedImpl2
                              ("!Nodes.IsEmpty()",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyTypeName.cpp"
                               ,0x1ca,L"A type name must be added prior to setting type parameters."
                              ), bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        local_188.ActiveIndex = local_188.Nodes.ArrayNum - 1;
        local_218.ComparisonIndex.Value = 0;
        local_218.Number = 0;
        local_228.A = 0;
        local_228.B = 0;
        local_228.C = 0;
        local_228.D = 0;
        pFVar3 = (local_res8[0].StructuredArchive)->Formatter->Inner;
        (**(code **)(*(longlong *)pFVar3 + 0x178))(pFVar3,&local_218);
        UE::FPropertyTypeNameBuilder::AddName(&local_188,local_218);
        if (0x1b8 < iVar18) {
          operator<<((FStructuredArchiveSlot)local_res8[0].StructuredArchive,&local_228);
          if (((local_228.D != 0 || local_228.C != 0) || local_228.B != 0) || local_228.A != 0) {
            local_b8.Base = local_98;
            local_b8.bIsDynamic = false;
            local_b8.bIsExternal = false;
            local_b8.CurPos = local_98;
            local_b8.End = (wchar_t *)local_38;
            FGuid::AppendString(&local_228,&local_b8,DigitsWithHyphensLower);
            pFVar15 = FName::FName(local_198,
                                   (int)((longlong)local_b8.CurPos - (longlong)local_b8.Base >> 1),
                                   local_b8.Base,FNAME_Add);
            UE::FPropertyTypeNameBuilder::AddName(&local_188,*pFVar15);
            TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_b8);
          }
        }
        lVar19 = (longlong)local_188.ActiveIndex;
        uVar11 = uVar12;
        if (local_188.ActiveIndex < local_188.OuterNodeIndex.ArrayNum) {
          uVar11 = (uint)~local_188.ActiveIndex >> 0x1f;
        }
        if ((uVar11 == 0) &&
           (local_248 = lVar19, local_240 = (longlong)local_188.OuterNodeIndex.ArrayNum,
           bVar8 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
           bVar8)) {
          pcVar6 = (code *)swi(3);
          (*pcVar6)();
          return;
        }
        FVar16 = (ForElementType<int>)&local_188.OuterNodeIndex;
        if (local_188.OuterNodeIndex.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
          FVar16 = local_188.OuterNodeIndex.AllocatorInstance.SecondaryData;
        }
        local_188.ActiveIndex = *(int *)((longlong)FVar16 + lVar19 * 4);
        param_2->StructName = local_218;
        (param_2->StructGuid).A = local_228.A;
        (param_2->StructGuid).B = local_228.B;
        (param_2->StructGuid).C = local_228.C;
        (param_2->StructGuid).D = local_228.D;
      }
      else {
        FVar10 = FNameEntryId::FromValidENamePostInit((EName)local_1d4);
        if (uVar11 == *(uint *)CONCAT44(extraout_var_00,FVar10.Value)) {
          if ((pFVar14->field_0x28 & 4) == 0) {
            pFVar3 = (local_res8[0].StructuredArchive)->Formatter->Inner;
            puVar5 = (uchar *)**(undefined8 **)&pFVar3->field_0x8;
            if ((uchar *)(*(undefined8 **)&pFVar3->field_0x8)[1] < puVar5 + 1) {
              (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,&param_2->BoolVal,1);
            }
            else {
              param_2->BoolVal = *puVar5;
              **(longlong **)&pFVar3->field_0x8 = **(longlong **)&pFVar3->field_0x8 + 1;
            }
          }
          else {
            local_1a8.Property = param_2->Prop;
            local_1a8.Ar = pFVar14;
            FSerializedPropertyScope::PushProperty(&local_1a8);
            pFVar3 = (local_res8[0].StructuredArchive)->Formatter->Inner;
            puVar5 = (uchar *)**(undefined8 **)&pFVar3->field_0x8;
            if ((uchar *)(*(undefined8 **)&pFVar3->field_0x8)[1] < puVar5 + 1) {
              (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,&param_2->BoolVal,1);
            }
            else {
              param_2->BoolVal = *puVar5;
              **(longlong **)&pFVar3->field_0x8 = **(longlong **)&pFVar3->field_0x8 + 1;
            }
            FSerializedPropertyScope::PopProperty(&local_1a8);
          }
        }
        else {
          FVar10 = FNameEntryId::FromValidENamePostInit((EName)local_1d0);
          uVar13 = 0;
          if (uVar11 == *(uint *)CONCAT44(extraout_var_01,FVar10.Value)) {
            local_230.ComparisonIndex.Value = 0;
            local_230.Number = 0;
            pFVar3 = (local_res8[0].StructuredArchive)->Formatter->Inner;
            (**(code **)(*(longlong *)pFVar3 + 0x178))(pFVar3,&local_230);
            if (local_230 == (FName)0x0) {
              (param_2->EnumName).ComparisonIndex = 0;
              (param_2->EnumName).Number = 0;
            }
            else {
              if ((local_188.Nodes.ArrayNum == 0) &&
                 (bVar8 = FDebug::CheckVerifyFailedImpl2
                                    ("!Nodes.IsEmpty()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyTypeName.cpp"
                                     ,0x1ca,
                                     L"A type name must be added prior to setting type parameters.")
                 , bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              local_188.ActiveIndex = local_188.Nodes.ArrayNum - 1;
              `LoadPropertyTagNoFullType'::__l2::<lambda_1>::operator()
                        (local_238,&local_188,local_230);
              lVar19 = (longlong)local_188.ActiveIndex;
              if (local_188.ActiveIndex < local_188.OuterNodeIndex.ArrayNum) {
                uVar13 = (uint)~local_188.ActiveIndex >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (local_248 = lVar19, local_240 = (longlong)local_188.OuterNodeIndex.ArrayNum,
                 bVar8 = FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              FVar16 = (ForElementType<int>)&local_188.OuterNodeIndex;
              if (local_188.OuterNodeIndex.AllocatorInstance.SecondaryData !=
                  (ForElementType<int>)0x0) {
                FVar16 = local_188.OuterNodeIndex.AllocatorInstance.SecondaryData;
              }
              local_188.ActiveIndex = *(int *)((longlong)FVar16 + lVar19 * 4);
              param_2->EnumName = local_230;
            }
          }
          else {
            FVar10 = FNameEntryId::FromValidENamePostInit((EName)local_1cc);
            if (uVar11 == *(uint *)CONCAT44(extraout_var_02,FVar10.Value)) {
              local_210.ComparisonIndex.Value = 0;
              local_210.Number = 0;
              pFVar3 = (local_res8[0].StructuredArchive)->Formatter->Inner;
              (**(code **)(*(longlong *)pFVar3 + 0x178))(pFVar3,&local_210);
              if ((local_188.Nodes.ArrayNum == 0) &&
                 (bVar8 = FDebug::CheckVerifyFailedImpl2
                                    ("!Nodes.IsEmpty()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyTypeName.cpp"
                                     ,0x1ca,
                                     L"A type name must be added prior to setting type parameters.")
                 , bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              local_188.ActiveIndex = local_188.Nodes.ArrayNum - 1;
              `LoadPropertyTagNoFullType'::__l2::<lambda_1>::operator()
                        (local_238,&local_188,local_210);
              FVar10 = FNameEntryId::FromValidEName((EName)local_1c8);
              uStack_1dc = 0;
              local_1e0 = *(uint *)CONCAT44(extraout_var_03,FVar10.Value);
              FVar7.Number = 0;
              FVar7.ComparisonIndex.Value = local_1e0;
              UE::FPropertyTypeNameBuilder::AddName(&local_188,FVar7);
              lVar19 = (longlong)local_188.ActiveIndex;
              if (local_188.ActiveIndex < local_188.OuterNodeIndex.ArrayNum) {
                uVar13 = (uint)~local_188.ActiveIndex >> 0x1f;
              }
              if ((uVar13 == 0) &&
                 (local_248 = lVar19, local_240 = (longlong)local_188.OuterNodeIndex.ArrayNum,
                 bVar8 = FDebug::CheckVerifyFailedImpl2
                                   ("(Index >= 0) & (Index < ArrayNum)",
                                    "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                    ,0x447,
                                    L"Array index out of bounds: %lld into an array of size %lld"),
                 bVar8)) {
                pcVar6 = (code *)swi(3);
                (*pcVar6)();
                return;
              }
              FVar16 = (ForElementType<int>)&local_188.OuterNodeIndex;
              if (local_188.OuterNodeIndex.AllocatorInstance.SecondaryData !=
                  (ForElementType<int>)0x0) {
                FVar16 = local_188.OuterNodeIndex.AllocatorInstance.SecondaryData;
              }
              local_188.ActiveIndex = *(int *)((longlong)FVar16 + lVar19 * 4);
              param_2->EnumName = local_210;
            }
            else {
              FVar10 = FNameEntryId::FromValidENamePostInit((EName)local_1c4);
              if (uVar11 == *(uint *)CONCAT44(extraout_var_04,FVar10.Value)) {
                local_208.ComparisonIndex.Value = 0;
                local_208.Number = 0;
                if (0x119 < iVar18) {
                  pFVar3 = (local_res8[0].StructuredArchive)->Formatter->Inner;
                  (**(code **)(*(longlong *)pFVar3 + 0x178))(pFVar3,&local_208);
                }
                if ((local_188.Nodes.ArrayNum == 0) &&
                   (bVar8 = FDebug::CheckVerifyFailedImpl2
                                      ("!Nodes.IsEmpty()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyTypeName.cpp"
                                       ,0x1ca,
                                       L"A type name must be added prior to setting type parameters."
                                      ), bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                local_188.ActiveIndex = local_188.Nodes.ArrayNum - 1;
                UE::FPropertyTypeNameBuilder::AddName(&local_188,local_208);
                lVar19 = (longlong)local_188.ActiveIndex;
                if (local_188.ActiveIndex < local_188.OuterNodeIndex.ArrayNum) {
                  uVar13 = (uint)~local_188.ActiveIndex >> 0x1f;
                }
                if ((uVar13 == 0) &&
                   (local_248 = lVar19, local_240 = (longlong)local_188.OuterNodeIndex.ArrayNum,
                   bVar8 = FDebug::CheckVerifyFailedImpl2
                                     ("(Index >= 0) & (Index < ArrayNum)",
                                      "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                      ,0x447,
                                      L"Array index out of bounds: %lld into an array of size %lld")
                   , bVar8)) {
                  pcVar6 = (code *)swi(3);
                  (*pcVar6)();
                  return;
                }
                FVar16 = (ForElementType<int>)&local_188.OuterNodeIndex;
                if (local_188.OuterNodeIndex.AllocatorInstance.SecondaryData !=
                    (ForElementType<int>)0x0) {
                  FVar16 = local_188.OuterNodeIndex.AllocatorInstance.SecondaryData;
                }
                local_188.ActiveIndex = *(int *)((longlong)FVar16 + lVar19 * 4);
                param_2->InnerType = local_208;
              }
              else {
                FVar10 = FNameEntryId::FromValidENamePostInit((EName)local_1c0);
                if (uVar11 == *(uint *)CONCAT44(extraout_var_05,FVar10.Value)) {
                  local_200.ComparisonIndex.Value = 0;
                  local_200.Number = 0;
                  pFVar3 = (local_res8[0].StructuredArchive)->Formatter->Inner;
                  (**(code **)(*(longlong *)pFVar3 + 0x178))(pFVar3,&local_200);
                  if ((local_188.Nodes.ArrayNum == 0) &&
                     (bVar8 = FDebug::CheckVerifyFailedImpl2
                                        ("!Nodes.IsEmpty()",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyTypeName.cpp"
                                         ,0x1ca,
                                         L"A type name must be added prior to setting type parameters."
                                        ), bVar8)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  local_188.ActiveIndex = local_188.Nodes.ArrayNum - 1;
                  UE::FPropertyTypeNameBuilder::AddName(&local_188,local_200);
                  lVar19 = (longlong)local_188.ActiveIndex;
                  if (local_188.ActiveIndex < local_188.OuterNodeIndex.ArrayNum) {
                    uVar13 = (uint)~local_188.ActiveIndex >> 0x1f;
                  }
                  if ((uVar13 == 0) &&
                     (local_248 = lVar19, local_240 = (longlong)local_188.OuterNodeIndex.ArrayNum,
                     bVar8 = FDebug::CheckVerifyFailedImpl2
                                       ("(Index >= 0) & (Index < ArrayNum)",
                                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                        ,0x447,
                                        L"Array index out of bounds: %lld into an array of size %lld"
                                       ), bVar8)) {
                    pcVar6 = (code *)swi(3);
                    (*pcVar6)();
                    return;
                  }
                  FVar16 = (ForElementType<int>)&local_188.OuterNodeIndex;
                  if (local_188.OuterNodeIndex.AllocatorInstance.SecondaryData !=
                      (ForElementType<int>)0x0) {
                    FVar16 = local_188.OuterNodeIndex.AllocatorInstance.SecondaryData;
                  }
                  local_188.ActiveIndex = *(int *)((longlong)FVar16 + lVar19 * 4);
                  param_2->InnerType = local_200;
                }
                else if (0x1fc < iVar18) {
                  FVar10 = FNameEntryId::FromValidENamePostInit((EName)local_1bc);
                  if (uVar11 == *(uint *)CONCAT44(extraout_var_06,FVar10.Value)) {
                    local_1f8.ComparisonIndex.Value = 0;
                    local_1f8.Number = 0;
                    pFVar3 = (local_res8[0].StructuredArchive)->Formatter->Inner;
                    (**(code **)(*(longlong *)pFVar3 + 0x178))(pFVar3,&local_1f8);
                    if ((local_188.Nodes.ArrayNum == 0) &&
                       (bVar8 = FDebug::CheckVerifyFailedImpl2
                                          ("!Nodes.IsEmpty()",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyTypeName.cpp"
                                           ,0x1ca,
                                           L"A type name must be added prior to setting type parameters."
                                          ), bVar8)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    local_188.ActiveIndex = local_188.Nodes.ArrayNum - 1;
                    UE::FPropertyTypeNameBuilder::AddName(&local_188,local_1f8);
                    lVar19 = (longlong)local_188.ActiveIndex;
                    if (local_188.ActiveIndex < local_188.OuterNodeIndex.ArrayNum) {
                      uVar13 = (uint)~local_188.ActiveIndex >> 0x1f;
                    }
                    if ((uVar13 == 0) &&
                       (local_248 = lVar19, local_240 = (longlong)local_188.OuterNodeIndex.ArrayNum,
                       bVar8 = FDebug::CheckVerifyFailedImpl2
                                         ("(Index >= 0) & (Index < ArrayNum)",
                                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                          ,0x447,
                                          L"Array index out of bounds: %lld into an array of size %lld"
                                         ), bVar8)) {
                      pcVar6 = (code *)swi(3);
                      (*pcVar6)();
                      return;
                    }
                    FVar16 = (ForElementType<int>)&local_188.OuterNodeIndex;
                    if (local_188.OuterNodeIndex.AllocatorInstance.SecondaryData !=
                        (ForElementType<int>)0x0) {
                      FVar16 = local_188.OuterNodeIndex.AllocatorInstance.SecondaryData;
                    }
                    local_188.ActiveIndex = *(int *)((longlong)FVar16 + lVar19 * 4);
                    param_2->InnerType = local_1f8;
                  }
                  else {
                    FVar10 = FNameEntryId::FromValidENamePostInit((EName)local_1b8);
                    if (uVar11 == *(uint *)CONCAT44(extraout_var_07,FVar10.Value)) {
                      local_1f0.ComparisonIndex.Value = 0;
                      local_1f0.Number = 0;
                      local_1e8.ComparisonIndex.Value = 0;
                      local_1e8.Number = 0;
                      pFVar3 = (local_res8[0].StructuredArchive)->Formatter->Inner;
                      (**(code **)(*(longlong *)pFVar3 + 0x178))(pFVar3,&local_1f0);
                      pFVar3 = (local_res8[0].StructuredArchive)->Formatter->Inner;
                      (**(code **)(*(longlong *)pFVar3 + 0x178))(pFVar3,&local_1e8);
                      if ((local_188.Nodes.ArrayNum == 0) &&
                         (bVar8 = FDebug::CheckVerifyFailedImpl2
                                            ("!Nodes.IsEmpty()",
                                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyTypeName.cpp"
                                             ,0x1ca,
                                             L"A type name must be added prior to setting type parameters."
                                            ), bVar8)) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      local_188.ActiveIndex = local_188.Nodes.ArrayNum - 1;
                      UE::FPropertyTypeNameBuilder::AddName(&local_188,local_1f0);
                      UE::FPropertyTypeNameBuilder::AddName(&local_188,local_1e8);
                      lVar19 = (longlong)local_188.ActiveIndex;
                      if (local_188.ActiveIndex < local_188.OuterNodeIndex.ArrayNum) {
                        uVar13 = (uint)~local_188.ActiveIndex >> 0x1f;
                      }
                      if ((uVar13 == 0) &&
                         (local_248 = lVar19,
                         local_240 = (longlong)local_188.OuterNodeIndex.ArrayNum,
                         bVar8 = FDebug::CheckVerifyFailedImpl2
                                           ("(Index >= 0) & (Index < ArrayNum)",
                                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                            ,0x447,
                                            L"Array index out of bounds: %lld into an array of size %lld"
                                           ), bVar8)) {
                        pcVar6 = (code *)swi(3);
                        (*pcVar6)();
                        return;
                      }
                      FVar16 = (ForElementType<int>)&local_188.OuterNodeIndex;
                      if (local_188.OuterNodeIndex.AllocatorInstance.SecondaryData !=
                          (ForElementType<int>)0x0) {
                        FVar16 = local_188.OuterNodeIndex.AllocatorInstance.SecondaryData;
                      }
                      local_188.ActiveIndex = *(int *)((longlong)FVar16 + lVar19 * 4);
                      param_2->InnerType = local_1f0;
                      param_2->ValueType = local_1e8;
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (local_188.Nodes.ArrayNum != 0) {
        FVar17 = (ForElementType<UE::FPropertyTypeNameNode>)&local_188;
        if (local_188.Nodes.AllocatorInstance.SecondaryData !=
            (ForElementType<UE::FPropertyTypeNameNode>)0x0) {
          FVar17 = local_188.Nodes.AllocatorInstance.SecondaryData;
        }
        uVar12 = UE::FPropertyTypeNameTable::FindOrAddByName
                           (&UE::GPropertyTypeNameTable,(FPropertyTypeNameNode *)FVar17);
      }
      (param_2->TypeName).Index = uVar12;
      if (local_188.OuterNodeIndex.AllocatorInstance.SecondaryData != (ForElementType<int>)0x0) {
        FMemory::Free((void *)local_188.OuterNodeIndex.AllocatorInstance.SecondaryData);
      }
      if (local_188.Nodes.AllocatorInstance.SecondaryData !=
          (ForElementType<UE::FPropertyTypeNameNode>)0x0) {
        FMemory::Free((void *)local_188.Nodes.AllocatorInstance.SecondaryData);
      }
    }
    if (0x1f6 < iVar18) {
      pFVar3 = (local_res8[0].StructuredArchive)->Formatter->Inner;
      puVar5 = (uchar *)**(undefined8 **)&pFVar3->field_0x8;
      if ((uchar *)(*(undefined8 **)&pFVar3->field_0x8)[1] < puVar5 + 1) {
        (**(code **)(*(longlong *)pFVar3 + 0x188))(pFVar3,&param_2->HasPropertyGuid,1);
      }
      else {
        param_2->HasPropertyGuid = *puVar5;
        **(longlong **)&pFVar3->field_0x8 = **(longlong **)&pFVar3->field_0x8 + 1;
      }
      if (param_2->HasPropertyGuid != '\0') {
        operator<<((FStructuredArchiveSlot)local_res8[0].StructuredArchive,&param_2->PropertyGuid);
      }
    }
    if (0x3f2 < local_1b0._4_4_) {
      EVar9 = CalculatePropertyExtensionFlags(pFVar14,param_2);
      SerializePropertyExtensions
                ((FStructuredArchiveSlot)local_res8[0].StructuredArchive,EVar9,param_2);
    }
    param_2->SerializeType = Unknown;
  }
  return;
}

// PreloadInnerStructMembers @ 142187a50

void __cdecl PreloadInnerStructMembers(FStructProperty *param_1)

{
  uint uVar1;
  UScriptStruct *this;
  FLinkerLoad *pFVar2;
  uint uVar3;
  
  if (GEventDrivenLoaderEnabled) {
                    /* WARNING: Could not recover jumptable at 0x000142187b0b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(((param_1->Struct).field0_0x0.DebugPtr)->_padding_ + 0x378))();
    return;
  }
  uVar3 = 0;
  pFVar2 = FField::GetLinker((FField *)param_1);
  if (pFVar2 != (FLinkerLoad *)0x0) {
    uVar3 = pFVar2->LoadFlags & 0x100000;
  }
  this = (param_1->Struct).field0_0x0.DebugPtr;
  if ((this != (UScriptStruct *)0x0) &&
     (pFVar2 = UObjectBaseUtility::GetLinker((UObjectBaseUtility *)this),
     pFVar2 != (FLinkerLoad *)0x0)) {
    UE::FRecursiveMutex::Lock(&pFVar2->Mutex);
    uVar1 = pFVar2->LoadFlags;
    pFVar2->LoadFlags = uVar1 | uVar3;
    (**(code **)(this->_padding_ + 0x378))(this);
    pFVar2->LoadFlags = uVar1;
    UE::FRecursiveMutex::Unlock(&pFVar2->Mutex);
  }
  return;
}

// ResolveDelegateReference @ 142189570

void __cdecl
ResolveDelegateReference(FMulticastInlineDelegateProperty *param_1,UObject **param_2,void **param_3)

{
  UObject *pUVar1;
  code *pcVar2;
  bool bVar3;
  
  if (*param_3 == (void *)0x0) {
    if (*param_2 == (UObject *)0x0) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("Parent",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyMulticastDelegate.cpp"
                         ,0x1e4,L"Must specify at least one of Parent or PropertyValue");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    pUVar1 = *param_2;
    if (*(int *)&param_1->field_0x30 < 1) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    if (pUVar1 == (UObject *)0x0) {
      bVar3 = FDebug::CheckVerifyFailedImpl2
                        ("ContainerPtr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2de,L"");
      if (bVar3) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
    }
    *param_3 = &pUVar1->field_0x0 + *(int *)&param_1->field_0x44;
  }
  return;
}

// ResolveDelegateReference @ 142189650

void __cdecl
ResolveDelegateReference(FMulticastSparseDelegateProperty *param_1,UObject **param_2,void **param_3)

{
  code *pcVar1;
  bool bVar2;
  USparseDelegateFunction *pUVar3;
  UObject *pUVar4;
  
  pUVar3 = CastChecked<USparseDelegateFunction,UFunction>
                     ((TObjectPtr<UFunction> *)&param_1->field_0x70,NullChecked);
  pUVar4 = *param_2;
  if (pUVar4 == (UObject *)0x0) {
    if (*param_3 == (void *)0x0) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("PropertyValue",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\PropertyMulticastDelegate.cpp"
                         ,0x29d,L"Must specify at least one of Parent or PropertyValue");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    pUVar4 = FSparseDelegateStorage::ResolveSparseOwner
                       (*param_3,pUVar3->OwningClassName,pUVar3->DelegateName);
    *param_2 = pUVar4;
  }
  else if (*param_3 == (void *)0x0) {
    if (*(int *)&param_1->field_0x30 < 1) {
      bVar2 = FDebug::CheckVerifyFailedImpl2
                        ("(ArrayIndex >= 0) && (ArrayIndex < ArrayDim)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UnrealType.h"
                         ,0x2dd,L"Array index out of bounds: %i from an array of size %i");
      if (bVar2) {
        pcVar1 = (code *)swi(3);
        (*pcVar1)();
        return;
      }
    }
    *param_3 = &pUVar4->field_0x0 + *(int *)&param_1->field_0x44;
  }
  return;
}

// SerializePropertyExtensions @ 142190ea0

void __cdecl
SerializePropertyExtensions
          (FStructuredArchiveSlot param_1,EPropertyTagExtension param_2,FPropertyTag *param_3)

{
  FArchive *pFVar1;
  EPropertyTagExtension *pEVar2;
  EOverriddenPropertyOperation *pEVar3;
  FSlotBase local_res8;
  EPropertyTagExtension local_res10 [24];
  
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  local_res10[0] = param_2;
  UE::StructuredArchive::Private::FSlotBase::GetArchiveState(&local_res8);
  pFVar1 = (local_res8.StructuredArchive)->Formatter->Inner;
  pEVar2 = (EPropertyTagExtension *)**(undefined8 **)&pFVar1->field_0x8;
  if ((EPropertyTagExtension *)(*(undefined8 **)&pFVar1->field_0x8)[1] < pEVar2 + 1) {
    (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,local_res10,1);
  }
  else {
    local_res10[0] = *pEVar2;
    **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 1;
  }
  if ((local_res10[0] & OverridableInformation) != NoExtension) {
    pFVar1 = (local_res8.StructuredArchive)->Formatter->Inner;
    pEVar3 = (EOverriddenPropertyOperation *)**(undefined8 **)&pFVar1->field_0x8;
    if ((EOverriddenPropertyOperation *)(*(undefined8 **)&pFVar1->field_0x8)[1] < pEVar3 + 1) {
      (**(code **)(*(longlong *)pFVar1 + 0x188))(pFVar1,&param_3->OverrideOperation,1);
    }
    else {
      param_3->OverrideOperation = *pEVar3;
      **(longlong **)&pFVar1->field_0x8 = **(longlong **)&pFVar1->field_0x8 + 1;
    }
    operator<<((local_res8.StructuredArchive)->Formatter->Inner,
               &param_3->bExperimentalOverridableLogic);
  }
  return;
}

// SerializePropertyTagAsText @ 142190f70

void __cdecl SerializePropertyTagAsText(FStructuredArchiveSlot param_1,FPropertyTag *param_2)

{
  bool bVar1;
  EPropertyTagSerializeType EVar2;
  EPropertyTagExtension EVar3;
  FArchive *pFVar4;
  FSlotBase local_res8;
  bool local_res10 [8];
  bool local_res18 [8];
  
  local_res8.StructuredArchive = (FStructuredArchive *)param_1;
  pFVar4 = UE::StructuredArchive::Private::FSlotBase::GetUnderlyingArchive(&local_res8);
  UE::operator<<((FStructuredArchiveSlot)local_res8.StructuredArchive,&param_2->TypeName);
  if ((pFVar4->field_0x28 & 1) != 0) {
    FPropertyTag::SetType(param_2,(FPropertyTypeName)(param_2->TypeName).Index);
  }
  local_res18[0] = param_2->SerializeType == BinaryOrNative;
  local_res10[0] = param_2->SerializeType == Skipped;
  bVar1 = FBinaryArchiveFormatter::TryEnterAttribute
                    ((local_res8.StructuredArchive)->Formatter,local_res8.StructuredArchive._0_1_,
                     (((param_2->PropertyGuid).D != 0 || (param_2->PropertyGuid).A != 0) ||
                     (param_2->PropertyGuid).C != 0) || (param_2->PropertyGuid).B != 0);
  if (bVar1) {
    operator<<((FStructuredArchiveSlot)local_res8.StructuredArchive,&param_2->PropertyGuid);
  }
  else {
    (param_2->PropertyGuid).A = 0;
    (param_2->PropertyGuid).B = 0;
    (param_2->PropertyGuid).C = 0;
    (param_2->PropertyGuid).D = 0;
  }
  bVar1 = FBinaryArchiveFormatter::TryEnterAttribute
                    ((local_res8.StructuredArchive)->Formatter,local_res8.StructuredArchive._0_1_,
                     local_res18[0] != false);
  if (bVar1) {
    operator<<((local_res8.StructuredArchive)->Formatter->Inner,local_res18);
  }
  else {
    local_res18[0] = false;
  }
  bVar1 = FBinaryArchiveFormatter::TryEnterAttribute
                    ((local_res8.StructuredArchive)->Formatter,local_res8.StructuredArchive._0_1_,
                     local_res10[0] != false);
  if (bVar1) {
    operator<<((local_res8.StructuredArchive)->Formatter->Inner,local_res10);
  }
  else {
    local_res10[0] = false;
  }
  param_2->HasPropertyGuid =
       (((param_2->PropertyGuid).D != 0 || (param_2->PropertyGuid).B != 0) ||
       (param_2->PropertyGuid).C != 0) || (param_2->PropertyGuid).A != 0;
  if (local_res10[0] == false) {
    EVar2 = (local_res18[0] != false) + Property;
  }
  else {
    EVar2 = Skipped;
  }
  param_2->SerializeType = EVar2;
  EVar3 = CalculatePropertyExtensionFlags(pFVar4,param_2);
  SerializePropertyExtensions((FStructuredArchiveSlot)local_res8.StructuredArchive,EVar3,param_2);
  return;
}

// SkipWhitespace @ 142192f40

void __cdecl SkipWhitespace(wchar_t **param_1)

{
  int iVar1;
  
  iVar1 = iswspace(**param_1);
  while (iVar1 != 0) {
    *param_1 = *param_1 + 1;
    iVar1 = iswspace(**param_1);
  }
  return;
}

// Z_Construct_UEnum_CoreUObject_EFallbackEnum @ 142197130

UEnum * __cdecl Z_Construct_UEnum_CoreUObject_EFallbackEnum(void)

{
  if (Z_Registration_Info_UEnum_EFallbackEnum.InnerSingleton == (UEnum *)0x0) {
    UECodeGen_Private::ConstructUEnum
              (&Z_Registration_Info_UEnum_EFallbackEnum.InnerSingleton,
               &Z_Construct_UEnum_CoreUObject_EFallbackEnum_Statics::EnumParams);
  }
  return Z_Registration_Info_UEnum_EFallbackEnum.InnerSingleton;
}

// EmptyDelegate'' @ 1503517a0

void __cdecl `dynamic_atexit_destructor_for_'FMulticastDelegateProperty::EmptyDelegate__(void)

{
  if (FMulticastDelegateProperty::EmptyDelegate.InvocationList.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    FMemory::Free(FMulticastDelegateProperty::EmptyDelegate.InvocationList.AllocatorInstance.Data);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)&FMulticastDelegateProperty::EmptyDelegate);
  return;
}

// RootNodeID'' @ 1503517d0

void __cdecl `dynamic_atexit_destructor_for_'FOverriddenPropertySet::RootNodeID__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = FOverriddenPropertySet::RootNodeID.Path.Path.AllocatorInstance.Data;
  if (FOverriddenPropertySet::RootNodeID.Path.Path.AllocatorInstance.Data ==
      (FScriptContainerElement *)0x0) {
    return;
  }
  if (FOverriddenPropertySet::RootNodeID.Path.Path.AllocatorInstance.Data !=
      (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'GPropertyTypeNameTable'' @ 1503517f0

void __cdecl UE::_dynamic_atexit_destructor_for__GPropertyTypeNameTable__(void)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  
  GPropertyTypeNameTable.NameMap._72_4_ = 0;
  if (GPropertyTypeNameTable.NameMap._64_8_ != 0) {
    FMemory::Free((void *)GPropertyTypeNameTable.NameMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UE::FPropertyTypeNameNodeProxy,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UE::FPropertyTypeNameNodeProxy,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UE::FPropertyTypeNameNodeProxy,int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&GPropertyTypeNameTable.NameMap);
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&GPropertyTypeNameTable);
  if (BVar2 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x000150351837. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    ReleaseSRWLockExclusive((PSRWLOCK)&GPropertyTypeNameTable);
    return;
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("!IsLocked()",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                     ,0x48,L"Destroying a lock that is still held!");
  if (bVar3) {
    pcVar1 = (code *)swi(3);
    (*pcVar1)();
    return;
  }
  return;
}

// `dynamic_atexit_destructor_for_'InitString'' @ 150351870

void __cdecl _dynamic_atexit_destructor_for__InitString__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = InitString.Data.AllocatorInstance.Data;
  if (InitString.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (InitString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'LegacyFOptionPropertyCustomVersion'' @ 150351890

void __cdecl _dynamic_atexit_destructor_for__LegacyFOptionPropertyCustomVersion__(void)

{
  FCurrentCustomVersions::Unregister(&LegacyFOptionPropertyCustomVersion.Registration.Key);
  return;
}

// `dynamic_atexit_destructor_for_'LogOptionalProperty'' @ 1503518b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogOptionalProperty__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogOptionalProperty);
  return;
}

// `dynamic_atexit_destructor_for_'RecursionCheck'' @ 1503518d0

void __cdecl
`AreInstancedObjectsIdentical'::__l2::_dynamic_atexit_destructor_for__RecursionCheck__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = RecursionCheck.AllocatorInstance.Data;
  if (RecursionCheck.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (RecursionCheck.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,FVar1.Data,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,FVar1.Data);
  }
  return;
}

// `dynamic_atexit_destructor_for_'StaticFieldClass'' @ 1503518f0

void __cdecl
`FBoolProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__(void)

{
  FFieldClass::~FFieldClass(&::StaticFieldClass);
  return;
}

// `dynamic_atexit_destructor_for_'StaticFieldClass'' @ 150351910

void __cdecl
`FByteProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__(void)

{
  FFieldClass::~FFieldClass(&::StaticFieldClass);
  return;
}

// `dynamic_atexit_destructor_for_'StaticFieldClass'' @ 150351930

void __cdecl
`FClassProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__(void)

{
  FFieldClass::~FFieldClass(&::StaticFieldClass);
  return;
}

// `dynamic_atexit_destructor_for_'StaticFieldClass'' @ 150351950

void __cdecl
`FDelegateProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__(void)

{
  FFieldClass::~FFieldClass(&::StaticFieldClass);
  return;
}

// `dynamic_atexit_destructor_for_'StaticFieldClass'' @ 150351970

void __cdecl
`FDoubleProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__(void)

{
  FFieldClass::~FFieldClass(&::StaticFieldClass);
  return;
}

// `dynamic_atexit_destructor_for_'StaticFieldClass'' @ 150351990

void __cdecl
`FFloatProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__(void)

{
  FFieldClass::~FFieldClass(&::StaticFieldClass);
  return;
}

// `dynamic_atexit_destructor_for_'StaticFieldClass'' @ 1503519b0

void __cdecl
`FInt16Property::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__(void)

{
  FFieldClass::~FFieldClass(&::StaticFieldClass);
  return;
}

// `dynamic_atexit_destructor_for_'StaticFieldClass'' @ 1503519d0

void __cdecl
`FInt64Property::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__(void)

{
  FFieldClass::~FFieldClass(&::StaticFieldClass);
  return;
}

// `dynamic_atexit_destructor_for_'StaticFieldClass'' @ 1503519f0

void __cdecl
`FInt8Property::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__(void)

{
  FFieldClass::~FFieldClass(&::StaticFieldClass);
  return;
}

// `dynamic_atexit_destructor_for_'StaticFieldClass'' @ 150351a10

void __cdecl
`FIntProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__(void)

{
  FFieldClass::~FFieldClass(&::StaticFieldClass);
  return;
}

// `dynamic_atexit_destructor_for_'StaticFieldClass'' @ 150351a30

void __cdecl
`FInterfaceProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__(void)

{
  FFieldClass::~FFieldClass(&::StaticFieldClass);
  return;
}

// `dynamic_atexit_destructor_for_'StaticFieldClass'' @ 150351a50

void __cdecl
`FLazyObjectProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__(void)

{
  FFieldClass::~FFieldClass(&::StaticFieldClass);
  return;
}

// `dynamic_atexit_destructor_for_'StaticFieldClass'' @ 150351a70

void __cdecl
`FMapProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__(void)

{
  FFieldClass::~FFieldClass(&::StaticFieldClass);
  return;
}

// `dynamic_atexit_destructor_for_'StaticFieldClass'' @ 150351a90

void __cdecl
`FMulticastDelegateProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__
          (void)

{
  FFieldClass::~FFieldClass(&::StaticFieldClass);
  return;
}

// `dynamic_atexit_destructor_for_'StaticFieldClass'' @ 150351ab0

void __cdecl
`FMulticastInlineDelegateProperty::StaticClass'::__l2::
_dynamic_atexit_destructor_for__StaticFieldClass__(void)

{
  FFieldClass::~FFieldClass(&::StaticFieldClass);
  return;
}

// `dynamic_atexit_destructor_for_'StaticFieldClass'' @ 150351ad0

void __cdecl
`FMulticastSparseDelegateProperty::StaticClass'::__l2::
_dynamic_atexit_destructor_for__StaticFieldClass__(void)

{
  FFieldClass::~FFieldClass(&::StaticFieldClass);
  return;
}

// `dynamic_atexit_destructor_for_'StaticFieldClass'' @ 150351af0

void __cdecl
`FNameProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__(void)

{
  FFieldClass::~FFieldClass(&::StaticFieldClass);
  return;
}

// `dynamic_atexit_destructor_for_'StaticFieldClass'' @ 150351b10

void __cdecl
`FNumericProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__(void)

{
  FFieldClass::~FFieldClass(&::StaticFieldClass);
  return;
}

// `dynamic_atexit_destructor_for_'StaticFieldClass'' @ 150351b30

void __cdecl
`FObjectProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__(void)

{
  FFieldClass::~FFieldClass(&::StaticFieldClass);
  return;
}

// `dynamic_atexit_destructor_for_'StaticFieldClass'' @ 150351b50

void __cdecl
`FOptionalProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__(void)

{
  FFieldClass::~FFieldClass(&::StaticFieldClass);
  return;
}

// `dynamic_atexit_destructor_for_'StaticFieldClass'' @ 150351b70

void __cdecl
`FSetProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__(void)

{
  FFieldClass::~FFieldClass(&::StaticFieldClass);
  return;
}

// `dynamic_atexit_destructor_for_'StaticFieldClass'' @ 150351b90

void __cdecl
`FSoftClassProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__(void)

{
  FFieldClass::~FFieldClass(&::StaticFieldClass);
  return;
}

// `dynamic_atexit_destructor_for_'StaticFieldClass'' @ 150351bb0

void __cdecl
`FSoftObjectProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__(void)

{
  FFieldClass::~FFieldClass(&::StaticFieldClass);
  return;
}

// `dynamic_atexit_destructor_for_'StaticFieldClass'' @ 150351bd0

void __cdecl
`FStructProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__(void)

{
  FFieldClass::~FFieldClass(&::StaticFieldClass);
  return;
}

// `dynamic_atexit_destructor_for_'StaticFieldClass'' @ 150351bf0

void __cdecl
`FUInt16Property::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__(void)

{
  FFieldClass::~FFieldClass(&::StaticFieldClass);
  return;
}

// `dynamic_atexit_destructor_for_'StaticFieldClass'' @ 150351c10

void __cdecl
`FUInt32Property::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__(void)

{
  FFieldClass::~FFieldClass(&::StaticFieldClass);
  return;
}

// `dynamic_atexit_destructor_for_'StaticFieldClass'' @ 150351c30

void __cdecl
`FUInt64Property::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__(void)

{
  FFieldClass::~FFieldClass(&::StaticFieldClass);
  return;
}

