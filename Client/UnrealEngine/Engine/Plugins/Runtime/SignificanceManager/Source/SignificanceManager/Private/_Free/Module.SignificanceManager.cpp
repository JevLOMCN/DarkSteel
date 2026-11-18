// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: SignificanceManager
// Functions: 47

// WorldSignificanceManagers'' @ 1414170f0

void __cdecl `dynamic_initializer_for_'FSignificanceManagerModule::WorldSignificanceManagers__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSignificanceManagerModule::WorldSignificanceManagers__);
  return;
}

// `dynamic_initializer_for_'CVarSignificanceManagerFilterTag'' @ 141417110

void __cdecl _dynamic_initializer_for__CVarSignificanceManagerFilterTag__(void)

{
  FAutoConsoleVariable::FAutoConsoleVariable
            (&CVarSignificanceManagerFilterTag,L"SigMan.FilterTag",L"",
             L"Only display objects with the specified filter tag.  If None objects with any will be displayed.\n"
             ,1);
  atexit(_dynamic_atexit_destructor_for__CVarSignificanceManagerFilterTag__);
  return;
}

// `dynamic_initializer_for_'CVarSignificanceManagerObjectsToShow'' @ 141417160

void __cdecl _dynamic_initializer_for__CVarSignificanceManagerObjectsToShow__(void)

{
  FAutoConsoleVariableRef::FAutoConsoleVariableRef
            (&CVarSignificanceManagerObjectsToShow,L"SigMan.ObjectsToShow",
             &GSignificanceManagerObjectsToShow,
             L"How many objects to display when ShowDebug SignificanceManager is enabled.\n",1);
  atexit(_dynamic_atexit_destructor_for__CVarSignificanceManagerObjectsToShow__);
  return;
}

// `dynamic_initializer_for_'LogSignificance'' @ 1414171b0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogSignificance__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogSignificance,L"LogSignificance",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogSignificance__);
  return;
}

// `dynamic_initializer_for_'ModuleRegistrantSignificanceManager'' @ 1414171f0

void __cdecl _dynamic_initializer_for__ModuleRegistrantSignificanceManager__(void)

{
  FLazyName local_18;
  
  local_18.Either.AnsiLiteral = "SignificanceManager";
  local_18.Number = FLazyName::CallParseNumber<wchar_t>(L"SignificanceManager",0x13);
  local_18.LiteralType = WideLiteral;
  FModuleManager::RegisterStaticallyLinkedModule
            (&local_18,
             FStaticallyLinkedModuleRegistrant<FSignificanceManagerModule>::InitializeModule);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SignificanceManager_InitialSignificanceUpdate'' @ 141417240

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
_dynamic_initializer_for__StatPtr_STAT_SignificanceManager_InitialSignificanceUpdate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SignificanceManager_InitialSignificanceUpdate ==
      (FThreadSafeStaticStat<FStat_STAT_SignificanceManager_InitialSignificanceUpdate>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SignificanceManager_InitialSignificanceUpdate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)
               &StatPtr_STAT_SignificanceManager_InitialSignificanceUpdate,*pFVar1,
               L"Initial Significance Update","STATGROUP_SignificanceManager","STATCAT_Advanced",
               L"Significance Manager",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SignificanceManager_NumObjects'' @ 1414172d0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SignificanceManager_NumObjects__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SignificanceManager_NumObjects ==
      (FThreadSafeStaticStat<FStat_STAT_SignificanceManager_NumObjects>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SignificanceManager_NumObjects");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SignificanceManager_NumObjects,*pFVar1,
               L"Num Managed Objects","STATGROUP_SignificanceManager","STATCAT_Advanced",
               L"Significance Manager",true,false,ST_int64,false,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SignificanceManager_RegisterObject'' @ 141417360

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SignificanceManager_RegisterObject__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SignificanceManager_RegisterObject ==
      (FThreadSafeStaticStat<FStat_STAT_SignificanceManager_RegisterObject>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SignificanceManager_RegisterObject");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SignificanceManager_RegisterObject,*pFVar1
               ,L"Register Object","STATGROUP_SignificanceManager","STATCAT_Advanced",
               L"Significance Manager",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SignificanceManager_SignificanceCheck'' @ 1414173f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SignificanceManager_SignificanceCheck__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SignificanceManager_SignificanceCheck ==
      (FThreadSafeStaticStat<FStat_STAT_SignificanceManager_SignificanceCheck>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SignificanceManager_SignificanceCheck");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SignificanceManager_SignificanceCheck,
               *pFVar1,L"Significance Check","STATGROUP_SignificanceManager","STATCAT_Advanced",
               L"Significance Manager",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SignificanceManager_SignificanceSort'' @ 141417480

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SignificanceManager_SignificanceSort__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SignificanceManager_SignificanceSort ==
      (FThreadSafeStaticStat<FStat_STAT_SignificanceManager_SignificanceSort>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SignificanceManager_SignificanceSort");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SignificanceManager_SignificanceSort,
               *pFVar1,L"Significance Sort","STATGROUP_SignificanceManager","STATCAT_Advanced",
               L"Significance Manager",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SignificanceManager_SignificanceUpdate'' @ 141417510

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SignificanceManager_SignificanceUpdate__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SignificanceManager_SignificanceUpdate ==
      (FThreadSafeStaticStat<FStat_STAT_SignificanceManager_SignificanceUpdate>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SignificanceManager_SignificanceUpdate");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SignificanceManager_SignificanceUpdate,
               *pFVar1,L"Significance Update","STATGROUP_SignificanceManager","STATCAT_Advanced",
               L"Significance Manager",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SignificanceManager_UnregisterObject'' @ 1414175a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SignificanceManager_UnregisterObject__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SignificanceManager_UnregisterObject ==
      (FThreadSafeStaticStat<FStat_STAT_SignificanceManager_UnregisterObject>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SignificanceManager_UnregisterObject");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SignificanceManager_UnregisterObject,
               *pFVar1,L"Unregister Object","STATGROUP_SignificanceManager","STATCAT_Advanced",
               L"Significance Manager",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_SignificanceManager_Update'' @ 141417630

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_SignificanceManager_Update__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_SignificanceManager_Update ==
      (FThreadSafeStaticStat<FStat_STAT_SignificanceManager_Update>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_SignificanceManager_Update");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_SignificanceManager_Update,*pFVar1,
               L"Update Total","STATGROUP_SignificanceManager","STATCAT_Advanced",
               L"Significance Manager",true,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SignificanceManager_Source_SignificanceManager_Public_SignificanceManager_h__Script_SignificanceManager_397865804'' @ 1414176c0

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SignificanceManager_Source_SignificanceManager_Public_SignificanceManager_h__Script_SignificanceManager_397865804__
          (void)

{
  RegisterCompiledInInfo
            (L"/Script/SignificanceManager",
             Z_CompiledInDeferFile_FID_Engine_Plugins_Runtime_SignificanceManager_Source_SignificanceManager_Public_SignificanceManager_h__Script_SignificanceManager_Statics
             ::ClassInfo,1,(FStructRegisterCompiledInInfo *)0x0,0,(FEnumRegisterCompiledInInfo *)0x0
             ,0);
  return;
}

// `dynamic_initializer_for_'Z_CompiledInDeferPackage_UPackage__Script_SignificanceManager'' @ 141417700

void __cdecl
_dynamic_initializer_for__Z_CompiledInDeferPackage_UPackage__Script_SignificanceManager__(void)

{
  FPackageReloadVersionInfo local_res8 [4];
  
  local_res8[0].BodyHash = 0x99bf4b71;
  local_res8[0].DeclarationsHash = 0x3a090faa;
  RegisterCompiledInInfo
            (Z_Construct_UPackage__Script_SignificanceManager,L"/Script/SignificanceManager",
             &Z_Registration_Info_UPackage__Script_SignificanceManager,local_res8);
  return;
}

// Z_Construct_UPackage__Script_SignificanceManager @ 14e29edb0

UPackage * __cdecl Z_Construct_UPackage__Script_SignificanceManager(void)

{
  if (Z_Registration_Info_UPackage__Script_SignificanceManager.OuterSingleton == (UPackage *)0x0) {
    UECodeGen_Private::ConstructUPackage
              (&Z_Registration_Info_UPackage__Script_SignificanceManager.OuterSingleton,
               &PackageParams);
  }
  return Z_Registration_Info_UPackage__Script_SignificanceManager.OuterSingleton;
}

// Z_Construct_UClass_USignificanceManager @ 14e29eea0

/* WARNING: Enum "EPropertyGenFlags": Some values do not have unique names */

UClass * __cdecl Z_Construct_UClass_USignificanceManager(void)

{
  if (Z_Registration_Info_UClass_USignificanceManager.OuterSingleton == (UClass *)0x0) {
    UECodeGen_Private::ConstructUClass
              (&Z_Registration_Info_UClass_USignificanceManager.OuterSingleton,
               &Z_Construct_UClass_USignificanceManager_Statics::ClassParams);
  }
  return Z_Registration_Info_UClass_USignificanceManager.OuterSingleton;
}

// `scalar_deleting_destructor' @ 14e29f250

void * __thiscall
FSignificanceManagerModule::_scalar_deleting_destructor_
          (FSignificanceManagerModule *this,uint param_1)

{
  *(undefined ***)&this->field_0x8 = &___7FGCObject__6B_;
  FGCObject::UnregisterGCObject((FGCObject *)&this->field_0x8);
  *(undefined ***)this = IModuleInterface::vftable;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `vector_deleting_destructor'`adjustor{8}' @ 14e29f2a4

/* [thunk]:public: virtual void * __ptr64 __cdecl FSignificanceManagerModule::`vector deleting
   destructor'`adjustor{8}' (unsigned int) __ptr64 */

void * __thiscall
FSignificanceManagerModule::_vector_deleting_destructor__adjustor_8__
          (FSignificanceManagerModule *this,uint param_1)

{
  void *pvVar1;
  
  pvVar1 = _scalar_deleting_destructor_((FSignificanceManagerModule *)&this[-1].field_0x10,param_1);
  return pvVar1;
}

// CastChecked<USignificanceManager,UObject> @ 14e29f770

USignificanceManager * __cdecl CastChecked<USignificanceManager,UObject>(UObject *param_1)

{
  int iVar1;
  UClass *pUVar2;
  FString *pFVar3;
  wchar_t *pwVar4;
  wchar_t *pwVar5;
  FString local_28;
  FString local_18;
  
  if (param_1 == (UObject *)0x0) {
    pFVar3 = GetTypeName<USignificanceManager>(&local_28);
    if ((pFVar3->Data).ArrayNum == 0) {
      pwVar4 = L"";
    }
    else {
      pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
    }
                    /* WARNING: Subroutine does not return */
    CastLogError(L"nullptr",pwVar4);
  }
  pUVar2 = USignificanceManager::GetPrivateStaticClass();
  iVar1 = (int)pUVar2->_padding_;
  if ((iVar1 <= *(int *)(*(longlong *)&param_1->field_0x10 + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)&param_1->field_0x10 + 0x30) + (longlong)iVar1 * 8) ==
      &pUVar2->_padding_)) {
    return (USignificanceManager *)param_1;
  }
  pFVar3 = GetTypeName<USignificanceManager>(&local_28);
  pwVar4 = L"";
  if ((pFVar3->Data).ArrayNum == 0) {
    pwVar5 = L"";
  }
  else {
    pwVar5 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
  pFVar3 = GetFullNameForCastLogError<UObject>(&local_18,param_1);
  if ((pFVar3->Data).ArrayNum != 0) {
    pwVar4 = (wchar_t *)(pFVar3->Data).AllocatorInstance.Data;
  }
                    /* WARNING: Subroutine does not return */
  CastLogError(pwVar4,pwVar5);
}

// GetTypeName<USignificanceManager> @ 14e29ffe0

FString * __cdecl GetTypeName<USignificanceManager>(FString *__return_storage_ptr__)

{
  UClass *pUVar1;
  FName local_res8 [4];
  
  pUVar1 = USignificanceManager::GetPrivateStaticClass();
  local_res8[0] = (FName)pUVar1->_padding_;
  FName::ToString(local_res8,__return_storage_ptr__);
  return __return_storage_ptr__;
}

// HeapSortInternal<USignificanceManager::FManagedObjectInfo_*,int,FIdentityFunctor,TDereferenceWrapper<USignificanceManager::FManagedObjectInfo_*,bool___cdecl(USignificanceManager::FManagedObjectInfo_const_&,USignificanceManager::FManagedObjectInfo_const_&)>_> @ 14e2a0020

void __cdecl
AlgoImpl::
HeapSortInternal<USignificanceManager::FManagedObjectInfo_*,int,FIdentityFunctor,TDereferenceWrapper<USignificanceManager::FManagedObjectInfo_*,bool___cdecl(USignificanceManager::FManagedObjectInfo_const_&,USignificanceManager::FManagedObjectInfo_const_&)>_>
          (FManagedObjectInfo **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<USignificanceManager::FManagedObjectInfo_*,bool___cdecl(USignificanceManager::FManagedObjectInfo_const_&,USignificanceManager::FManagedObjectInfo_const_&)>
          param_4)

{
  FManagedObjectInfo *pFVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  longlong lVar8;
  int iVar9;
  
  if (param_2 < 0) {
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0xb9,L"Algo::HeapSortInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    bVar3 = ::FDebug::CheckVerifyFailedImpl2
                      ("Num >= 0",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Algo\\Impl\\BinaryHeap.h"
                       ,0x97,L"Algo::HeapifyInternal called with negative count");
    if (bVar3) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  else if (param_2 == 0) {
    return;
  }
  iVar4 = (param_2 + -2) / 2;
  iVar5 = iVar4 * 2 + 1;
  iVar9 = iVar5;
  iVar7 = iVar4;
  do {
    while (param_2 <= iVar5) {
LAB_14e2a0132:
      if (iVar7 == 0) {
        iVar5 = param_2 + -1;
        lVar8 = (longlong)iVar5;
        if (0 < iVar5) {
          do {
            iVar9 = 0;
            pFVar1 = *param_1;
            *param_1 = param_1[lVar8];
            param_1[lVar8] = pFVar1;
            if (1 < iVar5) {
              do {
                iVar7 = iVar9 * 2;
                iVar4 = iVar7 + 1;
                if (iVar7 + 2 < iVar5) {
                  bVar3 = (*param_4.Predicate)(param_1[(longlong)iVar7 + 2],param_1[iVar4]);
                  if (bVar3) {
                    iVar4 = iVar7;
                  }
                  iVar4 = iVar4 + 1;
                }
                bVar3 = (*param_4.Predicate)(param_1[iVar9],param_1[iVar4]);
                if (!bVar3) break;
                pFVar1 = param_1[iVar9];
                param_1[iVar9] = param_1[iVar4];
                param_1[iVar4] = pFVar1;
                iVar9 = iVar4;
              } while (iVar4 * 2 + 1 < iVar5);
            }
            iVar5 = iVar5 + -1;
            lVar8 = lVar8 + -1;
          } while (0 < lVar8);
        }
        return;
      }
      iVar4 = iVar7 + -1;
      iVar5 = iVar9 + -2;
      iVar9 = iVar5;
      iVar7 = iVar4;
    }
    iVar5 = iVar4 * 2;
    iVar6 = iVar5 + 1;
    if (iVar5 + 2 < param_2) {
      bVar3 = (*param_4.Predicate)(param_1[(longlong)iVar5 + 2],param_1[iVar6]);
      if (bVar3) {
        iVar6 = iVar5;
      }
      iVar6 = iVar6 + 1;
    }
    bVar3 = (*param_4.Predicate)(param_1[iVar4],param_1[iVar6]);
    if (!bVar3) goto LAB_14e2a0132;
    pFVar1 = param_1[iVar4];
    param_1[iVar4] = param_1[iVar6];
    iVar5 = iVar6 * 2 + 1;
    param_1[iVar6] = pFVar1;
    iVar4 = iVar6;
  } while( true );
}

// InternalConstructor<USignificanceManager> @ 14e2a0210

void __cdecl InternalConstructor<USignificanceManager>(FObjectInitializer *param_1)

{
  undefined1 *puVar1;
  UObject *this;
  UObject *pUVar2;
  FSoftObjectPath local_28;
  
  this = param_1->Obj;
  if (this != (UObject *)0x0) {
    UObject::UObject(this);
    *(undefined ***)this = &___7USignificanceManager__6B_;
    puVar1 = &this[7].field_0x18;
    *(undefined8 *)&this[1].field_0x8 = 0;
    *(undefined8 *)&this[1].field_0x10 = 0;
    *(undefined8 *)&this[1].field_0x18 = 0;
    *(undefined8 *)&this[1].field_0x20 = 0;
    *(undefined8 *)&this[2].field_0x10 = 0;
    *(undefined4 *)&this[2].field_0x18 = 0;
    *(undefined4 *)&this[2].field_0x1c = 0x80;
    *(undefined4 *)&this[2].field_0x20 = 0xffffffff;
    *(undefined4 *)&this[2].field_0x24 = 0;
    *(undefined8 *)&this[3].field_0x8 = 0;
    *(undefined4 *)&this[3].field_0x10 = 0;
    *(undefined8 *)&this[3].field_0x18 = 0;
    *(undefined8 *)&this[3].field_0x20 = 0;
    *(undefined8 *)&this[4].field_0x10 = 0;
    *(undefined4 *)&this[4].field_0x18 = 0;
    *(undefined4 *)&this[4].field_0x1c = 0x80;
    *(undefined4 *)&this[4].field_0x20 = 0xffffffff;
    *(undefined4 *)&this[4].field_0x24 = 0;
    *(undefined8 *)&this[5].field_0x8 = 0;
    *(undefined4 *)&this[5].field_0x10 = 0;
    pUVar2 = *(UObject **)&this->field_0x10;
    *(undefined8 *)&this[5].field_0x18 = 0;
    *(undefined8 *)&this[5].field_0x20 = 0;
    *(undefined8 *)(this + 6) = 0;
    *(undefined8 *)&this[6].field_0x8 = 0;
    *(undefined8 *)&this[6].field_0x10 = 0;
    *(undefined8 *)&this[6].field_0x18 = 0;
    *(undefined8 *)&this[6].field_0x20 = 0;
    *(undefined8 *)(this + 7) = 0;
    *(undefined8 *)&this[7].field_0x8 = 0;
    *(undefined8 *)&this[7].field_0x10 = 0;
    *(undefined8 *)puVar1 = 0;
    *(undefined8 *)&this[7].field_0x20 = 0;
    local_28.AssetPath.PackageName.ComparisonIndex.Value = 0;
    local_28.AssetPath.PackageName.Number = 0;
    local_28.AssetPath.AssetName.ComparisonIndex.Value = 0;
    local_28.AssetPath.AssetName.Number = 0;
    local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_28.SubPathString.Data.ArrayNum = 0;
    local_28.SubPathString.Data.ArrayMax = 0;
    FSoftObjectPath::SetPath(&local_28,pUVar2);
    *(uint *)&this[7].field_0x8 = local_28.AssetPath.PackageName.ComparisonIndex.Value;
    *(uint *)&this[7].field_0xc = local_28.AssetPath.PackageName.Number;
    *(uint *)&this[7].field_0x10 = local_28.AssetPath.AssetName.ComparisonIndex.Value;
    *(uint *)&this[7].field_0x14 = local_28.AssetPath.AssetName.Number;
    if ((FUtf8String *)puVar1 != &local_28.SubPathString) {
      if (*(void **)puVar1 != (void *)0x0) {
        FMemory::Free(*(void **)puVar1);
      }
      *(FScriptContainerElement **)puVar1 = local_28.SubPathString.Data.AllocatorInstance.Data;
      *(int *)&this[7].field_0x20 = local_28.SubPathString.Data.ArrayNum;
      *(int *)&this[7].field_0x24 = local_28.SubPathString.Data.ArrayMax;
      local_28.SubPathString.Data.ArrayNum = 0;
      local_28.SubPathString.Data.ArrayMax = 0;
      local_28.SubPathString.Data.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    }
    if (local_28.SubPathString.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_28.SubPathString.Data.AllocatorInstance.Data);
    }
    *(uint *)(this + 1) = *(uint *)(this + 1) & 0xfffffffb | 3;
  }
  return;
}

// InternalVTableHelperCtorCaller<USignificanceManager> @ 14e2a03b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl InternalVTableHelperCtorCaller<USignificanceManager>(FVTableHelper *param_1)

{
  UObject *pUVar1;
  UClass *pUVar2;
  
  pUVar1 = GetTransientPackageAsObject();
  pUVar2 = USignificanceManager::GetPrivateStaticClass();
  pUVar1 = StaticAllocateObject
                     (pUVar2,pUVar1,(FName)0x0,RF_NeedLoad|RF_TagGarbageTemp|RF_ClassDefaultObject,
                      Borrowed,false,(bool *)0x0,(UPackage *)0x0,0,(FRemoteObjectId)0x0,
                      (FGCReconstructionGuard *)0x0);
  if (pUVar1 != (UObject *)0x0) {
    UObject::UObject(pUVar1,param_1);
    *(undefined ***)pUVar1 = &___7USignificanceManager__6B_;
    *(undefined8 *)&pUVar1[1].field_0x8 = 0;
    *(undefined8 *)&pUVar1[1].field_0x10 = 0;
    *(undefined8 *)&pUVar1[1].field_0x18 = 0;
    *(undefined8 *)&pUVar1[1].field_0x20 = 0;
    *(undefined8 *)&pUVar1[2].field_0x10 = 0;
    *(undefined4 *)&pUVar1[2].field_0x18 = 0;
    *(undefined4 *)&pUVar1[2].field_0x1c = 0x80;
    *(undefined4 *)&pUVar1[2].field_0x20 = 0xffffffff;
    *(undefined4 *)&pUVar1[2].field_0x24 = 0;
    *(undefined8 *)&pUVar1[3].field_0x8 = 0;
    *(undefined4 *)&pUVar1[3].field_0x10 = 0;
    *(undefined8 *)&pUVar1[3].field_0x18 = 0;
    *(undefined8 *)&pUVar1[3].field_0x20 = 0;
    *(undefined8 *)&pUVar1[4].field_0x10 = 0;
    *(undefined4 *)&pUVar1[4].field_0x18 = 0;
    *(undefined4 *)&pUVar1[4].field_0x1c = 0x80;
    *(undefined4 *)&pUVar1[4].field_0x20 = 0xffffffff;
    *(undefined4 *)&pUVar1[4].field_0x24 = 0;
    *(undefined8 *)&pUVar1[5].field_0x8 = 0;
    *(undefined4 *)&pUVar1[5].field_0x10 = 0;
    *(undefined8 *)&pUVar1[5].field_0x18 = 0;
    *(undefined8 *)&pUVar1[5].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 6) = 0;
    *(undefined8 *)&pUVar1[6].field_0x8 = 0;
    *(undefined8 *)&pUVar1[6].field_0x10 = 0;
    *(undefined8 *)&pUVar1[6].field_0x18 = 0;
    *(undefined8 *)&pUVar1[6].field_0x20 = 0;
    *(undefined8 *)(pUVar1 + 7) = 0;
    *(undefined8 *)&pUVar1[7].field_0x8 = 0;
    *(undefined8 *)&pUVar1[7].field_0x10 = 0;
    *(undefined8 *)&pUVar1[7].field_0x18 = 0;
    *(undefined8 *)&pUVar1[7].field_0x20 = 0;
    return pUVar1;
  }
  return (UObject *)0x0;
}

// IntroSortInternal<USignificanceManager::FManagedObjectInfo_*,int,FIdentityFunctor,TDereferenceWrapper<USignificanceManager::FManagedObjectInfo_*,bool___cdecl(USignificanceManager::FManagedObjectInfo_const_&,USignificanceManager::FManagedObjectInfo_const_&)>_> @ 14e2a0530

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
AlgoImpl::
IntroSortInternal<USignificanceManager::FManagedObjectInfo_*,int,FIdentityFunctor,TDereferenceWrapper<USignificanceManager::FManagedObjectInfo_*,bool___cdecl(USignificanceManager::FManagedObjectInfo_const_&,USignificanceManager::FManagedObjectInfo_const_&)>_>
          (FManagedObjectInfo **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<USignificanceManager::FManagedObjectInfo_*,bool___cdecl(USignificanceManager::FManagedObjectInfo_const_&,USignificanceManager::FManagedObjectInfo_const_&)>
          param_4)

{
  FManagedObjectInfo *pFVar1;
  bool bVar2;
  int iVar3;
  FManagedObjectInfo **ppFVar4;
  FManagedObjectInfo **ppFVar5;
  FManagedObjectInfo ***pppFVar6;
  int iVar7;
  FManagedObjectInfo **ppFVar8;
  FManagedObjectInfo **ppFVar9;
  FManagedObjectInfo **ppFVar10;
  float fVar11;
  undefined1 auStack_388 [48];
  FManagedObjectInfo **local_358;
  FManagedObjectInfo **local_348;
  FManagedObjectInfo **local_340;
  undefined4 local_338;
  undefined1 local_330 [744];
  ulonglong local_48;
  
  if (1 < param_2) {
    local_48 = __security_cookie.value ^ (ulonglong)auStack_388;
    local_340 = param_1 + (longlong)param_2 + -1;
    local_348 = param_1;
    fVar11 = logf((float)param_2 * (float)param_2);
    local_338 = (undefined4)(longlong)fVar11;
    memset(local_330,0,0x2e8);
    pppFVar6 = &local_348;
    do {
      ppFVar4 = pppFVar6[1];
      ppFVar5 = *pppFVar6;
      local_358 = pppFVar6[2];
      iVar3 = (int)((longlong)ppFVar4 - (longlong)ppFVar5 >> 3) + 1;
      ppFVar10 = ppFVar5;
      iVar7 = (int)local_358;
      if ((int)local_358 != 0) {
LAB_14e2a05f0:
        if (8 < iVar3) {
          if (iVar3 < 0) {
            iVar3 = iVar3 + 1;
          }
          ppFVar8 = ppFVar4 + 1;
          pFVar1 = ppFVar10[iVar3 >> 1];
          ppFVar10[iVar3 >> 1] = *ppFVar10;
          *ppFVar10 = pFVar1;
          ppFVar5 = ppFVar10;
LAB_14e2a0620:
          ppFVar5 = ppFVar5 + 1;
          if (ppFVar5 <= ppFVar4) goto code_r0x00014e2a0629;
          goto LAB_14e2a0635;
        }
        for (; ppFVar8 = ppFVar10, ppFVar5 = ppFVar10, ppFVar10 < ppFVar4; ppFVar4 = ppFVar4 + -1) {
          while (ppFVar9 = ppFVar8, ppFVar5 = ppFVar5 + 1, ppFVar5 <= ppFVar4) {
            bVar2 = (*param_4.Predicate)(*ppFVar9,*ppFVar5);
            ppFVar8 = ppFVar5;
            if (!bVar2) {
              ppFVar8 = ppFVar9;
            }
          }
          pFVar1 = *ppFVar9;
          *ppFVar9 = *ppFVar4;
          *ppFVar4 = pFVar1;
        }
        goto LAB_14e2a06f9;
      }
LAB_14e2a06e8:
      HeapSortInternal<USignificanceManager::FManagedObjectInfo_*,int,FIdentityFunctor,TDereferenceWrapper<USignificanceManager::FManagedObjectInfo_*,bool___cdecl(USignificanceManager::FManagedObjectInfo_const_&,USignificanceManager::FManagedObjectInfo_const_&)>_>
                (ppFVar5,iVar3,param_3,param_4);
LAB_14e2a06f9:
      pppFVar6 = pppFVar6 + -3;
    } while (&local_348 <= pppFVar6);
  }
  return;
code_r0x00014e2a0629:
  bVar2 = (*param_4.Predicate)(*ppFVar10,*ppFVar5);
  if (!bVar2) goto LAB_14e2a0620;
LAB_14e2a0635:
  do {
    ppFVar9 = ppFVar8;
    ppFVar8 = ppFVar9 + -1;
    if (ppFVar8 <= ppFVar10) break;
    bVar2 = (*param_4.Predicate)(*ppFVar8,*ppFVar10);
  } while (!bVar2);
  if (ppFVar5 <= ppFVar8) {
    pFVar1 = *ppFVar5;
    *ppFVar5 = *ppFVar8;
    *ppFVar8 = pFVar1;
    goto LAB_14e2a0620;
  }
  pFVar1 = *ppFVar10;
  iVar7 = iVar7 + -1;
  *ppFVar10 = *ppFVar8;
  *ppFVar8 = pFVar1;
  if ((longlong)((longlong)ppFVar8 + (-8 - (longlong)ppFVar10) & 0xfffffffffffffff8U) <
      (longlong)((longlong)ppFVar4 - (longlong)ppFVar5 & 0xfffffffffffffff8U)) {
    if (ppFVar5 < ppFVar4) {
      *pppFVar6 = ppFVar5;
      pppFVar6[1] = ppFVar4;
      *(int *)(pppFVar6 + 2) = iVar7;
      pppFVar6 = pppFVar6 + 3;
    }
    if (ppFVar8 <= ppFVar10 + 1) goto LAB_14e2a06f9;
    ppFVar4 = ppFVar9 + -2;
    ppFVar5 = ppFVar10;
  }
  else {
    if (ppFVar10 + 1 < ppFVar8) {
      *pppFVar6 = ppFVar10;
      pppFVar6[1] = ppFVar9 + -2;
      *(int *)(pppFVar6 + 2) = iVar7;
      pppFVar6 = pppFVar6 + 3;
    }
    if (ppFVar4 <= ppFVar5) goto LAB_14e2a06f9;
  }
  iVar3 = (int)((longlong)ppFVar4 - (longlong)ppFVar5 >> 3) + 1;
  ppFVar10 = ppFVar5;
  if (iVar7 == 0) goto LAB_14e2a06e8;
  goto LAB_14e2a05f0;
}

// LowerBoundInternal<USignificanceManager::FManagedObjectInfo_*,int,USignificanceManager::FManagedObjectInfo_*,FIdentityFunctor,TDereferenceWrapper<USignificanceManager::FManagedObjectInfo_*,bool___cdecl(USignificanceManager::FManagedObjectInfo_const_&,USignificanceManager::FManagedObjectInfo_const_&)>_> @ 14e2a07b0

int __cdecl
AlgoImpl::
LowerBoundInternal<USignificanceManager::FManagedObjectInfo_*,int,USignificanceManager::FManagedObjectInfo_*,FIdentityFunctor,TDereferenceWrapper<USignificanceManager::FManagedObjectInfo_*,bool___cdecl(USignificanceManager::FManagedObjectInfo_const_&,USignificanceManager::FManagedObjectInfo_const_&)>_>
          (FManagedObjectInfo **param_1,int param_2,FManagedObjectInfo **param_3,
          FIdentityFunctor param_4,
          TDereferenceWrapper<USignificanceManager::FManagedObjectInfo_*,bool___cdecl(USignificanceManager::FManagedObjectInfo_const_&,USignificanceManager::FManagedObjectInfo_const_&)>
          param_5)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar4;
      bVar3 = (*param_5.Predicate)(param_1[iVar1],*param_3);
      if (bVar3) {
        iVar4 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar4;
}

// Merge<USignificanceManager::FManagedObjectInfo_*,FIdentityFunctor,TDereferenceWrapper<USignificanceManager::FManagedObjectInfo_*,bool___cdecl(USignificanceManager::FManagedObjectInfo_const_&,USignificanceManager::FManagedObjectInfo_const_&)>_> @ 14e2a0830

void __cdecl
AlgoImpl::
Merge<USignificanceManager::FManagedObjectInfo_*,FIdentityFunctor,TDereferenceWrapper<USignificanceManager::FManagedObjectInfo_*,bool___cdecl(USignificanceManager::FManagedObjectInfo_const_&,USignificanceManager::FManagedObjectInfo_const_&)>_>
          (FManagedObjectInfo **param_1,int param_2,int param_3,FIdentityFunctor param_4,
          TDereferenceWrapper<USignificanceManager::FManagedObjectInfo_*,bool___cdecl(USignificanceManager::FManagedObjectInfo_const_&,USignificanceManager::FManagedObjectInfo_const_&)>
          param_5)

{
  FManagedObjectInfo **ppFVar1;
  FManagedObjectInfo *pFVar2;
  bool bVar3;
  int iVar4;
  FManagedObjectInfo **ppFVar5;
  FManagedObjectInfo **ppFVar7;
  int iVar8;
  int iVar9;
  FManagedObjectInfo **ppFVar10;
  FManagedObjectInfo **ppFVar11;
  uint uVar12;
  uint uVar13;
  int local_58;
  FManagedObjectInfo **ppFVar6;
  
  if (0 < param_2) {
    local_58 = 0;
    do {
      if (param_3 <= param_2) {
        return;
      }
      iVar4 = 0;
      if (0 < param_2 - local_58) {
        uVar12 = param_2 - local_58;
        do {
          iVar9 = (uVar12 >> 1) + iVar4;
          bVar3 = (*param_5.Predicate)
                            (param_1[param_2],param_1[(longlong)iVar9 + (longlong)local_58]);
          if (!bVar3) {
            iVar4 = iVar9 + (uVar12 & 1);
          }
          uVar13 = uVar12 >> 1;
          uVar12 = uVar12 >> 1;
        } while (uVar13 != 0);
      }
      local_58 = local_58 + iVar4;
      if (param_2 <= local_58) {
        return;
      }
      uVar12 = param_3 - param_2;
      iVar4 = 0;
      iVar9 = 0;
      ppFVar1 = param_1 + local_58;
      if (0 < (int)uVar12) {
        do {
          uVar13 = uVar12 >> 1;
          bVar3 = (*param_5.Predicate)
                            (param_1[(longlong)(int)(uVar13 + iVar4) + (longlong)param_2],*ppFVar1);
          iVar9 = iVar4;
          if (bVar3) {
            iVar9 = uVar13 + iVar4 + (uVar12 & 1);
          }
          uVar12 = uVar13;
          iVar4 = iVar9;
        } while (uVar13 != 0);
      }
      iVar8 = (iVar9 - local_58) + param_2;
      iVar4 = param_2 - local_58;
      if ((iVar4 != 0) && (iVar4 < iVar8)) {
        ppFVar5 = ppFVar1 + iVar4;
        ppFVar10 = ppFVar1;
        ppFVar6 = ppFVar1 + iVar4;
        do {
          while( true ) {
            ppFVar7 = ppFVar5 + 1;
            ppFVar11 = ppFVar10 + 1;
            pFVar2 = *ppFVar10;
            *ppFVar10 = *ppFVar5;
            *ppFVar5 = pFVar2;
            ppFVar10 = ppFVar11;
            if (ppFVar7 == ppFVar1 + iVar8) break;
            ppFVar5 = ppFVar7;
            if (ppFVar11 == ppFVar6) {
              ppFVar6 = ppFVar7;
            }
          }
          ppFVar5 = ppFVar6;
        } while (ppFVar11 != ppFVar6);
      }
      local_58 = local_58 + 1 + iVar9;
      param_2 = param_2 + iVar9;
    } while (local_58 < param_2);
  }
  return;
}

// NewObject<USignificanceManager> @ 14e2a0a20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

USignificanceManager * __cdecl
NewObject<USignificanceManager>
          (UObject *param_1,UClass *param_2,FName param_3,EObjectFlags param_4,UObject *param_5,
          bool param_6,FObjectInstancingGraph *param_7,UPackage *param_8)

{
  UClass *pUVar1;
  USignificanceManager *pUVar2;
  longlong *plVar3;
  undefined1 auStack_e8 [32];
  undefined1 local_c8 [128];
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStack_e8;
  if (param_3 == (FName)0x0) {
    FObjectInitializer::AssertIfInConstructor
              (param_1,
               L"NewObject with empty name can\'t be used to create default subobjects (inside of UObject derived class constructor) as it produces inconsistent object names. Use ObjectInitializer.CreateDefaultSubobject<> instead."
              );
  }
  pUVar1 = USignificanceManager::StaticClass();
  CheckIsClassChildOf_Internal(pUVar1,param_2);
  FStaticConstructObjectParameters::FStaticConstructObjectParameters
            ((FStaticConstructObjectParameters *)local_c8,param_2);
  local_c8[0x20] = param_6;
  local_c8._40_8_ = param_5;
  local_c8._48_8_ = param_7;
  local_c8._56_8_ = param_8;
  local_c8._8_8_ = param_1;
  local_c8._16_8_ = param_3;
  local_c8._24_4_ = param_4;
  pUVar2 = (USignificanceManager *)
           StaticConstructObject_Internal((FStaticConstructObjectParameters *)local_c8);
  if (local_c8._64_8_ != 0) {
    plVar3 = (longlong *)(local_c8 + 0x50);
    if ((longlong *)local_c8._104_8_ != (longlong *)0x0) {
      plVar3 = (longlong *)local_c8._104_8_;
    }
    (**(code **)(*plVar3 + 0x10))();
  }
  return pUVar2;
}

// RotateInternal<USignificanceManager::FManagedObjectInfo_*> @ 14e2a0e40

int __cdecl
AlgoImpl::RotateInternal<USignificanceManager::FManagedObjectInfo_*>
          (FManagedObjectInfo **param_1,int param_2,int param_3)

{
  FManagedObjectInfo *pFVar1;
  FManagedObjectInfo **ppFVar2;
  FManagedObjectInfo **ppFVar4;
  FManagedObjectInfo **ppFVar5;
  FManagedObjectInfo **ppFVar6;
  FManagedObjectInfo **ppFVar3;
  
  if (param_3 != 0) {
    if (param_2 <= param_3) {
      return 0;
    }
    ppFVar2 = param_1 + param_3;
    ppFVar5 = param_1;
    ppFVar3 = param_1 + param_3;
    do {
      while( true ) {
        ppFVar4 = ppFVar2 + 1;
        ppFVar6 = ppFVar5 + 1;
        pFVar1 = *ppFVar5;
        *ppFVar5 = *ppFVar2;
        *ppFVar2 = pFVar1;
        ppFVar5 = ppFVar6;
        if (ppFVar4 == param_1 + param_2) break;
        ppFVar2 = ppFVar4;
        if (ppFVar6 == ppFVar3) {
          ppFVar3 = ppFVar4;
        }
      }
      ppFVar2 = ppFVar3;
    } while (ppFVar6 != ppFVar3);
    param_2 = param_2 - param_3;
  }
  return param_2;
}

// StableSortInternal<USignificanceManager::FManagedObjectInfo_*,FIdentityFunctor,TDereferenceWrapper<USignificanceManager::FManagedObjectInfo_*,bool___cdecl(USignificanceManager::FManagedObjectInfo_const_&,USignificanceManager::FManagedObjectInfo_const_&)>_> @ 14e2a0ec0

void __cdecl
AlgoImpl::
StableSortInternal<USignificanceManager::FManagedObjectInfo_*,FIdentityFunctor,TDereferenceWrapper<USignificanceManager::FManagedObjectInfo_*,bool___cdecl(USignificanceManager::FManagedObjectInfo_const_&,USignificanceManager::FManagedObjectInfo_const_&)>_>
          (FManagedObjectInfo **param_1,int param_2,FIdentityFunctor param_3,
          TDereferenceWrapper<USignificanceManager::FManagedObjectInfo_*,bool___cdecl(USignificanceManager::FManagedObjectInfo_const_&,USignificanceManager::FManagedObjectInfo_const_&)>
          param_4)

{
  FManagedObjectInfo **ppFVar1;
  FManagedObjectInfo *pFVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  FManagedObjectInfo **ppFVar8;
  FManagedObjectInfo **ppFVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  longlong lVar15;
  FManagedObjectInfo **ppFVar16;
  uint uVar17;
  FManagedObjectInfo **ppFVar18;
  FManagedObjectInfo **ppFVar19;
  uint uVar20;
  uint uVar21;
  int local_88;
  uint local_7c;
  uint local_78;
  longlong local_58;
  FManagedObjectInfo **ppFVar9;
  
  uVar6 = (ulonglong)param_2;
  uVar7 = uVar6;
  if (0 < param_2) {
    lVar15 = 0;
    iVar14 = 1;
    do {
      if (iVar14 < (int)uVar7) {
        bVar4 = (*param_4.Predicate)(param_1[lVar15 + 1],param_1[lVar15]);
        if (bVar4) {
          pFVar2 = param_1[lVar15];
          param_1[lVar15] = param_1[lVar15 + 1];
          param_1[lVar15 + 1] = pFVar2;
        }
        uVar7 = (ulonglong)(uint)param_2;
      }
      iVar14 = iVar14 + 2;
      lVar15 = lVar15 + 2;
    } while (lVar15 < (longlong)uVar6);
  }
  local_78 = 2;
  if (2 < (int)uVar7) {
    do {
      uVar3 = local_78 * 2;
      local_58 = 0;
      local_7c = (uint)uVar7;
      ppFVar16 = param_1;
      do {
        uVar5 = (uint)uVar7;
        uVar11 = uVar5;
        if ((int)uVar3 <= (int)uVar5) {
          uVar11 = uVar3;
        }
        local_88 = 0;
        uVar17 = local_78;
        if (0 < (int)local_78) {
          do {
            uVar5 = local_7c;
            if ((int)uVar11 <= (int)uVar17) break;
            iVar14 = 0;
            if (0 < (int)(uVar17 - local_88)) {
              uVar20 = uVar17 - local_88;
              do {
                iVar13 = (uVar20 >> 1) + iVar14;
                bVar4 = (*param_4.Predicate)
                                  (ppFVar16[(int)uVar17],
                                   ppFVar16[(longlong)iVar13 + (longlong)local_88]);
                if (!bVar4) {
                  iVar14 = (uVar20 & 1) + iVar13;
                }
                uVar21 = uVar20 >> 1;
                uVar20 = uVar20 >> 1;
              } while (uVar21 != 0);
            }
            local_88 = local_88 + iVar14;
            if ((int)uVar17 <= local_88) break;
            uVar20 = uVar11 - uVar17;
            iVar14 = 0;
            iVar13 = 0;
            ppFVar1 = ppFVar16 + local_88;
            if (0 < (int)uVar20) {
              do {
                uVar21 = uVar20 >> 1;
                bVar4 = (*param_4.Predicate)
                                  (ppFVar16[(longlong)(int)(uVar21 + iVar14) + (longlong)(int)uVar17
                                           ],*ppFVar1);
                iVar13 = iVar14;
                if (bVar4) {
                  iVar13 = (uVar20 & 1) + uVar21 + iVar14;
                }
                uVar20 = uVar21;
                iVar14 = iVar13;
              } while (uVar21 != 0);
            }
            iVar12 = (iVar13 - local_88) + uVar17;
            iVar14 = uVar17 - local_88;
            if ((iVar14 != 0) && (iVar14 < iVar12)) {
              ppFVar8 = ppFVar1 + iVar14;
              ppFVar18 = ppFVar1;
              ppFVar9 = ppFVar1 + iVar14;
              do {
                while( true ) {
                  ppFVar10 = ppFVar8 + 1;
                  ppFVar19 = ppFVar18 + 1;
                  pFVar2 = *ppFVar18;
                  *ppFVar18 = *ppFVar8;
                  *ppFVar8 = pFVar2;
                  ppFVar18 = ppFVar19;
                  if (ppFVar10 == ppFVar1 + iVar12) break;
                  ppFVar8 = ppFVar10;
                  if (ppFVar19 == ppFVar9) {
                    ppFVar9 = ppFVar10;
                  }
                }
                ppFVar8 = ppFVar9;
              } while (ppFVar19 != ppFVar9);
            }
            local_88 = local_88 + 1 + iVar13;
            uVar17 = uVar17 + iVar13;
          } while (local_88 < (int)uVar17);
        }
        local_7c = uVar5 + local_78 * -2;
        uVar7 = (ulonglong)local_7c;
        local_58 = local_58 + (longlong)(int)local_78 * 2;
        ppFVar16 = ppFVar16 + (longlong)(int)local_78 * 2;
      } while (local_58 < (longlong)uVar6);
      uVar7 = (ulonglong)(uint)param_2;
      local_78 = uVar3;
    } while ((int)uVar3 < param_2);
  }
  return;
}

// UpperBoundInternal<USignificanceManager::FManagedObjectInfo_*,int,USignificanceManager::FManagedObjectInfo_*,FIdentityFunctor,TDereferenceWrapper<USignificanceManager::FManagedObjectInfo_*,bool___cdecl(USignificanceManager::FManagedObjectInfo_const_&,USignificanceManager::FManagedObjectInfo_const_&)>_> @ 14e2a1190

int __cdecl
AlgoImpl::
UpperBoundInternal<USignificanceManager::FManagedObjectInfo_*,int,USignificanceManager::FManagedObjectInfo_*,FIdentityFunctor,TDereferenceWrapper<USignificanceManager::FManagedObjectInfo_*,bool___cdecl(USignificanceManager::FManagedObjectInfo_const_&,USignificanceManager::FManagedObjectInfo_const_&)>_>
          (FManagedObjectInfo **param_1,int param_2,FManagedObjectInfo **param_3,
          FIdentityFunctor param_4,
          TDereferenceWrapper<USignificanceManager::FManagedObjectInfo_*,bool___cdecl(USignificanceManager::FManagedObjectInfo_const_&,USignificanceManager::FManagedObjectInfo_const_&)>
          param_5)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  
  iVar4 = 0;
  if (0 < param_2) {
    do {
      iVar1 = ((uint)param_2 >> 1) + iVar4;
      bVar3 = (*param_5.Predicate)(*param_3,param_1[iVar1]);
      if (!bVar3) {
        iVar4 = iVar1 + (param_2 & 1U);
      }
      uVar2 = (uint)param_2 >> 1;
      param_2 = (uint)param_2 >> 1;
    } while (uVar2 != 0);
  }
  return iVar4;
}

// `scalar_deleting_destructor' @ 14e2a1880

void * __thiscall
TBaseStaticDelegateInstance<void___cdecl(TArray<FAutoCompleteCommand,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
::_scalar_deleting_destructor_
          (TBaseStaticDelegateInstance<void___cdecl(TArray<FAutoCompleteCommand,TSizedDefaultAllocator<32>_>_&),FDefaultDelegateUserPolicy>
           *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2a18b0

void * __thiscall
USignificanceManager::FManagedObjectInfo::_scalar_deleting_destructor_
          (FManagedObjectInfo *this,uint param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  
  if (*(longlong *)&this->PostSignificanceFunction != 0) {
    plVar1 = *(longlong **)&(this->PostSignificanceFunction).field_0x28;
    plVar2 = (longlong *)&(this->PostSignificanceFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if (*(longlong *)&this->SignificanceFunction != 0) {
    plVar1 = *(longlong **)&(this->SignificanceFunction).field_0x28;
    plVar2 = (longlong *)&(this->SignificanceFunction).field_0x10;
    if (plVar1 != (longlong *)0x0) {
      plVar2 = plVar1;
    }
    (**(code **)(*plVar2 + 0x10))();
  }
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x80);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2a1920

void * __thiscall
USignificanceManager::FManagedObjectInfoFixLayout::_scalar_deleting_destructor_
          (FManagedObjectInfoFixLayout *this,uint param_1)

{
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// `scalar_deleting_destructor' @ 14e2a1950

void * __thiscall
USignificanceManager::_scalar_deleting_destructor_(USignificanceManager *this,uint param_1)

{
  void *pvVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7USignificanceManager__6B_;
  pvVar1 = *(void **)&(this->SignificanceManagerClassName).field_0x10;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  pFVar2 = (this->ObjWithSequentialPostWorkCopy).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ObjWithSequentialPostWork).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ObjArrayCopy).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  pFVar2 = (this->ObjArray).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  *(undefined4 *)&(this->ManagedObjects).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ManagedObjects).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<TObjectPtr<UObject>,USignificanceManager::FManagedObjectInfo_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ManagedObjects);
  *(undefined4 *)&(this->ManagedObjectsByTag).field_0x48 = 0;
  pvVar1 = *(void **)&(this->ManagedObjectsByTag).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,TArray<USignificanceManager::FManagedObjectInfo_*,TSizedDefaultAllocator<32>_>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->ManagedObjectsByTag);
  pFVar2 = (this->Viewpoints).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  UObject::~UObject((UObject *)this);
  if ((param_1 & 1) != 0) {
    if ((param_1 & 4) == 0) {
      ::operator_delete(this);
      return this;
    }
    __empty_global_delete(this,0x140);
  }
  return this;
}

// CompareBySignificanceAscending @ 14e2a1e20

bool __cdecl CompareBySignificanceAscending(FManagedObjectInfo *param_1,FManagedObjectInfo *param_2)

{
  return param_1->Significance < param_2->Significance;
}

// CompareBySignificanceDescending @ 14e2a1e40

bool __cdecl
CompareBySignificanceDescending(FManagedObjectInfo *param_1,FManagedObjectInfo *param_2)

{
  return param_2->Significance < param_1->Significance;
}

// EmptyLinkFunctionForGeneratedCodeSignificanceManager @ 14e2a20c0

void __cdecl EmptyLinkFunctionForGeneratedCodeSignificanceManager(void)

{
  return;
}

// EmptyLinkFunctionForGeneratedCodeSignificanceManager_init @ 14e2a20d0

void __cdecl EmptyLinkFunctionForGeneratedCodeSignificanceManager_init(void)

{
  return;
}

// PickCompareBySignificance @ 14e2a3900

_func___cdecl_bool_FManagedObjectInfo_ptr_FManagedObjectInfo_ptr * __cdecl
PickCompareBySignificance(bool param_1)

{
  code *pcVar1;
  
  pcVar1 = CompareBySignificanceDescending;
  if (param_1) {
    pcVar1 = CompareBySignificanceAscending;
  }
  return pcVar1;
}

// Z_Construct_UClass_USignificanceManager_NoRegister @ 14e2a6e60

UClass * __cdecl Z_Construct_UClass_USignificanceManager_NoRegister(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_USignificanceManager.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = USignificanceManager::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/SignificanceManager",L"SignificanceManager",
               &Z_Registration_Info_UClass_USignificanceManager.InnerSingleton,
               USignificanceManager::StaticRegisterNativesUSignificanceManager,0x140,8,
               CLASS_Intrinsic|CLASS_Config|CLASS_DefaultConfig,CASTCLASS_None,L"Engine",
               InternalConstructor<USignificanceManager>,
               InternalVTableHelperCtorCaller<USignificanceManager>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_USignificanceManager.InnerSingleton;
}

// IMPLEMENT_MODULE_SignificanceManager @ 14e2a6f10

void __cdecl IMPLEMENT_MODULE_SignificanceManager(void)

{
  return;
}

// WorldSignificanceManagers'' @ 150463c70

void __cdecl
`dynamic_atexit_destructor_for_'FSignificanceManagerModule::WorldSignificanceManagers__(void)

{
  FSignificanceManagerModule::WorldSignificanceManagers._72_4_ = 0;
  if (FSignificanceManagerModule::WorldSignificanceManagers._64_8_ != 0) {
    FMemory::Free((void *)FSignificanceManagerModule::WorldSignificanceManagers._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UWorld_const_*,TObjectPtr<USignificanceManager>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UWorld_const_*,TObjectPtr<USignificanceManager>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UWorld_const_*,TObjectPtr<USignificanceManager>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&FSignificanceManagerModule::WorldSignificanceManagers);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSignificanceManagerFilterTag'' @ 150463cb0

void __cdecl _dynamic_atexit_destructor_for__CVarSignificanceManagerFilterTag__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarSignificanceManagerFilterTag);
  return;
}

// `dynamic_atexit_destructor_for_'CVarSignificanceManagerObjectsToShow'' @ 150463cd0

void __cdecl _dynamic_atexit_destructor_for__CVarSignificanceManagerObjectsToShow__(void)

{
  CVarSignificanceManagerObjectsToShow._0_8_ = &___7FAutoConsoleVariableRef__6B_;
  FAutoConsoleObject::~FAutoConsoleObject
            ((FAutoConsoleObject *)&CVarSignificanceManagerObjectsToShow);
  return;
}

// `dynamic_atexit_destructor_for_'EmptySet'' @ 150463cf0

void __cdecl
`USignificanceManager::GetManagedObjects'::__l2::_dynamic_atexit_destructor_for__EmptySet__(void)

{
  ForAnyElementType FVar1;
  FLowLevelMemTracker *this;
  
  FVar1.Data = EmptySet.AllocatorInstance.Data;
  if (EmptySet.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
    return;
  }
  if (EmptySet.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
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

// `dynamic_atexit_destructor_for_'LogSignificance'' @ 150463d10

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogSignificance__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogSignificance);
  return;
}

