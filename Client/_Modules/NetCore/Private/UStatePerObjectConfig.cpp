// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: NetCore
// Functions: 15

// StaticClass @ 1441c7060

UClass * __cdecl UStatePerObjectConfig::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStatePerObjectConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NetCore",L"StatePerObjectConfig",
               &Z_Registration_Info_UClass_UStatePerObjectConfig.InnerSingleton,
               StaticRegisterNativesUStatePerObjectConfig,0x78,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UStatePerObjectConfig>,
               InternalVTableHelperCtorCaller<UStatePerObjectConfig>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStatePerObjectConfig.InnerSingleton;
}

// UStatePerObjectConfig @ 1441d2c10

UStatePerObjectConfig * __thiscall
UStatePerObjectConfig::UStatePerObjectConfig(UStatePerObjectConfig *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UStatePerObjectConfig__6B_;
  (this->ConfigParms).ConfigSection = (wchar_t *)0x0;
  (this->ConfigParms).ConfigContext.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConfigParms).ConfigContext.Data.ArrayNum = 0;
  (this->ConfigParms).ConfigContext.Data.ArrayMax = 0;
  (this->ConfigParms).ConfigClass = (UClass *)0x0;
  (this->ConfigParms).StateStruct = (UStruct *)0x0;
  (this->RegisteredStateConfigs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegisteredStateConfigs).ArrayNum = 0;
  (this->RegisteredStateConfigs).ArrayMax = 0;
  (this->PerObjectConfigSection).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerObjectConfigSection).Data.ArrayNum = 0;
  (this->PerObjectConfigSection).Data.ArrayMax = 0;
  return this;
}

// UStatePerObjectConfig @ 1441d2c60

UStatePerObjectConfig * __thiscall
UStatePerObjectConfig::UStatePerObjectConfig
          (UStatePerObjectConfig *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UStatePerObjectConfig__6B_;
  (this->ConfigParms).ConfigSection = (wchar_t *)0x0;
  (this->ConfigParms).ConfigContext.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->ConfigParms).ConfigContext.Data.ArrayNum = 0;
  (this->ConfigParms).ConfigContext.Data.ArrayMax = 0;
  (this->ConfigParms).ConfigClass = (UClass *)0x0;
  (this->ConfigParms).StateStruct = (UStruct *)0x0;
  (this->RegisteredStateConfigs).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->RegisteredStateConfigs).ArrayNum = 0;
  (this->RegisteredStateConfigs).ArrayMax = 0;
  (this->PerObjectConfigSection).Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->PerObjectConfigSection).Data.ArrayNum = 0;
  (this->PerObjectConfigSection).Data.ArrayMax = 0;
  return this;
}

// ~UStatePerObjectConfig @ 1441d44f0

void __thiscall UStatePerObjectConfig::~UStatePerObjectConfig(UStatePerObjectConfig *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UStatePerObjectConfig__6B_;
  pFVar1 = (this->PerObjectConfigSection).Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->RegisteredStateConfigs).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->ConfigParms).ConfigContext.Data.AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// ApplyState @ 1441d6d90

void __cdecl UStatePerObjectConfig::ApplyState(FStructOnScope *param_1,FStateStruct *param_2)

{
  int iVar1;
  code *pcVar2;
  bool bVar3;
  UScriptStruct *this;
  UClass *pUVar4;
  void *pvVar5;
  
  this = (UScriptStruct *)(**(code **)(param_1->_padding_ + 0x20))();
  if (this != (UScriptStruct *)0x0) {
    pUVar4 = Z_Construct_UClass_UScriptStruct_NoRegister();
    iVar1 = (int)pUVar4->_padding_;
    if ((iVar1 <= *(int *)(this->_padding_ + 0x38)) &&
       ((longlong *)*(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) ==
        &pUVar4->_padding_)) {
      if (param_2 == (FStateStruct *)0x0) {
        return;
      }
      pvVar5 = (void *)(**(code **)(param_1->_padding_ + 0x10))(param_1);
      if ((pvVar5 == (void *)0x0) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("StructCast != nullptr",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Connection\\StateStruct.cpp"
                             ,0x66,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      UScriptStruct::CopyScriptStruct(this,param_2,pvVar5,1);
      return;
    }
  }
  bVar3 = ::FDebug::CheckVerifyFailedImpl2
                    ("BaseScriptStruct != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Connection\\StateStruct.cpp"
                     ,0x60,L"");
  if (!bVar3) {
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// DebugDump @ 1441d86a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall UStatePerObjectConfig::DebugDump(UStatePerObjectConfig *this)

{
  UStruct *this_00;
  UClass *this_01;
  longlong *plVar1;
  longlong lVar2;
  longlong lVar3;
  FField *pFVar4;
  FProperty *this_02;
  longlong lVar5;
  FScriptContainerElement *pFVar6;
  int iVar7;
  ulonglong uVar8;
  void *pvVar9;
  ForAnyElementType FVar10;
  longlong lVar11;
  FScriptContainerElement *pFVar12;
  longlong *plVar13;
  bool bVar14;
  undefined4 local_res10 [2];
  uint local_res18;
  FScriptContainerElement *local_res20;
  TFieldIterator<FProperty> local_d8;
  TFieldIterator<FProperty> local_c0;
  FString local_a8;
  FString local_98;
  ForAnyElementType local_88;
  int local_80;
  int local_7c;
  FString local_78;
  FString local_68;
  FScriptContainerElement *local_58;
  
  local_res10[0] = 0;
  this_00 = (this->ConfigParms).StateStruct;
  if (4 < (byte)LogNetCore._0_1_) {
    UObjectBaseUtility::GetFullName
              ((UObjectBaseUtility *)this,(FString *)&local_c0,(UObject *)0x0,None);
    UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetCore);
    if (local_c0.Struct != (UStruct *)0x0) {
      FMemory::Free(local_c0.Struct);
    }
    if (((4 < (byte)LogNetCore._0_1_) &&
        (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetCore),
        4 < (byte)LogNetCore._0_1_)) &&
       (UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetCore),
       4 < (byte)LogNetCore._0_1_)) {
      this_01 = (this->ConfigParms).ConfigClass;
      bVar14 = this_01 == (UClass *)0x0;
      if (bVar14) {
        ::FString::FString((FString *)&local_c0,L"");
      }
      else {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this_01,&local_78,(UObject *)0x0,None)
        ;
      }
      UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetCore);
      if ((bVar14) && (local_c0.Struct != (UStruct *)0x0)) {
        FMemory::Free(local_c0.Struct);
      }
      if ((!bVar14) && (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
        FMemory::Free(local_78.Data.AllocatorInstance.Data);
      }
      if (4 < (byte)LogNetCore._0_1_) {
        bVar14 = this_00 == (UStruct *)0x0;
        if (bVar14) {
          ::FString::FString((FString *)&local_c0,L"");
        }
        else {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)this_00,&local_78,(UObject *)0x0,None);
        }
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetCore);
        if ((bVar14) && (local_c0.Struct != (UStruct *)0x0)) {
          FMemory::Free(local_c0.Struct);
        }
        if ((!bVar14) && (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
          FMemory::Free(local_78.Data.AllocatorInstance.Data);
        }
        if (4 < (byte)LogNetCore._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetCore);
        }
      }
    }
  }
  if (this_00 != (UStruct *)0x0) {
    local_c0.Struct = (UStruct *)this->_padding_;
    if (local_c0.Struct == (UStruct *)0x0) {
      local_c0.Field = (FField *)0x0;
    }
    else {
      local_c0.Field = (local_c0.Struct)->ChildProperties;
    }
    local_c0.InterfaceIndex = -1;
    local_c0.bIncludeSuper = true;
    local_c0.bIncludeDeprecated = true;
    local_c0.bIncludeInterface = false;
    TFieldIterator<FProperty>::IterateToNext(&local_c0);
    pFVar4 = local_c0.Field;
    while (local_c0.Field = pFVar4, pFVar4 != (FField *)0x0) {
      local_a8.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_a8.Data.ArrayNum = 0;
      local_a8.Data.ArrayMax = 0;
      (**(code **)(pFVar4->_padding_ + 0xe0))(pFVar4,&local_a8,this,1,0,0,0x200000,0);
      if (4 < (byte)LogNetCore._0_1_) {
        bVar14 = IsThisNotNull(pFVar4,"FField::GetName");
        if (bVar14) {
          ::FName::ToString(&pFVar4->NamePrivate,&local_98);
        }
        else {
          ::FString::FString(&local_98,L"None");
        }
        UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetCore);
        if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_98.Data.AllocatorInstance.Data);
        }
      }
      if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_a8.Data.AllocatorInstance.Data);
      }
      local_c0.Field = pFVar4->Next;
      TFieldIterator<FProperty>::IterateToNext(&local_c0);
      pFVar4 = local_c0.Field;
    }
  }
  local_res18 = (this->RegisteredStateConfigs).ArrayNum;
  uVar8 = (ulonglong)(int)local_res18;
  pFVar12 = (this->RegisteredStateConfigs).AllocatorInstance.Data;
  local_58 = pFVar12 + uVar8 * 0x10;
  do {
    pFVar6 = local_58;
    local_res20 = pFVar12;
    if ((this->RegisteredStateConfigs).ArrayNum != (int)uVar8) {
      `TCheckedPointerIterator<UStatePerObjectConfig::FStateConfigRegister_const_,int,0>::
      operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (pFVar12 == pFVar6) {
      return;
    }
    ::FString::FString(&local_a8,L"UnknownStateNames");
    local_d8.Struct = (UStruct *)this->_padding_;
    if (local_d8.Struct == (UStruct *)0x0) {
      local_d8.Field = (FField *)0x0;
    }
    else {
      local_d8.Field = (local_d8.Struct)->ChildProperties;
    }
    local_d8.InterfaceIndex = -1;
    local_d8.bIncludeSuper = true;
    local_d8.bIncludeDeprecated = true;
    local_d8.bIncludeInterface = false;
    TFieldIterator<FProperty>::IterateToNext(&local_d8);
    this_02 = (FProperty *)local_d8.Field;
    while (local_d8.Field = (FField *)this_02, this_02 != (FProperty *)0x0) {
      pvVar9 = FProperty::ContainerUObjectPtrToValuePtrInternal(this_02,(UObject *)this,0);
      if (pvVar9 == *(void **)pFVar12) {
        bVar14 = IsThisNotNull(this_02,"FField::GetName");
        if (bVar14) {
          ::FName::ToString((FName *)&this_02->_padding_,&local_68);
        }
        else {
          ::FString::FString(&local_68,L"None");
        }
        if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_a8.Data.AllocatorInstance.Data);
        }
        local_a8.Data.AllocatorInstance.Data = local_68.Data.AllocatorInstance.Data;
        local_a8.Data.ArrayNum = local_68.Data.ArrayNum;
        local_a8.Data.ArrayMax = local_68.Data.ArrayMax;
        local_68.Data.ArrayNum = 0;
        local_68.Data.ArrayMax = 0;
        local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        break;
      }
      local_d8.Field = (FField *)this_02->_padding_;
      TFieldIterator<FProperty>::IterateToNext(&local_d8);
      this_02 = (FProperty *)local_d8.Field;
    }
    if (4 < (byte)LogNetCore._0_1_) {
      UE::Logging::Private::BasicLog<5>
                ((FStaticBasicLogRecord *)&PTR_u_____s__150b68098,(FLogCategoryBase *)&LogNetCore);
    }
    plVar1 = *(longlong **)(pFVar12 + 8);
    lVar2 = *plVar1;
    lVar5 = plVar1[1];
    plVar13 = (longlong *)(lVar2 + 0x10);
    while( true ) {
      if ((int)plVar1[1] != (int)lVar5) {
        `TCheckedPointerIterator<TStructOnScope<FStateStruct>,int,0>::operator!='::__l2::<lambda_1>
        ::operator()(local_res10);
      }
      if (plVar13 + -2 == (longlong *)(lVar2 + (longlong)(int)lVar5 * 0x28)) break;
      bVar14 = FWeakObjectPtr::IsValid((FWeakObjectPtr *)(plVar13 + -1));
      if ((bVar14) && (lVar3 = *plVar13, lVar3 != 0)) {
        if (4 < (byte)LogNetCore._0_1_) {
          local_88.Data = (FScriptContainerElement *)0x0;
          local_80 = *(int *)(lVar3 + 0x10);
          lVar11 = (longlong)local_80;
          pvVar9 = *(void **)(lVar3 + 8);
          if (local_80 == 0) {
            local_7c = 0;
          }
          else {
            UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (2,2,local_80,0,&local_88,local_80,&local_7c);
            memcpy(local_88.Data,pvVar9,lVar11 * 2);
          }
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetCore);
          if (local_88.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_88.Data);
          }
        }
        local_d8.Struct = (UStruct *)FWeakObjectPtr::Get((FWeakObjectPtr *)(plVar13 + -1));
        if (local_d8.Struct == (UStruct *)0x0) {
          local_d8.Field = (FField *)0x0;
        }
        else {
          local_d8.Field = (local_d8.Struct)->ChildProperties;
        }
        local_d8.InterfaceIndex = -1;
        local_d8.bIncludeSuper = true;
        local_d8.bIncludeDeprecated = true;
        local_d8.bIncludeInterface = false;
        TFieldIterator<FProperty>::IterateToNext(&local_d8);
        if ((FProperty *)local_d8.Field == (FProperty *)0x0) goto LAB_1441d8df2;
        do {
          pFVar4 = local_d8.Field;
          bVar14 = IsThisNotNull(local_d8.Field,"FField::GetName");
          if (bVar14) {
            ::FName::ToString(&pFVar4->NamePrivate,&local_78);
          }
          else {
            ::FString::FString(&local_78,L"None");
          }
          FVar10.Data = (FScriptContainerElement *)L"";
          if (local_78.Data.ArrayNum != 0) {
            FVar10.Data = local_78.Data.AllocatorInstance.Data;
          }
          iVar7 = FGenericPlatformStricmp::Stricmp((wchar_t *)FVar10.Data,L"StateName");
          if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_78.Data.AllocatorInstance.Data);
          }
          if (iVar7 != 0) {
            local_98.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
            local_98.Data.ArrayNum = 0;
            local_98.Data.ArrayMax = 0;
            (**(code **)(pFVar4->_padding_ + 0xe0))(pFVar4,&local_98,*plVar13,1,0,0,0x200000,0);
            if (4 < (byte)LogNetCore._0_1_) {
              bVar14 = IsThisNotNull(pFVar4,"FField::GetName");
              if (bVar14) {
                ::FName::ToString(&pFVar4->NamePrivate,(FString *)&local_c0);
              }
              else {
                ::FString::FString((FString *)&local_c0,L"None");
              }
              UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetCore);
              if (local_c0.Struct != (UStruct *)0x0) {
                FMemory::Free(local_c0.Struct);
              }
            }
            if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_98.Data.AllocatorInstance.Data);
            }
          }
          local_d8.Field = pFVar4->Next;
          TFieldIterator<FProperty>::IterateToNext(&local_d8);
        } while ((FProperty *)local_d8.Field != (FProperty *)0x0);
        plVar13 = plVar13 + 5;
      }
      else {
        if (4 < (byte)LogNetCore._0_1_) {
          UE::Logging::Private::BasicLog<5>(&::LOG_Static,(FLogCategoryBase *)&LogNetCore);
        }
LAB_1441d8df2:
        plVar13 = plVar13 + 5;
      }
    }
    if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_a8.Data.AllocatorInstance.Data);
    }
    pFVar12 = local_res20 + 0x10;
    uVar8 = (ulonglong)local_res18;
  } while( true );
}

// Get @ 1441dba50

/* WARNING: Function: __chkstk replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UStatePerObjectConfig * __cdecl UStatePerObjectConfig::Get(FStateConfigParms *param_1)

{
  FString *pFVar1;
  int iVar2;
  wchar_t *_Str;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  FStateConfigParms *pFVar5;
  bool bVar6;
  UClass *pUVar7;
  UStatePerObjectConfig *pUVar8;
  size_t sVar9;
  void *pvVar10;
  FString *pFVar11;
  UClass *pUVar12;
  FName FVar13;
  FName *pFVar14;
  UPackage *pUVar15;
  FUObjectItem *this;
  int iVar16;
  ulong64 uVar17;
  TStringBuilderBase<wchar_t> *pTVar18;
  wchar_t *pwVar19;
  FName FVar20;
  undefined1 auStackY_1188 [32];
  FName local_1148;
  UClass *local_1140;
  FStateConfigParms *local_1138;
  FScriptContainerElement *local_1128;
  int iStack_1120;
  undefined4 uStack_111c;
  TStringView<wchar_t> local_1118;
  FName local_1108;
  int iStack_1100;
  undefined4 uStack_10fc;
  FName local_10f8;
  FName local_10f0;
  FString local_10e8;
  TStringView<wchar_t> local_10d8;
  wchar_t *local_10c8;
  FString local_10c0;
  UClass *local_10b0;
  UStruct *local_10a8;
  FString local_10a0;
  FString local_1090;
  TStringBuilderBase<wchar_t> local_1078;
  TStringBuilderBase<wchar_t> local_1058 [64];
  TStringBuilderBase<wchar_t> local_858;
  wchar_t local_838 [1024];
  ulonglong local_38 [2];
  
  local_38[1] = 0x1441dba7a;
  local_38[0] = __security_cookie.value ^ (ulonglong)auStackY_1188;
  pUVar12 = param_1->ConfigClass;
  pFVar1 = &param_1->ConfigContext;
  _Str = param_1->ConfigSection;
  local_1140 = pUVar12;
  local_1138 = param_1;
  pUVar7 = StaticClass();
  if (pUVar7 == (UClass *)0x0) {
LAB_1441dbade:
    bVar6 = ::FDebug::CheckVerifyFailedImpl2
                      ("ConfigClass->IsChildOf(UStatePerObjectConfig::StaticClass())",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Net\\Core\\Private\\Net\\Core\\Connection\\StateStruct.cpp"
                       ,0x20,L"");
    if (bVar6) {
      pcVar4 = (code *)swi(3);
      pUVar8 = (UStatePerObjectConfig *)(*pcVar4)();
      return pUVar8;
    }
  }
  else {
    iVar16 = (int)pUVar7->_padding_;
    if (((int)pUVar12->_padding_ < iVar16) ||
       ((longlong *)*(undefined1 **)(pUVar12->_padding_ + (longlong)iVar16 * 8) !=
        &pUVar7->_padding_)) {
      bVar6 = false;
    }
    else {
      bVar6 = true;
    }
    if (!bVar6) goto LAB_1441dbade;
  }
  local_1078.Base = (wchar_t *)local_1058;
  local_1078.bIsDynamic = false;
  local_1078.bIsExternal = false;
  local_1078.End = (wchar_t *)&local_858;
  local_1078.CurPos = (wchar_t *)local_1058;
  if ((param_1->ConfigContext).Data.ArrayNum == 0) {
    pwVar19 = L"";
LAB_1441dbb34:
    sVar9 = wcslen(pwVar19);
    iVar16 = (int)sVar9;
  }
  else {
    pwVar19 = (wchar_t *)(pFVar1->Data).AllocatorInstance.Data;
    iVar16 = 0;
    if ((FScriptContainerElement *)pwVar19 != (FScriptContainerElement *)0x0) goto LAB_1441dbb34;
  }
  uVar17 = (ulong64)iVar16;
  pTVar18 = local_1058;
  if (&local_858 < (TStringBuilderBase<wchar_t> *)((longlong)&local_1058[0].Base + uVar17 * 2)) {
    TStringBuilderBase<wchar_t>::Extend(&local_1078,uVar17);
    pTVar18 = (TStringBuilderBase<wchar_t> *)local_1078.CurPos;
  }
  if (iVar16 != 0) {
    pvVar10 = FGenericPlatformString::Memcpy(pTVar18,pwVar19,uVar17 * 2);
    pTVar18 = (TStringBuilderBase<wchar_t> *)((longlong)pvVar10 + uVar17 * 2);
    local_1078.CurPos = (wchar_t *)pTVar18;
  }
  if (local_1078.End < (TStringBuilderBase<wchar_t> *)((longlong)&pTVar18->Base + 2)) {
    TStringBuilderBase<wchar_t>::Extend(&local_1078,1);
    pTVar18 = (TStringBuilderBase<wchar_t> *)local_1078.CurPos;
  }
  *(undefined2 *)&pTVar18->Base = 0x5f;
  iVar16 = 0;
  pwVar19 = (wchar_t *)((longlong)(wchar_t **)local_1078.CurPos + 2);
  local_1078.CurPos = pwVar19;
  if (_Str != (wchar_t *)0x0) {
    sVar9 = wcslen(_Str);
    iVar16 = (int)sVar9;
  }
  uVar17 = (ulong64)iVar16;
  if (local_1078.End < (TStringBuilderBase<wchar_t> *)(pwVar19 + uVar17)) {
    TStringBuilderBase<wchar_t>::Extend(&local_1078,uVar17);
    pwVar19 = local_1078.CurPos;
  }
  if (iVar16 != 0) {
    pvVar10 = FGenericPlatformString::Memcpy(pwVar19,_Str,uVar17 * 2);
    pwVar19 = (wchar_t *)((longlong)pvVar10 + uVar17 * 2);
    local_1078.CurPos = pwVar19;
  }
  if (local_1078.End < (TStringBuilderBase<wchar_t> *)(pwVar19 + 1)) {
    TStringBuilderBase<wchar_t>::Extend(&local_1078,1);
    pwVar19 = local_1078.CurPos;
  }
  *pwVar19 = L'_';
  local_1078.CurPos = local_1078.CurPos + 1;
  local_1148 = (FName)local_1140->_padding_;
  pFVar11 = ::FName::ToString(&local_1148,&local_10e8);
  if ((pFVar11->Data).ArrayNum == 0) {
    pwVar19 = L"";
LAB_1441dbc54:
    sVar9 = wcslen(pwVar19);
    iVar16 = (int)sVar9;
  }
  else {
    pwVar19 = (wchar_t *)(pFVar11->Data).AllocatorInstance.Data;
    iVar16 = 0;
    if ((FScriptContainerElement *)pwVar19 != (FScriptContainerElement *)0x0) goto LAB_1441dbc54;
  }
  uVar17 = (ulong64)iVar16;
  if (local_1078.End < (TStringBuilderBase<wchar_t> *)(local_1078.CurPos + uVar17)) {
    TStringBuilderBase<wchar_t>::Extend(&local_1078,uVar17);
  }
  if (iVar16 != 0) {
    pvVar10 = FGenericPlatformString::Memcpy(local_1078.CurPos,pwVar19,uVar17 * 2);
    local_1078.CurPos = (wchar_t *)((longlong)pvVar10 + uVar17 * 2);
  }
  if (local_10e8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_10e8.Data.AllocatorInstance.Data);
  }
  if (local_1078.End < (TStringBuilderBase<wchar_t> *)(local_1078.CurPos + 1)) {
    TStringBuilderBase<wchar_t>::Extend(&local_1078,1);
  }
  FVar20 = (FName)local_1078.Base;
  iVar16 = 0;
  *local_1078.CurPos = L'\0';
  iStack_1100 = 0;
  local_1148 = (FName)local_1078.Base;
  local_1108 = (FName)local_1078.Base;
  if ((FName)local_1078.Base != (FName)0x0) {
    sVar9 = wcslen(local_1078.Base);
    iStack_1100 = (int)sVar9;
  }
  pUVar12 = StaticClass();
  local_1118._12_4_ = uStack_10fc;
  local_1118.Size = iStack_1100;
  local_1118.DataPtr = (wchar_t *)local_1108;
  pUVar8 = (UStatePerObjectConfig *)StaticFindObject(pUVar12,(UObject *)local_1140,&local_1118,None)
  ;
  if (pUVar8 != (UStatePerObjectConfig *)0x0) goto LAB_1441dc07e;
  local_858.Base = local_838;
  pwVar19 = local_838;
  local_858.End = (wchar_t *)local_38;
  local_858.bIsDynamic = false;
  local_858.bIsExternal = false;
  if (1 < (param_1->ConfigContext).Data.ArrayNum) {
    pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
    local_858.CurPos = pwVar19;
    if (pFVar3 != (FScriptContainerElement *)0x0) {
      sVar9 = wcslen((wchar_t *)pFVar3);
      iVar16 = (int)sVar9;
    }
    uVar17 = (ulong64)iVar16;
    if (local_38 < local_838 + uVar17) {
      TStringBuilderBase<wchar_t>::Extend(&local_858,uVar17);
      pwVar19 = local_858.CurPos;
    }
    if (iVar16 != 0) {
      pvVar10 = FGenericPlatformString::Memcpy(pwVar19,pFVar3,uVar17 * 2);
      pwVar19 = (wchar_t *)((longlong)pvVar10 + uVar17 * 2);
      local_858.CurPos = pwVar19;
    }
    if (local_858.End < pwVar19 + 1) {
      TStringBuilderBase<wchar_t>::Extend(&local_858,1);
      pwVar19 = local_858.CurPos;
    }
    *pwVar19 = L' ';
    pwVar19 = local_858.CurPos + 1;
    FVar20 = local_1148;
  }
  iVar16 = 0;
  local_858.CurPos = pwVar19;
  if (_Str != (wchar_t *)0x0) {
    sVar9 = wcslen(_Str);
    iVar16 = (int)sVar9;
  }
  uVar17 = (ulong64)iVar16;
  if (local_858.End < pwVar19 + uVar17) {
    TStringBuilderBase<wchar_t>::Extend(&local_858,uVar17);
    pwVar19 = local_858.CurPos;
  }
  if (iVar16 != 0) {
    pvVar10 = FGenericPlatformString::Memcpy(pwVar19,_Str,uVar17 * 2);
    local_858.CurPos = (wchar_t *)((longlong)pvVar10 + uVar17 * 2);
  }
  pFVar11 = ::FString::FString(&local_10a0,(wchar_t *)FVar20);
  if (local_858.End < local_858.CurPos + 1) {
    TStringBuilderBase<wchar_t>::Extend(&local_858,1);
  }
  *local_858.CurPos = L'\0';
  FVar13 = (FName)::FString::FString(&local_1090,local_858.Base);
  pFVar5 = local_1138;
  local_10c8 = local_1138->ConfigSection;
  local_1148 = FVar13;
  ::FString::FString(&local_10c0,pFVar1);
  local_10a8 = pFVar5->StateStruct;
  pUVar12 = pFVar5->ConfigClass;
  local_10b0 = pUVar12;
  ::FString::AppendChars(pFVar11,L"_Archetype",10);
  if ((pFVar11->Data).ArrayNum == 0) {
    local_1128 = (FScriptContainerElement *)0x15060d16c;
LAB_1441dbf03:
    sVar9 = wcslen((wchar_t *)local_1128);
    iStack_1120 = (int)sVar9;
  }
  else {
    local_1128 = (pFVar11->Data).AllocatorInstance.Data;
    iStack_1120 = 0;
    if (local_1128 != (FScriptContainerElement *)0x0) goto LAB_1441dbf03;
  }
  pUVar7 = StaticClass();
  local_10d8._12_4_ = uStack_111c;
  local_10d8.Size = iStack_1120;
  local_10d8.DataPtr = (wchar_t *)local_1128;
  pUVar8 = (UStatePerObjectConfig *)StaticFindObject(pUVar7,(UObject *)pUVar12,&local_10d8,None);
  if (pUVar8 == (UStatePerObjectConfig *)0x0) {
    iVar2 = (pFVar11->Data).ArrayNum;
    iVar16 = iVar2 + -1;
    if (iVar2 == 0) {
      iVar16 = 0;
    }
    pFVar14 = ::FName::FName(&local_10f8,iVar16,(wchar_t *)(pFVar11->Data).AllocatorInstance.Data,
                             FNAME_Add);
    FVar13 = *pFVar14;
    pUVar15 = GetTransientPackage();
    pUVar8 = NewObject<UStatePerObjectConfig>
                       ((UObject *)pUVar15,pUVar12,FVar13,RF_ArchetypeObject,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    FVar13 = local_1148;
    iVar16 = *(int *)((longlong)local_1148 + 8) + -1;
    if (*(int *)((longlong)local_1148 + 8) == 0) {
      iVar16 = 0;
    }
    ::FString::AssignRange(&pUVar8->PerObjectConfigSection,*(wchar_t **)local_1148,iVar16);
    (**(code **)(pUVar8->_padding_ + 0x2c0))(pUVar8);
  }
  if (local_10c0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_10c0.Data.AllocatorInstance.Data);
  }
  if (*(void **)FVar13 != (void *)0x0) {
    FMemory::Free(*(void **)FVar13);
  }
  pFVar3 = (pFVar11->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar14 = ::FName::FName(&local_10f0,(wchar_t *)FVar20);
  FVar20 = *pFVar14;
  pUVar15 = GetTransientPackage();
  pUVar8 = NewObject<UStatePerObjectConfig>
                     ((UObject *)pUVar15,local_1140,FVar20,RF_NoFlags,(UObject *)pUVar8,false,
                      (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
  (pUVar8->ConfigParms).ConfigSection = pFVar5->ConfigSection;
  ::FString::operator=(&(pUVar8->ConfigParms).ConfigContext,pFVar1);
  (pUVar8->ConfigParms).ConfigClass = pFVar5->ConfigClass;
  (pUVar8->ConfigParms).StateStruct = pFVar5->StateStruct;
  (**(code **)(pUVar8->_padding_ + 0x2b8))(pUVar8);
  this = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)&pUVar8->_padding_ + 4));
  FUObjectItem::SetRootFlags(this,RootSet);
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_858);
LAB_1441dc07e:
  TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_1078);
  pFVar3 = (pFVar1->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return pUVar8;
}

// GetArchetype @ 1441dc0f0

UStatePerObjectConfig * __cdecl
UStatePerObjectConfig::GetArchetype(FStateConfigParms *param_1,FString *param_2,FString *param_3)

{
  UClass *pUVar1;
  FName FVar2;
  FScriptContainerElement *pFVar3;
  size_t sVar4;
  UClass *pUVar5;
  UStatePerObjectConfig *pUVar6;
  FName *pFVar7;
  UPackage *pUVar8;
  int iVar9;
  int iVar10;
  FName local_res8;
  TStringView<wchar_t> local_28;
  
  pUVar1 = param_1->ConfigClass;
  ::FString::AppendChars(param_3,L"_Archetype",10);
  if ((param_3->Data).ArrayNum == 0) {
    local_28.DataPtr = L"";
  }
  else {
    local_28.DataPtr = (wchar_t *)(param_3->Data).AllocatorInstance.Data;
    local_28.Size = 0;
    if ((FScriptContainerElement *)local_28.DataPtr == (FScriptContainerElement *)0x0)
    goto LAB_1441dc156;
  }
  sVar4 = wcslen(local_28.DataPtr);
  local_28.Size = (int)sVar4;
LAB_1441dc156:
  pUVar5 = StaticClass();
  pUVar6 = (UStatePerObjectConfig *)StaticFindObject(pUVar5,(UObject *)pUVar1,&local_28,None);
  if (pUVar6 == (UStatePerObjectConfig *)0x0) {
    iVar10 = (param_3->Data).ArrayNum;
    iVar9 = iVar10 + -1;
    if (iVar10 == 0) {
      iVar9 = 0;
    }
    pFVar7 = ::FName::FName(&local_res8,iVar9,(wchar_t *)(param_3->Data).AllocatorInstance.Data,
                            FNAME_Add);
    FVar2 = *pFVar7;
    pUVar8 = GetTransientPackage();
    pUVar6 = NewObject<UStatePerObjectConfig>
                       ((UObject *)pUVar8,pUVar1,FVar2,RF_ArchetypeObject,(UObject *)0x0,false,
                        (FObjectInstancingGraph *)0x0,(UPackage *)0x0);
    iVar9 = (param_2->Data).ArrayNum;
    iVar10 = iVar9 + -1;
    if (iVar9 == 0) {
      iVar10 = 0;
    }
    ::FString::AssignRange
              (&pUVar6->PerObjectConfigSection,(wchar_t *)(param_2->Data).AllocatorInstance.Data,
               iVar10);
    (**(code **)(pUVar6->_padding_ + 0x2c0))(pUVar6);
  }
  pFVar3 = (param_1->ConfigContext).Data.AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (param_2->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  pFVar3 = (param_3->Data).AllocatorInstance.Data;
  if (pFVar3 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar3);
  }
  return pUVar6;
}

// GetPrivateStaticClass @ 1441dce90

UClass * __cdecl UStatePerObjectConfig::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UStatePerObjectConfig.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/NetCore",L"StatePerObjectConfig",
               &Z_Registration_Info_UClass_UStatePerObjectConfig.InnerSingleton,
               StaticRegisterNativesUStatePerObjectConfig,0x78,8,CLASS_Intrinsic|CLASS_Config,
               CASTCLASS_None,L"Engine",InternalConstructor<UStatePerObjectConfig>,
               InternalVTableHelperCtorCaller<UStatePerObjectConfig>,local_res8,UObject::StaticClass
               ,UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UStatePerObjectConfig.InnerSingleton;
}

// InitConfigDefaultsInternal @ 1441de8d0

void __thiscall UStatePerObjectConfig::InitConfigDefaultsInternal(UStatePerObjectConfig *this)

{
  return;
}

// LoadStateConfig @ 1441e1830

void __thiscall UStatePerObjectConfig::LoadStateConfig(UStatePerObjectConfig *this)

{
  return;
}

// LoadStructConfig @ 1441e1840

/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
UStatePerObjectConfig::LoadStructConfig(FStructOnScope *param_1,wchar_t *param_2,wchar_t *param_3)

{
  bool bVar1;
  FFeedbackContext *pFVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  FString *pFVar6;
  ulonglong uVar7;
  UStruct *this;
  FName *pFVar8;
  FProperty *this_00;
  undefined8 uVar9;
  ForAnyElementType FVar10;
  ForAnyElementType FVar11;
  longlong lVar12;
  FScriptContainerElement *pFVar13;
  bool local_res8;
  undefined1 local_res20 [8];
  FName local_90;
  FString local_88;
  TArray<FString,TSizedDefaultAllocator<32>_> local_78;
  FString local_68;
  FString local_58;
  FString local_48;
  
  local_res8 = false;
  cVar4 = (**(code **)(param_1->_padding_ + 0x38))();
  FVar11 = GEngineIni.Data.AllocatorInstance;
  if (cVar4 == '\0') {
    if (1 < (byte)LogNetCore._0_1_) {
      UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetCore);
    }
  }
  else {
    if (param_3 == (wchar_t *)0x0) {
      lVar12 = (longlong)GEngineIni.Data.ArrayNum;
      bVar1 = false;
      bVar5 = true;
      local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
      local_88.Data.ArrayNum = GEngineIni.Data.ArrayNum;
      if (GEngineIni.Data.ArrayNum == 0) {
        local_88.Data.ArrayNum = 0;
        local_88.Data.ArrayMax = 0;
      }
      else {
        UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (2,2,GEngineIni.Data.ArrayNum,0,(ForAnyElementType *)&local_88,
                   GEngineIni.Data.ArrayNum,&local_88.Data.ArrayMax);
        memcpy(local_88.Data.AllocatorInstance.Data,FVar11.Data,lVar12 * 2);
      }
      pFVar6 = &local_88;
    }
    else {
      pFVar6 = ::FString::FString(&local_48,param_3);
      bVar1 = true;
      bVar5 = false;
    }
    local_res8 = false;
    local_58.Data.AllocatorInstance.Data = (pFVar6->Data).AllocatorInstance.Data;
    (pFVar6->Data).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_58.Data.ArrayNum = (pFVar6->Data).ArrayNum;
    local_58.Data.ArrayMax = (pFVar6->Data).ArrayMax;
    (pFVar6->Data).ArrayNum = 0;
    (pFVar6->Data).ArrayMax = 0;
    if ((bVar5) && (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_88.Data.AllocatorInstance.Data);
    }
    if ((bVar1) && (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0)) {
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
    }
    local_78.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_78.ArrayNum = 0;
    local_78.ArrayMax = 0;
    bVar5 = FConfigCacheIni::GetSection(GConfig,param_2,&local_78,&local_58);
    uVar3 = local_78._8_8_;
    if (bVar5) {
      uVar7 = (ulonglong)local_78.ArrayNum;
      pFVar13 = local_78.AllocatorInstance.Data + uVar7 * 0x10;
      FVar11.Data = local_78.AllocatorInstance.Data;
      while( true ) {
        if (local_78.ArrayNum != (int)uVar7) {
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res20);
        }
        if (FVar11.Data == pFVar13) break;
        local_88.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_88.Data.ArrayNum = 0;
        local_88.Data.ArrayMax = 0;
        local_68.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_68.Data.ArrayNum = 0;
        local_68.Data.ArrayMax = 0;
        ::FString::FString(&local_48,L"=");
        bVar5 = ::FString::Split((FString *)FVar11.Data,&local_48,&local_88,&local_68);
        if (local_48.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_48.Data.AllocatorInstance.Data);
        }
        if (bVar5) {
          this = (UStruct *)(**(code **)(param_1->_padding_ + 0x20))(param_1);
          FVar10.Data = (FScriptContainerElement *)L"";
          if (local_88.Data.ArrayNum != 0) {
            FVar10.Data = local_88.Data.AllocatorInstance.Data;
          }
          pFVar8 = ::FName::FName(&local_90,(wchar_t *)FVar10.Data);
          this_00 = UStruct::FindPropertyByName(this,*pFVar8);
          pFVar2 = GWarn;
          if (this_00 == (FProperty *)0x0) {
            if (1 < (byte)LogNetCore._0_1_) {
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetCore);
            }
          }
          else if (((uint)(int)this_00->PropertyFlags >> 0xe & 1) == 0) {
            if (1 < (byte)LogNetCore._0_1_) {
              UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNetCore);
            }
          }
          else {
            uVar9 = (**(code **)(param_1->_padding_ + 0x18))(param_1);
            FVar10.Data = (FScriptContainerElement *)L"";
            if (local_68.Data.ArrayNum != 0) {
              FVar10.Data = local_68.Data.AllocatorInstance.Data;
            }
            bVar5 = FProperty::ValidateImportFlags(this_00,0,(FOutputDevice *)pFVar2);
            if ((bVar5) && (FVar10.Data != (FScriptContainerElement *)0x0)) {
              (**(code **)(this_00->_padding_ + 0xe8))
                        (this_00,FVar10.Data,uVar9,1,0,0x8000000,pFVar2);
            }
          }
        }
        if (local_68.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_68.Data.AllocatorInstance.Data);
        }
        if (local_88.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_88.Data.AllocatorInstance.Data);
        }
        uVar7 = uVar3 & 0xffffffff;
        FVar11.Data = FVar11.Data + 0x10;
      }
      local_res8 = true;
    }
    DestructItems<FString,int>((FString *)local_78.AllocatorInstance.Data,local_78.ArrayNum);
    if (local_78.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.AllocatorInstance.Data);
    }
    if (local_58.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_58.Data.AllocatorInstance.Data);
    }
  }
  return local_res8;
}

// OverridePerObjectConfigSection @ 1441e3540

void __thiscall
UStatePerObjectConfig::OverridePerObjectConfigSection(UStatePerObjectConfig *this,FString *param_1)

{
  int iVar1;
  
  iVar1 = (this->PerObjectConfigSection).Data.ArrayNum;
  if (1 < iVar1) {
    ::FString::AssignRange
              (param_1,(wchar_t *)(this->PerObjectConfigSection).Data.AllocatorInstance.Data,
               iVar1 + -1);
    return;
  }
  return;
}

// RegisterStateConfig @ 1441e4bb0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall
UStatePerObjectConfig::RegisterStateConfig
          (UStatePerObjectConfig *this,TArray<FString,TSizedDefaultAllocator<32>_> *param_1,
          TArray<TStructOnScope<FStateStruct>,TSizedDefaultAllocator<32>_> *param_2)

{
  int *piVar1;
  FStructOnScope *pFVar2;
  uchar *puVar3;
  code *pcVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  size_t sVar10;
  void *pvVar11;
  FStructOnScope *pFVar12;
  longlong lVar13;
  UClass *pUVar14;
  UPackage *pUVar15;
  ulong64 uVar16;
  uint uVar17;
  wchar_t *pwVar18;
  FScriptContainerElement *pFVar19;
  wchar_t *pwVar20;
  FScriptContainerElement *pFVar21;
  undefined1 auStackY_938 [32];
  undefined1 local_8e8 [4];
  uint local_8e4;
  UStatePerObjectConfig *local_8e0;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_8d8;
  TArray<TStructOnScope<FStateStruct>,TSizedDefaultAllocator<32>_> *pTStack_8d0;
  FName local_8c8;
  TArray<FString,TSizedDefaultAllocator<32>_> *local_8c0;
  FScriptContainerElement *local_8b8;
  FString local_8b0;
  FStructOnScope local_898;
  TStringBuilderBase<wchar_t> local_868;
  wchar_t local_848 [1024];
  ulonglong local_48 [2];
  
  local_48[0] = __security_cookie.value ^ (ulonglong)auStackY_938;
  local_8e0 = this;
  local_8c0 = param_1;
  DestructItems<TStructOnScope<FStateStruct>,int>
            ((TStructOnScope<FStateStruct> *)(param_2->AllocatorInstance).Data,param_2->ArrayNum);
  param_2->ArrayNum = 0;
  if (param_2->ArrayMax != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x28,8,0,&param_2->AllocatorInstance,0,&param_2->ArrayMax);
  }
  if (this->bEnabled != false) {
    local_8e4 = param_1->ArrayNum;
    uVar9 = (ulonglong)(int)local_8e4;
    pFVar21 = (param_1->AllocatorInstance).Data;
    local_8b8 = pFVar21 + uVar9 * 0x10;
    while( true ) {
      pFVar19 = local_8b8;
      if (param_1->ArrayNum != (int)uVar9) {
        local_8e8[0] = 0;
        `TCheckedPointerIterator<FString_const_,int,0>::operator!='::__l2::<lambda_1>::operator()
                  (local_8e8);
      }
      if (pFVar21 == pFVar19) break;
      pwVar20 = (this->ConfigParms).ConfigSection;
      local_868.Base = local_848;
      local_868.End = (wchar_t *)local_48;
      iVar7 = 0;
      local_868.bIsDynamic = false;
      local_868.bIsExternal = false;
      local_868.CurPos = local_848;
      if (pwVar20 != (wchar_t *)0x0) {
        sVar10 = wcslen(pwVar20);
        iVar7 = (int)sVar10;
      }
      uVar16 = (ulong64)iVar7;
      pwVar18 = local_848;
      if (local_48 < local_848 + uVar16) {
        TStringBuilderBase<wchar_t>::Extend(&local_868,uVar16);
        pwVar18 = local_868.CurPos;
      }
      if (iVar7 != 0) {
        pvVar11 = FGenericPlatformString::Memcpy(pwVar18,pwVar20,uVar16 * 2);
        pwVar18 = (wchar_t *)((longlong)pvVar11 + uVar16 * 2);
        local_868.CurPos = pwVar18;
      }
      if (local_868.End < pwVar18 + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_868,1);
        pwVar18 = local_868.CurPos;
      }
      *pwVar18 = L'.';
      pwVar20 = local_868.CurPos + 1;
      local_868.CurPos = pwVar20;
      if (*(int *)&pFVar21[8].field_0x0 == 0) {
        pwVar18 = L"";
LAB_1441e4d40:
        sVar10 = wcslen(pwVar18);
        iVar7 = (int)sVar10;
      }
      else {
        pwVar18 = *(wchar_t **)&pFVar21->field_0x0;
        iVar7 = 0;
        if (pwVar18 != (wchar_t *)0x0) goto LAB_1441e4d40;
      }
      uVar16 = (ulong64)iVar7;
      if (local_868.End < pwVar20 + uVar16) {
        TStringBuilderBase<wchar_t>::Extend(&local_868,uVar16);
        pwVar20 = local_868.CurPos;
      }
      if (iVar7 != 0) {
        pvVar11 = FGenericPlatformString::Memcpy(pwVar20,pwVar18,uVar16 * 2);
        pwVar20 = (wchar_t *)((longlong)pvVar11 + uVar16 * 2);
        local_868.CurPos = pwVar20;
      }
      if (local_868.End < pwVar20 + 1) {
        TStringBuilderBase<wchar_t>::Extend(&local_868,1);
        pwVar20 = local_868.CurPos;
      }
      pwVar18 = local_868.Base;
      *pwVar20 = L'\0';
      iVar7 = param_2->ArrayNum;
      if (iVar7 == param_2->ArrayMax) {
        iVar7 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x828,&param_2->AllocatorInstance,&param_2->ArrayMax);
      }
      param_2->ArrayNum = iVar7 + 1;
      pFVar2 = (FStructOnScope *)((param_2->AllocatorInstance).Data + (longlong)iVar7 * 0x28);
      DefaultConstructItems<TStructOnScope<FStateStruct>,int>(pFVar2,1);
      pFVar12 = FStructOnScope::FStructOnScope(&local_898,(local_8e0->ConfigParms).StateStruct);
      if (pFVar2 != pFVar12) {
        lVar13 = (**(code **)(pFVar12->_padding_ + 0x20))(pFVar12);
        if (lVar13 != 0) {
          pUVar14 = Z_Construct_UClass_UScriptStruct_NoRegister();
          iVar7 = (int)pUVar14->_padding_;
          if ((iVar7 <= *(int *)(*(longlong *)(lVar13 + 0x10) + 0x38)) &&
             ((longlong *)
              *(undefined1 **)
               (*(longlong *)(*(longlong *)(lVar13 + 0x10) + 0x30) + (longlong)iVar7 * 8) ==
              &pUVar14->_padding_)) {
            if (Z_Registration_Info_UScriptStruct_FStateStruct.OuterSingleton ==
                (UScriptStruct *)0x0) {
              pUVar15 = Z_Construct_UPackage__Script_NetCore();
              Z_Registration_Info_UScriptStruct_FStateStruct.OuterSingleton =
                   GetStaticStruct(Z_Construct_UScriptStruct_FStateStruct,(UObject *)pUVar15,
                                   L"StateStruct");
              if (Z_Registration_Info_UScriptStruct_FStateStruct.OuterSingleton !=
                  (UScriptStruct *)0x0) goto LAB_1441e4e7f;
LAB_1441e4eef:
              pUVar15 = Z_Construct_UPackage__Script_NetCore();
              Z_Registration_Info_UScriptStruct_FStateStruct.OuterSingleton =
                   GetStaticStruct(Z_Construct_UScriptStruct_FStateStruct,(UObject *)pUVar15,
                                   L"StateStruct");
            }
            else {
LAB_1441e4e7f:
              iVar7 = (int)(Z_Registration_Info_UScriptStruct_FStateStruct.OuterSingleton)->
                           _padding_;
              if ((*(int *)(lVar13 + 0x38) < iVar7) ||
                 ((longlong *)*(undefined1 **)(*(longlong *)(lVar13 + 0x30) + (longlong)iVar7 * 8)
                  != &(Z_Registration_Info_UScriptStruct_FStateStruct.OuterSingleton)->_padding_)) {
                bVar6 = false;
              }
              else {
                bVar6 = true;
              }
              if ((bVar6) && (cVar5 = (**(code **)(pFVar12->_padding_ + 8))(pFVar12), cVar5 != '\0')
                 ) {
                (**(code **)(pFVar2->_padding_ + 0x48))(pFVar2);
                (pFVar2->ScriptStruct).WeakPtr = (pFVar12->ScriptStruct).WeakPtr;
                pFVar2->SampleStructMemory = pFVar12->SampleStructMemory;
                pFVar2->OwnsMemory = pFVar12->OwnsMemory;
                pFVar12->OwnsMemory = false;
                (**(code **)(pFVar12->_padding_ + 0x48))(pFVar12);
                goto LAB_1441e4f67;
              }
              if (Z_Registration_Info_UScriptStruct_FStateStruct.OuterSingleton ==
                  (UScriptStruct *)0x0) goto LAB_1441e4eef;
            }
            local_8c8 = (FName)(Z_Registration_Info_UScriptStruct_FStateStruct.OuterSingleton)->
                               _padding_;
            ::FName::ToString(&local_8c8,&local_8b0);
            UE::Logging::Private::BasicFatalLog
                      ((FStaticBasicLogRecord *)
                       &`public:_void___cdecl_TStructOnScope<FStateStruct>::InitializeFromChecked(FStructOnScope&&___ptr64)___ptr64'
                        ::__l6::LOG_Static,(FLogCategoryBase *)&LogClass);
            if (local_8b0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
              FMemory::Free(local_8b0.Data.AllocatorInstance.Data);
            }
            goto LAB_1441e4f67;
          }
        }
        (**(code **)(pFVar2->_padding_ + 0x40))(pFVar2);
      }
LAB_1441e4f67:
      FStructOnScope::~FStructOnScope(&local_898);
      puVar3 = pFVar2->SampleStructMemory;
      pFVar19 = (FScriptContainerElement *)(puVar3 + 8);
      if (pFVar19 != pFVar21) {
        iVar7 = *(int *)&pFVar21[8].field_0x0;
        piVar1 = (int *)(puVar3 + 0x14);
        pvVar11 = *(void **)&pFVar21->field_0x0;
        *(int *)(puVar3 + 0x10) = iVar7;
        if ((iVar7 == 0) && (*piVar1 == 0)) {
          *piVar1 = 0;
        }
        else {
          UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (2,2,iVar7,*piVar1,(ForAnyElementType *)pFVar19,iVar7,piVar1);
          if (iVar7 != 0) {
            memcpy(*(void **)&pFVar19->field_0x0,pvVar11,(longlong)iVar7 * 2);
          }
        }
      }
      cVar5 = (**(code **)(*(longlong *)pFVar2->SampleStructMemory + 8))();
      bVar6 = FConfigCacheIni::DoesSectionExist(GConfig,pwVar18,&GEngineIni);
      if (cVar5 == '\0') {
        if (bVar6) goto LAB_1441e50b1;
LAB_1441e50f7:
        (**(code **)(*(longlong *)pFVar2->SampleStructMemory + 0x10))();
        (**(code **)(*(longlong *)pFVar2->SampleStructMemory + 0x18))();
      }
      else if (bVar6) {
LAB_1441e50b1:
        pwVar20 = L"";
        if (GEngineIni.Data.ArrayNum != 0) {
          pwVar20 = (wchar_t *)GEngineIni.Data.AllocatorInstance;
        }
        bVar6 = LoadStructConfig(pFVar2,pwVar18,pwVar20);
        if (bVar6) goto LAB_1441e50f7;
        if (2 < (byte)LogNetCore._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetCore);
        }
      }
      else {
        uVar17 = param_2->ArrayNum - 1;
        uVar8 = 0;
        if ((int)uVar17 < param_2->ArrayNum) {
          uVar8 = ~uVar17 >> 0x1f;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar2 = (FStructOnScope *)
                 ((param_2->AllocatorInstance).Data + (longlong)(int)uVar17 * 0x28);
        FStructOnScope::~FStructOnScope(pFVar2);
        iVar7 = (param_2->ArrayNum - uVar17) + -1;
        if (iVar7 != 0) {
          memmove(pFVar2,pFVar2 + 1,(longlong)iVar7 * 0x28);
        }
        param_2->ArrayNum = param_2->ArrayNum + -1;
        if (2 < (byte)LogNetCore._0_1_) {
          UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNetCore);
        }
      }
      TStringBuilderBase<wchar_t>::~TStringBuilderBase<wchar_t>(&local_868);
      pFVar21 = pFVar21 + 0x10;
      uVar9 = (ulonglong)local_8e4;
      this = local_8e0;
      param_1 = local_8c0;
    }
    pFVar21 = (this->RegisteredStateConfigs).AllocatorInstance.Data;
    local_8d8 = param_1;
    pTStack_8d0 = param_2;
    if (((pFVar21 <= (FScriptContainerElement *)&local_8d8) &&
        ((FScriptContainerElement *)&local_8d8 <
         pFVar21 + (longlong)(this->RegisteredStateConfigs).ArrayMax * 0x10)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      (*pcVar4)();
      return;
    }
    iVar7 = (this->RegisteredStateConfigs).ArrayNum;
    piVar1 = &(this->RegisteredStateConfigs).ArrayMax;
    if (iVar7 == *piVar1) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x810,&(this->RegisteredStateConfigs).AllocatorInstance,piVar1);
    }
    (this->RegisteredStateConfigs).ArrayNum = iVar7 + 1;
    pFVar21 = (this->RegisteredStateConfigs).AllocatorInstance.Data + (longlong)iVar7 * 0x10;
    *(TArray<FString,TSizedDefaultAllocator<32>_> **)pFVar21 = local_8d8;
    *(TArray<TStructOnScope<FStateStruct>,TSizedDefaultAllocator<32>_> **)(pFVar21 + 8) =
         pTStack_8d0;
  }
  return;
}

// StaticRegisterNativesUStatePerObjectConfig @ 1441ec580

void __cdecl UStatePerObjectConfig::StaticRegisterNativesUStatePerObjectConfig(void)

{
  return;
}

