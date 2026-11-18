// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: CoreUObject
// Functions: 126

// AttributeHandlers'' @ 140f30230

void __cdecl `dynamic_initializer_for_'Verse::ICustomAttributeHandler::AttributeHandlers__(void)

{
  atexit(`dynamic_atexit_destructor_for_'Verse::ICustomAttributeHandler::AttributeHandlers__);
  return;
}

// EmptyBucket'' @ 140f30250

void __cdecl `dynamic_initializer_for_'FArrayHashBucket::EmptyBucket__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FArrayHashBucket::EmptyBucket__);
  return;
}

// EmptyBucket'' @ 140f30270

void __cdecl `dynamic_initializer_for_'FSetHashBucket::EmptyBucket__(void)

{
  atexit(`dynamic_atexit_destructor_for_'FSetHashBucket::EmptyBucket__);
  return;
}

// `dynamic_initializer_for_'CVarBreakOnVerseRuntimeError'' @ 140f30290

void __cdecl Verse::_dynamic_initializer_for__CVarBreakOnVerseRuntimeError__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarBreakOnVerseRuntimeError,L"verse.Diagnostics.BreakOnVerseRuntimeError",local_res8,
             L"If set to `true`, will break into the debugger on encountering a Verse runtime error."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarBreakOnVerseRuntimeError__);
  return;
}

// `dynamic_initializer_for_'CVarEditInlineSubobjectProperties'' @ 140f302e0

void __cdecl Verse::_dynamic_initializer_for__CVarEditInlineSubobjectProperties__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarEditInlineSubobjectProperties,L"verse.EditInlineSubobjectProperties",local_res8,
             L"If true, ObjectProperties of Verse classes will all be tagged with EditInline.",0);
  atexit(_dynamic_atexit_destructor_for__CVarEditInlineSubobjectProperties__);
  return;
}

// `dynamic_initializer_for_'CVarEnableAssetClassRedirectors'' @ 140f30330

void __cdecl Verse::_dynamic_initializer_for__CVarEnableAssetClassRedirectors__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarEnableAssetClassRedirectors,L"verse.EnableAssetClassRedirectors",local_res8,
             L"If true, asset class aliases will be added to the list of redirectors for their package."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarEnableAssetClassRedirectors__);
  return;
}

// `dynamic_initializer_for_'CVarForceCompileFramework'' @ 140f30380

void __cdecl Verse::_dynamic_initializer_for__CVarForceCompileFramework__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = false;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarForceCompileFramework,L"verse.ForceCompileFramework",local_res8,
             L"When true, compile framework packages from source instead of loading cooked packages."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarForceCompileFramework__);
  return;
}

// `dynamic_initializer_for_'CVarUseDynamicSubobjectInstancing'' @ 140f303d0

void __cdecl Verse::_dynamic_initializer_for__CVarUseDynamicSubobjectInstancing__(void)

{
  bool local_res8 [32];
  
  local_res8[0] = true;
  TAutoConsoleVariable<bool>::TAutoConsoleVariable<bool>
            (&CVarUseDynamicSubobjectInstancing,L"verse.UseDynamicSubobjectInstancing",local_res8,
             L"If true, Verse classes compiled with dynamic reference support will use dynamic subobject instancing."
             ,0);
  atexit(_dynamic_atexit_destructor_for__CVarUseDynamicSubobjectInstancing__);
  return;
}

// `dynamic_initializer_for_'GUObjectArray'' @ 140f30420

void __cdecl _dynamic_initializer_for__GUObjectArray__(void)

{
  FUObjectArray::FUObjectArray(&GUObjectArray);
  atexit(_dynamic_atexit_destructor_for__GUObjectArray__);
  return;
}

// `dynamic_initializer_for_'LLMTagDeclaration_UObjectHash'' @ 140f30450

void __cdecl _dynamic_initializer_for__LLMTagDeclaration_UObjectHash__(void)

{
  FName *pFVar1;
  FName local_res20;
  
  pFVar1 = FName::FName(&local_res20,L"UObject hashtables");
  FLLMTagDeclaration::FLLMTagDeclaration
            (&LLMTagDeclaration_UObjectHash,L"UObjectHash",*pFVar1,(FName)0x0,(FName)0x0,(FName)0x0,
             None);
  return;
}

// `dynamic_initializer_for_'LinkerAnnotation'' @ 140f304c0

void __cdecl _dynamic_initializer_for__LinkerAnnotation__(void)

{
  atexit(_dynamic_atexit_destructor_for__LinkerAnnotation__);
  return;
}

// `dynamic_initializer_for_'LogContentScope'' @ 140f304e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogContentScope__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogContentScope,L"LogContentScope",Warning,All);
  atexit(_dynamic_atexit_destructor_for__LogContentScope__);
  return;
}

// `dynamic_initializer_for_'LogUObjectHash'' @ 140f30520

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogUObjectHash__(void)

{
  FLogCategoryBase::FLogCategoryBase((FLogCategoryBase *)&LogUObjectHash,L"LogUObjectHash",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogUObjectHash__);
  return;
}

// `dynamic_initializer_for_'LogUObjectLinker'' @ 140f30560

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogUObjectLinker__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogUObjectLinker,L"LogUObjectLinker",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogUObjectLinker__);
  return;
}

// `dynamic_initializer_for_'LogUObjectThreadContext'' @ 140f305a0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogUObjectThreadContext__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogUObjectThreadContext,L"LogUObjectThreadContext",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogUObjectThreadContext__);
  return;
}

// `dynamic_initializer_for_'LogWeakObjectPtr'' @ 140f305e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__LogWeakObjectPtr__(void)

{
  FLogCategoryBase::FLogCategoryBase
            ((FLogCategoryBase *)&LogWeakObjectPtr,L"LogWeakObjectPtr",Log,All);
  atexit(_dynamic_atexit_destructor_for__LogWeakObjectPtr__);
  return;
}

// `dynamic_initializer_for_'ShrinkUObjectHashTablesCmd'' @ 140f30620

void __cdecl _dynamic_initializer_for__ShrinkUObjectHashTablesCmd__(void)

{
  undefined8 *puVar1;
  ulong64 uVar2;
  undefined1 local_48 [8];
  FDelegateAllocation local_40;
  FDestructionSentinel local_30;
  FDelegateAllocation *local_18;
  
  local_48 = (undefined1  [8])0x0;
  local_40.DelegateAllocator = (ForElementType<TAlignedBytes<16,16>_>)0x0;
  local_40.DelegateSize = 0;
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  local_18 = &local_40;
  puVar1 = UE::Core::Private::DelegateAllocate(0x20,&local_40);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = &
              ___7__TCommonDelegateInstanceState___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    uVar2 = FDelegateHandle::GenerateNewID();
    puVar1[2] = uVar2;
    *puVar1 = &
              ___7__TBaseStaticDelegateInstance___A6AXAEBV__TArray_VFString__V__TSizedDefaultAllocator__0CA______ZUFDefaultDelegateUserPolicy____V__6B_
    ;
    puVar1[3] = ShrinkUObjectHashTablesDel;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  FAutoConsoleCommand::FAutoConsoleCommand
            (&ShrinkUObjectHashTablesCmd,L"ShrinkUObjectHashTables",
             L"Shrinks all of the UObject hash tables.",
             (TDelegate<void___cdecl(TArray<FString,TSizedDefaultAllocator<32>_>_const_&),FDefaultDelegateUserPolicy>
              *)local_48,0);
  TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode>::GetWriteAccessScope
            ((TDelegateAccessHandlerBase<FNotThreadSafeDelegateMode> *)local_48,
             (FWriteAccessScope *)&local_30);
  if ((local_40.DelegateSize != 0) &&
     (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0)) {
    (*(code *)**(undefined8 **)local_40.DelegateAllocator)();
    TSizedHeapAllocator<32,FMemory>::ForAnyElementType::ResizeAllocation
              ((ForAnyElementType *)&local_40,0,0,0x10);
    local_40.DelegateSize = 0;
  }
  if (local_30.bDestroyed == false) {
    FMRSWRecursiveAccessDetector::ReleaseWriteAccess(local_30.Accessor,&local_30);
  }
  if (local_40.DelegateAllocator != (ForElementType<TAlignedBytes<16,16>_>)0x0) {
    FMemory::Free((void *)local_40.DelegateAllocator);
  }
  FMRSWRecursiveAccessDetector::~FMRSWRecursiveAccessDetector
            ((FMRSWRecursiveAccessDetector *)local_48);
  atexit(_dynamic_atexit_destructor_for__ShrinkUObjectHashTablesCmd__);
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Hash_GetObjectsOfClass'' @ 140f30760

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Hash_GetObjectsOfClass__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Hash_GetObjectsOfClass ==
      (FThreadSafeStaticStat<FStat_STAT_Hash_GetObjectsOfClass>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Hash_GetObjectsOfClass");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Hash_GetObjectsOfClass,*pFVar1,
               L"GetObjectsOfClass","STATGROUP_UObjectHash","STATCAT_Advanced",L"UObject Hash",false
               ,true,ST_int64,true,false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Hash_HashObject'' @ 140f307f0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Hash_HashObject__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Hash_HashObject == (FThreadSafeStaticStat<FStat_STAT_Hash_HashObject>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Hash_HashObject");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Hash_HashObject,*pFVar1,L"HashObject",
               "STATGROUP_UObjectHash","STATCAT_Advanced",L"UObject Hash",false,true,ST_int64,true,
               false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Hash_NumObjects'' @ 140f30880

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Hash_NumObjects__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Hash_NumObjects == (FThreadSafeStaticStat<FStat_STAT_Hash_NumObjects>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Hash_NumObjects");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Hash_NumObjects,*pFVar1,L"NumObjects",
               "STATGROUP_UObjectHash","STATCAT_Advanced",L"UObject Hash",false,true,ST_int64,false,
               false,MCR_Invalid);
  }
  return;
}

// `dynamic_initializer_for_'StatPtr_STAT_Hash_UnhashObject'' @ 140f30910

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_initializer_for__StatPtr_STAT_Hash_UnhashObject__(void)

{
  FName *pFVar1;
  FName local_res8 [4];
  
  if (StatPtr_STAT_Hash_UnhashObject == (FThreadSafeStaticStat<FStat_STAT_Hash_UnhashObject>)0x0) {
    pFVar1 = FName::FName(local_res8,"STAT_Hash_UnhashObject");
    FThreadSafeStaticStatBase::DoSetup
              ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Hash_UnhashObject,*pFVar1,L"UnhashObject",
               "STATGROUP_UObjectHash","STATCAT_Advanced",L"UObject Hash",false,true,ST_int64,true,
               false,MCR_Invalid);
  }
  return;
}

// `scalar_deleting_destructor' @ 14228f800

void * __thiscall
FUObjectAnnotationChunked<FLinkerIndexPair,0,65536>::_scalar_deleting_destructor_
          (FUObjectAnnotationChunked<FLinkerIndexPair,0,65536> *this,uint param_1)

{
  ~FUObjectAnnotationChunked<FLinkerIndexPair,0,65536>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x30);
  }
  return this;
}

// RecursivelyPopulateDerivedClasses<UClass_*,TSizedDefaultAllocator<32>_> @ 142291a40

void __cdecl
RecursivelyPopulateDerivedClasses<UClass_*,TSizedDefaultAllocator<32>_>
          (FUObjectHashTables *param_1,UClass *param_2,
          TArray<UClass_*,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  longlong *plVar7;
  uint uVar8;
  undefined1 *puVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  longlong *plVar13;
  uint *puVar14;
  longlong *plVar15;
  uint uVar16;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  undefined8 local_e8;
  longlong local_e0;
  int local_d8;
  longlong *local_d0;
  uint uStack_c8;
  uint uStack_c4;
  TBitArray<FDefaultBitArrayAllocator> *local_c0;
  undefined4 uStack_b8;
  uint uStack_b4;
  uint local_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  longlong *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  local_res18 = param_3->ArrayNum + -1;
  lVar11 = (longlong)local_res18;
  local_e0 = lVar11;
LAB_142291a80:
  plVar13 = (longlong *)0x0;
  uVar8 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
          -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  if (*(int *)&(param_1->ClassToChildListMap).field_0x8 !=
      *(int *)&(param_1->ClassToChildListMap).field_0x34) {
    puVar3 = *(undefined1 **)&(param_1->ClassToChildListMap).field_0x40;
    puVar9 = &(param_1->ClassToChildListMap).field_0x38;
    if (puVar3 != (undefined1 *)0x0) {
      puVar9 = puVar3;
    }
    iVar10 = *(int *)(puVar9 + (ulonglong)
                               (*(int *)&(param_1->ClassToChildListMap).field_0x48 - 1U &
                               (uVar8 >> 0x10 ^ uVar8)) * 4);
    if (iVar10 != -1) {
      do {
        plVar7 = (longlong *)((longlong)iVar10 * 0x60 + *(longlong *)&param_1->ClassToChildListMap);
        if ((UClass *)*plVar7 == param_2) {
          plVar15 = plVar7 + 1;
          if (plVar7 == (longlong *)0x0) {
            plVar15 = plVar13;
          }
          if (plVar15 != (longlong *)0x0) {
            uVar8 = (param_3->ArrayNum - *(int *)((longlong)plVar15 + 0x34)) + (int)plVar15[1];
            if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
            }
            piVar1 = &param_3->ArrayMax;
            if (param_3->ArrayMax < (int)uVar8) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,uVar8,&param_3->AllocatorInstance,param_3->ArrayNum,piVar1);
            }
            uVar8 = *(uint *)(plVar15 + 5);
            uStack_c8 = 0;
            uStack_c4 = 1;
            uStack_b4 = uStack_c8;
            local_b0 = uStack_c8;
            if (uVar8 == 0) goto LAB_142291bf1;
            puVar14 = (uint *)(plVar15 + 2);
            if ((uint *)plVar15[4] != (uint *)0x0) {
              puVar14 = (uint *)plVar15[4];
            }
            uVar12 = *puVar14;
            plVar7 = plVar13;
            if (uVar12 != 0) goto LAB_142291bc8;
            goto LAB_142291bb0;
          }
          break;
        }
        iVar10 = (int)plVar7[0xb];
      } while (iVar10 != -1);
    }
  }
  goto LAB_142291e07;
  while (uVar12 = puVar14[(longlong)iVar10 + 1], uVar12 == 0) {
LAB_142291bb0:
    iVar10 = (int)plVar13;
    local_b0 = (int)plVar7 + 0x20;
    plVar7 = (longlong *)(ulonglong)local_b0;
    uStack_c8 = iVar10 + 1;
    plVar13 = (longlong *)(ulonglong)uStack_c8;
    uStack_b4 = uVar8;
    if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_c8)
    goto LAB_142291bf1;
  }
LAB_142291bc8:
  local_b0 = (uint)plVar7;
  uStack_c8 = (uint)plVar13;
  uStack_c4 = -uVar12 & uVar12;
  uVar2 = (ulonglong)uStack_c4 * 2 + 1;
  lVar11 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
    }
  }
  local_res20 = (int)lVar11;
  uStack_b4 = local_res20 + -1 + local_b0;
  if ((int)uVar8 < (int)uStack_b4) {
    uStack_b4 = uVar8;
  }
LAB_142291bf1:
  local_c0 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar15 + 2);
  uVar12 = *(uint *)(plVar15 + 5);
  uStack_ac = local_54;
  uVar16 = uVar12 & 0xffffffe0;
  iStack_a8 = (int)plVar15[1] - *(int *)((longlong)plVar15 + 0x34);
  TStack_98._padding_ = CONCAT44(uStack_c4,uStack_c8);
  uStack_b8 = 0xffffffff;
  TStack_98.CurrentBitIndex = uStack_b4;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar12 >> 5;
  TStack_98._28_4_ = local_54;
  TStack_98.BaseBitIndex = local_b0;
  uStack_78 = CONCAT44(uStack_a4,iStack_a8);
  local_d0 = plVar15;
  local_a0 = plVar15;
  TStack_98.Array = local_c0;
  if ((((int)uVar12 < 0) || ((int)uVar8 < (int)uVar12)) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = *(uint *)(plVar15 + 5);
  if (uVar12 != uVar8) {
    plVar13 = plVar15 + 2;
    if ((longlong *)plVar15[4] != (longlong *)0x0) {
      plVar13 = (longlong *)plVar15[4];
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)((longlong)plVar13 + (longlong)iVar10 * 4);
    while (uVar12 == 0) {
      lVar11 = (longlong)iVar10;
      uVar16 = uVar16 + 0x20;
      iVar10 = iVar10 + 1;
      uVar12 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_142291d00;
      uVar12 = *(uint *)((longlong)plVar13 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_d8 = (int)lVar11;
    uVar12 = local_d8 + -1 + uVar16;
    if ((int)uVar8 < (int)uVar12) {
      uVar12 = uVar8;
    }
  }
LAB_142291d00:
  while( true ) {
    plVar13 = local_a0;
    if ((int)local_a0[1] - *(int *)((longlong)local_a0 + 0x34) != (int)uStack_78) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<UClass_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_98.CurrentBitIndex == uVar12) &&
        (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)(plVar15 + 2))) &&
       (lVar11 = local_e0, plVar13 == plVar15)) break;
    local_e8 = *(undefined8 *)(*plVar13 + (longlong)TStack_98.CurrentBitIndex * 0x10);
    pFVar4 = (param_3->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_e8) &&
        ((FScriptContainerElement *)&local_e8 < pFVar4 + (longlong)*piVar1 * 8)) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar10 = param_3->ArrayNum;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&param_3->AllocatorInstance,piVar1);
    }
    param_3->ArrayNum = iVar10 + 1;
    *(undefined8 *)((param_3->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_e8;
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  }
LAB_142291e07:
  local_res18 = local_res18 + 1;
  lVar11 = lVar11 + 1;
  if (param_3->ArrayNum <= local_res18) {
    return;
  }
  local_e0 = lVar11;
  if ((local_res18 < 0) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  param_2 = *(UClass **)((param_3->AllocatorInstance).Data + lVar11 * 8);
  goto LAB_142291a80;
}

// RecursivelyPopulateDerivedClasses<UClass_const_*,TSizedDefaultAllocator<32>_> @ 142291ea0

void __cdecl
RecursivelyPopulateDerivedClasses<UClass_const_*,TSizedDefaultAllocator<32>_>
          (FUObjectHashTables *param_1,UClass *param_2,
          TArray<UClass_const_*,TSizedDefaultAllocator<32>_> *param_3)

{
  int *piVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  longlong *plVar7;
  uint uVar8;
  undefined1 *puVar9;
  int iVar10;
  longlong lVar11;
  uint uVar12;
  longlong *plVar13;
  uint *puVar14;
  longlong *plVar15;
  uint uVar16;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  undefined8 local_e8;
  longlong local_e0;
  int local_d8;
  longlong *local_d0;
  uint uStack_c8;
  uint uStack_c4;
  TBitArray<FDefaultBitArrayAllocator> *local_c0;
  undefined4 uStack_b8;
  uint uStack_b4;
  uint local_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  longlong *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  local_res18 = param_3->ArrayNum + -1;
  lVar11 = (longlong)local_res18;
  local_e0 = lVar11;
LAB_142291ee0:
  plVar13 = (longlong *)0x0;
  uVar8 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
          -0x7a143595;
  uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
  if (*(int *)&(param_1->ClassToChildListMap).field_0x8 !=
      *(int *)&(param_1->ClassToChildListMap).field_0x34) {
    puVar3 = *(undefined1 **)&(param_1->ClassToChildListMap).field_0x40;
    puVar9 = &(param_1->ClassToChildListMap).field_0x38;
    if (puVar3 != (undefined1 *)0x0) {
      puVar9 = puVar3;
    }
    iVar10 = *(int *)(puVar9 + (ulonglong)
                               (*(int *)&(param_1->ClassToChildListMap).field_0x48 - 1U &
                               (uVar8 >> 0x10 ^ uVar8)) * 4);
    if (iVar10 != -1) {
      do {
        plVar7 = (longlong *)((longlong)iVar10 * 0x60 + *(longlong *)&param_1->ClassToChildListMap);
        if ((UClass *)*plVar7 == param_2) {
          plVar15 = plVar7 + 1;
          if (plVar7 == (longlong *)0x0) {
            plVar15 = plVar13;
          }
          if (plVar15 != (longlong *)0x0) {
            uVar8 = (param_3->ArrayNum - *(int *)((longlong)plVar15 + 0x34)) + (int)plVar15[1];
            if ((int)uVar8 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar8);
            }
            piVar1 = &param_3->ArrayMax;
            if (param_3->ArrayMax < (int)uVar8) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,uVar8,&param_3->AllocatorInstance,param_3->ArrayNum,piVar1);
            }
            uVar8 = *(uint *)(plVar15 + 5);
            uStack_c8 = 0;
            uStack_c4 = 1;
            uStack_b4 = uStack_c8;
            local_b0 = uStack_c8;
            if (uVar8 == 0) goto LAB_142292051;
            puVar14 = (uint *)(plVar15 + 2);
            if ((uint *)plVar15[4] != (uint *)0x0) {
              puVar14 = (uint *)plVar15[4];
            }
            uVar12 = *puVar14;
            plVar7 = plVar13;
            if (uVar12 != 0) goto LAB_142292028;
            goto LAB_142292010;
          }
          break;
        }
        iVar10 = (int)plVar7[0xb];
      } while (iVar10 != -1);
    }
  }
  goto LAB_142292267;
  while (uVar12 = puVar14[(longlong)iVar10 + 1], uVar12 == 0) {
LAB_142292010:
    iVar10 = (int)plVar13;
    local_b0 = (int)plVar7 + 0x20;
    plVar7 = (longlong *)(ulonglong)local_b0;
    uStack_c8 = iVar10 + 1;
    plVar13 = (longlong *)(ulonglong)uStack_c8;
    uStack_b4 = uVar8;
    if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_c8)
    goto LAB_142292051;
  }
LAB_142292028:
  local_b0 = (uint)plVar7;
  uStack_c8 = (uint)plVar13;
  uStack_c4 = -uVar12 & uVar12;
  uVar2 = (ulonglong)uStack_c4 * 2 + 1;
  lVar11 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
    }
  }
  local_res20 = (int)lVar11;
  uStack_b4 = local_res20 + -1 + local_b0;
  if ((int)uVar8 < (int)uStack_b4) {
    uStack_b4 = uVar8;
  }
LAB_142292051:
  local_c0 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar15 + 2);
  uVar12 = *(uint *)(plVar15 + 5);
  uStack_ac = local_54;
  uVar16 = uVar12 & 0xffffffe0;
  iStack_a8 = (int)plVar15[1] - *(int *)((longlong)plVar15 + 0x34);
  TStack_98._padding_ = CONCAT44(uStack_c4,uStack_c8);
  uStack_b8 = 0xffffffff;
  TStack_98.CurrentBitIndex = uStack_b4;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar10 = (int)uVar12 >> 5;
  TStack_98._28_4_ = local_54;
  TStack_98.BaseBitIndex = local_b0;
  uStack_78 = CONCAT44(uStack_a4,iStack_a8);
  local_d0 = plVar15;
  local_a0 = plVar15;
  TStack_98.Array = local_c0;
  if ((((int)uVar12 < 0) || ((int)uVar8 < (int)uVar12)) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar8 = *(uint *)(plVar15 + 5);
  if (uVar12 != uVar8) {
    plVar13 = plVar15 + 2;
    if ((longlong *)plVar15[4] != (longlong *)0x0) {
      plVar13 = (longlong *)plVar15[4];
    }
    uVar12 = -1 << ((byte)uVar12 & 0x1f) & *(uint *)((longlong)plVar13 + (longlong)iVar10 * 4);
    while (uVar12 == 0) {
      lVar11 = (longlong)iVar10;
      uVar16 = uVar16 + 0x20;
      iVar10 = iVar10 + 1;
      uVar12 = uVar8;
      if ((int)((uVar8 - 1) + ((int)(uVar8 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar10) goto LAB_142292160;
      uVar12 = *(uint *)((longlong)plVar13 + lVar11 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar12 & uVar12) * 2 + 1;
    lVar11 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
      }
    }
    local_d8 = (int)lVar11;
    uVar12 = local_d8 + -1 + uVar16;
    if ((int)uVar8 < (int)uVar12) {
      uVar12 = uVar8;
    }
  }
LAB_142292160:
  while( true ) {
    plVar13 = local_a0;
    if ((int)local_a0[1] - *(int *)((longlong)local_a0 + 0x34) != (int)uStack_78) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<UClass_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_98.CurrentBitIndex == uVar12) &&
        (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)(plVar15 + 2))) &&
       (lVar11 = local_e0, plVar13 == plVar15)) break;
    local_e8 = *(undefined8 *)(*plVar13 + (longlong)TStack_98.CurrentBitIndex * 0x10);
    pFVar4 = (param_3->AllocatorInstance).Data;
    if (((pFVar4 <= (FScriptContainerElement *)&local_e8) &&
        ((FScriptContainerElement *)&local_e8 < pFVar4 + (longlong)*piVar1 * 8)) &&
       (bVar6 = FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    iVar10 = param_3->ArrayNum;
    if (iVar10 == *piVar1) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                         (0x808,&param_3->AllocatorInstance,piVar1);
    }
    param_3->ArrayNum = iVar10 + 1;
    *(undefined8 *)((param_3->AllocatorInstance).Data + (longlong)iVar10 * 8) = local_e8;
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  }
LAB_142292267:
  local_res18 = local_res18 + 1;
  lVar11 = lVar11 + 1;
  if (param_3->ArrayNum <= local_res18) {
    return;
  }
  local_e0 = lVar11;
  if ((local_res18 < 0) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  param_2 = *(UClass **)((param_3->AllocatorInstance).Data + lVar11 * 8);
  goto LAB_142291ee0;
}

// RecursivelyPopulateDerivedClasses<UClass_const_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> @ 142292300

void __cdecl
RecursivelyPopulateDerivedClasses<UClass_const_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
          (FUObjectHashTables *param_1,UClass *param_2,
          TArray<UClass_const_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *param_3)

{
  int *piVar1;
  ulonglong uVar2;
  undefined1 *puVar3;
  ForElementType<UClass_const_*> FVar4;
  code *pcVar5;
  bool bVar6;
  longlong *plVar7;
  ForElementType<UClass_const_*> FVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint uVar11;
  int iVar12;
  longlong lVar13;
  longlong *plVar14;
  uint *puVar15;
  longlong *plVar16;
  uint uVar17;
  undefined1 local_res10 [8];
  int local_res18;
  int local_res20;
  undefined8 local_e8;
  longlong local_e0;
  int local_d8;
  longlong *local_d0;
  uint uStack_c8;
  uint uStack_c4;
  TBitArray<FDefaultBitArrayAllocator> *local_c0;
  undefined4 uStack_b8;
  uint uStack_b4;
  uint local_b0;
  undefined4 uStack_ac;
  int iStack_a8;
  undefined4 uStack_a4;
  longlong *local_a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_98;
  undefined8 uStack_78;
  undefined4 local_54;
  
  local_res18 = param_3->ArrayNum + -1;
  lVar13 = (longlong)local_res18;
  local_e0 = lVar13;
LAB_142292340:
  plVar14 = (longlong *)0x0;
  uVar9 = ((uint)((ulonglong)param_2 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_2 >> 4)) *
          -0x7a143595;
  uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
  if (*(int *)&(param_1->ClassToChildListMap).field_0x8 !=
      *(int *)&(param_1->ClassToChildListMap).field_0x34) {
    puVar3 = *(undefined1 **)&(param_1->ClassToChildListMap).field_0x40;
    puVar10 = &(param_1->ClassToChildListMap).field_0x38;
    if (puVar3 != (undefined1 *)0x0) {
      puVar10 = puVar3;
    }
    iVar12 = *(int *)(puVar10 +
                     (ulonglong)
                     (*(int *)&(param_1->ClassToChildListMap).field_0x48 - 1U &
                     (uVar9 >> 0x10 ^ uVar9)) * 4);
    if (iVar12 != -1) {
      do {
        plVar7 = (longlong *)((longlong)iVar12 * 0x60 + *(longlong *)&param_1->ClassToChildListMap);
        if ((UClass *)*plVar7 == param_2) {
          plVar16 = plVar7 + 1;
          if (plVar7 == (longlong *)0x0) {
            plVar16 = plVar14;
          }
          if (plVar16 != (longlong *)0x0) {
            uVar9 = ((int)plVar16[1] - *(int *)((longlong)plVar16 + 0x34)) + param_3->ArrayNum;
            if ((int)uVar9 < 0) {
                    /* WARNING: Subroutine does not return */
              UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar9);
            }
            piVar1 = &param_3->ArrayMax;
            if (*piVar1 < (int)uVar9) {
              UE::Core::Private::
              ReallocTo<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UClass_const_*>_>
                        (8,8,uVar9,&param_3->AllocatorInstance,param_3->ArrayNum,piVar1);
            }
            uVar9 = *(uint *)(plVar16 + 5);
            uStack_c8 = 0;
            uStack_c4 = 1;
            uStack_b4 = uStack_c8;
            local_b0 = uStack_c8;
            if (uVar9 == 0) goto LAB_1422924b2;
            puVar15 = (uint *)(plVar16 + 2);
            if ((uint *)plVar16[4] != (uint *)0x0) {
              puVar15 = (uint *)plVar16[4];
            }
            uVar11 = *puVar15;
            plVar7 = plVar14;
            goto joined_r0x00014229246b;
          }
          break;
        }
        iVar12 = (int)plVar7[0xb];
      } while (iVar12 != -1);
    }
  }
  goto LAB_142292700;
joined_r0x00014229246b:
  uStack_c8 = (uint)plVar14;
  local_b0 = (uint)plVar7;
  if (uVar11 != 0) goto LAB_142292488;
  lVar13 = (longlong)(int)uStack_c8;
  local_b0 = local_b0 + 0x20;
  plVar7 = (longlong *)(ulonglong)local_b0;
  uStack_c8 = uStack_c8 + 1;
  plVar14 = (longlong *)(ulonglong)uStack_c8;
  uStack_b4 = uVar9;
  if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uStack_c8)
  goto LAB_1422924b2;
  uVar11 = puVar15[lVar13 + 1];
  goto joined_r0x00014229246b;
LAB_142292488:
  uStack_c4 = -uVar11 & uVar11;
  uVar2 = (ulonglong)uStack_c4 * 2 + 1;
  lVar13 = 0x3f;
  if (uVar2 != 0) {
    for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
    }
  }
  local_res20 = (int)lVar13;
  uStack_b4 = local_res20 + -1 + local_b0;
  if ((int)uVar9 < (int)uStack_b4) {
    uStack_b4 = uVar9;
  }
LAB_1422924b2:
  local_c0 = (TBitArray<FDefaultBitArrayAllocator> *)(plVar16 + 2);
  uVar11 = *(uint *)(plVar16 + 5);
  uStack_ac = local_54;
  uVar17 = uVar11 & 0xffffffe0;
  iStack_a8 = (int)plVar16[1] - *(int *)((longlong)plVar16 + 0x34);
  TStack_98._padding_ = CONCAT44(uStack_c4,uStack_c8);
  uStack_b8 = 0xffffffff;
  TStack_98.CurrentBitIndex = uStack_b4;
  TStack_98.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_98._28_4_ = local_54;
  TStack_98.BaseBitIndex = local_b0;
  uStack_78 = CONCAT44(uStack_a4,iStack_a8);
  local_d0 = plVar16;
  local_a0 = plVar16;
  TStack_98.Array = local_c0;
  if ((((int)uVar11 < 0) || ((int)uVar9 < (int)uVar11)) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar9 = *(uint *)(plVar16 + 5);
  if (uVar11 != uVar9) {
    plVar14 = plVar16 + 2;
    if ((longlong *)plVar16[4] != (longlong *)0x0) {
      plVar14 = (longlong *)plVar16[4];
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)((longlong)plVar14 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar13 = (longlong)iVar12;
      uVar17 = uVar17 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar9;
      if ((int)((uVar9 - 1) + ((int)(uVar9 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1422925c0;
      uVar11 = *(uint *)((longlong)plVar14 + lVar13 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar13 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar13 == 0; lVar13 = lVar13 + -1) {
      }
    }
    local_d8 = (int)lVar13;
    uVar11 = local_d8 + -1 + uVar17;
    if ((int)uVar9 < (int)uVar11) {
      uVar11 = uVar9;
    }
  }
LAB_1422925c0:
  while( true ) {
    plVar14 = local_a0;
    if ((int)local_a0[1] - *(int *)((longlong)local_a0 + 0x34) != (int)uStack_78) {
      local_res10[0] = 0;
      `TSparseArray<TSparseSetElement<UClass_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res10);
    }
    if (((TStack_98.CurrentBitIndex == uVar11) &&
        (TStack_98.Array == (TBitArray<FDefaultBitArrayAllocator> *)(plVar16 + 2))) &&
       (lVar13 = local_e0, plVar14 == plVar16)) break;
    FVar4 = (param_3->AllocatorInstance).SecondaryData;
    local_e8 = *(undefined8 *)(*plVar14 + (longlong)TStack_98.CurrentBitIndex * 0x10);
    FVar8 = (ForElementType<UClass_const_*>)param_3;
    if (FVar4 != (ForElementType<UClass_const_*>)0x0) {
      FVar8 = FVar4;
    }
    if ((ulonglong)FVar8 <= &local_e8) {
      FVar8 = (ForElementType<UClass_const_*>)param_3;
      if (FVar4 != (ForElementType<UClass_const_*>)0x0) {
        FVar8 = FVar4;
      }
      if ((&local_e8 < (undefined8 *)((longlong)FVar8 + (longlong)*piVar1 * 8)) &&
         (bVar6 = FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar6)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar12 = param_3->ArrayNum;
    if (iVar12 == *piVar1) {
      iVar12 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UClass_const_*>_>
                         (0x808,&param_3->AllocatorInstance,piVar1);
    }
    param_3->ArrayNum = iVar12 + 1;
    FVar4 = (param_3->AllocatorInstance).SecondaryData;
    FVar8 = (ForElementType<UClass_const_*>)param_3;
    if (FVar4 != (ForElementType<UClass_const_*>)0x0) {
      FVar8 = FVar4;
    }
    *(undefined8 *)((longlong)FVar8 + (longlong)iVar12 * 8) = local_e8;
    TStack_98.UnvisitedBitMask = TStack_98.UnvisitedBitMask & ~TStack_98._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_98);
  }
LAB_142292700:
  local_res18 = local_res18 + 1;
  lVar13 = lVar13 + 1;
  if (param_3->ArrayNum <= local_res18) {
    return;
  }
  local_e0 = lVar13;
  if ((local_res18 < 0) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("(Index >= 0) & (Index < ArrayNum)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
     bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  FVar4 = (param_3->AllocatorInstance).SecondaryData;
  FVar8 = (ForElementType<UClass_const_*>)param_3;
  if (FVar4 != (ForElementType<UClass_const_*>)0x0) {
    FVar8 = FVar4;
  }
  param_2 = *(UClass **)((longlong)FVar8 + lVar13 * 8);
  goto LAB_142292340;
}

// _Fill_memset<char_*,char> @ 1422932c0

void __cdecl std::_Fill_memset<char_*,char>(char *param_1,char param_2,ulong64 param_3)

{
  memset(param_1,(uint)(byte)param_2,param_3);
  return;
}

// _Floating_to_chars<0,double> @ 1422932d0

to_chars_result * __cdecl
std::_Floating_to_chars<0,double>
          (to_chars_result *__return_storage_ptr__,char *param_1,char *param_2,double param_3,
          chars_format param_4,int param_5)

{
  pair<char_*,std::errc> *ppVar1;
  double dVar2;
  char *pcVar3;
  size_t _Size;
  pair<char_*,std::errc> local_18;
  
  dVar2 = param_3;
  if ((longlong)param_3 < 0) {
    if (param_1 == param_2) {
      __return_storage_ptr__->ptr = param_2;
      __return_storage_ptr__->ec = value_too_large;
      return __return_storage_ptr__;
    }
    *param_1 = '-';
    param_1 = param_1 + 1;
    dVar2 = ABS(param_3);
  }
  if (((ulonglong)dVar2 & 0x7ff0000000000000) == 0x7ff0000000000000) {
    if (((ulonglong)dVar2 & 0xfffffffffffff) == 0) {
      pcVar3 = "inf";
      _Size = 3;
    }
    else if (((longlong)param_3 < 0) && (((ulonglong)dVar2 & 0xfffffffffffff) == 0x8000000000000)) {
      pcVar3 = "nan(ind)";
      _Size = 8;
    }
    else if (((ulonglong)dVar2 & 0x8000000000000) == 0) {
      pcVar3 = "nan(snan)";
      _Size = 9;
    }
    else {
      pcVar3 = "nan";
      _Size = 3;
    }
    if ((longlong)param_2 - (longlong)param_1 < (longlong)_Size) {
      __return_storage_ptr__->ptr = param_2;
      __return_storage_ptr__->ec = value_too_large;
      return __return_storage_ptr__;
    }
    memcpy(param_1,pcVar3,_Size);
    __return_storage_ptr__->ec = 0;
    __return_storage_ptr__->ptr = param_1 + _Size;
    return __return_storage_ptr__;
  }
  ppVar1 = __d2s_buffered_n<char>(&local_18,param_1,param_2,dVar2,0);
  pcVar3 = ppVar1->first;
  __return_storage_ptr__->ec = ppVar1->second;
  __return_storage_ptr__->ptr = pcVar3;
  return __return_storage_ptr__;
}

// _Floating_to_chars_ryu<double> @ 142293430

to_chars_result * __cdecl
std::_Floating_to_chars_ryu<double>
          (to_chars_result *__return_storage_ptr__,char *param_1,char *param_2,double param_3,
          chars_format param_4)

{
  char *pcVar1;
  pair<char_*,std::errc> *ppVar2;
  pair<char_*,std::errc> local_18;
  
  ppVar2 = __d2s_buffered_n<char>(&local_18,param_1,param_2,param_3,param_4);
  pcVar1 = ppVar2->first;
  __return_storage_ptr__->ec = ppVar2->second;
  __return_storage_ptr__->ptr = pcVar1;
  return __return_storage_ptr__;
}

// __append_c_digits<char> @ 142293470

void __cdecl std::__append_c_digits<char>(uint param_1,uint param_2,char *param_3)

{
  longlong lVar1;
  uint uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  uVar3 = 0;
  uVar2 = param_2;
  if (param_1 != 1) {
    do {
      param_2 = uVar2 / 100;
      lVar1 = param_1 - uVar4;
      uVar3 = (int)uVar4 + 2;
      uVar4 = (ulonglong)uVar3;
      *(undefined2 *)(param_3 + lVar1 + -2) =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + (uVar2 % 100) * 2);
      uVar2 = param_2;
    } while (uVar3 < param_1 - 1);
  }
  if (uVar3 < param_1) {
    param_3[(param_1 - uVar3) - 1] = (char)param_2 + (char)((ulonglong)param_2 / 10) * -10 + '0';
  }
  return;
}

// __append_n_digits<char> @ 142293520

void __cdecl std::__append_n_digits<char>(uint param_1,uint param_2,char *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar2 = (ulonglong)param_1;
  uVar4 = 0;
  for (; 9999 < param_2; param_2 = param_2 / 10000) {
    *(undefined2 *)(param_3 + (uVar2 - uVar4) + -2) =
         *(undefined2 *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          + ((param_2 % 10000) % 100) * 2);
    *(undefined2 *)(param_3 + (uVar2 - uVar4) + -4) =
         *(undefined2 *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          + ((param_2 % 10000) / 100) * 2);
    uVar4 = (ulonglong)((int)uVar4 + 4);
  }
  uVar3 = param_2;
  if (99 < param_2) {
    uVar3 = param_2 / 100;
    lVar1 = uVar2 - uVar4;
    uVar4 = (ulonglong)((int)uVar4 + 2);
    *(undefined2 *)(param_3 + lVar1 + -2) =
         *(undefined2 *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          + (param_2 % 100) * 2);
  }
  if (uVar3 < 10) {
    *param_3 = (char)uVar3 + '0';
    return;
  }
  *(undefined2 *)(param_3 + (uVar2 - uVar4) + -2) =
       *(undefined2 *)
        (
        "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
        + uVar3 * 2);
  return;
}

// __append_nine_digits<char> @ 142293630

void __cdecl std::__append_nine_digits<char>(uint param_1,char *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  longlong lVar5;
  
  if (param_1 == 0) {
    builtin_strncpy(param_2,"000000000",9);
    return;
  }
  lVar5 = 2;
  pcVar4 = param_2 + 5;
  do {
    uVar1 = (ulonglong)param_1;
    uVar3 = (uint)(uVar1 / 10000);
    uVar2 = param_1 + uVar3 * -10000;
    *(undefined2 *)(pcVar4 + 2) =
         *(undefined2 *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          + (uVar2 % 100) * 2);
    *(undefined2 *)pcVar4 =
         *(undefined2 *)
          (
          "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
          + (uVar2 / 100) * 2);
    lVar5 = lVar5 + -1;
    pcVar4 = pcVar4 + -4;
    param_1 = uVar3;
  } while (lVar5 != 0);
  *param_2 = (char)(uVar1 / 10000) + '0';
  return;
}

// __d2fixed_buffered_n<char> @ 1422936d0

pair<char_*,std::errc> * __cdecl
std::__d2fixed_buffered_n<char>
          (pair<char_*,std::errc> *__return_storage_ptr__,char *param_1,char *param_2,double param_3
          ,uint param_4)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  byte bVar10;
  undefined1 auVar11 [16];
  char *pcVar12;
  char *pcVar13;
  int iVar14;
  uint uVar15;
  ulonglong uVar16;
  char *pcVar17;
  byte bVar18;
  uint uVar19;
  ulonglong uVar20;
  uint uVar21;
  ulonglong uVar22;
  size_t _Size;
  ulonglong uVar23;
  ulonglong uVar24;
  longlong lVar25;
  char *pcVar26;
  uint uVar27;
  uint uVar28;
  ulonglong uVar29;
  char cVar30;
  ulonglong uVar31;
  int iVar32;
  bool bVar33;
  
  if (param_3 == 0.0) {
    if ((longlong)(int)((param_4 != 0) + 1 + param_4) <= (longlong)param_2 - (longlong)param_1) {
      *param_1 = '0';
      pcVar26 = param_1 + 1;
      if (param_4 != 0) {
        *pcVar26 = '.';
        memset(param_1 + 2,0x30,(ulonglong)param_4);
        pcVar26 = param_1 + 2 + param_4;
      }
      __return_storage_ptr__->first = pcVar26;
      __return_storage_ptr__->second = 0;
      return __return_storage_ptr__;
    }
LAB_142293c66:
    __return_storage_ptr__->first = param_2;
    __return_storage_ptr__->second = value_too_large;
  }
  else {
    uVar31 = (ulonglong)param_3 & 0xfffffffffffff;
    uVar15 = (uint)((ulonglong)param_3 >> 0x34);
    pcVar26 = param_1;
    if (uVar15 == 0) {
      uVar27 = 0xfffffbce;
LAB_142293973:
      if (pcVar26 == param_2) goto LAB_142293c66;
      *pcVar26 = '0';
      pcVar26 = pcVar26 + 1;
    }
    else {
      uVar27 = uVar15 - 0x433;
      bVar33 = false;
      uVar31 = uVar31 | 0x10000000000000;
      if ((int)uVar27 < -0x34) goto LAB_142293973;
      if ((int)uVar27 < 0) {
        uVar15 = 0;
        cVar30 = 'x';
        iVar32 = 1;
      }
      else {
        uVar15 = uVar15 - 0x424 >> 4;
        cVar30 = (char)uVar15 * '\x10' + 'x';
        iVar32 = ((uVar15 * 0x134410 >> 0x12) + 0x19) / 9 - 1;
        if (iVar32 < 0) goto LAB_142293973;
      }
      uVar29 = uVar31 << 8;
      bVar18 = (cVar30 - (char)uVar27) + 0x88;
      do {
        iVar14 = (uint)__POW10_OFFSET[uVar15] + iVar32;
        auVar1._8_8_ = 0;
        auVar1._0_8_ = __POW10_SPLIT[iVar14][0];
        auVar4._8_8_ = 0;
        auVar4._0_8_ = uVar29;
        auVar2._8_8_ = 0;
        auVar2._0_8_ = __POW10_SPLIT[iVar14][1];
        auVar5._8_8_ = 0;
        auVar5._0_8_ = uVar29;
        auVar3._8_8_ = 0;
        auVar3._0_8_ = __POW10_SPLIT[iVar14][2];
        auVar6._8_8_ = 0;
        auVar6._0_8_ = uVar29;
        uVar16 = SUB168(auVar3 * auVar6,0);
        auVar11._8_8_ = uVar16;
        auVar11._0_8_ = SUB168(auVar1 * auVar4,8);
        uVar23 = SUB168(auVar2 * auVar5 + auVar11,8);
        uVar22 = SUB168(auVar3 * auVar6,8) + (ulonglong)(uVar23 < uVar16);
        bVar10 = bVar18 & 0x3f;
        uVar24 = uVar23 >> bVar10 | uVar22 << 0x40 - bVar10;
        auVar7._8_8_ = 0;
        auVar7._0_8_ = uVar24;
        uVar22 = uVar22 >> (bVar18 & 0x3f);
        auVar8._8_8_ = 0;
        auVar8._0_8_ = uVar24;
        uVar16 = SUB168(ZEXT816(0x89705f4136b4a597) * auVar8,0);
        auVar9._8_8_ = 0;
        auVar9._0_8_ = uVar22;
        uVar23 = SUB168(ZEXT816(0x31680a88f8953031) * auVar9,0);
        uVar20 = SUB168(ZEXT816(0x31680a88f8953031) * auVar7,8) + uVar23;
        uVar19 = (int)uVar24 +
                 (int)(uVar22 * -0x768fa0bec94b5a69 + (ulonglong)(uVar20 + uVar16 < uVar16) +
                       SUB168(ZEXT816(0x31680a88f8953031) * auVar9,8) + (ulonglong)(uVar20 < uVar23)
                       + SUB168(ZEXT816(0x89705f4136b4a597) * auVar8,8) >> 0x1d) * -1000000000;
        if (bVar33) {
          if ((longlong)param_2 - (longlong)pcVar26 < 9) goto LAB_142293c66;
          __append_nine_digits<char>(uVar19,pcVar26);
          pcVar26 = pcVar26 + 9;
        }
        else if (uVar19 != 0) {
          uVar28 = __decimalLength9(uVar19);
          if ((longlong)param_2 - (longlong)pcVar26 < (longlong)(ulonglong)uVar28)
          goto LAB_142293c66;
          __append_n_digits<char>(uVar28,uVar19,pcVar26);
          bVar33 = true;
          pcVar26 = pcVar26 + uVar28;
        }
        iVar32 = iVar32 + -1;
      } while (-1 < iVar32);
      if (!bVar33) goto LAB_142293973;
    }
    _Size = (size_t)param_4;
    if (param_4 != 0) {
      if (pcVar26 == param_2) goto LAB_142293c66;
      *pcVar26 = '.';
      pcVar26 = pcVar26 + 1;
    }
    if ((int)uVar27 < 0) {
      uVar15 = -((int)(uVar27 + ((int)uVar27 >> 0x1f & 0xfU)) >> 4);
      uVar29 = (ulonglong)(int)uVar15;
      bVar18 = ""[uVar29];
      uVar19 = param_4 / 9 + 1;
      if (uVar19 <= bVar18) goto LAB_142293c2c;
      uVar16 = uVar29;
      uVar28 = 0;
      if (bVar18 != 0) {
        uVar28 = (uint)bVar18 + (uint)bVar18 * 8;
        if ((longlong)param_2 - (longlong)pcVar26 < (longlong)(ulonglong)uVar28) goto LAB_142293c66;
        if (uVar28 != 0) {
          memset(pcVar26,0x30,(ulonglong)uVar28);
          uVar16 = (ulonglong)uVar15;
        }
        pcVar26 = pcVar26 + uVar28;
        uVar28 = (uint)bVar18;
      }
      if (uVar28 < uVar19) {
        lVar25 = (longlong)param_2 - (longlong)pcVar26;
LAB_142293a42:
        uVar21 = ((uint)__POW10_OFFSET_2[uVar29] - (uint)""[uVar29]) + uVar28;
        if (__POW10_OFFSET_2[uVar29 + 1] <= uVar21) {
          param_4 = param_4 + uVar28 * -9;
          _Size = (size_t)param_4;
          bVar33 = SBORROW8((longlong)param_2 - (longlong)pcVar26,_Size);
          lVar25 = ((longlong)param_2 - (longlong)pcVar26) - _Size;
          goto LAB_142293c38;
        }
        uVar21 = __mulShift_mod1e9(uVar31 << 8,__POW10_SPLIT_2[uVar21],
                                   (8 - (int)uVar16) * 0x10 - uVar27);
        if (uVar28 < param_4 / 9) {
          if (8 < lVar25) goto code_r0x000142293aa7;
          goto LAB_142293c66;
        }
        uVar19 = param_4 + uVar28 * -9;
        uVar15 = 0;
        if (9 - uVar19 == 0) goto LAB_142293b56;
        uVar29 = (ulonglong)(9 - uVar19);
        uVar28 = uVar21;
        do {
          uVar21 = uVar28 / 10;
          uVar15 = uVar28 % 10;
          uVar29 = uVar29 - 1;
          uVar28 = uVar21;
        } while (uVar29 != 0);
        if (uVar15 == 5) {
          iVar32 = ~uVar27 - param_4;
          if ((iVar32 < 1) ||
             ((iVar32 < 0x3c && ((uVar31 & (1L << ((byte)iVar32 & 0x3f)) - 1U) == 0)))) {
            cVar30 = '\x02';
          }
          else {
            cVar30 = '\x01';
          }
        }
        else {
LAB_142293b56:
          cVar30 = 5 < uVar15;
        }
        if (uVar19 == 0) {
LAB_142293b86:
          pcVar13 = param_2;
          pcVar17 = pcVar26;
          if (cVar30 != '\0') {
            while( true ) {
              do {
                pcVar12 = pcVar13;
                if (pcVar17 == param_1) {
                  *pcVar17 = '1';
                  if (pcVar12 != param_2) {
                    pcVar12[0] = '0';
                    pcVar12[1] = '.';
                  }
                  if (pcVar26 != param_2) {
                    *pcVar26 = '0';
                    __return_storage_ptr__->first = pcVar26 + 1;
                    __return_storage_ptr__->second = 0;
                    return __return_storage_ptr__;
                  }
                  goto LAB_142293c66;
                }
                bVar18 = pcVar17[-1];
                pcVar17 = pcVar17 + -1;
                pcVar13 = pcVar17;
              } while (bVar18 == 0x2e);
              if (bVar18 != 0x39) break;
              *pcVar17 = '0';
              cVar30 = '\x01';
              pcVar13 = pcVar12;
            }
            if ((cVar30 == '\x01') || ((bVar18 & 1) != 0)) {
              *pcVar17 = bVar18 + 1;
              __return_storage_ptr__->first = pcVar26;
              __return_storage_ptr__->second = 0;
              return __return_storage_ptr__;
            }
          }
          goto LAB_142293c52;
        }
        if ((longlong)(ulonglong)uVar19 <= (longlong)param_2 - (longlong)pcVar26) {
          __append_c_digits<char>(uVar19,uVar21,pcVar26);
          pcVar26 = pcVar26 + uVar19;
          goto LAB_142293b86;
        }
        goto LAB_142293c66;
      }
    }
    else {
LAB_142293c2c:
      bVar33 = SBORROW8((longlong)param_2 - (longlong)pcVar26,_Size);
      lVar25 = ((longlong)param_2 - (longlong)pcVar26) - _Size;
LAB_142293c38:
      if (bVar33 != lVar25 < 0) goto LAB_142293c66;
      if (param_4 != 0) {
        memset(pcVar26,0x30,_Size);
      }
      pcVar26 = pcVar26 + _Size;
    }
LAB_142293c52:
    __return_storage_ptr__->first = pcVar26;
    __return_storage_ptr__->second = 0;
  }
  return __return_storage_ptr__;
code_r0x000142293aa7:
  __append_nine_digits<char>(uVar21,pcVar26);
  pcVar26 = pcVar26 + 9;
  lVar25 = lVar25 + -9;
  uVar28 = uVar28 + 1;
  uVar16 = (ulonglong)uVar15;
  if (uVar19 <= uVar28) {
    __return_storage_ptr__->first = pcVar26;
    __return_storage_ptr__->second = 0;
    return __return_storage_ptr__;
  }
  goto LAB_142293a42;
}

// __d2s_buffered_n<char> @ 142293ca0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

pair<char_*,std::errc> * __cdecl
std::__d2s_buffered_n<char>
          (pair<char_*,std::errc> *__return_storage_ptr__,char *param_1,char *param_2,double param_3
          ,chars_format param_4)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  __floating_decimal_64 *p_Var4;
  byte bVar5;
  int iVar6;
  __floating_decimal_64 local_28 [2];
  
  if (param_3 == 0.0) {
    if (param_4 == scientific) {
      if (4 < (longlong)param_2 - (longlong)param_1) {
        *(undefined4 *)param_1 = _s_0e_00;
        param_1[4] = DAT_150898d9c;
        __return_storage_ptr__->first = param_1 + 5;
        __return_storage_ptr__->second = 0;
        return __return_storage_ptr__;
      }
    }
    else if (param_1 != param_2) {
      *param_1 = '0';
      __return_storage_ptr__->first = param_1 + 1;
      __return_storage_ptr__->second = 0;
      return __return_storage_ptr__;
    }
    __return_storage_ptr__->first = param_2;
    __return_storage_ptr__->second = value_too_large;
  }
  else {
    uVar2 = (uint)((ulonglong)param_3 >> 0x20);
    uVar1 = uVar2 >> 0x14;
    iVar6 = uVar1 - 0x433;
    if ((param_4 == fixed) && (0 < iVar6)) {
      __d2fixed_buffered_n<char>(__return_storage_ptr__,param_1,param_2,param_3,0);
    }
    else {
      local_28[0].__mantissa = (ulonglong)param_3 & 0xfffffffffffff | 0x10000000000000;
      if ((uVar1 - 0x3ff < 0x35) &&
         (bVar5 = -(char)iVar6, (local_28[0].__mantissa & (1L << (bVar5 & 0x3f)) - 1U) == 0)) {
        local_28[0].__mantissa = local_28[0].__mantissa >> (bVar5 & 0x3f);
        iVar6 = 0;
        local_28[0].__exponent = 0;
        uVar3 = local_28[0].__mantissa / 10;
        if ((int)local_28[0].__mantissa == (int)(local_28[0].__mantissa / 10) * 10) {
          do {
            local_28[0].__mantissa = uVar3;
            iVar6 = iVar6 + 1;
            uVar3 = local_28[0].__mantissa / 10;
            local_28[0].__exponent = iVar6;
          } while ((int)local_28[0].__mantissa == (int)(local_28[0].__mantissa / 10) * 10);
        }
      }
      else {
        p_Var4 = __d2d(local_28,(ulonglong)param_3 & 0xfffffffffffff,uVar2 >> 0x14);
        local_28[0].__mantissa._0_4_ = (undefined4)p_Var4->__mantissa;
        local_28[0].__mantissa._4_4_ = *(undefined4 *)((longlong)&p_Var4->__mantissa + 4);
        local_28[0].__exponent = p_Var4->__exponent;
        local_28[0]._12_4_ = *(undefined4 *)&p_Var4->field_0xc;
      }
      __to_chars<char>(__return_storage_ptr__,param_1,param_2,local_28,param_4,param_3);
    }
  }
  return __return_storage_ptr__;
}

// __to_chars<char> @ 142293e70

pair<char_*,std::errc> * __cdecl
std::__to_chars<char>
          (pair<char_*,std::errc> *__return_storage_ptr__,char *param_1,char *param_2,
          __floating_decimal_64 *param_3,chars_format param_4,double param_5)

{
  int iVar1;
  longlong lVar2;
  int iVar3;
  ulonglong uVar4;
  char *pcVar5;
  uint uVar6;
  ulonglong uVar7;
  int iVar8;
  size_t _Size;
  ulonglong uVar9;
  char cVar10;
  int iVar11;
  uint uVar12;
  ulonglong uVar13;
  uint uVar14;
  uint uVar15;
  
  uVar7 = param_3->__mantissa;
  iVar8 = param_3->__exponent;
  _Size = (size_t)iVar8;
  if (uVar7 < 10000000000000000) {
    if (uVar7 < 1000000000000000) {
      if (uVar7 < 100000000000000) {
        if (uVar7 < 10000000000000) {
          if (uVar7 < 1000000000000) {
            if (uVar7 < 100000000000) {
              if (uVar7 < 10000000000) {
                if (uVar7 < 1000000000) {
                  if (uVar7 < 100000000) {
                    if (uVar7 < 10000000) {
                      if (uVar7 < 1000000) {
                        if (uVar7 < 100000) {
                          if (uVar7 < 10000) {
                            if (uVar7 < 1000) {
                              if (uVar7 < 100) {
                                uVar14 = 2 - (uVar7 < 10);
                              }
                              else {
                                uVar14 = 3;
                              }
                            }
                            else {
                              uVar14 = 4;
                            }
                          }
                          else {
                            uVar14 = 5;
                          }
                        }
                        else {
                          uVar14 = 6;
                        }
                      }
                      else {
                        uVar14 = 7;
                      }
                    }
                    else {
                      uVar14 = 8;
                    }
                  }
                  else {
                    uVar14 = 9;
                  }
                }
                else {
                  uVar14 = 10;
                }
              }
              else {
                uVar14 = 0xb;
              }
            }
            else {
              uVar14 = 0xc;
            }
          }
          else {
            uVar14 = 0xd;
          }
        }
        else {
          uVar14 = 0xe;
        }
      }
      else {
        uVar14 = 0xf;
      }
    }
    else {
      uVar14 = 0x10;
    }
  }
  else {
    uVar14 = 0x11;
  }
  uVar15 = uVar14 + iVar8;
  iVar1 = uVar15 - 1;
  iVar11 = (int)uVar7;
  if (param_4 == 0) {
    iVar3 = -3;
    if (uVar14 != 1) {
      iVar3 = -3 - uVar14;
    }
    if ((iVar3 <= iVar8) && (iVar8 <= (int)((uVar14 != 1) + 4))) goto LAB_14229406f;
  }
  else if (param_4 == general) {
    if (uVar15 + 3 < 10) {
LAB_14229406f:
      if (iVar8 < 0) {
        if ((int)uVar15 < 1) {
          uVar6 = 2 - iVar8;
        }
        else {
          uVar6 = uVar14 + 1;
        }
      }
      else {
        uVar6 = uVar15;
        if (uVar7 == 1) {
          uVar6 = uVar15 - *(byte *)((longlong)
                                     &`struct_std::pair<char*___ptr64,std::errc>___cdecl_std::__to_chars<char>(char*___ptr64_const,char*___ptr64_const,std::__floating_decimal_64,std::chars_format,double)'
                                      ::__l33::_Adjustment + _Size);
        }
      }
      uVar9 = (ulonglong)uVar6;
      if ((longlong)uVar9 <= (longlong)param_2 - (longlong)param_1) {
        uVar4 = uVar9;
        if (0 < iVar8) {
          if (0x16 < iVar8) {
LAB_1422940d1:
            __d2fixed_buffered_n<char>(__return_storage_ptr__,param_1,param_2,param_5,0);
            return __return_storage_ptr__;
          }
          lVar2 = 0;
          if (uVar7 != 0) {
            for (; (uVar7 >> lVar2 & 1) == 0; lVar2 = lVar2 + 1) {
            }
          }
          if ((&`struct_std::pair<char*___ptr64,std::errc>___cdecl_std::__to_chars<char>(char*___ptr64_const,char*___ptr64_const,std::__floating_decimal_64,std::chars_format,double)'
                ::__l50::_Max_shifted_mantissa)[_Size] < (__uint64 *)(uVar7 >> ((byte)lVar2 & 0x3f))
             ) goto LAB_1422940d1;
          uVar4 = (ulonglong)uVar14;
        }
        pcVar5 = param_1 + uVar4;
        if ((uVar7 & 0xffffffff00000000) != 0) {
          uVar7 = uVar7 / 100000000;
          uVar12 = iVar11 + (int)uVar7 * -100000000;
          uVar6 = uVar12 % 10000;
          uVar12 = (uVar12 / 10000) % 10000;
          *(undefined2 *)(pcVar5 + -2) =
               *(undefined2 *)
                (
                "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                + (uVar6 % 100) * 2);
          *(undefined2 *)(pcVar5 + -4) =
               *(undefined2 *)
                (
                "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                + (uVar6 / 100) * 2);
          *(undefined2 *)(pcVar5 + -6) =
               *(undefined2 *)
                (
                "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                + (uVar12 % 100) * 2);
          pcVar5 = pcVar5 + -8;
          *(undefined2 *)pcVar5 =
               *(undefined2 *)
                (
                "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                + (uVar12 / 100) * 2);
        }
        uVar6 = (uint)uVar7;
        while (uVar12 = (uint)uVar7, 9999 < uVar6) {
          uVar7 = (uVar7 & 0xffffffff) / 10000;
          uVar6 = (uint)uVar7;
          uVar12 = uVar12 + uVar6 * -10000;
          *(undefined2 *)(pcVar5 + -2) =
               *(undefined2 *)
                (
                "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                + (uVar12 % 100) * 2);
          pcVar5 = pcVar5 + -4;
          *(undefined2 *)pcVar5 =
               *(undefined2 *)
                (
                "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                + (uVar12 / 100) * 2);
        }
        uVar6 = uVar12;
        if (99 < uVar12) {
          uVar6 = (uint)((uVar7 & 0xffffffff) / 100);
          pcVar5 = pcVar5 + -2;
          *(undefined2 *)pcVar5 =
               *(undefined2 *)
                (
                "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                + (uVar12 + uVar6 * -100) * 2);
        }
        if (uVar6 < 10) {
          pcVar5[-1] = (char)uVar6 + '0';
        }
        else {
          *(undefined2 *)(pcVar5 + -2) =
               *(undefined2 *)
                (
                "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                + uVar6 * 2);
        }
        if (iVar8 < 1) {
          if (iVar8 != 0) {
            if (0 < (int)uVar15) {
              memmove(param_1,param_1 + 1,(longlong)(int)uVar15);
              pcVar5 = param_1 + uVar9;
              param_1[(int)uVar15] = '.';
              goto LAB_142294503;
            }
            param_1[0] = '0';
            param_1[1] = '.';
            if (0 < (int)-uVar15) {
              memset(param_1 + 2,0x30,(longlong)(int)-uVar15);
            }
          }
          pcVar5 = param_1 + uVar9;
        }
        else {
          memset(param_1 + uVar14,0x30,_Size);
          pcVar5 = param_1 + uVar9;
        }
        goto LAB_142294503;
      }
      goto LAB_14229404b;
    }
  }
  else if (param_4 == fixed) goto LAB_14229406f;
  uVar15 = (0xc6 < uVar15 + 0x62) + 4 + uVar14 + (uint)(1 < uVar14);
  if ((longlong)(ulonglong)uVar15 <= (longlong)param_2 - (longlong)param_1) {
    uVar9 = 0;
    if ((uVar7 & 0xffffffff00000000) != 0) {
      uVar7 = uVar7 / 100000000;
      uVar12 = iVar11 + (int)uVar7 * -100000000;
      uVar6 = uVar12 % 10000;
      uVar12 = (uVar12 / 10000) % 10000;
      *(undefined2 *)(param_1 + ((ulonglong)uVar14 - 1)) =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + (uVar6 % 100) * 2);
      *(undefined2 *)(param_1 + ((ulonglong)uVar14 - 3)) =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + (uVar6 / 100) * 2);
      uVar9 = 8;
      *(undefined2 *)(param_1 + ((ulonglong)uVar14 - 5)) =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + (uVar12 % 100) * 2);
      *(undefined2 *)(param_1 + ((ulonglong)uVar14 - 7)) =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + (uVar12 / 100) * 2);
    }
    if (9999 < (uint)uVar7) {
      uVar4 = uVar9;
      uVar13 = uVar7;
      do {
        uVar7 = (uVar13 & 0xffffffff) / 10000;
        uVar6 = (int)uVar13 + (uint)uVar7 * -10000;
        uVar9 = (ulonglong)((int)uVar4 + 4);
        *(undefined2 *)(param_1 + (uVar14 - uVar4) + -1) =
             *(undefined2 *)
              (
              "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
              + (uVar6 % 100) * 2);
        *(undefined2 *)(param_1 + (uVar14 - uVar4) + -3) =
             *(undefined2 *)
              (
              "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
              + (uVar6 / 100) * 2);
        uVar4 = uVar9;
        uVar13 = uVar7;
      } while (9999 < (uint)uVar7);
    }
    uVar12 = (uint)uVar7;
    uVar6 = uVar12;
    if (99 < uVar12) {
      uVar6 = (uint)((uVar7 & 0xffffffff) / 100);
      *(undefined2 *)(param_1 + (uVar14 - uVar9) + -1) =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + (uVar12 + uVar6 * -100) * 2);
    }
    if (uVar6 < 10) {
      cVar10 = (char)uVar6 + '0';
    }
    else {
      param_1[2] = "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
                   [uVar6 * 2 + 1];
      cVar10 = "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
               [uVar6 * 2];
    }
    *param_1 = cVar10;
    if (uVar14 < 2) {
      uVar14 = 1;
    }
    else {
      param_1[1] = '.';
      uVar14 = uVar14 + 1;
    }
    param_1[uVar14] = 'e';
    iVar8 = iVar1;
    if (iVar1 < 0) {
      iVar8 = -iVar1;
    }
    cVar10 = '-';
    if (-1 < iVar1) {
      cVar10 = '+';
    }
    param_1[uVar14 + 1] = cVar10;
    if (iVar8 < 100) {
      *(undefined2 *)(param_1 + (uVar14 + 2)) =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + iVar8 * 2);
    }
    else {
      *(undefined2 *)(param_1 + (uVar14 + 2)) =
           *(undefined2 *)
            (
            "00010203040506070809101112131415161718192021222324252627282930313233343536373839404142434445464748495051525354555657585960616263646566676869707172737475767778798081828384858687888990919293949596979899"
            + (iVar8 / 10) * 2);
      param_1[uVar14 + 4] = (char)iVar8 + (char)(iVar8 / 10) * -10 + '0';
    }
    pcVar5 = param_1 + uVar15;
LAB_142294503:
    __return_storage_ptr__->second = 0;
    __return_storage_ptr__->first = pcVar5;
    return __return_storage_ptr__;
  }
LAB_14229404b:
  __return_storage_ptr__->first = param_2;
  __return_storage_ptr__->second = value_too_large;
  return __return_storage_ptr__;
}

// ~TFunction_OwnedObject<`verse::FContentScopeGuard::ScheduleTerminateContentScope'::__l2::<lambda_1>,0,0> @ 142295260

void __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`verse::FContentScopeGuard::ScheduleTerminateContentScope'::__l2::<lambda_1>,0,0>
::
~TFunction_OwnedObject<_verse::FContentScopeGuard::ScheduleTerminateContentScope_::__l2::<lambda_1>,0,0>
          (void *this)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`verse::FContentScopeGuard::ScheduleTerminateContentScope'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  return;
}

// operator() @ 1422967a0

void __thiscall `GetObjectsOfClass'::__l2::<lambda_1>::operator()(void *this,UObject *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UObject *local_res10 [3];
  
  pFVar2 = *(ForAnyElementType **)this;
  local_res10[0] = param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
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
  iVar5 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar5 + 1;
  *(UObject **)(pFVar2->Data + (longlong)iVar5 * 8) = local_res10[0];
  return;
}

// operator() @ 142296850

bool __thiscall `GetObjectsWithPackage'::__l2::<lambda_1>::operator()(void *this,UObject *param_1)

{
  int *piVar1;
  ForAnyElementType *pFVar2;
  code *pcVar3;
  bool bVar4;
  undefined1 uVar5;
  int iVar6;
  UObject *local_res10 [3];
  
  pFVar2 = *(ForAnyElementType **)this;
  local_res10[0] = param_1;
  if ((pFVar2->Data <= (FScriptContainerElement *)local_res10) &&
     ((FScriptContainerElement *)local_res10 <
      pFVar2->Data + (longlong)*(int *)((longlong)&pFVar2[1].Data + 4) * 8)) {
    bVar4 = ::FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar4) {
      pcVar3 = (code *)swi(3);
      uVar5 = (*pcVar3)();
      return (bool)uVar5;
    }
  }
  iVar6 = *(int *)&pFVar2[1].Data;
  piVar1 = (int *)((longlong)&pFVar2[1].Data + 4);
  if (iVar6 == *piVar1) {
    iVar6 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,pFVar2,piVar1);
  }
  *(int *)&pFVar2[1].Data = iVar6 + 1;
  *(UObject **)(pFVar2->Data + (longlong)iVar6 * 8) = local_res10[0];
  return true;
}

// `scalar_deleting_destructor' @ 1422973f0

void * __thiscall
FUObjectAnnotationSparseNoSync<FObjectMark>::_scalar_deleting_destructor_
          (FUObjectAnnotationSparseNoSync<FObjectMark> *this,uint param_1)

{
  void *pvVar1;
  
  this->_padding_ = (longlong)&___7__FUObjectAnnotationSparseNoSync_UFObjectMark____6B_;
  RemoveAllAnnotations(this);
  *(undefined4 *)&(this->AnnotationMap).field_0x48 = 0;
  pvVar1 = *(void **)&(this->AnnotationMap).field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FObjectMark>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FObjectMark>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FObjectMark>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&this->AnnotationMap);
  this->_padding_ = (longlong)&___7FUObjectDeleteListener_FUObjectArray__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x68);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142297470

void * __thiscall
UE::Core::Private::Function::
TFunction_OwnedObject<`verse::FContentScopeGuard::ScheduleTerminateContentScope'::__l2::<lambda_1>,0,0>
::_scalar_deleting_destructor_(void *this,uint param_1)

{
  *(undefined ***)this =
       &TFunction_OwnedObject<`verse::FContentScopeGuard::ScheduleTerminateContentScope'::`2'::<lambda_1>,0,0>
        ::_vftable_;
  SharedPointerInternals::TReferenceControllerBase<1>::ReleaseSharedReferenceNoInline
            (*(TReferenceControllerBase<1> **)((longlong)this + 0x10));
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x18);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1422974c0

void * __thiscall
TThreadSingleton<FThreadMarkAnnotation>::_scalar_deleting_destructor_
          (TThreadSingleton<FThreadMarkAnnotation> *this,uint param_1)

{
  ~TThreadSingleton<FThreadMarkAnnotation>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142297500

void * __thiscall
TThreadSingleton<FUObjectThreadContext>::_scalar_deleting_destructor_
          (TThreadSingleton<FUObjectThreadContext> *this,uint param_1)

{
  ~TThreadSingleton<FUObjectThreadContext>(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x10);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142297540

void * __thiscall
UE::Verse::FRuntimeType::_scalar_deleting_destructor_(FRuntimeType *this,uint param_1)

{
  this->_padding_ = (longlong)&___7FRuntimeType_Verse_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142297580

void * __thiscall
UE::Verse::FRuntimeTypeDynamic::_scalar_deleting_destructor_(FRuntimeTypeDynamic *this,uint param_1)

{
  *(undefined ***)this = &___7FRuntimeType_Verse_UE__6B_;
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x20);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1422975c0

void * __thiscall
FThreadMarkAnnotation::_scalar_deleting_destructor_(FThreadMarkAnnotation *this,uint param_1)

{
  void *pvVar1;
  
  (this->MarkAnnotation)._padding_ =
       (longlong)&___7__FUObjectAnnotationSparseNoSync_UFObjectMark____6B_;
  FUObjectAnnotationSparseNoSync<FObjectMark>::RemoveAllAnnotations(&this->MarkAnnotation);
  *(undefined4 *)&(this->MarkAnnotation).AnnotationMap.field_0x48 = 0;
  pvVar1 = *(void **)&(this->MarkAnnotation).AnnotationMap.field_0x40;
  if (pvVar1 != (void *)0x0) {
    FMemory::Free(pvVar1);
  }
  TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FObjectMark>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FObjectMark>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObjectBase_const_*,FObjectMark>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&(this->MarkAnnotation).AnnotationMap);
  (this->MarkAnnotation)._padding_ = (longlong)&___7FUObjectDeleteListener_FUObjectArray__6B_;
  TThreadSingleton<FThreadMarkAnnotation>::~TThreadSingleton<FThreadMarkAnnotation>
            ((TThreadSingleton<FThreadMarkAnnotation> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x78);
  }
  return this;
}

// `scalar_deleting_destructor' @ 142297650

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void * __thiscall
FUObjectThreadContext::_scalar_deleting_destructor_(FUObjectThreadContext *this,uint param_1)

{
  ForElementType<UObject_*> FVar1;
  FScriptContainerElement *pFVar2;
  
  this->_padding_ = (longlong)&___7FUObjectThreadContext__6B_;
  TRefCountPtr<FUObjectSerializeContext>::~TRefCountPtr<FUObjectSerializeContext>
            (&this->SerializeContext);
  FVar1 = (this->DebugPostLoad).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<UObject_*>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  FVar1 = (this->PostInitPropertiesCheck).AllocatorInstance.SecondaryData;
  if (FVar1 != (ForElementType<UObject_*>)0x0) {
    FMemory::Free((void *)FVar1);
  }
  pFVar2 = (this->InitializerStack).AllocatorInstance.Data;
  if (pFVar2 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar2);
  }
  TThreadSingleton<FUObjectThreadContext>::~TThreadSingleton<FUObjectThreadContext>
            ((TThreadSingleton<FUObjectThreadContext> *)this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,0x180);
  }
  return this;
}

// `scalar_deleting_destructor' @ 1422976e0

void * __thiscall
Verse::ICustomAttributeHandler::_scalar_deleting_destructor_
          (ICustomAttributeHandler *this,uint param_1)

{
  ~ICustomAttributeHandler(this);
  if ((param_1 & 1) != 0) {
    ::operator_delete(this,8);
  }
  return this;
}

// AppendDecimalToString @ 142297bf0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void __cdecl
Verse::AppendDecimalToString
          (TStringBuilderBase<char8_t> *param_1,VFloat param_2,EFloatStringFormat param_3)

{
  double dVar1;
  code *pcVar2;
  bool bVar3;
  void *pvVar4;
  VFloat VVar5;
  pair<char_*,std::errc> *ppVar6;
  double dVar7;
  char *pcVar8;
  ulong64 uVar9;
  int iVar10;
  size_t _Size;
  char *pcVar11;
  undefined1 auStackY_a8 [32];
  VFloat local_78;
  undefined8 local_70;
  undefined1 local_68 [24];
  pair<char_*,std::errc> local_50;
  char local_40 [32];
  ulonglong local_20;
  
  local_20 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  local_78.Value = param_2.Value;
  bVar3 = VFloat::IsNaN(&local_78);
  if (bVar3) {
    if (param_1->End < param_1->CurPos + 3) {
      TStringBuilderBase<char8_t>::Extend(param_1,3);
    }
    pvVar4 = FGenericPlatformString::Memcpy(param_1->CurPos,"NaN",3);
    param_1->CurPos = (uchar *)((longlong)pvVar4 + 3);
    return;
  }
  local_70 = 0x7ff0000000000000;
  bVar3 = operator==(local_78,(VFloat)0x7ff0000000000000);
  if (bVar3) {
    if (param_1->End < param_1->CurPos + 3) {
      TStringBuilderBase<char8_t>::Extend(param_1,3);
    }
    pvVar4 = FGenericPlatformString::Memcpy(param_1->CurPos,"Inf",3);
    param_1->CurPos = (uchar *)((longlong)pvVar4 + 3);
    return;
  }
  local_70 = 0x7ff0000000000000;
  VVar5 = operator-((VFloat)local_68);
                    /* WARNING: Load size is inaccurate */
  bVar3 = operator==(local_78,(VFloat)*VVar5.Value);
  if (bVar3) {
    if (param_1->End < param_1->CurPos + 4) {
      TStringBuilderBase<char8_t>::Extend(param_1,4);
    }
    pvVar4 = FGenericPlatformString::Memcpy(param_1->CurPos,&s__Inf,4);
    param_1->CurPos = (uchar *)((longlong)pvVar4 + 4);
    return;
  }
  if (param_3 == Legacy) {
    VFloat::NormalizeSignedZero(&local_78);
    TStringBuilderBase<char8_t>::AppendfImpl(param_1,(uchar *)"%f");
    return;
  }
  if ((param_3 != ShortestOfFixedOrScientific) &&
     (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                        ("Format == EFloatStringFormat::ShortestOfFixedOrScientific",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\VerseVM\\VVMFloatPrinting.cpp"
                         ,0x35,L""), bVar3)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  VVar5 = VFloat::NormalizeSignedZero(&local_78);
                    /* WARNING: Load size is inaccurate */
  dVar1 = *VVar5.Value;
  pcVar11 = local_40;
  dVar7 = dVar1;
  if ((longlong)dVar1 < 0) {
    local_40[0] = '-';
    dVar7 = ABS(dVar1);
    pcVar11 = local_40 + 1;
  }
  if (((ulonglong)dVar7 & 0x7ff0000000000000) == 0x7ff0000000000000) {
    if (((ulonglong)dVar7 & 0xfffffffffffff) == 0) {
      pcVar8 = "inf";
      _Size = 3;
    }
    else if (((longlong)dVar1 < 0) && (((ulonglong)dVar7 & 0xfffffffffffff) == 0x8000000000000)) {
      pcVar8 = "nan(ind)";
      _Size = 8;
    }
    else if (((ulonglong)dVar7 & 0x8000000000000) == 0) {
      pcVar8 = "nan(snan)";
      _Size = 9;
    }
    else {
      pcVar8 = "nan";
      _Size = 3;
    }
    if ((longlong)_Size <= (longlong)&local_20 - (longlong)pcVar11) {
      memcpy(pcVar11,pcVar8,_Size);
      pcVar11 = pcVar11 + _Size;
LAB_142297e61:
      for (pcVar8 = local_40; pcVar8 != pcVar11; pcVar8 = pcVar8 + 1) {
        if ((*pcVar8 == '.') || (*pcVar8 == 'e')) goto LAB_142297ec5;
      }
      if ((&local_20 <= pcVar11 + 2) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("Result.ptr + 2 < BufferEnd",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\VerseVM\\VVMFloatPrinting.cpp"
                             ,0x52,L""), bVar3)) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      pcVar11[0] = '.';
      pcVar11[1] = '0';
      pcVar11 = pcVar11 + 2;
LAB_142297ec5:
      *pcVar11 = '\0';
      iVar10 = (int)((longlong)pcVar11 - (longlong)local_40);
      uVar9 = (ulong64)iVar10;
      if (((longlong)pcVar11 - (longlong)local_40 != uVar9) &&
         (bVar3 = ::FDebug::CheckVerifyFailedImpl2
                            ("IntFitsIn<OutType>(In)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Templates\\UnrealTemplate.h"
                             ,0xaa,L"Loss of data caused by narrowing conversion, In = %lld"), bVar3
         )) {
        pcVar2 = (code *)swi(3);
        (*pcVar2)();
        return;
      }
      if (param_1->End < param_1->CurPos + uVar9) {
        TStringBuilderBase<char8_t>::Extend(param_1,uVar9);
      }
      if (iVar10 == 0) {
        return;
      }
      pvVar4 = FGenericPlatformString::Memcpy(param_1->CurPos,local_40,uVar9);
      param_1->CurPos = (uchar *)((longlong)pvVar4 + uVar9);
      return;
    }
  }
  else {
    ppVar6 = std::__d2s_buffered_n<char>(&local_50,pcVar11,(char *)&local_20,dVar7,0);
    pcVar11 = ppVar6->first;
    if (ppVar6->second == 0) goto LAB_142297e61;
  }
  bVar3 = UE::Assert::Private::ExecCheckImplInternal
                    (&bGEnsureHasExecuted<5580087447301128254>,false,
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\VerseVM\\VVMFloatPrinting.cpp"
                     ,0x3e,"Result.ec == std::errc{}");
  if (!bVar3) {
    if (param_1->End < param_1->CurPos + 0x15) {
      TStringBuilderBase<char8_t>::Extend(param_1,0x15);
    }
    pvVar4 = FGenericPlatformString::Memcpy(param_1->CurPos,"<std::to_chars error>",0x15);
    param_1->CurPos = (uchar *)((longlong)pvVar4 + 0x15);
    return;
  }
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}

// ClassHasInstancesAsyncLoading @ 142298290

bool __cdecl ClassHasInstancesAsyncLoading(UClass *param_1)

{
  longlong lVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  int iVar5;
  FUObjectHashTables *lpCriticalSection;
  TIterator *pTVar6;
  longlong *plVar7;
  FUObjectItem *pFVar8;
  uint uVar9;
  ulonglong uVar10;
  ulonglong *puVar11;
  ulonglong *puVar12;
  longlong *plVar13;
  FUObjectHashTables *lpCriticalSection_00;
  ulonglong *puVar14;
  FScriptContainerElement *pFVar15;
  ForAnyElementType FVar16;
  ulonglong *puVar17;
  undefined1 local_res10 [8];
  uint local_res18;
  FScriptContainerElement *local_res20;
  TArray<UClass_const_*,TSizedDefaultAllocator<32>_> local_f8;
  ulonglong *local_e8;
  longlong *local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_d8;
  TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *pTStack_b8;
  char local_b0;
  char local_af;
  char local_ae;
  FUObjectHashTables *local_a8;
  TIterator local_a0;
  TIterator local_70;
  
  lpCriticalSection_00 = (FUObjectHashTables *)0x0;
  local_f8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_f8.ArrayNum = 0;
  local_f8.ArrayMax = 0;
  iVar5 = UE::Core::Private::
          ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                    (0x808,&local_f8.AllocatorInstance,&local_f8.ArrayMax);
  local_f8.ArrayNum = iVar5 + 1;
  *(UClass **)(local_f8.AllocatorInstance.Data + (longlong)iVar5 * 8) = param_1;
  lpCriticalSection = FUObjectHashTables::Get();
  local_a8 = lpCriticalSection;
  bVar4 = IsGarbageCollectingAndLockingUObjectHashTables();
  if ((!bVar4) || (bVar4 = IsInGameThread(), !bVar4)) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    lpCriticalSection_00 = lpCriticalSection;
  }
  RecursivelyPopulateDerivedClasses<UClass_const_*,TSizedDefaultAllocator<32>_>
            (lpCriticalSection,param_1,&local_f8);
  uVar10 = (ulonglong)local_f8.ArrayNum;
  local_res18 = local_f8.ArrayNum;
  pFVar15 = local_f8.AllocatorInstance.Data + uVar10 * 8;
  FVar16.Data = local_f8.AllocatorInstance.Data;
  local_res20 = pFVar15;
  do {
    puVar17 = (ulonglong *)0x0;
    if (local_f8.ArrayNum != (int)uVar10) {
      `TCheckedPointerIterator<UClass_const_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res10);
    }
    if (FVar16.Data == pFVar15) {
      bVar4 = false;
LAB_142298594:
      if (lpCriticalSection_00 != (FUObjectHashTables *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      }
      if (local_f8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_f8.AllocatorInstance.Data);
      }
      return bVar4;
    }
    uVar10 = *(ulonglong *)FVar16.Data;
    uVar9 = ((uint)(uVar10 >> 0x14) & 0xffff ^ (uint)(uVar10 >> 4)) * -0x7a143595;
    uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
    puVar11 = puVar17;
    if ((int)(lpCriticalSection->ClassToObjectListMap)._padding_ !=
        *(int *)((longlong)&(lpCriticalSection->ClassToObjectListMap)._padding_ + 4)) {
      plVar7 = (longlong *)(lpCriticalSection->ClassToObjectListMap)._padding_;
      plVar13 = &(lpCriticalSection->ClassToObjectListMap)._padding_;
      if (plVar7 != (longlong *)0x0) {
        plVar13 = plVar7;
      }
      iVar5 = *(int *)((longlong)plVar13 +
                      (ulonglong)
                      ((int)(lpCriticalSection->ClassToObjectListMap)._padding_ - 1U &
                      (uVar9 >> 0x10 ^ uVar9)) * 4);
      if (iVar5 != -1) {
        do {
          puVar11 = (ulonglong *)
                    ((longlong)iVar5 * 0x20 + (lpCriticalSection->ClassToObjectListMap)._padding_);
          if (*puVar11 == uVar10) break;
          iVar5 = (int)puVar11[3];
          puVar11 = puVar17;
        } while (iVar5 != -1);
      }
    }
    puVar14 = puVar11 + 1;
    if (puVar11 == (ulonglong *)0x0) {
      puVar14 = puVar17;
    }
    if (puVar14 != (ulonglong *)0x0) {
      local_e8 = puVar14;
      if (((TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)puVar14[1]
           == (TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)0x0) ||
         (*puVar14 != 0)) {
        TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::TIterator::
        TIterator(&local_70,&FSetHashBucket::EmptyBucket);
        pTVar6 = &local_70;
      }
      else {
        TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::TIterator::
        TIterator(&local_a0,
                  (TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)
                  puVar14[1]);
        pTVar6 = &local_a0;
      }
      local_e0 = (longlong *)pTVar6->_padding_;
      TStack_d8._padding_ = pTVar6->_padding_;
      TStack_d8.Array = (TBitArray<FDefaultBitArrayAllocator> *)pTVar6->_padding_;
      TStack_d8._16_8_ = pTVar6->_padding_;
      TStack_d8._24_8_ = pTVar6->_padding_;
      pTStack_b8 = pTVar6->Set;
      puVar11 = (ulonglong *)puVar14[1];
      if ((puVar11 == (ulonglong *)0x0) || (puVar12 = puVar11, *puVar14 != 0)) {
        puVar12 = puVar17;
      }
      local_b0 = puVar12 != (ulonglong *)0x0;
      if ((*puVar14 == 0) && (puVar11 == (ulonglong *)0x0)) {
        local_af = '\x01';
      }
      else {
        local_af = '\0';
      }
      local_ae = '\0';
      do {
        cVar2 = local_b0;
        iVar5 = TStack_d8.CurrentBitIndex;
        while( true ) {
          cVar3 = local_ae;
          if (cVar2 == '\0') {
            bVar4 = local_af == '\0';
          }
          else {
            bVar4 = iVar5 < (TStack_d8.Array)->NumBits;
          }
          pFVar15 = local_res20;
          if (!bVar4) goto LAB_14229857c;
          if (cVar2 == '\0') {
            plVar7 = (longlong *)((ulonglong)(-(uint)(local_ae != '\0') & 8) + (longlong)puVar14);
          }
          else {
            plVar7 = (longlong *)((longlong)iVar5 * 0x10 + *local_e0);
          }
          lVar1 = *plVar7;
          pFVar8 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(lVar1 + 0xc));
          if (((((pFVar8->field0_0x0).FlagsAndRefCount >> 0x20 & 0x8400000U) != 0) &&
              (pFVar8 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(lVar1 + 0xc)),
              ((uint)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x35) & 1) == 0)) &&
             ((*(uint *)(lVar1 + 8) & 0x10) == 0)) {
            bVar4 = true;
            goto LAB_142298594;
          }
          if (cVar2 != '\0') break;
          if ((cVar3 == '\0') && (puVar14[1] != 0)) {
            local_af = '\0';
            local_ae = '\x01';
          }
          else {
            local_af = '\x01';
            local_ae = '\x01';
          }
        }
        TStack_d8.UnvisitedBitMask = TStack_d8.UnvisitedBitMask & ~TStack_d8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_d8);
        puVar14 = local_e8;
      } while( true );
    }
LAB_14229857c:
    FVar16.Data = FVar16.Data + 8;
    uVar10 = (ulonglong)local_res18;
    lpCriticalSection = local_a8;
  } while( true );
}

// CleanupLinkerAnnotations @ 1422985e0

void __cdecl CleanupLinkerAnnotations(void)

{
  FUObjectAnnotationChunked<FLinkerIndexPair,0,65536>::RemoveAllAnnotations(&LinkerAnnotation);
  return;
}

// DoesObjectPossiblyExist @ 142299e40

bool __cdecl DoesObjectPossiblyExist(UObject *param_1,FName param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined1 uVar3;
  uint uVar4;
  FUObjectHashTables *lpCriticalSection;
  int iVar5;
  undefined1 *puVar6;
  FUObjectHashTables *lpCriticalSection_00;
  
  lpCriticalSection = FUObjectHashTables::Get();
  if (param_1 == (UObject *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("InOuter != nullptr",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectHash.cpp"
                       ,0x496,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      uVar3 = (*pcVar1)();
      return (bool)uVar3;
    }
  }
  uVar4 = GetTypeHash(param_2.ComparisonIndex.Value);
  uVar4 = (int)((longlong)param_1 >> 6) + uVar4 + param_2.Number;
  bVar2 = IsGarbageCollectingAndLockingUObjectHashTables();
  if (bVar2) {
    bVar2 = IsInGameThread();
    if (bVar2) {
      lpCriticalSection_00 = (FUObjectHashTables *)0x0;
      goto LAB_142299ebd;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  lpCriticalSection_00 = lpCriticalSection;
LAB_142299ebd:
  if (*(int *)&(lpCriticalSection->HashOuter).field_0x8 !=
      *(int *)&(lpCriticalSection->HashOuter).field_0x34) {
    puVar6 = *(undefined1 **)&(lpCriticalSection->HashOuter).field_0x40;
    if (puVar6 == (undefined1 *)0x0) {
      puVar6 = &(lpCriticalSection->HashOuter).field_0x38;
    }
    iVar5 = *(int *)(puVar6 + (ulonglong)
                              (*(int *)&(lpCriticalSection->HashOuter).field_0x48 - 1U & uVar4) * 4)
    ;
    if (iVar5 != -1) {
      do {
        if (*(uint *)(*(longlong *)&lpCriticalSection->HashOuter + (longlong)iVar5 * 0x10) == uVar4)
        goto LAB_142299f19;
        iVar5 = *(int *)(*(longlong *)&lpCriticalSection->HashOuter + 8 + (longlong)iVar5 * 0x10);
      } while (iVar5 != -1);
    }
  }
  iVar5 = -1;
LAB_142299f19:
  if (lpCriticalSection_00 != (FUObjectHashTables *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
  }
  return iVar5 != -1;
}

// FindObjectWithOuter @ 14229ad10

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObjectBase * __cdecl FindObjectWithOuter(UObjectBase *param_1,UClass *param_2,FName param_3)

{
  int iVar1;
  FName FVar2;
  void *pvVar3;
  code *pcVar4;
  longlong *plVar5;
  int iVar6;
  char cVar7;
  char cVar8;
  bool bVar9;
  EInternalObjectFlags EVar10;
  UObjectBase *pUVar11;
  FName *pFVar12;
  FThreadSafeStaticStat<FStat_STAT_FindObjectFast> FVar13;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  FUObjectHashTables *pFVar14;
  FUObjectHashTables *pFVar15;
  FSetHashBucket *pFVar16;
  TIterator *pTVar17;
  FUObjectHashTables *pFVar18;
  FUObjectItem *pFVar19;
  undefined8 *puVar20;
  FUObjectHashTables *lpCriticalSection;
  FName local_res20;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f8;
  TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *pTStack_d8;
  char local_d0;
  char local_cf;
  char local_ce;
  FStatMessage local_c8;
  FName local_b8;
  TIterator local_b0;
  TIterator local_80;
  
  pFVar14 = (FUObjectHashTables *)0x0;
  if ((param_1 == (UObjectBase *)0x0) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("Outer",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectHash.cpp"
                         ,0x688,L""), bVar9)) {
    pcVar4 = (code *)swi(3);
    pUVar11 = (UObjectBase *)(*pcVar4)();
    return pUVar11;
  }
  EVar10 = UE::GetAsyncLoadingInternalFlagsExclusion();
  if (param_3 == (FName)0x0) {
    pFVar15 = FUObjectHashTables::Get();
    bVar9 = IsGarbageCollectingAndLockingUObjectHashTables();
    if ((!bVar9) || (bVar9 = IsInGameThread(), lpCriticalSection = pFVar14, !bVar9)) {
      EnterCriticalSection((LPCRITICAL_SECTION)pFVar15);
      lpCriticalSection = pFVar15;
    }
    pFVar16 = TMapBase<UObjectBase_*,FSetHashBucket,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_*,FSetHashBucket,0>_>
              ::Find((TMapBase<UObjectBase_*,FSetHashBucket,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_*,FSetHashBucket,0>_>
                      *)&pFVar15->ObjectOuterMap,param_1);
    pFVar15 = pFVar14;
    if (pFVar16 != (FSetHashBucket *)0x0) {
      if ((pFVar16->Elements[1] == (FUObjectHashTables *)0x0) ||
         (pFVar15 = pFVar16->Elements[1], pFVar16->Elements[0] != (void *)0x0)) {
        pFVar15 = pFVar14;
      }
      if (pFVar15 == (FUObjectHashTables *)0x0) {
        TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::TIterator::
        TIterator(&local_80,&FSetHashBucket::EmptyBucket);
        pTVar17 = &local_80;
      }
      else {
        TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::TIterator::
        TIterator(&local_b0,
                  (TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)
                  pFVar15);
        pTVar17 = &local_b0;
      }
      plVar5 = (longlong *)pTVar17->_padding_;
      TStack_f8._padding_ = pTVar17->_padding_;
      pFVar15 = pFVar16->Elements[1];
      TStack_f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)pTVar17->_padding_;
      TStack_f8._16_8_ = pTVar17->_padding_;
      TStack_f8._24_8_ = pTVar17->_padding_;
      pTStack_d8 = pTVar17->Set;
      if ((pFVar15 == (FUObjectHashTables *)0x0) ||
         (pFVar18 = pFVar15, pFVar16->Elements[0] != (void *)0x0)) {
        pFVar18 = pFVar14;
      }
      local_d0 = pFVar18 != (FUObjectHashTables *)0x0;
      if ((pFVar16->Elements[0] == (void *)0x0) && (pFVar15 == (FUObjectHashTables *)0x0)) {
        local_cf = '\x01';
      }
      else {
        local_cf = '\0';
      }
      local_ce = '\0';
      do {
        cVar7 = local_d0;
        iVar6 = TStack_f8.CurrentBitIndex;
LAB_14229aff0:
        cVar8 = local_ce;
        if (cVar7 == '\0') {
          bVar9 = local_cf == '\0';
        }
        else {
          bVar9 = iVar6 < (TStack_f8.Array)->NumBits;
        }
        pFVar15 = pFVar14;
        if (!bVar9) break;
        if (cVar7 == '\0') {
          puVar20 = (undefined8 *)
                    ((longlong)pFVar16->Elements + (ulonglong)(-(uint)(local_ce != '\0') & 8));
        }
        else {
          puVar20 = (undefined8 *)((longlong)iVar6 * 0x10 + *plVar5);
        }
        pFVar15 = (FUObjectHashTables *)*puVar20;
        pFVar19 = FUObjectArray::IndexToObject
                            (&GUObjectArray,(pFVar15->CriticalSection).CriticalSection.Opaque2[1]);
        if (((EVar10 | (Unreachable|AutoRTFMConstructionAborted)) &
            (EInternalObjectFlags)((ulonglong)(pFVar19->field0_0x0).FlagsAndRefCount >> 0x20)) ==
            Borrowed) {
          if (param_2 != (UClass *)0x0) {
            pvVar3 = (pFVar15->CriticalSection).CriticalSection.Opaque3[0];
            iVar1 = (int)param_2->_padding_;
            if ((*(int *)((longlong)pvVar3 + 0x38) < iVar1) ||
               ((longlong *)
                *(undefined1 **)(*(longlong *)((longlong)pvVar3 + 0x30) + (longlong)iVar1 * 8) !=
                &param_2->_padding_)) goto LAB_14229b078;
          }
          if (UE::GC::GIsIncrementalReachabilityPending != false) {
            UE::GC::MarkAsReachable((UObject *)pFVar15);
          }
          break;
        }
LAB_14229b078:
        if (cVar7 == '\0') {
          if ((cVar8 == '\0') && (pFVar16->Elements[1] != (void *)0x0)) {
            local_cf = '\0';
            local_ce = '\x01';
          }
          else {
            local_cf = '\x01';
            local_ce = '\x01';
          }
          goto LAB_14229aff0;
        }
        TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f8);
      } while( true );
    }
    if (lpCriticalSection != (FUObjectHashTables *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    }
  }
  else {
    if (FThreadStats::bPrimaryEnable != false) {
      FVar13 = StatPtr_STAT_FindObjectFast;
      if (StatPtr_STAT_FindObjectFast == (FThreadSafeStaticStat<FStat_STAT_FindObjectFast>)0x0) {
        pFVar12 = FName::FName(&local_b8,"STAT_FindObjectFast");
        FVar13 = (FThreadSafeStaticStat<FStat_STAT_FindObjectFast>)
                 FThreadSafeStaticStatBase::DoSetup
                           ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FindObjectFast,*pFVar12,
                            L"FindObjectFast","STATGROUP_ObjectVerbose","STATCAT_Advanced",
                            L"ObjectVerbose",false,true,ST_int64,false,false,MCR_Invalid);
      }
      FVar2 = *(FName *)FVar13;
      if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
         (FThreadStats::TlsSlot != 0xffffffff)) {
        this = TlsGetValue(FThreadStats::TlsSlot);
        if (this == (FThreadStats *)0x0) {
          this_00 = FThreadStatsPool::Get();
          this = FThreadStatsPool::GetFromPool(this_00);
        }
        local_c8.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
        local_c8.StatData.Pad[0] = '\x01';
        local_c8.StatData.Pad[1] = '\0';
        local_c8.StatData.Pad[2] = '\0';
        local_c8.StatData.Pad[3] = '\0';
        local_c8.StatData.Pad[4] = '\0';
        local_c8.StatData.Pad[5] = '\0';
        local_c8.StatData.Pad[6] = '\0';
        local_c8.StatData.Pad[7] = '\0';
        local_res20 = FVar2;
        local_c8.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
        FThreadStats::AddStatMessage(this,&local_c8);
        FStatsTrace::Add(&local_res20,1);
        if (this->ScopeCount == 0) {
          FThreadStats::Flush(this,false,false);
        }
        else if (FThreadStats::bIsRawStatsActive != false) {
          FThreadStats::FlushRawStats(this,false,false);
        }
      }
    }
    pFVar14 = FUObjectHashTables::Get();
    pFVar15 = (FUObjectHashTables *)
              StaticFindObjectFastInternalThreadSafe
                        (pFVar14,param_2,(UObject *)param_1,param_3,None,RF_NoFlags,
                         EVar10 | (Unreachable|AutoRTFMConstructionAborted));
  }
  return (UObjectBase *)pFVar15;
}

// ForEachObjectOfClass @ 14229b130

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
ForEachObjectOfClass
          (UClass *param_1,TFunctionRef<void___cdecl(UObject_*)> *param_2,bool param_3,
          EObjectFlags param_4,EInternalObjectFlags param_5)

{
  ulonglong uVar1;
  UObject *pUVar2;
  code *pcVar3;
  int *piVar4;
  uchar uVar5;
  uchar uVar6;
  uchar auVar7 [8];
  bool bVar8;
  int iVar9;
  EInternalObjectFlags EVar10;
  ForElementType<UClass_const_*> FVar11;
  TIterator *pTVar12;
  ulonglong *puVar13;
  undefined8 *puVar14;
  FUObjectItem *pFVar15;
  uint uVar16;
  ulonglong *puVar17;
  longlong *plVar18;
  ForElementType<UClass_const_*> lpCriticalSection;
  char cVar19;
  char cVar20;
  ulonglong *puVar21;
  ulonglong *puVar22;
  longlong lVar23;
  bool bVar24;
  undefined1 auStack_208 [32];
  undefined1 *local_1e8;
  TArray<UClass_const_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  char local_1b8;
  char local_1b7;
  undefined1 local_1b0 [24];
  ForElementType<UClass_const_*> local_198;
  ulonglong *local_188;
  longlong *local_180;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_178;
  TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *pTStack_158;
  uchar local_150;
  uchar local_14f;
  uchar local_14e;
  code *local_148;
  uchar local_140 [8];
  UObject *local_138;
  ForElementType<UClass_const_*> local_130;
  ForElementType<UClass_const_*> local_128;
  TIterator local_120;
  TIterator local_f0;
  TArray<UClass_const_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> local_c0;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStack_208;
  bVar24 = CpuChannel->Enabled < 0;
  local_1b0._0_8_ = param_1;
  local_1b0._8_4_ = param_4;
  if (bVar24) {
    local_1b7 = '\0';
  }
  else {
    local_1b7 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1858,"ForEachObjectOfClass",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectHash.cpp"
               ,0x742);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1858);
  }
  local_c0.ArrayMax = 0x10;
  local_c0.AllocatorInstance.SecondaryData = (ForElementType<UClass_const_*>)0x0;
  local_c0.ArrayNum = 0;
  iVar9 = 0;
  if ((&local_c0 <=
       (TArray<UClass_const_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_> *)local_1b0
      ) && (local_1b0 < &local_c0.AllocatorInstance.SecondaryData)) {
    local_1c8 = 8;
    local_1e0 = &local_c0;
    local_1d0 = 0;
    local_1d8 = 0x10;
    local_1e8 = local_1b0;
    bVar8 = FDebug::CheckVerifyFailedImpl2
                      ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                       ,0x7a5,
                       L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                      );
    if (bVar8) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    iVar9 = local_c0.ArrayNum;
    if (local_c0.ArrayNum == local_c0.ArrayMax) {
      iVar9 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>::ForElementType<UClass_const_*>_>
                        (0x808,&local_c0.AllocatorInstance,&local_c0.ArrayMax);
    }
  }
  local_c0.ArrayNum = iVar9 + 1;
  FVar11 = (ForElementType<UClass_const_*>)&local_c0;
  if (local_c0.AllocatorInstance.SecondaryData != (ForElementType<UClass_const_*>)0x0) {
    FVar11 = local_c0.AllocatorInstance.SecondaryData;
  }
  *(undefined8 *)((longlong)FVar11 + (longlong)iVar9 * 8) = local_1b0._0_8_;
  FVar11 = (ForElementType<UClass_const_*>)FUObjectHashTables::Get();
  local_130 = FVar11;
  bVar8 = IsGarbageCollectingAndLockingUObjectHashTables();
  if ((bVar8) && (bVar8 = IsInGameThread(), bVar8)) {
    local_198 = (ForElementType<UClass_const_*>)0x0;
    lpCriticalSection = (ForElementType<UClass_const_*>)0x0;
  }
  else {
    local_198 = FVar11;
    EnterCriticalSection((LPCRITICAL_SECTION)FVar11);
    lpCriticalSection = FVar11;
  }
  if (param_3) {
    RecursivelyPopulateDerivedClasses<UClass_const_*,TSizedInlineAllocator<16,32,TSizedDefaultAllocator<32>_>_>
              ((FUObjectHashTables *)FVar11,(UClass *)local_1b0._0_8_,&local_c0);
  }
  local_148 = *(code **)param_2;
  lVar23 = (longlong)local_c0.ArrayNum;
  local_140[0] = param_2->field_0x8;
  local_140[1] = param_2->field_0x9;
  local_140[2] = param_2->field_0xa;
  local_140[3] = param_2->field_0xb;
  local_140[4] = param_2->field_0xc;
  local_140[5] = param_2->field_0xd;
  local_140[6] = param_2->field_0xe;
  local_140[7] = param_2->field_0xf;
  local_1b0._16_8_ = &local_c0;
  if (local_c0.AllocatorInstance.SecondaryData != (ForElementType<UClass_const_*>)0x0) {
    local_1b0._16_8_ = local_c0.AllocatorInstance.SecondaryData;
  }
  if ((local_c0.ArrayNum < 0) &&
     (bVar8 = FDebug::CheckVerifyFailedImpl2
                        ("InCount >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\ArrayView.h"
                         ,0xeb,L""), bVar8)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  bVar8 = CpuChannel->Enabled < 0;
  if (bVar8) {
    local_1b8 = '\0';
  }
  else {
    local_1b8 = '\x01';
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`void___cdecl_ForEachObjectOfClasses_Implementation(FUObjectHashTables&___ptr64,TArrayView<UClass_const*___ptr64_const,int>,TFunctionRef<void___cdecl(UObject*___ptr64)>,EObjectFlags,EInternalObjectFlags)'
                ::__l2::__CpuProfilerEventSpecId1828,"ForEachObjectOfClasses_Implementation",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectHash.cpp"
               ,0x724);
    FCpuProfilerTrace::OutputBeginEvent
              (`void___cdecl_ForEachObjectOfClasses_Implementation(FUObjectHashTables&___ptr64,TArrayView<UClass_const*___ptr64_const,int>,TFunctionRef<void___cdecl(UObject*___ptr64)>,EObjectFlags,EInternalObjectFlags)'
               ::__l2::__CpuProfilerEventSpecId1828);
  }
  EVar10 = UE::GetAsyncLoadingInternalFlagsExclusion();
  auVar7 = local_140;
  pcVar3 = local_148;
  local_1b0._12_4_ = EVar10 | param_5 | (Unreachable|AutoRTFMConstructionAborted);
  *(int *)((longlong)FVar11 + 0x178) = *(int *)((longlong)FVar11 + 0x178) + 1;
  local_128 = (ForElementType<UClass_const_*>)(local_1b0._16_8_ + lVar23 * 8);
  cVar19 = !bVar24;
  cVar20 = !bVar8;
  if ((ForElementType<UClass_const_*>)local_1b0._16_8_ != local_128) {
    do {
      puVar21 = (ulonglong *)0x0;
      uVar1 = *(ulonglong *)local_1b0._16_8_;
      uVar16 = ((uint)(uVar1 >> 0x14) & 0xffff ^ (uint)(uVar1 >> 4)) * -0x7a143595;
      uVar16 = (uVar16 >> 0xd ^ uVar16) * -0x3d4d51cb;
      puVar17 = puVar21;
      if (*(int *)((longlong)FVar11 + 0x130) != *(int *)((longlong)FVar11 + 0x15c)) {
        plVar18 = (longlong *)((longlong)FVar11 + 0x160);
        if (*(longlong **)((longlong)FVar11 + 0x168) != (longlong *)0x0) {
          plVar18 = *(longlong **)((longlong)FVar11 + 0x168);
        }
        iVar9 = *(int *)((longlong)plVar18 +
                        (ulonglong)
                        (*(int *)((longlong)FVar11 + 0x170) - 1U & (uVar16 >> 0x10 ^ uVar16)) * 4);
        if (iVar9 != -1) {
          do {
            puVar17 = (ulonglong *)
                      ((longlong)iVar9 * 0x20 +
                      ((TBucketMap<UClass_*,FSetHashBucket> *)((longlong)FVar11 + 0x128))->_padding_
                      );
            if (*puVar17 == uVar1) break;
            iVar9 = (int)puVar17[3];
            puVar17 = puVar21;
          } while (iVar9 != -1);
        }
      }
      puVar22 = puVar17 + 1;
      if (puVar17 == (ulonglong *)0x0) {
        puVar22 = puVar21;
      }
      if (puVar22 != (ulonglong *)0x0) {
        local_188 = puVar22;
        if (((TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)puVar22[1]
             == (TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)0x0) ||
           (*puVar22 != 0)) {
          TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::TIterator::
          TIterator(&local_f0,&FSetHashBucket::EmptyBucket);
          pTVar12 = &local_f0;
        }
        else {
          TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::TIterator::
          TIterator(&local_120,
                    (TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)
                    puVar22[1]);
          pTVar12 = &local_120;
        }
        local_180 = (longlong *)pTVar12->_padding_;
        TStack_178._padding_ = pTVar12->_padding_;
        puVar17 = (ulonglong *)puVar22[1];
        TStack_178.Array = (TBitArray<FDefaultBitArrayAllocator> *)pTVar12->_padding_;
        TStack_178._16_8_ = pTVar12->_padding_;
        TStack_178._24_8_ = pTVar12->_padding_;
        pTStack_158 = pTVar12->Set;
        if ((puVar17 == (ulonglong *)0x0) || (puVar13 = puVar17, *puVar22 != 0)) {
          puVar13 = puVar21;
        }
        local_150 = puVar13 != (ulonglong *)0x0;
        if ((*puVar22 == 0) && (puVar17 == (ulonglong *)0x0)) {
          local_14f = '\x01';
        }
        else {
          local_14f = '\0';
        }
        local_14e = '\0';
        do {
          uVar5 = local_150;
          iVar9 = TStack_178.CurrentBitIndex;
          while( true ) {
            uVar6 = local_14e;
            if (uVar5 == '\0') {
              bVar24 = local_14f == '\0';
            }
            else {
              bVar24 = iVar9 < (TStack_178.Array)->NumBits;
            }
            FVar11 = local_130;
            if (!bVar24) goto LAB_14229b611;
            if (uVar5 == '\0') {
              puVar14 = (undefined8 *)
                        ((ulonglong)(-(uint)(local_14e != '\0') & 8) + (longlong)puVar22);
            }
            else {
              puVar14 = (undefined8 *)((longlong)iVar9 * 0x10 + *local_180);
            }
            pUVar2 = (UObject *)*puVar14;
            if (((local_1b0._8_4_ & *(EObjectFlags *)&pUVar2->field_0x8) == RF_NoFlags) &&
               (pFVar15 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar2->field_0xc),
               (local_1b0._12_4_ &
               (EInternalObjectFlags)((ulonglong)(pFVar15->field0_0x0).FlagsAndRefCount >> 0x20)) ==
               Borrowed)) {
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable(pUVar2);
              }
              local_138 = pUVar2;
              (*pcVar3)(auVar7,&local_138);
            }
            if (uVar5 != '\0') break;
            if ((uVar6 == '\0') && (puVar22[1] != 0)) {
              local_14f = '\0';
              local_14e = '\x01';
            }
            else {
              local_14f = '\x01';
              local_14e = '\x01';
            }
          }
          TStack_178.UnvisitedBitMask = TStack_178.UnvisitedBitMask & ~TStack_178._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_178);
          puVar22 = local_188;
        } while( true );
      }
LAB_14229b611:
      local_1b0._16_8_ = local_1b0._16_8_ + 8;
      lpCriticalSection = local_198;
      cVar19 = local_1b7;
      cVar20 = local_1b8;
    } while ((ForElementType<UClass_const_*>)local_1b0._16_8_ != local_128);
  }
  piVar4 = (int *)((longlong)FVar11 + 0x178);
  *piVar4 = *piVar4 + -1;
  if ((*piVar4 < 0) &&
     (bVar24 = FDebug::CheckVerifyFailedImpl2
                         ("ReadOnlyLock >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectHash.cpp"
                          ,0x25d,L""), bVar24)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (cVar20 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (lpCriticalSection != (ForElementType<UClass_const_*>)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  if (local_c0.AllocatorInstance.SecondaryData != (ForElementType<UClass_const_*>)0x0) {
    FMemory::Free((void *)local_c0.AllocatorInstance.SecondaryData);
  }
  if (cVar19 != '\0') {
    FCpuProfilerTrace::OutputEndEvent();
  }
  return;
}

// ForEachObjectOfClasses @ 14229b6f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
ForEachObjectOfClasses
          (TArrayView<UClass_const_*_const,int> *param_1,
          TFunctionRef<void___cdecl(UObject_*)> *param_2,EObjectFlags param_3,
          EInternalObjectFlags param_4)

{
  int *piVar1;
  UClass *pUVar2;
  longlong *plVar3;
  UObject *pUVar4;
  code *pcVar5;
  undefined8 uVar6;
  UObject *pUVar7;
  char cVar8;
  char cVar9;
  bool bVar10;
  bool bVar11;
  EInternalObjectFlags EVar12;
  int iVar13;
  FUObjectHashTables *lpCriticalSection;
  TIterator *pTVar14;
  ulonglong *puVar15;
  undefined8 *puVar16;
  FUObjectItem *pFVar17;
  uint uVar18;
  ulonglong *puVar19;
  longlong *plVar20;
  FUObjectHashTables *lpCriticalSection_00;
  UClass **ppUVar21;
  ulonglong *puVar22;
  ulonglong *puVar23;
  UObject *local_128;
  FUObjectHashTables *local_120;
  ulonglong *local_118;
  longlong *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *pTStack_e8;
  char local_e0;
  char local_df;
  char local_de;
  code *local_d8;
  FUObjectHashTables *local_d0;
  UClass **local_c8;
  UClass **local_b8;
  undefined8 uStack_b0;
  TIterator local_a8;
  TIterator local_78;
  
  lpCriticalSection = FUObjectHashTables::Get();
  local_d0 = lpCriticalSection;
  bVar10 = IsGarbageCollectingAndLockingUObjectHashTables();
  if ((bVar10) && (bVar10 = IsInGameThread(), bVar10)) {
    local_120 = (FUObjectHashTables *)0x0;
    lpCriticalSection_00 = (FUObjectHashTables *)0x0;
  }
  else {
    local_120 = lpCriticalSection;
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    lpCriticalSection_00 = lpCriticalSection;
  }
  local_d8 = *(code **)param_2;
  local_b8 = param_1->DataPtr;
  uStack_b0 = *(undefined8 *)&param_1->ArrayNum;
  local_128 = *(UObject **)&param_2->field_0x8;
  bVar10 = -1 < CpuChannel->Enabled;
  if (bVar10) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&`void___cdecl_ForEachObjectOfClasses_Implementation(FUObjectHashTables&___ptr64,TArrayView<UClass_const*___ptr64_const,int>,TFunctionRef<void___cdecl(UObject*___ptr64)>,EObjectFlags,EInternalObjectFlags)'
                ::__l2::__CpuProfilerEventSpecId1828,"ForEachObjectOfClasses_Implementation",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectHash.cpp"
               ,0x724);
    FCpuProfilerTrace::OutputBeginEvent
              (`void___cdecl_ForEachObjectOfClasses_Implementation(FUObjectHashTables&___ptr64,TArrayView<UClass_const*___ptr64_const,int>,TFunctionRef<void___cdecl(UObject*___ptr64)>,EObjectFlags,EInternalObjectFlags)'
               ::__l2::__CpuProfilerEventSpecId1828);
  }
  EVar12 = UE::GetAsyncLoadingInternalFlagsExclusion();
  pcVar5 = local_d8;
  pUVar7 = local_128;
  ppUVar21 = param_1->DataPtr;
  uVar6 = *(undefined8 *)&param_1->ArrayNum;
  piVar1 = &(lpCriticalSection->ClassToObjectListMap).ReadOnlyLock;
  *piVar1 = *piVar1 + 1;
  local_c8 = ppUVar21 + (int)uVar6;
  if (ppUVar21 != local_c8) {
    do {
      puVar22 = (ulonglong *)0x0;
      pUVar2 = *ppUVar21;
      uVar18 = ((uint)((ulonglong)pUVar2 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar2 >> 4)) *
               -0x7a143595;
      uVar18 = (uVar18 >> 0xd ^ uVar18) * -0x3d4d51cb;
      puVar19 = puVar22;
      if ((int)(lpCriticalSection->ClassToObjectListMap)._padding_ !=
          *(int *)((longlong)&(lpCriticalSection->ClassToObjectListMap)._padding_ + 4)) {
        plVar3 = (longlong *)(lpCriticalSection->ClassToObjectListMap)._padding_;
        plVar20 = &(lpCriticalSection->ClassToObjectListMap)._padding_;
        if (plVar3 != (longlong *)0x0) {
          plVar20 = plVar3;
        }
        iVar13 = *(int *)((longlong)plVar20 +
                         (ulonglong)
                         ((int)(lpCriticalSection->ClassToObjectListMap)._padding_ - 1U &
                         (uVar18 >> 0x10 ^ uVar18)) * 4);
        if (iVar13 != -1) {
          do {
            puVar19 = (ulonglong *)
                      ((longlong)iVar13 * 0x20 + (lpCriticalSection->ClassToObjectListMap)._padding_
                      );
            if ((UClass *)*puVar19 == pUVar2) break;
            iVar13 = (int)puVar19[3];
            puVar19 = puVar22;
          } while (iVar13 != -1);
        }
      }
      puVar23 = puVar19 + 1;
      if (puVar19 == (ulonglong *)0x0) {
        puVar23 = puVar22;
      }
      if (puVar23 != (ulonglong *)0x0) {
        local_118 = puVar23;
        if (((TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)puVar23[1]
             == (TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)0x0) ||
           (*puVar23 != 0)) {
          TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::TIterator::
          TIterator(&local_78,&FSetHashBucket::EmptyBucket);
          pTVar14 = &local_78;
        }
        else {
          TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::TIterator::
          TIterator(&local_a8,
                    (TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)
                    puVar23[1]);
          pTVar14 = &local_a8;
        }
        local_110 = (longlong *)pTVar14->_padding_;
        TStack_108._padding_ = pTVar14->_padding_;
        puVar19 = (ulonglong *)puVar23[1];
        TStack_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)pTVar14->_padding_;
        TStack_108._16_8_ = pTVar14->_padding_;
        TStack_108._24_8_ = pTVar14->_padding_;
        pTStack_e8 = pTVar14->Set;
        if ((puVar19 == (ulonglong *)0x0) || (puVar15 = puVar19, *puVar23 != 0)) {
          puVar15 = puVar22;
        }
        local_e0 = puVar15 != (ulonglong *)0x0;
        if ((*puVar23 == 0) && (puVar19 == (ulonglong *)0x0)) {
          local_df = '\x01';
        }
        else {
          local_df = '\0';
        }
        local_de = '\0';
        do {
          cVar8 = local_e0;
          iVar13 = TStack_108.CurrentBitIndex;
          while( true ) {
            cVar9 = local_de;
            if (cVar8 == '\0') {
              bVar11 = local_df == '\0';
            }
            else {
              bVar11 = iVar13 < (TStack_108.Array)->NumBits;
            }
            lpCriticalSection = local_d0;
            if (!bVar11) goto LAB_14229ba4f;
            if (cVar8 == '\0') {
              puVar16 = (undefined8 *)
                        ((ulonglong)(-(uint)(local_de != '\0') & 8) + (longlong)puVar23);
            }
            else {
              puVar16 = (undefined8 *)((longlong)iVar13 * 0x10 + *local_110);
            }
            pUVar4 = (UObject *)*puVar16;
            if (((param_3 & *(EObjectFlags *)&pUVar4->field_0x8) == RF_NoFlags) &&
               (pFVar17 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar4->field_0xc),
               ((EVar12 | param_4 | (Unreachable|AutoRTFMConstructionAborted)) &
               (EInternalObjectFlags)((ulonglong)(pFVar17->field0_0x0).FlagsAndRefCount >> 0x20)) ==
               Borrowed)) {
              if (UE::GC::GIsIncrementalReachabilityPending != false) {
                UE::GC::MarkAsReachable(pUVar4);
              }
              local_128 = pUVar4;
              (*pcVar5)(pUVar7,&local_128);
            }
            if (cVar8 != '\0') break;
            if ((cVar9 == '\0') && (puVar23[1] != 0)) {
              local_df = '\0';
              local_de = '\x01';
            }
            else {
              local_df = '\x01';
              local_de = '\x01';
            }
          }
          TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
          puVar23 = local_118;
        } while( true );
      }
LAB_14229ba4f:
      ppUVar21 = ppUVar21 + 1;
      lpCriticalSection_00 = local_120;
    } while (ppUVar21 != local_c8);
  }
  piVar1 = &(lpCriticalSection->ClassToObjectListMap).ReadOnlyLock;
  *piVar1 = *piVar1 + -1;
  if ((*piVar1 < 0) &&
     (bVar11 = FDebug::CheckVerifyFailedImpl2
                         ("ReadOnlyLock >= 0",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectHash.cpp"
                          ,0x25d,L""), bVar11)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (bVar10) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (lpCriticalSection_00 != (FUObjectHashTables *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
  }
  return;
}

// ForEachObjectWithOuterBreakable @ 14229bb00

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
ForEachObjectWithOuterBreakable
          (UObjectBase *param_1,TFunctionRef<bool___cdecl(UObject_*)> *param_2,bool param_3,
          EObjectFlags param_4,EInternalObjectFlags param_5)

{
  longlong lVar1;
  int *piVar2;
  UObject *pUVar3;
  longlong *plVar4;
  code *pcVar5;
  char cVar6;
  bool bVar7;
  char cVar8;
  EInternalObjectFlags EVar9;
  int iVar10;
  FUObjectHashTables *lpCriticalSection;
  TIterator *pTVar11;
  longlong lVar12;
  FUObjectItem *pFVar13;
  ForElementType<FSetHashBucket_*> FVar14;
  uint uVar15;
  void *_Dst;
  undefined8 *puVar16;
  longlong *plVar17;
  FUObjectHashTables *lpCriticalSection_00;
  FUObjectHashTables *pFVar18;
  char cVar19;
  longlong *plVar20;
  undefined1 auStackY_178 [32];
  undefined8 *local_120;
  FSetHashBucket *local_118 [2];
  longlong *local_108;
  longlong *local_100;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_f8;
  TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *pTStack_d8;
  char local_d0;
  char local_cf;
  char local_ce;
  FUObjectHashTables *local_c8;
  UObject *local_c0;
  TIterator local_b8;
  TIterator local_88;
  ForElementType<FSetHashBucket_*> local_58;
  int local_48;
  int local_44;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_178;
  if ((param_1 == (UObjectBase *)0x0) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("Outer != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectHash.cpp"
                         ,0x651,
                         L"Getting objects with a null outer is no longer supported. If you want to get all packages you might consider using GetObjectsOfClass instead."
                        ), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  EVar9 = UE::GetAsyncLoadingInternalFlagsExclusion();
  lpCriticalSection = FUObjectHashTables::Get();
  local_c8 = lpCriticalSection;
  bVar7 = IsGarbageCollectingAndLockingUObjectHashTables();
  lpCriticalSection_00 = (FUObjectHashTables *)0x0;
  if ((!bVar7) || (bVar7 = IsInGameThread(), !bVar7)) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    lpCriticalSection_00 = lpCriticalSection;
  }
  local_58.SecondaryData = (ForElementType<FSetHashBucket_*>)0x0;
  local_48 = 0;
  local_44 = 1;
  piVar2 = &(lpCriticalSection->ObjectOuterMap).ReadOnlyLock;
  *piVar2 = *piVar2 + 1;
  local_118[0] = TMapBase<UObjectBase_*,FSetHashBucket,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_*,FSetHashBucket,0>_>
                 ::Find((TMapBase<UObjectBase_*,FSetHashBucket,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_*,FSetHashBucket,0>_>
                         *)&lpCriticalSection->ObjectOuterMap,param_1);
  pFVar18 = lpCriticalSection;
  if (local_118[0] != (FSetHashBucket *)0x0) {
    FVar14 = (ForElementType<FSetHashBucket_*>)&local_58;
    if (local_58.SecondaryData != (ForElementType<FSetHashBucket_*>)0x0) {
      FVar14 = local_58.SecondaryData;
    }
    if ((ulonglong)FVar14 <= local_118) {
      FVar14 = (ForElementType<FSetHashBucket_*>)&local_58;
      if (local_58.SecondaryData != (ForElementType<FSetHashBucket_*>)0x0) {
        FVar14 = local_58.SecondaryData;
      }
      if ((local_118 < (FSetHashBucket **)((longlong)FVar14 + (longlong)local_44 * 8)) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar7)) {
        pcVar5 = (code *)swi(3);
        (*pcVar5)();
        return;
      }
    }
    iVar10 = local_48;
    if (local_48 == local_44) {
      iVar10 = UE::Core::Private::
               ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetHashBucket_*>_>
                         (0x808,&local_58,&local_44);
    }
    local_48 = iVar10 + 1;
    FVar14 = (ForElementType<FSetHashBucket_*>)&local_58;
    if (local_58.SecondaryData != (ForElementType<FSetHashBucket_*>)0x0) {
      FVar14 = local_58.SecondaryData;
    }
    *(FSetHashBucket **)((longlong)FVar14 + (longlong)iVar10 * 8) = local_118[0];
  }
joined_r0x00014229bcb6:
  if (local_48 != 0) {
    if ((local_48 < 0) &&
       (bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar7)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
    FVar14 = (ForElementType<FSetHashBucket_*>)&local_58;
    if (local_58.SecondaryData != (ForElementType<FSetHashBucket_*>)0x0) {
      FVar14 = local_58.SecondaryData;
    }
    lVar1 = (longlong)(local_48 + -1) * 8;
    plVar20 = *(longlong **)(lVar1 + (longlong)FVar14);
    FVar14 = (ForElementType<FSetHashBucket_*>)&local_58;
    if (local_58.SecondaryData != (ForElementType<FSetHashBucket_*>)0x0) {
      FVar14 = local_58.SecondaryData;
    }
    _Dst = (void *)(lVar1 + (longlong)FVar14);
    iVar10 = (local_48 - (local_48 + -1)) + -1;
    if (iVar10 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar10 << 3);
    }
    local_48 = local_48 + -1;
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetHashBucket_*>_>
              (8,8,&local_58,local_48,&local_44);
    local_108 = plVar20;
    if (((TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)plVar20[1] ==
         (TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)0x0) ||
       (*plVar20 != 0)) {
      TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::TIterator::
      TIterator(&local_88,&FSetHashBucket::EmptyBucket);
      pTVar11 = &local_88;
    }
    else {
      TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::TIterator::
      TIterator(&local_b8,
                (TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)
                plVar20[1]);
      pTVar11 = &local_b8;
    }
    local_100 = (longlong *)pTVar11->_padding_;
    TStack_f8._padding_ = pTVar11->_padding_;
    lVar1 = plVar20[1];
    TStack_f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)pTVar11->_padding_;
    TStack_f8._16_8_ = pTVar11->_padding_;
    TStack_f8._24_8_ = pTVar11->_padding_;
    pTStack_d8 = pTVar11->Set;
    if ((lVar1 == 0) || (lVar12 = lVar1, *plVar20 != 0)) {
      lVar12 = 0;
    }
    local_d0 = lVar12 != 0;
    if ((*plVar20 == 0) && (lVar1 == 0)) {
      local_cf = '\x01';
    }
    else {
      local_cf = '\0';
    }
    local_ce = '\0';
    cVar19 = local_d0;
LAB_14229bdf6:
    cVar6 = local_ce;
    if (cVar19 == '\0') {
      bVar7 = local_cf == '\0';
    }
    else {
      bVar7 = TStack_f8.CurrentBitIndex < (TStack_f8.Array)->NumBits;
    }
    pFVar18 = local_c8;
    if (!bVar7) goto joined_r0x00014229bcb6;
    if (cVar19 == '\0') {
      puVar16 = (undefined8 *)((ulonglong)(-(uint)(local_ce != '\0') & 8) + (longlong)plVar20);
    }
    else {
      puVar16 = (undefined8 *)((longlong)TStack_f8.CurrentBitIndex * 0x10 + *local_100);
    }
    pUVar3 = (UObject *)*puVar16;
    if (((param_4 & *(EObjectFlags *)&pUVar3->field_0x8) == RF_NoFlags) &&
       (pFVar13 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&pUVar3->field_0xc),
       ((param_5 | EVar9 | (Unreachable|AutoRTFMConstructionAborted)) &
       (EInternalObjectFlags)((ulonglong)(pFVar13->field0_0x0).FlagsAndRefCount >> 0x20)) ==
       Borrowed)) {
      if (UE::GC::GIsIncrementalReachabilityPending != false) {
        UE::GC::MarkAsReachable(pUVar3);
      }
      local_c0 = pUVar3;
      cVar8 = (**(code **)param_2)(*(undefined8 *)&param_2->field_0x8,&local_c0);
      if (cVar8 == '\0') goto LAB_14229c07b;
    }
    if (param_3) {
      uVar15 = ((uint)((ulonglong)pUVar3 >> 0x14) & 0xffff ^ (uint)((ulonglong)pUVar3 >> 4)) *
               -0x7a143595;
      uVar15 = (uVar15 >> 0xd ^ uVar15) * -0x3d4d51cb;
      if ((int)(local_c8->ObjectOuterMap)._padding_ !=
          *(int *)((longlong)&(lpCriticalSection->ObjectOuterMap)._padding_ + 4)) {
        plVar4 = (longlong *)(lpCriticalSection->ObjectOuterMap)._padding_;
        plVar17 = &(lpCriticalSection->ObjectOuterMap)._padding_;
        if (plVar4 != (longlong *)0x0) {
          plVar17 = plVar4;
        }
        iVar10 = *(int *)((longlong)plVar17 +
                         (ulonglong)
                         ((int)(lpCriticalSection->ObjectOuterMap)._padding_ - 1U &
                         (uVar15 >> 0x10 ^ uVar15)) * 4);
        if (iVar10 != -1) {
          do {
            puVar16 = (undefined8 *)
                      ((longlong)iVar10 * 0x20 + (lpCriticalSection->ObjectOuterMap)._padding_);
            if ((UObject *)*puVar16 == pUVar3) {
              local_120 = puVar16 + 1;
              if (puVar16 == (undefined8 *)0x0) {
                local_120 = (undefined8 *)0x0;
              }
              if (local_120 != (undefined8 *)0x0) {
                FVar14 = (ForElementType<FSetHashBucket_*>)&local_58;
                if (local_58.SecondaryData != (ForElementType<FSetHashBucket_*>)0x0) {
                  FVar14 = local_58.SecondaryData;
                }
                if ((ulonglong)FVar14 <= &local_120) {
                  FVar14 = (ForElementType<FSetHashBucket_*>)&local_58;
                  if (local_58.SecondaryData != (ForElementType<FSetHashBucket_*>)0x0) {
                    FVar14 = local_58.SecondaryData;
                  }
                  if ((&local_120 < (undefined8 **)((longlong)FVar14 + (longlong)local_44 * 8)) &&
                     (bVar7 = FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar7)) {
                    pcVar5 = (code *)swi(3);
                    (*pcVar5)();
                    return;
                  }
                }
                iVar10 = local_48;
                if (local_48 == local_44) {
                  iVar10 = UE::Core::Private::
                           ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetHashBucket_*>_>
                                     (0x808,&local_58,&local_44);
                }
                local_48 = iVar10 + 1;
                FVar14 = (ForElementType<FSetHashBucket_*>)&local_58;
                if (local_58.SecondaryData != (ForElementType<FSetHashBucket_*>)0x0) {
                  FVar14 = local_58.SecondaryData;
                }
                *(undefined8 **)((longlong)FVar14 + (longlong)iVar10 * 8) = local_120;
              }
              goto LAB_14229bf2d;
            }
            iVar10 = *(int *)(puVar16 + 3);
          } while (iVar10 != -1);
        }
      }
      local_120 = (undefined8 *)0x0;
    }
LAB_14229bf2d:
    if (cVar19 == '\0') {
      if ((cVar6 == '\0') && (plVar20[1] != 0)) {
        local_cf = '\0';
        local_ce = '\x01';
      }
      else {
        local_cf = '\x01';
        local_ce = '\x01';
      }
    }
    else {
      TStack_f8.UnvisitedBitMask = TStack_f8.UnvisitedBitMask & ~TStack_f8._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_f8);
      plVar20 = local_108;
      cVar19 = local_d0;
    }
    goto LAB_14229bdf6;
  }
LAB_14229c0c7:
  piVar2 = &(pFVar18->ObjectOuterMap).ReadOnlyLock;
  *piVar2 = *piVar2 + -1;
  if ((*piVar2 < 0) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("ReadOnlyLock >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectHash.cpp"
                         ,0x25d,L""), bVar7)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  if (local_58.SecondaryData != (ForElementType<FSetHashBucket_*>)0x0) {
    FMemory::Free((void *)local_58.SecondaryData);
  }
  if (lpCriticalSection_00 != (FUObjectHashTables *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
  }
  return;
LAB_14229c07b:
  local_48 = 0;
  pFVar18 = local_c8;
  if (local_44 == 0) goto LAB_14229c0c7;
  UE::Core::Private::
  ReallocTo<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetHashBucket_*>_>
            (8,8,0,&local_58,0,&local_44);
  pFVar18 = local_c8;
  goto joined_r0x00014229bcb6;
}

// ForEachObjectWithPackage @ 14229c160

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
ForEachObjectWithPackage
          (UPackage *param_1,TFunctionRef<bool___cdecl(UObject_*)> *param_2,bool param_3,
          EObjectFlags param_4,EInternalObjectFlags param_5)

{
  int *piVar1;
  UObjectBase *this;
  longlong *plVar2;
  code *pcVar3;
  char cVar4;
  bool bVar5;
  char cVar6;
  EInternalObjectFlags EVar7;
  uint uVar8;
  int iVar9;
  FUObjectHashTables *lpCriticalSection;
  TIterator *pTVar10;
  longlong lVar11;
  UPackage *pUVar12;
  FUObjectItem *pFVar13;
  ForElementType<FSetHashBucket_*> FVar14;
  longlong lVar15;
  void *_Dst;
  undefined8 *puVar16;
  longlong *plVar17;
  FUObjectHashTables *lpCriticalSection_00;
  FUObjectHashTables *pFVar18;
  longlong *plVar19;
  char cVar20;
  undefined1 auStackY_198 [32];
  undefined8 *local_140;
  FSetHashBucket *local_138;
  FSetHashBucket *local_130;
  FUObjectHashTables *local_128;
  longlong *local_118;
  longlong *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *pTStack_e8;
  char local_e0;
  char local_df;
  char local_de;
  UPackage *local_d8;
  TFunctionRef<bool___cdecl(UObject_*)> *local_d0;
  UObjectBase *local_c8;
  TIterator local_c0;
  TIterator local_90;
  ForElementType<FSetHashBucket_*> local_60;
  uint local_50;
  uint local_4c;
  ulonglong local_48;
  
  local_48 = __security_cookie.value ^ (ulonglong)auStackY_198;
  local_d8 = param_1;
  local_d0 = param_2;
  if ((param_1 == (UPackage *)0x0) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("Package != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectHash.cpp"
                         ,0x6b9,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EVar7 = UE::GetAsyncLoadingInternalFlagsExclusion();
  lpCriticalSection = FUObjectHashTables::Get();
  local_128 = lpCriticalSection;
  bVar5 = IsGarbageCollectingAndLockingUObjectHashTables();
  lpCriticalSection_00 = (FUObjectHashTables *)0x0;
  if ((!bVar5) || (bVar5 = IsInGameThread(), !bVar5)) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    lpCriticalSection_00 = lpCriticalSection;
  }
  local_60.SecondaryData = (ForElementType<FSetHashBucket_*>)0x0;
  local_50 = 0;
  local_4c = 1;
  piVar1 = &(lpCriticalSection->PackageToObjectListMap).ReadOnlyLock;
  *piVar1 = *piVar1 + 1;
  piVar1 = &(lpCriticalSection->ObjectOuterMap).ReadOnlyLock;
  *piVar1 = *piVar1 + 1;
  local_138 = TMapBase<UPackage_*,FSetHashBucket,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPackage_*,FSetHashBucket,0>_>
              ::Find((TMapBase<UPackage_*,FSetHashBucket,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPackage_*,FSetHashBucket,0>_>
                      *)&lpCriticalSection->PackageToObjectListMap,param_1);
  if (local_138 != (FSetHashBucket *)0x0) {
    FVar14 = (ForElementType<FSetHashBucket_*>)&local_60;
    if (local_60.SecondaryData != (ForElementType<FSetHashBucket_*>)0x0) {
      FVar14 = local_60.SecondaryData;
    }
    if ((ulonglong)FVar14 <= &local_138) {
      FVar14 = (ForElementType<FSetHashBucket_*>)&local_60;
      if (local_60.SecondaryData != (ForElementType<FSetHashBucket_*>)0x0) {
        FVar14 = local_60.SecondaryData;
      }
      if ((&local_138 < (FSetHashBucket **)((longlong)FVar14 + (longlong)(int)local_4c * 8)) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if (local_50 == local_4c) {
      local_50 = UE::Core::Private::
                 ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetHashBucket_*>_>
                           (0x808,&local_60,(int *)&local_4c);
    }
    lVar15 = (longlong)(int)local_50;
    FVar14 = (ForElementType<FSetHashBucket_*>)&local_60;
    if (local_60.SecondaryData != (ForElementType<FSetHashBucket_*>)0x0) {
      FVar14 = local_60.SecondaryData;
    }
    local_50 = local_50 + 1;
    *(FSetHashBucket **)((longlong)FVar14 + lVar15 * 8) = local_138;
  }
  local_130 = TMapBase<UObjectBase_*,FSetHashBucket,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_*,FSetHashBucket,0>_>
              ::Find((TMapBase<UObjectBase_*,FSetHashBucket,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_*,FSetHashBucket,0>_>
                      *)&lpCriticalSection->ObjectOuterMap,(UObjectBase *)param_1);
  pFVar18 = lpCriticalSection;
  if (local_130 != (FSetHashBucket *)0x0) {
    FVar14 = (ForElementType<FSetHashBucket_*>)&local_60;
    if (local_60.SecondaryData != (ForElementType<FSetHashBucket_*>)0x0) {
      FVar14 = local_60.SecondaryData;
    }
    if ((ulonglong)FVar14 <= &local_130) {
      FVar14 = (ForElementType<FSetHashBucket_*>)&local_60;
      if (local_60.SecondaryData != (ForElementType<FSetHashBucket_*>)0x0) {
        FVar14 = local_60.SecondaryData;
      }
      if ((&local_130 < (FSetHashBucket **)((longlong)FVar14 + (longlong)(int)local_4c * 8)) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x7a5,
                             L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                            ), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    uVar8 = local_50;
    if (local_50 == local_4c) {
      uVar8 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetHashBucket_*>_>
                        (0x808,&local_60,(int *)&local_4c);
    }
    local_50 = uVar8 + 1;
    FVar14 = (ForElementType<FSetHashBucket_*>)&local_60;
    if (local_60.SecondaryData != (ForElementType<FSetHashBucket_*>)0x0) {
      FVar14 = local_60.SecondaryData;
    }
    *(FSetHashBucket **)((longlong)FVar14 + (longlong)(int)uVar8 * 8) = local_130;
  }
  do {
    if (local_50 == 0) {
LAB_14229c82e:
      piVar1 = &(pFVar18->ObjectOuterMap).ReadOnlyLock;
      *piVar1 = *piVar1 + -1;
      if ((*piVar1 < 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("ReadOnlyLock >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectHash.cpp"
                             ,0x25d,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      piVar1 = &(pFVar18->PackageToObjectListMap).ReadOnlyLock;
      *piVar1 = *piVar1 + -1;
      if ((*piVar1 < 0) &&
         (bVar5 = FDebug::CheckVerifyFailedImpl2
                            ("ReadOnlyLock >= 0",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectHash.cpp"
                             ,0x25d,L""), bVar5)) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
      if (local_60.SecondaryData != (ForElementType<FSetHashBucket_*>)0x0) {
        FMemory::Free((void *)local_60.SecondaryData);
      }
      if (lpCriticalSection_00 != (FUObjectHashTables *)0x0) {
        LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
      }
      return;
    }
    if (((int)local_50 < 1) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("(Index >= 0) & (Index < ArrayNum)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
       bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    FVar14 = (ForElementType<FSetHashBucket_*>)&local_60;
    if (local_60.SecondaryData != (ForElementType<FSetHashBucket_*>)0x0) {
      FVar14 = local_60.SecondaryData;
    }
    lVar15 = (longlong)(int)(local_50 - 1) * 8;
    plVar19 = *(longlong **)(lVar15 + (longlong)FVar14);
    FVar14 = (ForElementType<FSetHashBucket_*>)&local_60;
    if (local_60.SecondaryData != (ForElementType<FSetHashBucket_*>)0x0) {
      FVar14 = local_60.SecondaryData;
    }
    _Dst = (void *)(lVar15 + (longlong)FVar14);
    iVar9 = (local_50 - (local_50 - 1)) + -1;
    if (iVar9 != 0) {
      memmove(_Dst,(void *)((longlong)_Dst + 8),(longlong)iVar9 << 3);
    }
    local_50 = local_50 - 1;
    UE::Core::Private::
    ReallocShrink<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetHashBucket_*>_>
              (8,8,&local_60,local_50,(int *)&local_4c);
    local_118 = plVar19;
    if (((TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)plVar19[1] ==
         (TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)0x0) ||
       (*plVar19 != 0)) {
      TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::TIterator::
      TIterator(&local_90,&FSetHashBucket::EmptyBucket);
      pTVar10 = &local_90;
    }
    else {
      TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::TIterator::
      TIterator(&local_c0,
                (TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)
                plVar19[1]);
      pTVar10 = &local_c0;
    }
    local_110 = (longlong *)pTVar10->_padding_;
    TStack_108._padding_ = pTVar10->_padding_;
    lVar15 = plVar19[1];
    TStack_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)pTVar10->_padding_;
    TStack_108._16_8_ = pTVar10->_padding_;
    TStack_108._24_8_ = pTVar10->_padding_;
    pTStack_e8 = pTVar10->Set;
    if ((lVar15 == 0) || (lVar11 = lVar15, *plVar19 != 0)) {
      lVar11 = 0;
    }
    cVar20 = lVar11 != 0;
    if ((*plVar19 == 0) && (lVar15 == 0)) {
      local_df = '\x01';
    }
    else {
      local_df = '\0';
    }
    local_de = '\0';
    local_e0 = cVar20;
    while( true ) {
      cVar4 = local_de;
      if (cVar20 == '\0') {
        bVar5 = local_df == '\0';
      }
      else {
        bVar5 = TStack_108.CurrentBitIndex < (TStack_108.Array)->NumBits;
      }
      pFVar18 = local_128;
      if (!bVar5) break;
      if (cVar20 == '\0') {
        puVar16 = (undefined8 *)((ulonglong)(-(uint)(local_de != '\0') & 8) + (longlong)plVar19);
      }
      else {
        puVar16 = (undefined8 *)((longlong)TStack_108.CurrentBitIndex * 0x10 + *local_110);
      }
      this = (UObjectBase *)*puVar16;
      pUVar12 = UObjectBase::GetExternalPackageInternal(this);
      if ((pUVar12 == param_1) || (pUVar12 == (UPackage *)0x0)) {
        bVar5 = true;
      }
      else {
        bVar5 = false;
      }
      if ((((param_4 & this->ObjectFlags) == RF_NoFlags) &&
          (pFVar13 = FUObjectArray::IndexToObject(&GUObjectArray,this->InternalIndex),
          ((param_5 | EVar7 | (Unreachable|AutoRTFMConstructionAborted)) &
          (EInternalObjectFlags)((ulonglong)(pFVar13->field0_0x0).FlagsAndRefCount >> 0x20)) ==
          Borrowed)) && (bVar5)) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)this);
        }
        local_c8 = this;
        cVar6 = (**(code **)local_d0)(*(undefined8 *)&local_d0->field_0x8,&local_c8);
        if (cVar6 == '\0') {
          if ((int)local_4c < 0) {
                    /* WARNING: Subroutine does not return */
            UE::Core::Private::OnInvalidArrayNum((ulonglong)local_4c);
          }
          local_50 = 0;
          pFVar18 = local_128;
          goto LAB_14229c82e;
        }
      }
      if ((param_3) && (bVar5)) {
        uVar8 = ((uint)((ulonglong)this >> 0x14) & 0xffff ^ (uint)((ulonglong)this >> 4)) *
                -0x7a143595;
        uVar8 = (uVar8 >> 0xd ^ uVar8) * -0x3d4d51cb;
        if ((int)(local_128->ObjectOuterMap)._padding_ !=
            *(int *)((longlong)&(lpCriticalSection->ObjectOuterMap)._padding_ + 4)) {
          plVar2 = (longlong *)(lpCriticalSection->ObjectOuterMap)._padding_;
          plVar17 = &(lpCriticalSection->ObjectOuterMap)._padding_;
          if (plVar2 != (longlong *)0x0) {
            plVar17 = plVar2;
          }
          iVar9 = *(int *)((longlong)plVar17 +
                          (ulonglong)
                          ((int)(lpCriticalSection->ObjectOuterMap)._padding_ - 1U &
                          (uVar8 >> 0x10 ^ uVar8)) * 4);
          if (iVar9 != -1) {
            do {
              puVar16 = (undefined8 *)
                        ((longlong)iVar9 * 0x20 + (lpCriticalSection->ObjectOuterMap)._padding_);
              if ((UObjectBase *)*puVar16 == this) {
                local_140 = puVar16 + 1;
                if (puVar16 == (undefined8 *)0x0) {
                  local_140 = (undefined8 *)0x0;
                }
                if (local_140 != (undefined8 *)0x0) {
                  FVar14 = (ForElementType<FSetHashBucket_*>)&local_60;
                  if (local_60.SecondaryData != (ForElementType<FSetHashBucket_*>)0x0) {
                    FVar14 = local_60.SecondaryData;
                  }
                  if ((ulonglong)FVar14 <= &local_140) {
                    FVar14 = (ForElementType<FSetHashBucket_*>)&local_60;
                    if (local_60.SecondaryData != (ForElementType<FSetHashBucket_*>)0x0) {
                      FVar14 = local_60.SecondaryData;
                    }
                    if ((&local_140 <
                         (undefined8 **)((longlong)FVar14 + (longlong)(int)local_4c * 8)) &&
                       (bVar5 = FDebug::CheckVerifyFailedImpl2
                                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                           ,0x7a5,
                                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                          ), bVar5)) {
                      pcVar3 = (code *)swi(3);
                      (*pcVar3)();
                      return;
                    }
                  }
                  uVar8 = local_50;
                  if (local_50 == local_4c) {
                    uVar8 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<2,TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetHashBucket_*>_>
                                      (0x808,&local_60,(int *)&local_4c);
                  }
                  local_50 = uVar8 + 1;
                  FVar14 = (ForElementType<FSetHashBucket_*>)&local_60;
                  if (local_60.SecondaryData != (ForElementType<FSetHashBucket_*>)0x0) {
                    FVar14 = local_60.SecondaryData;
                  }
                  *(undefined8 **)((longlong)FVar14 + (longlong)(int)uVar8 * 8) = local_140;
                }
                goto LAB_14229c6ad;
              }
              iVar9 = *(int *)(puVar16 + 3);
            } while (iVar9 != -1);
          }
        }
        local_140 = (undefined8 *)0x0;
      }
LAB_14229c6ad:
      if (cVar20 == '\0') {
        param_1 = local_d8;
        if ((cVar4 == '\0') && (plVar19[1] != 0)) {
          local_df = '\0';
          local_de = '\x01';
        }
        else {
          local_df = '\x01';
          local_de = '\x01';
        }
      }
      else {
        TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
        param_1 = local_d8;
        plVar19 = local_118;
        cVar20 = local_e0;
      }
    }
  } while( true );
}

// GetAllDerivedClasses @ 14229cdb0

TMap<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,0>_>
* __cdecl GetAllDerivedClasses
                    (TMap<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,0>_>
                     *__return_storage_ptr__)

{
  bool bVar1;
  FUObjectHashTables *lpCriticalSection;
  FUObjectHashTables *lpCriticalSection_00;
  
  lpCriticalSection = FUObjectHashTables::Get();
  bVar1 = IsGarbageCollectingAndLockingUObjectHashTables();
  lpCriticalSection_00 = (FUObjectHashTables *)0x0;
  if ((!bVar1) || (bVar1 = IsInGameThread(), !bVar1)) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    lpCriticalSection_00 = lpCriticalSection;
  }
  *(undefined8 *)__return_storage_ptr__ = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x8 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x20 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x28 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x2c = 0x80;
  *(undefined4 *)&__return_storage_ptr__->field_0x30 = 0xffffffff;
  *(undefined4 *)&__return_storage_ptr__->field_0x34 = 0;
  *(undefined8 *)&__return_storage_ptr__->field_0x40 = 0;
  *(undefined4 *)&__return_storage_ptr__->field_0x48 = 0;
  if (__return_storage_ptr__ != &lpCriticalSection->ClassToChildListMap) {
    UE::Core::Private::
    CopyHash<TSizedInlineAllocator<1,32,TSizedDefaultAllocator<32>_>::ForElementType<FSetElementId>_>
              ((ForElementType<FSetElementId> *)&__return_storage_ptr__->field_0x38,
               (int *)&__return_storage_ptr__->field_0x48,
               (ForElementType<FSetElementId> *)&(lpCriticalSection->ClassToChildListMap).field_0x38
               ,*(int *)&(lpCriticalSection->ClassToChildListMap).field_0x48);
    TSparseArray<TSparseSetElement<TTuple<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
    ::operator=((TSparseArray<TSparseSetElement<TTuple<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)__return_storage_ptr__,
                (TSparseArray<TSparseSetElement<TTuple<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                 *)&lpCriticalSection->ClassToChildListMap);
  }
  if (lpCriticalSection_00 != (FUObjectHashTables *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
  }
  return __return_storage_ptr__;
}

// GetDerivedClasses @ 14229d2d0

void __cdecl
GetDerivedClasses(UClass *param_1,TArray<UClass_*,TSizedDefaultAllocator<32>_> *param_2,bool param_3
                 )

{
  int *piVar1;
  ulonglong uVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  ForElementType<unsigned_int> FVar5;
  TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator> *pTVar6;
  bool bVar7;
  uint uVar8;
  FUObjectHashTables *pFVar9;
  TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator> *pTVar10;
  longlong lVar11;
  FUObjectHashTables *lpCriticalSection;
  uint uVar12;
  int iVar13;
  FUObjectHashTables *pFVar14;
  uint uVar15;
  ForElementType<unsigned_int> FVar16;
  uint *puVar17;
  uint uVar18;
  undefined1 local_res18 [8];
  int local_res20;
  undefined8 local_c8;
  ForElementType<unsigned_int> local_c0;
  FUObjectHashTables *local_b8;
  TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator> *local_b0;
  uint uStack_a8;
  uint uStack_a4;
  undefined1 *local_a0;
  undefined4 uStack_98;
  uint uStack_94;
  uint local_90;
  uint uStack_8c;
  int iStack_88;
  undefined4 uStack_84;
  int local_80;
  TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator> *local_78;
  TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator> *local_70;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  pFVar9 = FUObjectHashTables::Get();
  bVar7 = IsGarbageCollectingAndLockingUObjectHashTables();
  pFVar14 = (FUObjectHashTables *)0x0;
  uVar12 = 0;
  if ((bVar7) && (bVar7 = IsInGameThread(), bVar7)) {
    local_b8 = (FUObjectHashTables *)0x0;
    lpCriticalSection = pFVar14;
  }
  else {
    local_b8 = pFVar9;
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar9);
    lpCriticalSection = pFVar9;
  }
  if (param_3) {
    RecursivelyPopulateDerivedClasses<UClass_*,TSizedDefaultAllocator<32>_>(pFVar9,param_1,param_2);
  }
  else {
    pTVar10 = TMapBase<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,0>_>
              ::Find((TMapBase<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,0>_>
                      *)&pFVar9->ClassToChildListMap,param_1);
    local_78 = pTVar10;
    if (pTVar10 != (TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator> *)0x0) {
      uVar15 = (param_2->ArrayNum - *(int *)&(pTVar10->Elements).field_0x34) +
               *(int *)&(pTVar10->Elements).field_0x8;
      if ((int)uVar15 < 0) {
                    /* WARNING: Subroutine does not return */
        UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar15);
      }
      piVar1 = &param_2->ArrayMax;
      if (param_2->ArrayMax < (int)uVar15) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,uVar15,&param_2->AllocatorInstance,param_2->ArrayNum,piVar1);
      }
      uVar15 = *(uint *)&(pTVar10->Elements).field_0x28;
      local_c0 = (ForElementType<unsigned_int>)&(pTVar10->Elements).field_0x10;
      uStack_a4 = 1;
      local_90 = 0;
      uStack_94 = local_90;
      if (uVar15 != 0) {
        puVar17 = *(uint **)&(pTVar10->Elements).field_0x20;
        if (puVar17 == (uint *)0x0) {
          puVar17 = (uint *)local_c0;
        }
        uVar8 = *puVar17;
        pFVar9 = pFVar14;
        local_90 = 0;
        uVar12 = 0;
        while (uVar8 == 0) {
          iVar13 = (int)pFVar14;
          local_90 = (int)pFVar9 + 0x20;
          pFVar9 = (FUObjectHashTables *)(ulonglong)local_90;
          uVar12 = iVar13 + 1;
          pFVar14 = (FUObjectHashTables *)(ulonglong)uVar12;
          uStack_94 = uVar15;
          if ((int)((uVar15 - 1) + ((int)(uVar15 - 1) >> 0x1f & 0x1fU)) >> 5 < (int)uVar12)
          goto LAB_14229d41e;
          uVar8 = puVar17[(longlong)iVar13 + 1];
        }
        uStack_a4 = -uVar8 & uVar8;
        uVar2 = (ulonglong)uStack_a4 * 2 + 1;
        lVar11 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_res20 = (int)lVar11;
        uStack_94 = (local_90 - 1) + local_res20;
        if ((int)uVar15 < (int)uStack_94) {
          uStack_94 = uVar15;
        }
      }
LAB_14229d41e:
      iStack_88 = *(int *)&(pTVar10->Elements).field_0x8 - *(int *)&(pTVar10->Elements).field_0x34;
      uVar8 = *(uint *)&(pTVar10->Elements).field_0x28;
      TStack_68._padding_ = CONCAT44(uStack_a4,uVar12);
      uStack_98 = 0xffffffff;
      uVar18 = uVar8 & 0xffffffe0;
      TStack_68.CurrentBitIndex = uStack_94;
      TStack_68.UnvisitedBitMask = 0xffffffff;
      iVar13 = (int)uVar8 >> 5;
      TStack_68._28_4_ = uStack_94;
      TStack_68.BaseBitIndex = local_90;
      uStack_48 = CONCAT44(uStack_84,iStack_88);
      local_b0 = pTVar10;
      uStack_a8 = uVar12;
      local_a0 = (undefined1 *)local_c0;
      uStack_8c = uStack_94;
      local_70 = pTVar10;
      TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_c0;
      if ((((int)uVar8 < 0) || ((int)uVar15 < (int)uVar8)) &&
         (bVar7 = FDebug::CheckVerifyFailedImpl2
                            ("StartIndex >= 0 && StartIndex <= Array.Num()",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                             ,0x7af,L""), bVar7)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pTVar10 = local_78;
      FVar5 = local_c0;
      uVar12 = *(int *)((longlong)local_c0 + 0x18);
      if (uVar8 != uVar12) {
        FVar16 = *(ForElementType<unsigned_int> *)((longlong)local_c0 + 0x10);
        if (*(ForElementType<unsigned_int> *)((longlong)local_c0 + 0x10) ==
            (ForElementType<unsigned_int>)0x0) {
          FVar16 = local_c0;
        }
        uVar15 = -1 << ((byte)uVar8 & 0x1f) & *(uint *)((longlong)FVar16 + (longlong)iVar13 * 4);
        while (uVar15 == 0) {
          lVar11 = (longlong)iVar13;
          uVar18 = uVar18 + 0x20;
          iVar13 = iVar13 + 1;
          uVar8 = uVar12;
          if ((int)((uVar12 - 1) + ((int)(uVar12 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13)
          goto LAB_14229d530;
          uVar15 = *(uint *)((undefined1 *)((longlong)FVar16 + 4) + lVar11 * 4);
        }
        uVar2 = (ulonglong)(-uVar15 & uVar15) * 2 + 1;
        lVar11 = 0x3f;
        if (uVar2 != 0) {
          for (; uVar2 >> lVar11 == 0; lVar11 = lVar11 + -1) {
          }
        }
        local_80 = (int)lVar11;
        uVar8 = local_80 + -1 + uVar18;
        if ((int)uVar12 < (int)uVar8) {
          uVar8 = uVar12;
        }
      }
LAB_14229d530:
      while( true ) {
        pTVar6 = local_70;
        if (*(int *)&(local_70->Elements).field_0x8 - *(int *)&(local_70->Elements).field_0x34 !=
            (int)uStack_48) {
          local_res18[0] = 0;
          `TSparseArray<TSparseSetElement<UClass_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
        }
        if (((TStack_68.CurrentBitIndex == uVar8) &&
            ((ForElementType<unsigned_int>)TStack_68.Array == FVar5)) &&
           (lpCriticalSection = local_b8, pTVar6 == pTVar10)) break;
        local_c8 = *(undefined8 *)
                    (*(longlong *)&pTVar6->Elements + (longlong)TStack_68.CurrentBitIndex * 0x10);
        pFVar3 = (param_2->AllocatorInstance).Data;
        if (((pFVar3 <= (FScriptContainerElement *)&local_c8) &&
            ((FScriptContainerElement *)&local_c8 < pFVar3 + (longlong)*piVar1 * 8)) &&
           (bVar7 = FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar7)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar13 = param_2->ArrayNum;
        if (iVar13 == *piVar1) {
          iVar13 = UE::Core::Private::
                   ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                             (0x808,&param_2->AllocatorInstance,piVar1);
        }
        param_2->ArrayNum = iVar13 + 1;
        *(undefined8 *)((param_2->AllocatorInstance).Data + (longlong)iVar13 * 8) = local_c8;
        TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
      }
    }
  }
  if (lpCriticalSection != (FUObjectHashTables *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// GetInstantiationFlags @ 14229d6c0

EObjectFlags __cdecl verse::GetInstantiationFlags(void)

{
  return Verse::FInstantiationScope::Context.Flags;
}

// GetInstantiationOuter @ 14229d6d0

UObject * __cdecl verse::GetInstantiationOuter(void)

{
  longlong *plVar1;
  longlong lVar2;
  FUObjectItem *pFVar3;
  UPackage *pUVar4;
  UObjectBase *pUVar5;
  
  pUVar5 = (UObjectBase *)Verse::FInstantiationScope::Context.Outer;
  if ((Verse::FInstantiationScope::Context.Outer == (UObject *)0x0) &&
     ((((plVar1 = *(longlong **)
                   (*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
                   0xd50), plVar1 == (longlong *)0x0 ||
        (lVar2 = *plVar1, *(int *)(lVar2 + 0x44) == 0)) || (*(int *)(lVar2 + 0x40) < 0)) ||
      (((pFVar3 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(lVar2 + 0x40)),
        pFVar3 == (FUObjectItem *)0x0 || (pFVar3->SerialNumber != *(int *)(lVar2 + 0x44))) ||
       ((((pFVar3->field0_0x0).FlagsAndRefCount >> 0x20 & 0x10200000U) != 0 ||
        (pUVar5 = (pFVar3->field1_0x8).Object, pUVar5 == (UObjectBase *)0x0)))))))) {
    pUVar4 = GetTransientPackage();
    return (UObject *)pUVar4;
  }
  return (UObject *)pUVar5;
}

// GetObjectExternalPackageInternal @ 14229d8d0

UPackage * __cdecl GetObjectExternalPackageInternal(UObjectBase *param_1)

{
  FUObjectHashTables *pFVar1;
  TTuple<UObjectBase_*,UPackage_*> *pTVar2;
  
  pFVar1 = FUObjectHashTables::Get();
  pTVar2 = TSet<TTuple<UObjectBase_*,UPackage_*>,TDefaultMapHashableKeyFuncs<UObjectBase_*,UPackage_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UObjectBase_*,UPackage_*>,TDefaultMapHashableKeyFuncs<UObjectBase_*,UPackage_*,0>,FDefaultSetAllocator>
                   *)&pFVar1->ObjectToPackageMap,param_1);
  if (pTVar2 != (TTuple<UObjectBase_*,UPackage_*> *)0x0) {
    return *(UPackage **)&pTVar2->field_0x8;
  }
  return (UPackage *)0x0;
}

// GetObjectExternalPackageThreadSafe @ 14229d910

/* WARNING: Enum "Type": Some values do not have unique names */

UPackage * __cdecl GetObjectExternalPackageThreadSafe(UObjectBase *param_1)

{
  bool bVar1;
  FUObjectHashTables *lpCriticalSection;
  TTuple<UObjectBase_*,UPackage_*> *pTVar2;
  FUObjectHashTables *lpCriticalSection_00;
  FUObjectHashTables *pFVar3;
  FString local_18;
  
  lpCriticalSection = FUObjectHashTables::Get();
  bVar1 = IsGarbageCollectingAndLockingUObjectHashTables();
  pFVar3 = (FUObjectHashTables *)0x0;
  if ((!bVar1) || (bVar1 = IsInGameThread(), lpCriticalSection_00 = pFVar3, !bVar1)) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    lpCriticalSection_00 = lpCriticalSection;
  }
  pTVar2 = TSet<TTuple<UObjectBase_*,UPackage_*>,TDefaultMapHashableKeyFuncs<UObjectBase_*,UPackage_*,0>,FDefaultSetAllocator>
           ::Find((TSet<TTuple<UObjectBase_*,UPackage_*>,TDefaultMapHashableKeyFuncs<UObjectBase_*,UPackage_*,0>,FDefaultSetAllocator>
                   *)&lpCriticalSection->ObjectToPackageMap,param_1);
  if (pTVar2 != (TTuple<UObjectBase_*,UPackage_*> *)0x0) {
    pFVar3 = *(FUObjectHashTables **)&pTVar2->field_0x8;
  }
  if (((2 < (byte)LogUObjectHash._0_1_) && (pFVar3 == (FUObjectHashTables *)0x0)) &&
     ((param_1->ObjectFlags >> 0x1c & 1) != 0)) {
    UObjectBaseUtility::GetPathName((UObjectBaseUtility *)param_1,&local_18,(UObject *)0x0);
    UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogUObjectHash);
    if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_18.Data.AllocatorInstance.Data);
    }
  }
  if (lpCriticalSection_00 != (FUObjectHashTables *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
  }
  return (UPackage *)pFVar3;
}

// GetObjectsOfClass @ 14229da60

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl
GetObjectsOfClass(UClass *param_1,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2,
                 bool param_3,EObjectFlags param_4,EInternalObjectFlags param_5)

{
  int *piVar1;
  code *pcVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_Hash_GetObjectsOfClass> FVar8;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  FName FVar9;
  FColor_u_0 local_res10 [2];
  FName local_78;
  FName local_70;
  LARGE_INTEGER local_68;
  FName local_60;
  FName local_58;
  FStatMessage local_48;
  code *local_38;
  FName *local_30;
  
  FVar8 = StatPtr_STAT_Hash_GetObjectsOfClass;
  if (StatPtr_STAT_Hash_GetObjectsOfClass ==
      (FThreadSafeStaticStat<FStat_STAT_Hash_GetObjectsOfClass>)0x0) {
    pFVar7 = FName::FName(&local_60,"STAT_Hash_GetObjectsOfClass");
    FVar8 = (FThreadSafeStaticStat<FStat_STAT_Hash_GetObjectsOfClass>)
            FThreadSafeStaticStatBase::DoSetup
                      ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Hash_GetObjectsOfClass,*pFVar7,
                       L"GetObjectsOfClass","STATGROUP_UObjectHash","STATCAT_Advanced",
                       L"UObject Hash",false,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar9 = *(FName *)FVar8;
  bVar3 = false;
  bVar5 = false;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  if ((FVar9.ComparisonIndex.Value.Value != 0) || (FVar9.Number != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_res10[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_res10[0]._s_0,(char *)*(FName *)((longlong)FVar8 + 0x10));
      bVar3 = false;
      bVar5 = true;
      if (-1 < CpuChannel->Enabled) {
        local_78.ComparisonIndex.Value = FVar9.ComparisonIndex.Value.Value;
        local_78.Number = FVar9.Number;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_78,(wchar_t *)*(FName *)((longlong)FVar8 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectHash.cpp"
                   ,0x716);
        bVar3 = true;
        bVar5 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable != false) {
      local_70 = FVar9;
      FThreadStats::AddMessage(FVar9,CycleScopeStart);
      bVar4 = true;
      goto LAB_14229dbbe;
    }
  }
  bVar4 = false;
  FVar9 = local_58;
LAB_14229dbbe:
  local_30 = &local_70;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`GetObjectsOfClass'::__l2::<lambda_1>,void,UObject_*>::Call;
  local_70 = (FName)param_2;
  ForEachObjectOfClass
            (param_1,(TFunctionRef<void___cdecl(UObject_*)> *)&local_38,param_3,param_4,param_5);
  if (GUObjectArray.ObjObjects.NumElements < param_2->ArrayNum) {
    bVar6 = FDebug::CheckVerifyFailedImpl2
                      ("Results.Num() <= GUObjectArray.GetObjectArrayNum()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectHash.cpp"
                       ,0x71f,L"");
    if (bVar6) {
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
  }
  if (bVar5) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar3) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar4) && (FVar9 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this = TlsGetValue(FThreadStats::TlsSlot);
    if (this == (FThreadStats *)0x0) {
      this_00 = FThreadStatsPool::Get();
      this = FThreadStatsPool::GetFromPool(this_00);
    }
    if (this->bWaitForExplicitFlush < this->ScopeCount) {
      local_48.NameAndInfo.Index = FVar9.ComparisonIndex.Value;
      local_48.NameAndInfo.Number = FVar9.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_68);
      local_48.StatData.Pad[4] = '\0';
      local_48.StatData.Pad[5] = '\0';
      local_48.StatData.Pad[6] = '\0';
      local_48.StatData.Pad[7] = '\0';
      local_48.StatData.Pad[0] = local_68.s.LowPart._0_1_;
      local_48.StatData.Pad[1] = local_68.s.LowPart._1_1_;
      local_48.StatData.Pad[2] = local_68.s.LowPart._2_1_;
      local_48.StatData.Pad[3] = local_68.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this,&local_48);
      piVar1 = &this->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  return;
}

// GetObjectsWithAllMarks @ 14229dd40

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
GetObjectsWithAllMarks(TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1,EObjectMark param_2)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  EInternalObjectFlags EVar6;
  bool bVar7;
  FTlsAutoCleanup *pFVar8;
  FUObjectItem *pFVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  FTlsAutoCleanup FVar13;
  undefined1 local_res18 [8];
  EInternalObjectFlags local_res20;
  longlong local_b8;
  int local_b0;
  FTlsAutoCleanup *local_a8;
  int iStack_a0;
  uint uStack_9c;
  FTlsAutoCleanup local_98;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  FTlsAutoCleanup *local_78;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_70;
  code *local_50;
  undefined1 *local_48;
  
  local_res20 = UE::GetAsyncLoadingInternalFlagsExclusion();
  local_res20 = local_res20 | Unreachable;
  local_48 = local_res18;
  local_50 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FThreadMarkAnnotation>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar8 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_50,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FThreadMarkAnnotation>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  uVar12 = *(int *)(pFVar8 + 4) - *(int *)&pFVar8[9].field_0x4;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  piVar1 = &param_1->ArrayMax;
  iVar11 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar12,&param_1->AllocatorInstance,0,piVar1);
  }
  EVar6 = local_res20;
  iVar3 = *(int *)(pFVar8 + 8);
  local_98 = (FTlsAutoCleanup)(pFVar8 + 5);
  uStack_9c = 1;
  local_88 = 0;
  iStack_8c = 0;
  if (iVar3 != 0) {
    FVar13 = pFVar8[7];
    if (pFVar8[7] == (FTlsAutoCleanup)0x0) {
      FVar13 = local_98;
    }
    uVar12 = *(uint *)FVar13;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar11;
      local_88 = local_88 + 0x20;
      iVar11 = iVar11 + 1;
      iStack_8c = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14229de5e;
      uVar12 = ((uint *)((longlong)FVar13 + 4))[lVar10];
    }
    uStack_9c = -uVar12 & uVar12;
    uVar2 = (ulonglong)uStack_9c * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_b0 = (int)lVar10;
    iStack_8c = local_88 + -1 + local_b0;
    if (iVar3 < iStack_8c) {
      iStack_8c = iVar3;
    }
  }
LAB_14229de5e:
  uStack_90 = 0xffffffff;
  TStack_70._padding_ = CONCAT44(uStack_9c,iVar11);
  TStack_70.UnvisitedBitMask = 0xffffffff;
  TStack_70._28_4_ = iStack_8c;
  TStack_70.BaseBitIndex = local_88;
  local_a8 = pFVar8 + 3;
  iStack_a0 = iVar11;
  iStack_84 = iStack_8c;
  local_78 = pFVar8 + 3;
  TStack_70.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_98;
  TStack_70.CurrentBitIndex = iStack_8c;
  if (iStack_8c < iVar3) {
    do {
      if ((*(EObjectMark *)((longlong)*local_78 + 8 + (longlong)TStack_70.CurrentBitIndex * 0x18) &
          param_2) == param_2) {
        local_b8 = *(longlong *)((longlong)*local_78 + (longlong)TStack_70.CurrentBitIndex * 0x18);
        pFVar9 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(local_b8 + 0xc));
        if ((EVar6 & (EInternalObjectFlags)
                     ((ulonglong)(pFVar9->field0_0x0).FlagsAndRefCount >> 0x20)) == Borrowed) {
          pFVar4 = (param_1->AllocatorInstance).Data;
          if (((pFVar4 <= (FScriptContainerElement *)&local_b8) &&
              ((FScriptContainerElement *)&local_b8 < pFVar4 + (longlong)*piVar1 * 8)) &&
             (bVar7 = FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar7)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar11 = param_1->ArrayNum;
          if (iVar11 == *piVar1) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&param_1->AllocatorInstance,piVar1);
          }
          param_1->ArrayNum = iVar11 + 1;
          *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar11 * 8) = local_b8;
        }
      }
      TStack_70.UnvisitedBitMask = TStack_70.UnvisitedBitMask & ~TStack_70._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_70);
    } while (TStack_70.CurrentBitIndex < (int)*(uint *)((longlong)TStack_70.Array + 0x18));
  }
  return;
}

// GetObjectsWithAnyMarks @ 14229e000

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
GetObjectsWithAnyMarks(TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1,EObjectMark param_2)

{
  int *piVar1;
  ulonglong uVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  EInternalObjectFlags EVar7;
  FTlsAutoCleanup *pFVar8;
  FUObjectItem *pFVar9;
  longlong lVar10;
  int iVar11;
  uint uVar12;
  FTlsAutoCleanup FVar13;
  undefined1 local_res18 [8];
  int local_res20;
  longlong local_a8;
  code *local_a0;
  undefined1 *local_98;
  FTlsAutoCleanup *local_90;
  int iStack_88;
  uint uStack_84;
  FTlsAutoCleanup local_80;
  undefined4 uStack_78;
  int iStack_74;
  int local_70;
  int iStack_6c;
  FTlsAutoCleanup *local_60;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_58;
  
  EVar7 = UE::GetAsyncLoadingInternalFlagsExclusion();
  local_98 = local_res18;
  local_a0 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FThreadMarkAnnotation>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar8 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_a0,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FThreadMarkAnnotation>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  uVar12 = *(int *)(pFVar8 + 4) - *(int *)&pFVar8[9].field_0x4;
  if ((int)uVar12 < 0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::OnInvalidArrayNum((ulonglong)uVar12);
  }
  piVar1 = &param_1->ArrayMax;
  iVar11 = 0;
  param_1->ArrayNum = 0;
  if (*piVar1 != uVar12) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (8,8,uVar12,&param_1->AllocatorInstance,0,piVar1);
  }
  iVar3 = *(int *)(pFVar8 + 8);
  local_80 = (FTlsAutoCleanup)(pFVar8 + 5);
  uStack_84 = 1;
  local_70 = 0;
  iStack_74 = 0;
  if (iVar3 != 0) {
    FVar13 = pFVar8[7];
    if (pFVar8[7] == (FTlsAutoCleanup)0x0) {
      FVar13 = local_80;
    }
    uVar12 = *(uint *)FVar13;
    while (uVar12 == 0) {
      lVar10 = (longlong)iVar11;
      local_70 = local_70 + 0x20;
      iVar11 = iVar11 + 1;
      iStack_74 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar11) goto LAB_14229e11e;
      uVar12 = ((uint *)((longlong)FVar13 + 4))[lVar10];
    }
    uStack_84 = -uVar12 & uVar12;
    uVar2 = (ulonglong)uStack_84 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res20 = (int)lVar10;
    iStack_74 = local_70 + -1 + local_res20;
    if (iVar3 < iStack_74) {
      iStack_74 = iVar3;
    }
  }
LAB_14229e11e:
  uStack_78 = 0xffffffff;
  TStack_58._padding_ = CONCAT44(uStack_84,iVar11);
  TStack_58.UnvisitedBitMask = 0xffffffff;
  TStack_58._28_4_ = iStack_74;
  TStack_58.BaseBitIndex = local_70;
  local_90 = pFVar8 + 3;
  iStack_88 = iVar11;
  iStack_6c = iStack_74;
  local_60 = pFVar8 + 3;
  TStack_58.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_80;
  TStack_58.CurrentBitIndex = iStack_74;
  if (iStack_74 < iVar3) {
    do {
      if ((*(EObjectMark *)((longlong)*local_60 + 8 + (longlong)TStack_58.CurrentBitIndex * 0x18) &
          param_2) != OBJECTMARK_NOMARKS) {
        local_a8 = *(longlong *)((longlong)*local_60 + (longlong)TStack_58.CurrentBitIndex * 0x18);
        pFVar9 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)(local_a8 + 0xc));
        if (((EVar7 | Unreachable) &
            (EInternalObjectFlags)((ulonglong)(pFVar9->field0_0x0).FlagsAndRefCount >> 0x20)) ==
            Borrowed) {
          pFVar4 = (param_1->AllocatorInstance).Data;
          if (((pFVar4 <= (FScriptContainerElement *)&local_a8) &&
              ((FScriptContainerElement *)&local_a8 < pFVar4 + (longlong)*piVar1 * 8)) &&
             (bVar6 = FDebug::CheckVerifyFailedImpl2
                                ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                 ,0x7a5,
                                 L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                ), bVar6)) {
            pcVar5 = (code *)swi(3);
            (*pcVar5)();
            return;
          }
          iVar11 = param_1->ArrayNum;
          if (iVar11 == *piVar1) {
            iVar11 = UE::Core::Private::
                     ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                               (0x808,&param_1->AllocatorInstance,piVar1);
          }
          param_1->ArrayNum = iVar11 + 1;
          *(longlong *)((param_1->AllocatorInstance).Data + (longlong)iVar11 * 8) = local_a8;
        }
      }
      TStack_58.UnvisitedBitMask = TStack_58.UnvisitedBitMask & ~TStack_58._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_58);
    } while (TStack_58.CurrentBitIndex < (int)*(uint *)((longlong)TStack_58.Array + 0x18));
  }
  return;
}

// GetObjectsWithOuter @ 14229e2b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
GetObjectsWithOuter(UObjectBase *param_1,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2,
                   bool param_3,EObjectFlags param_4,EInternalObjectFlags param_5)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  char cVar3;
  bool bVar4;
  EInternalObjectFlags EVar5;
  int iVar6;
  uint uVar7;
  FUObjectHashTables *pFVar8;
  FSetHashBucket *pFVar9;
  FUObjectItem *pFVar10;
  TIterator *pTVar11;
  ulonglong uVar12;
  uint uVar13;
  FUObjectHashTables *pFVar14;
  longlong *plVar15;
  ulonglong *puVar16;
  longlong *plVar17;
  ulonglong *puVar18;
  longlong lVar19;
  ulonglong *puVar20;
  char cVar21;
  uint uVar22;
  ulonglong uVar23;
  UObject *local_1a8;
  UObject *local_1a0;
  uint local_198;
  int local_194;
  FUObjectHashTables *local_190;
  FSetHashBucket *local_188;
  longlong *local_180;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_178;
  TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *pTStack_158;
  char local_150;
  char local_14f;
  char local_14e;
  ulonglong *local_148;
  longlong *local_140;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_138;
  TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *pTStack_118;
  char local_110;
  char local_10f;
  char local_10e;
  longlong local_108;
  FUObjectHashTables *local_100;
  TIterator local_f8;
  TIterator local_c8;
  TIterator local_98;
  TIterator local_68;
  
  pTVar11 = &local_f8;
  if ((param_1 == (UObjectBase *)0x0) &&
     (bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("Outer != nullptr",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectHash.cpp"
                         ,0x611,
                         L"Getting objects with a null outer is no longer supported. If you want to get all packages you might consider using GetObjectsOfClass instead."
                        ), bVar4)) {
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  EVar5 = UE::GetAsyncLoadingInternalFlagsExclusion();
  EVar5 = param_5 | EVar5 | (Unreachable|AutoRTFMConstructionAborted);
  uVar13 = param_2->ArrayNum;
  pFVar8 = FUObjectHashTables::Get();
  local_100 = pFVar8;
  bVar4 = IsGarbageCollectingAndLockingUObjectHashTables();
  if ((bVar4) && (bVar4 = IsInGameThread(), bVar4)) {
    local_190 = (FUObjectHashTables *)0x0;
    pFVar14 = (FUObjectHashTables *)0x0;
  }
  else {
    local_190 = pFVar8;
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar8);
    pFVar14 = pFVar8;
  }
  pFVar9 = TMapBase<UObjectBase_*,FSetHashBucket,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_*,FSetHashBucket,0>_>
           ::Find((TMapBase<UObjectBase_*,FSetHashBucket,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_*,FSetHashBucket,0>_>
                   *)&pFVar8->ObjectOuterMap,param_1);
  if (pFVar9 != (FSetHashBucket *)0x0) {
    local_188 = pFVar9;
    if ((pFVar9->Elements[1] ==
         (TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)0x0) ||
       (pFVar9->Elements[0] != (void *)0x0)) {
      TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::TIterator::
      TIterator(&local_c8,&FSetHashBucket::EmptyBucket);
      pTVar11 = &local_c8;
    }
    else {
      TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::TIterator::
      TIterator(pTVar11,pFVar9->Elements[1]);
    }
    local_180 = (longlong *)pTVar11->_padding_;
    TStack_178._padding_ = pTVar11->_padding_;
    TStack_178.Array = (TBitArray<FDefaultBitArrayAllocator> *)pTVar11->_padding_;
    TStack_178._16_8_ = pTVar11->_padding_;
    TStack_178._24_8_ = pTVar11->_padding_;
    pTStack_158 = pTVar11->Set;
    pFVar8 = pFVar9->Elements[1];
    if ((pFVar8 == (FUObjectHashTables *)0x0) ||
       (pFVar14 = pFVar8, pFVar9->Elements[0] != (void *)0x0)) {
      pFVar14 = (FUObjectHashTables *)0x0;
    }
    local_150 = pFVar14 != (FUObjectHashTables *)0x0;
    if ((pFVar9->Elements[0] == (void *)0x0) && (pFVar8 == (FUObjectHashTables *)0x0)) {
      local_14f = '\x01';
    }
    else {
      local_14f = '\0';
    }
    local_14e = '\0';
    cVar21 = local_150;
    while( true ) {
      cVar3 = local_14e;
      if (cVar21 == '\0') {
        bVar4 = local_14f == '\0';
      }
      else {
        bVar4 = TStack_178.CurrentBitIndex < (TStack_178.Array)->NumBits;
      }
      if (!bVar4) break;
      if (cVar21 == '\0') {
        plVar15 = (longlong *)
                  ((longlong)pFVar9->Elements + (ulonglong)(-(uint)(local_14e != '\0') & 8));
      }
      else {
        plVar15 = (longlong *)((longlong)TStack_178.CurrentBitIndex * 0x10 + *local_180);
      }
      local_1a8 = (UObject *)*plVar15;
      if (((param_4 & *(EObjectFlags *)&local_1a8->field_0x8) == RF_NoFlags) &&
         (pFVar10 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&local_1a8->field_0xc),
         (EVar5 & (EInternalObjectFlags)((ulonglong)(pFVar10->field0_0x0).FlagsAndRefCount >> 0x20))
         == Borrowed)) {
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable(local_1a8);
        }
        pFVar1 = (param_2->AllocatorInstance).Data;
        if (((pFVar1 <= (FScriptContainerElement *)&local_1a8) &&
            ((FScriptContainerElement *)&local_1a8 < pFVar1 + (longlong)param_2->ArrayMax * 8)) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x7a5,
                               L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                              ), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        iVar6 = param_2->ArrayNum;
        if (iVar6 == param_2->ArrayMax) {
          iVar6 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
        }
        param_2->ArrayNum = iVar6 + 1;
        *(UObject **)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_1a8;
      }
      if (cVar21 == '\0') {
        if ((cVar3 == '\0') && (pFVar9->Elements[1] != (void *)0x0)) {
          local_14f = '\0';
          local_14e = '\x01';
        }
        else {
          local_14f = '\x01';
          local_14e = '\x01';
        }
      }
      else {
        TStack_178.UnvisitedBitMask = TStack_178.UnvisitedBitMask & ~TStack_178._padding_._4_4_;
        TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_178);
        pFVar9 = local_188;
        cVar21 = local_150;
      }
    }
    local_194 = GUObjectArray.ObjObjects.NumElements;
    pFVar14 = local_190;
    if ((uVar13 != param_2->ArrayNum) && (uVar7 = param_2->ArrayNum, param_3)) {
      do {
        uVar23 = (ulonglong)(int)uVar13;
        local_198 = uVar13;
        if ((int)uVar13 < (int)uVar7) {
          lVar19 = uVar23 * 8;
          do {
            uVar22 = (uint)uVar23;
            uVar13 = 0;
            if ((int)uVar22 < param_2->ArrayNum) {
              uVar13 = ~uVar22 >> 0x1f;
            }
            local_108 = lVar19;
            if ((uVar13 == 0) &&
               (bVar4 = FDebug::CheckVerifyFailedImpl2
                                  ("(Index >= 0) & (Index < ArrayNum)",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                   ,0x447,
                                   L"Array index out of bounds: %lld into an array of size %lld"),
               bVar4)) {
              pcVar2 = (code *)swi(3);
              (*pcVar2)();
              return;
            }
            puVar20 = (ulonglong *)0x0;
            uVar23 = *(ulonglong *)((param_2->AllocatorInstance).Data + lVar19);
            uVar13 = ((uint)(uVar23 >> 0x14) & 0xffff ^ (uint)(uVar23 >> 4)) * -0x7a143595;
            uVar13 = (uVar13 >> 0xd ^ uVar13) * -0x3d4d51cb;
            puVar16 = puVar20;
            if ((int)(local_100->ObjectOuterMap)._padding_ !=
                *(int *)((longlong)&(local_100->ObjectOuterMap)._padding_ + 4)) {
              plVar15 = (longlong *)(local_100->ObjectOuterMap)._padding_;
              plVar17 = &(local_100->ObjectOuterMap)._padding_;
              if (plVar15 != (longlong *)0x0) {
                plVar17 = plVar15;
              }
              iVar6 = *(int *)((longlong)plVar17 +
                              (ulonglong)
                              ((int)(local_100->ObjectOuterMap)._padding_ - 1U &
                              (uVar13 >> 0x10 ^ uVar13)) * 4);
              if (iVar6 != -1) {
                do {
                  puVar16 = (ulonglong *)
                            ((longlong)iVar6 * 0x20 + (local_100->ObjectOuterMap)._padding_);
                  if (*puVar16 == uVar23) break;
                  iVar6 = (int)puVar16[3];
                  puVar16 = puVar20;
                } while (iVar6 != -1);
              }
            }
            puVar18 = puVar16 + 1;
            if (puVar16 == (ulonglong *)0x0) {
              puVar18 = puVar20;
            }
            if (puVar18 != (ulonglong *)0x0) {
              local_148 = puVar18;
              if (((TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)
                   puVar18[1] ==
                   (TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)0x0)
                 || (*puVar18 != 0)) {
                TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::TIterator
                ::TIterator(&local_68,&FSetHashBucket::EmptyBucket);
                pTVar11 = &local_68;
              }
              else {
                TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::TIterator
                ::TIterator(&local_98,
                            (TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>
                             *)puVar18[1]);
                pTVar11 = &local_98;
              }
              local_140 = (longlong *)pTVar11->_padding_;
              TStack_138._padding_ = pTVar11->_padding_;
              uVar23 = puVar18[1];
              TStack_138.Array = (TBitArray<FDefaultBitArrayAllocator> *)pTVar11->_padding_;
              TStack_138._16_8_ = pTVar11->_padding_;
              TStack_138._24_8_ = pTVar11->_padding_;
              pTStack_118 = pTVar11->Set;
              if ((uVar23 == 0) || (uVar12 = uVar23, *puVar18 != 0)) {
                uVar12 = 0;
              }
              local_110 = uVar12 != 0;
              if ((*puVar18 == 0) && (uVar23 == 0)) {
                local_10f = '\x01';
              }
              else {
                local_10f = '\0';
              }
              local_10e = '\0';
              cVar21 = local_110;
              while( true ) {
                cVar3 = local_10e;
                if (cVar21 == '\0') {
                  bVar4 = local_10f == '\0';
                }
                else {
                  bVar4 = TStack_138.CurrentBitIndex < (TStack_138.Array)->NumBits;
                }
                lVar19 = local_108;
                uVar22 = local_198;
                if (!bVar4) break;
                if (cVar21 == '\0') {
                  plVar15 = (longlong *)
                            ((ulonglong)(-(uint)(local_10e != '\0') & 8) + (longlong)puVar18);
                }
                else {
                  plVar15 = (longlong *)((longlong)TStack_138.CurrentBitIndex * 0x10 + *local_140);
                }
                local_1a0 = (UObject *)*plVar15;
                if (((param_4 & *(EObjectFlags *)&local_1a0->field_0x8) == RF_NoFlags) &&
                   (pFVar10 = FUObjectArray::IndexToObject
                                        (&GUObjectArray,*(int *)&local_1a0->field_0xc),
                   (EVar5 & (EInternalObjectFlags)
                            ((ulonglong)(pFVar10->field0_0x0).FlagsAndRefCount >> 0x20)) == Borrowed
                   )) {
                  if (UE::GC::GIsIncrementalReachabilityPending != false) {
                    UE::GC::MarkAsReachable(local_1a0);
                  }
                  pFVar1 = (param_2->AllocatorInstance).Data;
                  if (((pFVar1 <= (FScriptContainerElement *)&local_1a0) &&
                      ((FScriptContainerElement *)&local_1a0 <
                       pFVar1 + (longlong)param_2->ArrayMax * 8)) &&
                     (bVar4 = FDebug::CheckVerifyFailedImpl2
                                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                                         ,0x7a5,
                                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                                        ), bVar4)) {
                    pcVar2 = (code *)swi(3);
                    (*pcVar2)();
                    return;
                  }
                  iVar6 = param_2->ArrayNum;
                  if (iVar6 == param_2->ArrayMax) {
                    iVar6 = UE::Core::Private::
                            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                                      (0x808,&param_2->AllocatorInstance,&param_2->ArrayMax);
                  }
                  param_2->ArrayNum = iVar6 + 1;
                  *(UObject **)((param_2->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_1a0
                  ;
                }
                if (cVar21 == '\0') {
                  if ((cVar3 == '\0') && (puVar18[1] != 0)) {
                    local_10f = '\0';
                    local_10e = '\x01';
                  }
                  else {
                    local_10f = '\x01';
                    local_10e = '\x01';
                  }
                }
                else {
                  TStack_138.UnvisitedBitMask =
                       TStack_138.UnvisitedBitMask & ~TStack_138._padding_._4_4_;
                  TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_138);
                  puVar18 = local_148;
                  cVar21 = local_110;
                }
              }
            }
            local_198 = uVar22 + 1;
            uVar23 = (ulonglong)local_198;
            lVar19 = lVar19 + 8;
            local_108 = lVar19;
          } while ((int)local_198 < (int)uVar7);
        }
        if ((local_194 < param_2->ArrayNum) &&
           (bVar4 = FDebug::CheckVerifyFailedImpl2
                              ("Results.Num() <= MaxResults",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectHash.cpp"
                               ,0x64a,L""), bVar4)) {
          pcVar2 = (code *)swi(3);
          (*pcVar2)();
          return;
        }
        bVar4 = uVar7 != param_2->ArrayNum;
        pFVar14 = local_190;
        uVar13 = uVar7;
        uVar7 = param_2->ArrayNum;
      } while (bVar4);
    }
  }
  if (pFVar14 != (FUObjectHashTables *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)pFVar14);
  }
  return;
}

// GetObjectsWithPackage @ 14229e9f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
GetObjectsWithPackage
          (UPackage *param_1,TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_2,bool param_3,
          EObjectFlags param_4,EInternalObjectFlags param_5)

{
  TArray<UObject_*,TSizedDefaultAllocator<32>_> *local_res10 [3];
  code *local_18;
  TArray<UObject_*,TSizedDefaultAllocator<32>_> **local_10;
  
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`GetObjectsWithPackage'::__l2::<lambda_1>,bool,UObject_*>::Call;
  local_res10[0] = param_2;
  ForEachObjectWithPackage
            (param_1,(TFunctionRef<bool___cdecl(UObject_*)> *)&local_18,param_3,param_4,param_5);
  return;
}

// GetRegisteredClassesVersionNumber @ 14229ea30

ulong64 __cdecl GetRegisteredClassesVersionNumber(void)

{
  FUObjectHashTables *pFVar1;
  
  pFVar1 = FUObjectHashTables::Get();
  return (ulong64)pFVar1->AllClassesVersion;
}

// GetRegisteredNativeClassesVersionNumber @ 14229ea50

ulong64 __cdecl GetRegisteredNativeClassesVersionNumber(void)

{
  FUObjectHashTables *pFVar1;
  
  pFVar1 = FUObjectHashTables::Get();
  return (ulong64)pFVar1->NativeClassesVersion;
}

// HashObject @ 14229ec70

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Removing unreachable block (ram,0x00014229f688) */
/* WARNING: Removing unreachable block (ram,0x00014229f6ad) */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl HashObject(UObjectBase *param_1)

{
  TBucketMap<UObjectBase_*,FSetHashBucket> *this;
  TBucketMap<UClass_*,FSetHashBucket> *this_00;
  FName FVar1;
  UObjectBase *pUVar2;
  UObject *pUVar3;
  UClass *pUVar4;
  code *pcVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_Hash_HashObject> FVar12;
  FUObjectHashTables *lpCriticalSection;
  longlong *plVar13;
  FSetHashBucket *pFVar14;
  TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *pTVar15;
  UClass *pUVar16;
  TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator> *this_01;
  FUObjectItem *pFVar17;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  FWriteBuffer *pFVar18;
  int iVar19;
  FName FVar20;
  undefined1 *puVar21;
  TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *pTVar22;
  FUObjectHashTables *lpCriticalSection_00;
  int iVar23;
  int *piVar24;
  FNameEntryId FVar25;
  longlong lVar26;
  bool bVar27;
  undefined1 auStackY_1f8 [32];
  FName local_190;
  uint local_17c;
  uint local_178 [2];
  FLLMScope local_170 [2];
  uint local_168;
  uint uStack_164;
  FColor_u_0 local_160;
  int local_15c;
  int local_158;
  int local_154;
  FName local_150;
  TObjectPtr<UClass>_u_0 local_148;
  UObjectBase *local_140;
  undefined8 local_138;
  UObjectBase *local_130;
  UObjectBase *local_128;
  FName local_120;
  TObjectPtr<UObject>_u_0 local_118;
  UObjectBase *local_110;
  undefined1 local_108 [8];
  undefined1 local_100 [8];
  undefined1 local_f8 [16];
  undefined1 local_e8 [8];
  undefined1 local_e0 [8];
  FName local_d8;
  void *local_d0;
  void *local_c8;
  TObjectPtr<UObject>_u_0 *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  TObjectPtr<UClass>_u_0 *local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  FName local_90;
  LARGE_INTEGER local_88;
  FMemScope local_80;
  UObjectBase *local_78;
  FStatMessage local_70;
  uint *local_60;
  int *local_58;
  FName local_50;
  TLogScope<0> local_48;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1f8;
  FVar1 = (param_1->NamePrivate).Name;
  local_138 = 0;
  if (FVar1 == (FName)0x0) {
    return;
  }
  local_120 = FVar1;
  FLLMScope::FLLMScope(local_170,LLMTagDeclaration_UObjectHash.UniqueName,false,None,Default,true);
  local_d8 = LLMTagDeclaration_UObjectHash.UniqueName;
  FMemScope::FMemScope(&local_80,&local_d8,true);
  bVar27 = -1 < MetadataChannel->Enabled;
  if (bVar27) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataStackClearScopeFields>(&local_48);
    *(undefined8 *)(local_48._8_8_ + 0x28) = *(undefined8 *)(local_48._8_8_ + 0x20);
  }
  FVar12 = StatPtr_STAT_Hash_HashObject;
  if (StatPtr_STAT_Hash_HashObject == (FThreadSafeStaticStat<FStat_STAT_Hash_HashObject>)0x0) {
    pFVar11 = FName::FName(&local_50,"STAT_Hash_HashObject");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Hash_HashObject>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Hash_HashObject,*pFVar11,
                        L"HashObject","STATGROUP_UObjectHash","STATCAT_Advanced",L"UObject Hash",
                        false,true,ST_int64,true,false,MCR_Invalid);
  }
  local_190.ComparisonIndex.Value = 0;
  local_190.Number = 0;
  bVar8 = false;
  bVar7 = false;
  bVar6 = false;
  FVar20 = *(FName *)FVar12;
  FVar25 = FVar20.ComparisonIndex.Value;
  uVar10 = FVar20.Number;
  if ((FVar25.Value != 0) || (uVar10 != 0)) {
    if (GCycleStatsShouldEmitNamedEvents != 0) {
      local_160.Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_160._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar7 = false;
      bVar6 = true;
      if (-1 < CpuChannel->Enabled) {
        local_150.ComparisonIndex.Value = FVar25.Value;
        local_150.Number = uVar10;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_150,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectHash.cpp"
                   ,0x7a9);
        bVar7 = true;
        bVar6 = true;
      }
    }
    bVar8 = false;
    if (FThreadStats::bPrimaryEnable != false) {
      local_168 = FVar25.Value;
      uStack_164 = uVar10;
      FThreadStats::AddMessage(FVar20,CycleScopeStart);
      bVar8 = true;
      local_190 = FVar20;
    }
  }
  lpCriticalSection = FUObjectHashTables::Get();
  bVar9 = IsGarbageCollectingAndLockingUObjectHashTables();
  if ((bVar9) && (bVar9 = IsInGameThread(), bVar9)) {
    lpCriticalSection_00 = (FUObjectHashTables *)0x0;
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    lpCriticalSection_00 = lpCriticalSection;
  }
  local_17c = GetTypeHash(FVar1.ComparisonIndex.Value);
  local_17c = local_120.Number + local_17c;
  if ((int)(lpCriticalSection->Hash)._padding_ !=
      *(int *)((longlong)&(lpCriticalSection->Hash)._padding_ + 4)) {
    plVar13 = (longlong *)(lpCriticalSection->Hash)._padding_;
    if (plVar13 == (longlong *)0x0) {
      plVar13 = &(lpCriticalSection->Hash)._padding_;
    }
    iVar23 = *(int *)((longlong)plVar13 +
                     (ulonglong)((int)(lpCriticalSection->Hash)._padding_ - 1U & local_17c) * 4);
    if (iVar23 != -1) {
      lVar26 = (lpCriticalSection->Hash)._padding_;
      do {
        if (*(uint *)((longlong)iVar23 * 0x20 + lVar26) == local_17c) {
          if (((iVar23 != -1) && (lVar26 = (longlong)iVar23 * 0x20 + lVar26, lVar26 != 0)) &&
             (plVar13 = (longlong *)(lVar26 + 8), plVar13 != (longlong *)0x0)) {
            pUVar2 = *(UObjectBase **)(lVar26 + 0x10);
            if ((pUVar2 != (UObjectBase *)0x0) && (*plVar13 == 0)) {
              uVar10 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^
                       (uint)((ulonglong)param_1 >> 4)) * -0x7a143595;
              uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
              if (pUVar2->ObjectFlags == pUVar2[1].InternalIndex) goto LAB_14229ef85;
              FVar20 = pUVar2[1].NamePrivate.Name;
              if (FVar20 == (FName)0x0) {
                FVar20 = (FName)&pUVar2[1].ClassPrivate;
              }
              iVar23 = *(int *)((longlong)FVar20 +
                               (ulonglong)
                               (*(int *)&pUVar2[1].OuterPrivate.ObjectPtr.field0_0x0 - 1U &
                               (uVar10 >> 0x10 ^ uVar10)) * 4);
              if (iVar23 == -1) goto LAB_14229ef85;
              goto LAB_14229ef70;
            }
            if ((param_1 == (UObjectBase *)*plVar13) || (param_1 == pUVar2)) goto LAB_14229ef9b;
          }
          break;
        }
        iVar23 = *(int *)((longlong)iVar23 * 0x20 + 0x18 + lVar26);
      } while (iVar23 != -1);
    }
  }
  goto LAB_14229efb6;
LAB_14229f170:
  while (piVar24 = (int *)((longlong)iVar23 * 0x10 + 4 + lVar26), *piVar24 != param_1->InternalIndex
        ) {
    do {
      iVar23 = iVar19;
      if (iVar23 == -1) goto LAB_14229f1cb;
      iVar19 = *(int *)(lVar26 + 8 + (longlong)iVar23 * 0x10);
    } while (*(uint *)(lVar26 + (longlong)iVar23 * 0x10) != local_17c);
  }
  if (piVar24 != (int *)0x0) {
    OnHashFailure((UObjectBaseUtility *)param_1,L"HashOuter",L"double add");
  }
  goto LAB_14229f1cb;
  while (iVar23 = *(int *)(pUVar2->_padding_ + 8 + (longlong)iVar23 * 0x10), iVar23 != -1) {
LAB_14229ef70:
    if (*(UObjectBase **)(pUVar2->_padding_ + (longlong)iVar23 * 0x10) == param_1)
    goto LAB_14229ef8a;
  }
LAB_14229ef85:
  iVar23 = -1;
LAB_14229ef8a:
  if (iVar23 != -1) {
LAB_14229ef9b:
    OnHashFailure((UObjectBaseUtility *)param_1,L"Hash",L"double add");
  }
LAB_14229efb6:
  local_178[0] = local_17c;
  if ((lpCriticalSection->Hash).ReadOnlyLock != 0) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`public:_struct_FSetHashBucket&___ptr64___cdecl_TBucketMap<int,FSetHashBucket>::FindOrAdd(int_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogObj);
  }
  pFVar14 = TMapBase<int,FSetHashBucket,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FSetHashBucket,0>_>
            ::FindOrAddImpl<int_const_&>
                      ((TMapBase<int,FSetHashBucket,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,FSetHashBucket,0>_>
                        *)&lpCriticalSection->Hash,local_178[0],(int *)local_178);
  pTVar15 = pFVar14->Elements[1];
  local_128 = param_1;
  if (pTVar15 == (TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)0x0) {
    if (pFVar14->Elements[0] != (void *)0x0) goto LAB_14229f022;
    pFVar14->Elements[0] = param_1;
  }
  else if (pFVar14->Elements[0] == (void *)0x0) {
    TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::
    Emplace<UObjectBase_*_const_&>(pTVar15,(UObjectBase **)local_108,(bool *)&local_128);
  }
  else {
LAB_14229f022:
    if (pTVar15 == (TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)0x0)
    {
      pFVar14->Elements[1] = param_1;
    }
    else {
      pTVar15 = operator_new(0x50);
      if (pTVar15 ==
          (TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)0x0) {
        pTVar15 = (TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)0x0;
      }
      else {
        *(undefined8 *)&(pTVar15->Elements).field_0x10 = 0;
        *(undefined8 *)&(pTVar15->Elements).field_0x18 = 0;
        (pTVar15->Hash).InlineData[0] = '\0';
        (pTVar15->Hash).InlineData[1] = '\0';
        (pTVar15->Hash).InlineData[2] = '\0';
        (pTVar15->Hash).InlineData[3] = '\0';
        (pTVar15->Hash)._padding_ = 0;
        *(undefined8 *)&pTVar15->HashSize = 0;
        *(undefined8 *)&pTVar15->Elements = 0;
        *(undefined8 *)&(pTVar15->Elements).field_0x8 = 0;
        *(undefined8 *)&(pTVar15->Elements).field_0x20 = 0;
        *(undefined4 *)&(pTVar15->Elements).field_0x28 = 0;
        *(undefined4 *)&(pTVar15->Elements).field_0x2c = 0x80;
        *(undefined4 *)&(pTVar15->Elements).field_0x30 = 0xffffffff;
        *(undefined4 *)&(pTVar15->Elements).field_0x34 = 0;
        (pTVar15->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
      }
      local_d0 = pFVar14->Elements[0];
      TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::
      Emplace<UObjectBase_*>(pTVar15,(UObjectBase **)(local_108 + 4),(bool *)&local_d0);
      local_c8 = pFVar14->Elements[1];
      TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::
      Emplace<UObjectBase_*>(pTVar15,(UObjectBase **)local_100,(bool *)&local_c8);
      TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::
      Emplace<UObjectBase_*_const_&>(pTVar15,(UObjectBase **)(local_100 + 4),(bool *)&local_128);
      pFVar14->Elements[0] = (void *)0x0;
      pFVar14->Elements[1] = pTVar15;
    }
  }
  pUVar3 = (param_1->OuterPrivate).ObjectPtr.field0_0x0.DebugPtr;
  if (pUVar3 != (UObject *)0x0) {
    uVar10 = GetTypeHash(FVar1.ComparisonIndex.Value);
    local_17c = local_120.Number + uVar10 + (int)((longlong)pUVar3 >> 6);
    iVar23 = *(int *)&(lpCriticalSection->HashOuter).field_0x48;
    if (iVar23 != 0) {
      puVar21 = *(undefined1 **)&(lpCriticalSection->HashOuter).field_0x40;
      if (puVar21 == (undefined1 *)0x0) {
        puVar21 = &(lpCriticalSection->HashOuter).field_0x38;
      }
      if (*(int *)(puVar21 + ((longlong)iVar23 - 1U & (longlong)(int)local_17c) * 4) != -1) {
        lVar26 = *(longlong *)&lpCriticalSection->HashOuter;
        iVar23 = *(int *)(puVar21 + ((longlong)iVar23 - 1U & (longlong)(int)local_17c) * 4);
        do {
          iVar19 = *(int *)(lVar26 + 8 + (longlong)iVar23 * 0x10);
          if (*(uint *)(lVar26 + (longlong)iVar23 * 0x10) == local_17c) goto LAB_14229f170;
          iVar23 = iVar19;
        } while (iVar19 != -1);
      }
    }
LAB_14229f1cb:
    local_15c = param_1->InternalIndex;
    local_60 = &local_17c;
    local_58 = &local_15c;
    TSet<TTuple<int,unsigned_int>,TDefaultMapHashableKeyFuncs<int,unsigned_int,1>,FDefaultSetAllocator>
    ::Emplace<TPairInitializer<int_const_&,unsigned_int_&&>_>
              ((TSet<TTuple<int,unsigned_int>,TDefaultMapHashableKeyFuncs<int,unsigned_int,1>,FDefaultSetAllocator>
                *)&lpCriticalSection->HashOuter,
               (TPairInitializer<int_const_&,unsigned_int_&&> *)local_f8,(bool *)&local_60);
    local_118 = (TObjectPtr<UObject>_u_0)(param_1->OuterPrivate).ObjectPtr.field0_0x0.DebugPtr;
    this = &lpCriticalSection->ObjectOuterMap;
    if ((lpCriticalSection->ObjectOuterMap).ReadOnlyLock != 0) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`public:_struct_FSetHashBucket&___ptr64___cdecl_TBucketMap<UObjectBase*___ptr64,FSetHashBucket>::FindOrAdd(UObjectBase*___ptr64&&___ptr64)___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogObj);
    }
    uVar10 = ((uint)((ulonglong)local_118.DebugPtr >> 0x14) & 0xffff ^
             (uint)((ulonglong)local_118.DebugPtr >> 4)) * -0x7a143595;
    uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
    uVar10 = uVar10 >> 0x10 ^ uVar10;
    if ((int)(lpCriticalSection->ObjectOuterMap)._padding_ !=
        *(int *)((longlong)&(lpCriticalSection->ObjectOuterMap)._padding_ + 4)) {
      plVar13 = (longlong *)(lpCriticalSection->ObjectOuterMap)._padding_;
      if (plVar13 == (longlong *)0x0) {
        plVar13 = &(lpCriticalSection->ObjectOuterMap)._padding_;
      }
      iVar23 = *(int *)((longlong)plVar13 +
                       (ulonglong)((int)(lpCriticalSection->ObjectOuterMap)._padding_ - 1U & uVar10)
                       * 4);
      if (iVar23 != -1) {
        lVar26 = this->_padding_;
        do {
          if (*(UObject **)((longlong)iVar23 * 0x20 + lVar26) == local_118.DebugPtr) {
            if ((iVar23 != -1) && (lVar26 = (longlong)iVar23 * 0x20 + lVar26, lVar26 != 0))
            goto LAB_14229f2d6;
            break;
          }
          iVar23 = *(int *)((longlong)iVar23 * 0x20 + 0x18 + lVar26);
        } while (iVar23 != -1);
      }
    }
    local_c0 = &local_118;
    TSet<TTuple<UObjectBase_*,FSetHashBucket>,TDefaultMapHashableKeyFuncs<UObjectBase_*,FSetHashBucket,0>,FDefaultSetAllocator>
    ::EmplaceByHash<TKeyInitializer<UObjectBase_*_const_&>_>
              ((TSet<TTuple<UObjectBase_*,FSetHashBucket>,TDefaultMapHashableKeyFuncs<UObjectBase_*,FSetHashBucket,0>,FDefaultSetAllocator>
                *)this,(uint)&local_158,(TKeyInitializer<UObjectBase_*_const_&> *)(ulonglong)uVar10,
               (bool *)&local_c0);
    lVar26 = (longlong)local_158 * 0x20 + this->_padding_;
LAB_14229f2d6:
    pTVar22 = (TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)0x0;
    pTVar15 = *(TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> **)
               (lVar26 + 0x10);
    local_110 = param_1;
    if (pTVar15 == (TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)0x0)
    {
      if (*(longlong *)(lVar26 + 8) != 0) goto LAB_14229f324;
      *(UObjectBase **)(lVar26 + 8) = param_1;
    }
    else if (*(longlong *)(lVar26 + 8) == 0) {
      TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::
      Emplace<UObjectBase_*_const_&>(pTVar15,(UObjectBase **)(local_f8 + 4),(bool *)&local_110);
    }
    else {
LAB_14229f324:
      if (pTVar15 ==
          (TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)0x0) {
        *(UObjectBase **)(lVar26 + 0x10) = param_1;
      }
      else {
        pTVar15 = operator_new(0x50);
        if (pTVar15 !=
            (TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)0x0) {
          *(undefined8 *)&(pTVar15->Elements).field_0x10 = 0;
          *(undefined8 *)&(pTVar15->Elements).field_0x18 = 0;
          (pTVar15->Hash).InlineData[0] = '\0';
          (pTVar15->Hash).InlineData[1] = '\0';
          (pTVar15->Hash).InlineData[2] = '\0';
          (pTVar15->Hash).InlineData[3] = '\0';
          (pTVar15->Hash)._padding_ = 0;
          *(undefined8 *)&pTVar15->HashSize = 0;
          *(undefined8 *)&pTVar15->Elements = 0;
          *(undefined8 *)&(pTVar15->Elements).field_0x8 = 0;
          *(undefined8 *)&(pTVar15->Elements).field_0x20 = 0;
          *(undefined4 *)&(pTVar15->Elements).field_0x28 = 0;
          *(undefined4 *)&(pTVar15->Elements).field_0x2c = 0x80;
          *(undefined4 *)&(pTVar15->Elements).field_0x30 = 0xffffffff;
          *(undefined4 *)&(pTVar15->Elements).field_0x34 = 0;
          (pTVar15->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
          pTVar22 = pTVar15;
        }
        local_b8 = *(undefined8 *)(lVar26 + 8);
        TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::
        Emplace<UObjectBase_*>(pTVar22,(UObjectBase **)(local_f8 + 8),(bool *)&local_b8);
        local_b0 = *(undefined8 *)(lVar26 + 0x10);
        TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::
        Emplace<UObjectBase_*>(pTVar22,(UObjectBase **)(local_f8 + 0xc),(bool *)&local_b0);
        TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::
        Emplace<UObjectBase_*_const_&>(pTVar22,(UObjectBase **)local_e8,(bool *)&local_110);
        *(undefined8 *)(lVar26 + 8) = 0;
        *(TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> **)
         (lVar26 + 0x10) = pTVar22;
      }
    }
  }
  if (((param_1->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr == (UClass *)0x0) &&
     (bVar9 = FDebug::CheckVerifyFailedImpl2
                        ("Object->GetClass()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectHash.cpp"
                         ,0x53a,L""), bVar9)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  local_148 = (TObjectPtr<UClass>_u_0)(param_1->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
  this_00 = &lpCriticalSection->ClassToObjectListMap;
  if ((lpCriticalSection->ClassToObjectListMap).ReadOnlyLock != 0) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`public:_struct_FSetHashBucket&___ptr64___cdecl_TBucketMap<UClass*___ptr64,FSetHashBucket>::FindOrAdd(UClass*___ptr64&&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogObj);
  }
  uVar10 = ((uint)((ulonglong)local_148.DebugPtr >> 0x14) & 0xffff ^
           (uint)((ulonglong)local_148.DebugPtr >> 4)) * -0x7a143595;
  uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
  uVar10 = uVar10 >> 0x10 ^ uVar10;
  if ((int)(lpCriticalSection->ClassToObjectListMap)._padding_ !=
      *(int *)((longlong)&(lpCriticalSection->ClassToObjectListMap)._padding_ + 4)) {
    plVar13 = (longlong *)(lpCriticalSection->ClassToObjectListMap)._padding_;
    if (plVar13 == (longlong *)0x0) {
      plVar13 = &(lpCriticalSection->ClassToObjectListMap)._padding_;
    }
    iVar23 = *(int *)((longlong)plVar13 +
                     (ulonglong)
                     ((int)(lpCriticalSection->ClassToObjectListMap)._padding_ - 1U & uVar10) * 4);
    if (iVar23 != -1) {
      lVar26 = this_00->_padding_;
      do {
        if (*(UClass **)((longlong)iVar23 * 0x20 + lVar26) == local_148.DebugPtr) {
          if ((iVar23 != -1) && (lVar26 = (longlong)iVar23 * 0x20 + lVar26, lVar26 != 0))
          goto LAB_14229f4d7;
          break;
        }
        iVar23 = *(int *)((longlong)iVar23 * 0x20 + 0x18 + lVar26);
      } while (iVar23 != -1);
    }
  }
  local_a8 = &local_148;
  TSet<TTuple<UClass_*,FSetHashBucket>,TDefaultMapHashableKeyFuncs<UClass_*,FSetHashBucket,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UClass_*_const_&>_>
            ((TSet<TTuple<UClass_*,FSetHashBucket>,TDefaultMapHashableKeyFuncs<UClass_*,FSetHashBucket,0>,FDefaultSetAllocator>
              *)this_00,(uint)&local_154,(TKeyInitializer<UClass_*_const_&> *)(ulonglong)uVar10,
             (bool *)&local_a8);
  lVar26 = (longlong)local_154 * 0x20 + this_00->_padding_;
LAB_14229f4d7:
  pTVar22 = (TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)0x0;
  pTVar15 = *(TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> **)
             (lVar26 + 0x10);
  local_130 = param_1;
  if (pTVar15 == (TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)0x0) {
    if (*(longlong *)(lVar26 + 8) == 0) {
      *(UObjectBase **)(lVar26 + 8) = param_1;
      goto LAB_14229f5e2;
    }
  }
  else if (*(longlong *)(lVar26 + 8) == 0) {
    TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::
    Emplace<UObjectBase_*_const_&>(pTVar15,(UObjectBase **)(local_e0 + 4),(bool *)&local_130);
    goto LAB_14229f5e2;
  }
  if (pTVar15 == (TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)0x0) {
    *(UObjectBase **)(lVar26 + 0x10) = param_1;
  }
  else {
    pTVar15 = operator_new(0x50);
    if (pTVar15 != (TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)0x0)
    {
      *(undefined8 *)&(pTVar15->Elements).field_0x10 = 0;
      *(undefined8 *)&(pTVar15->Elements).field_0x18 = 0;
      (pTVar15->Hash).InlineData[0] = '\0';
      (pTVar15->Hash).InlineData[1] = '\0';
      (pTVar15->Hash).InlineData[2] = '\0';
      (pTVar15->Hash).InlineData[3] = '\0';
      (pTVar15->Hash)._padding_ = 0;
      *(undefined8 *)&pTVar15->HashSize = 0;
      *(undefined8 *)&pTVar15->Elements = 0;
      *(undefined8 *)&(pTVar15->Elements).field_0x8 = 0;
      *(undefined8 *)&(pTVar15->Elements).field_0x20 = 0;
      *(undefined4 *)&(pTVar15->Elements).field_0x28 = 0;
      *(undefined4 *)&(pTVar15->Elements).field_0x2c = 0x80;
      *(undefined4 *)&(pTVar15->Elements).field_0x30 = 0xffffffff;
      *(undefined4 *)&(pTVar15->Elements).field_0x34 = 0;
      (pTVar15->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
      pTVar22 = pTVar15;
    }
    local_a0 = *(undefined8 *)(lVar26 + 8);
    TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::
    Emplace<UObjectBase_*>(pTVar22,(UObjectBase **)(local_e8 + 4),(bool *)&local_a0);
    local_98 = *(undefined8 *)(lVar26 + 0x10);
    TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::
    Emplace<UObjectBase_*>(pTVar22,(UObjectBase **)local_e0,(bool *)&local_98);
    TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::
    Emplace<UObjectBase_*_const_&>(pTVar22,&local_78,(bool *)&local_130);
    *(undefined8 *)(lVar26 + 8) = 0;
    *(TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> **)(lVar26 + 0x10) =
         pTVar22;
  }
LAB_14229f5e2:
  pUVar16 = Z_Construct_UClass_UClass_NoRegister();
  pUVar4 = (param_1->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
  iVar23 = (int)pUVar16->_padding_;
  if ((iVar23 <= (int)pUVar4->_padding_) &&
     ((longlong *)*(undefined1 **)(pUVar4->_padding_ + (longlong)iVar23 * 8) == &pUVar16->_padding_)
     ) {
    local_90 = param_1[1].NamePrivate.Name;
    local_140 = param_1;
    if (local_90 != (FName)0x0) {
      uVar10 = ((uint)((ulonglong)local_90 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_90 >> 4)) *
               -0x7a143595;
      uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
      this_01 = TMapBase<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,0>_>
                ::FindOrAddImpl<UClass_*_const_&>
                          ((TMapBase<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,0>_>
                            *)&lpCriticalSection->ClassToChildListMap,uVar10 >> 0x10 ^ uVar10,
                           (UClass **)&local_90);
      TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>::Emplace<UClass_*_const_&>
                (this_01,(UClass **)&local_168,(bool *)&local_140);
    }
    LOCK();
    lpCriticalSection->AllClassesVersion =
         (atomic<unsigned___int64>)((longlong)lpCriticalSection->AllClassesVersion + 1);
    UNLOCK();
    pFVar17 = FUObjectArray::IndexToObject(&GUObjectArray,param_1->InternalIndex);
    if (((ulonglong)((pFVar17->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x19 & 1) != 0) {
      LOCK();
      lpCriticalSection->NativeClassesVersion =
           (atomic<unsigned___int64>)((longlong)lpCriticalSection->NativeClassesVersion + 1);
      UNLOCK();
    }
  }
  if (lpCriticalSection_00 != (FUObjectHashTables *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
  }
  if (bVar6) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar7) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (local_190 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_02 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_02 == (FThreadStats *)0x0) {
      this_03 = FThreadStatsPool::Get();
      this_02 = FThreadStatsPool::GetFromPool(this_03);
    }
    if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
      local_70.NameAndInfo.Index = local_190.ComparisonIndex.Value;
      local_70.NameAndInfo.Number = local_190.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_88);
      local_70.StatData.Pad[4] = '\0';
      local_70.StatData.Pad[5] = '\0';
      local_70.StatData.Pad[6] = '\0';
      local_70.StatData.Pad[7] = '\0';
      local_70.StatData.Pad[0] = local_88.s.LowPart._0_1_;
      local_70.StatData.Pad[1] = local_88.s.LowPart._1_1_;
      local_70.StatData.Pad[2] = local_88.s.LowPart._2_1_;
      local_70.StatData.Pad[3] = local_88.s.LowPart._3_1_;
      FThreadStats::AddStatMessage(this_02,&local_70);
      piVar24 = &this_02->ScopeCount;
      *piVar24 = *piVar24 + -1;
      if (*piVar24 == 0) {
        FThreadStats::Flush(this_02,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
    }
  }
  if (bVar27) {
    lVar26 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar26 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar18 = *(FWriteBuffer **)(lVar26 + 0x20);
    if ((int)pFVar18 - *(int *)&pFVar18->Cursor < 1) {
      pFVar18 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar18->Cursor = '\n';
    pFVar18->Cursor = pFVar18->Cursor + 1;
    pFVar18->Committed = pFVar18->Cursor;
  }
  FMemScope::~FMemScope(&local_80);
  FLLMScope::~FLLMScope(local_170);
  return;
}

// HashObjectExternalPackage @ 14229f880

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl HashObjectExternalPackage(UObjectBase *param_1,UPackage *param_2)

{
  UPackage *pUVar1;
  ForElementType<FSetElementId> FVar2;
  void *pvVar3;
  longlong lVar4;
  bool bVar5;
  FUObjectHashTables *lpCriticalSection;
  UPackage **ppUVar6;
  FSetHashBucket *pFVar7;
  TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *pTVar8;
  FWriteBuffer *pFVar9;
  uint uVar10;
  int iVar11;
  FUObjectHashTables *lpCriticalSection_00;
  TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *pTVar12;
  bool bVar13;
  undefined1 auStackY_118 [32];
  int local_e4;
  FLLMScope local_e0 [2];
  UPackage *local_d8;
  UPackage *local_d0;
  UObjectBase *local_c8;
  undefined1 local_c0 [8];
  undefined1 local_b8 [4];
  FName local_b4;
  UObjectBase *local_a8;
  UPackage *local_a0;
  void *local_98;
  void *local_90;
  FMemScope local_88;
  undefined1 local_80 [12];
  uint local_74;
  uint local_68;
  int local_64;
  TLogScope<0> local_50;
  ulonglong local_40;
  
  local_40 = __security_cookie.value ^ (ulonglong)auStackY_118;
  FLLMScope::FLLMScope(local_e0,LLMTagDeclaration_UObjectHash.UniqueName,false,None,Default,true);
  local_b4 = LLMTagDeclaration_UObjectHash.UniqueName;
  FMemScope::FMemScope(&local_88,&local_b4,true);
  bVar13 = -1 < MetadataChannel->Enabled;
  if (bVar13) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataStackClearScopeFields>(&local_50);
    *(undefined8 *)(local_50._8_8_ + 0x28) = *(undefined8 *)(local_50._8_8_ + 0x20);
  }
  if (param_2 == (UPackage *)0x0) {
    UnhashObjectExternalPackage(param_1);
    goto LAB_14229fd44;
  }
  lpCriticalSection = FUObjectHashTables::Get();
  bVar5 = IsGarbageCollectingAndLockingUObjectHashTables();
  lpCriticalSection_00 = (FUObjectHashTables *)0x0;
  if ((!bVar5) || (bVar5 = IsInGameThread(), !bVar5)) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    lpCriticalSection_00 = lpCriticalSection;
  }
  uVar10 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
           -0x7a143595;
  uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
  local_a8 = param_1;
  ppUVar6 = TMapBase<UObjectBase_*,UPackage_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_*,UPackage_*,0>_>
            ::FindOrAddImpl<UObjectBase_*_const_&>
                      ((TMapBase<UObjectBase_*,UPackage_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_*,UPackage_*,0>_>
                        *)&lpCriticalSection->ObjectToPackageMap,uVar10 >> 0x10 ^ uVar10,&local_a8);
  pUVar1 = *ppUVar6;
  *ppUVar6 = param_2;
  if (pUVar1 != param_2) {
    if (pUVar1 != (UPackage *)0x0) {
      local_d8 = pUVar1;
      if ((lpCriticalSection->PackageToObjectListMap).ReadOnlyLock != 0) {
        UE::Logging::Private::BasicFatalLog
                  ((FStaticBasicLogRecord *)
                   &`public:_struct_FSetHashBucket&___ptr64___cdecl_TBucketMap<UPackage*___ptr64,FSetHashBucket>::FindOrAdd(UPackage*___ptr64_const&___ptr64)___ptr64'
                    ::__l3::LOG_Static,(FLogCategoryBase *)&LogObj);
      }
      uVar10 = ((uint)((ulonglong)local_d8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_d8 >> 4)) *
               -0x7a143595;
      uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
      pFVar7 = TMapBase<UPackage_*,FSetHashBucket,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPackage_*,FSetHashBucket,0>_>
               ::FindOrAddImpl<UPackage_*_const_&>
                         ((TMapBase<UPackage_*,FSetHashBucket,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPackage_*,FSetHashBucket,0>_>
                           *)&lpCriticalSection->PackageToObjectListMap,uVar10 >> 0x10 ^ uVar10,
                          &local_d8);
      pTVar12 = pFVar7->Elements[1];
      if ((pTVar12 ==
           (TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)0x0) ||
         (pFVar7->Elements[0] != (void *)0x0)) {
        if ((TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)param_1 ==
            pTVar12) {
          pFVar7->Elements[1] = (void *)0x0;
        }
        else {
          if (param_1 != pFVar7->Elements[0]) goto LAB_14229fad8;
          pFVar7->Elements[0] = pTVar12;
          pFVar7->Elements[1] = (void *)0x0;
        }
      }
      else {
        local_e4 = TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::Remove
                             (pTVar12,param_1);
        if (*(int *)&(pTVar12->Elements).field_0x8 - *(int *)&(pTVar12->Elements).field_0x34 < 3) {
          TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::TIterator::
          TIterator((TIterator *)local_80,pTVar12);
          pFVar7->Elements[0] = *(void **)(*(longlong *)local_80._0_8_ + (longlong)local_64 * 0x10);
          local_68 = local_68 & ~local_74;
          TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                    ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_80 + 8));
          pFVar7->Elements[1] = *(void **)(*(longlong *)local_80._0_8_ + (longlong)local_64 * 0x10);
          pTVar12->HashSize = 0;
          FVar2 = (pTVar12->Hash).SecondaryData;
          if (FVar2 != (ForElementType<FSetElementId>)0x0) {
            FMemory::Free((void *)FVar2);
          }
          TSparseArray<TSparseSetElement<UObjectBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
          ::
          ~TSparseArray<TSparseSetElement<UObjectBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                    (&pTVar12->Elements);
          operator_delete(pTVar12,0x50);
        }
        if (local_e4 != 1) {
LAB_14229fad8:
          OnHashFailure((UObjectBaseUtility *)param_1,L"PackageMap",L"remove miscount");
        }
      }
      pvVar3 = pFVar7->Elements[1];
      if ((pvVar3 == (void *)0x0) || (pFVar7->Elements[0] != (void *)0x0)) {
        iVar11 = (uint)(pvVar3 != (void *)0x0) + (uint)(pFVar7->Elements[0] != (void *)0x0);
      }
      else {
        iVar11 = *(int *)((longlong)pvVar3 + 8) - *(int *)((longlong)pvVar3 + 0x34);
      }
      if (iVar11 == 0) {
        if ((lpCriticalSection->PackageToObjectListMap).ReadOnlyLock != 0) {
          UE::Logging::Private::BasicFatalLog
                    ((FStaticBasicLogRecord *)
                     &`public:_void___cdecl_TBucketMap<UPackage*___ptr64,FSetHashBucket>::Remove(UPackage*___ptr64_const&___ptr64)___ptr64'
                      ::__l3::LOG_Static,(FLogCategoryBase *)&LogObj);
        }
        local_a0 = local_d8;
        if ((int)(lpCriticalSection->PackageToObjectListMap)._padding_ !=
            *(int *)((longlong)&(lpCriticalSection->PackageToObjectListMap)._padding_ + 4)) {
          uVar10 = ((uint)((ulonglong)local_d8 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_d8 >> 4))
                   * -0x7a143595;
          uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
          TSet<TTuple<UPackage_*,FSetHashBucket>,TDefaultMapHashableKeyFuncs<UPackage_*,FSetHashBucket,0>,FDefaultSetAllocator>
          ::RemoveImpl<UPackage_const_*>
                    ((TSet<TTuple<UPackage_*,FSetHashBucket>,TDefaultMapHashableKeyFuncs<UPackage_*,FSetHashBucket,0>,FDefaultSetAllocator>
                      *)&lpCriticalSection->PackageToObjectListMap,uVar10 >> 0x10 ^ uVar10,&local_a0
                    );
        }
      }
    }
    pTVar12 = (TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)0x0;
    local_d0 = param_2;
    if ((lpCriticalSection->PackageToObjectListMap).ReadOnlyLock != 0) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`public:_struct_FSetHashBucket&___ptr64___cdecl_TBucketMap<UPackage*___ptr64,FSetHashBucket>::FindOrAdd(UPackage*___ptr64_const&___ptr64)___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogObj);
    }
    uVar10 = ((uint)((ulonglong)local_d0 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_d0 >> 4)) *
             -0x7a143595;
    uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
    pFVar7 = TMapBase<UPackage_*,FSetHashBucket,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPackage_*,FSetHashBucket,0>_>
             ::FindOrAddImpl<UPackage_*_const_&>
                       ((TMapBase<UPackage_*,FSetHashBucket,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPackage_*,FSetHashBucket,0>_>
                         *)&lpCriticalSection->PackageToObjectListMap,uVar10 >> 0x10 ^ uVar10,
                        &local_d0);
    pTVar8 = pFVar7->Elements[1];
    local_c8 = param_1;
    if (pTVar8 == (TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)0x0)
    {
      if (pFVar7->Elements[0] != (void *)0x0) goto LAB_14229fc4c;
      pFVar7->Elements[0] = param_1;
    }
    else if (pFVar7->Elements[0] == (void *)0x0) {
      TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::
      Emplace<UObjectBase_*_const_&>(pTVar8,(UObjectBase **)&local_e4,(bool *)&local_c8);
    }
    else {
LAB_14229fc4c:
      if (pTVar8 == (TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)0x0
         ) {
        pFVar7->Elements[1] = param_1;
      }
      else {
        pTVar8 = operator_new(0x50);
        if (pTVar8 != (TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)
                      0x0) {
          *(undefined8 *)&(pTVar8->Elements).field_0x10 = 0;
          *(undefined8 *)&(pTVar8->Elements).field_0x18 = 0;
          (pTVar8->Hash).InlineData[0] = '\0';
          (pTVar8->Hash).InlineData[1] = '\0';
          (pTVar8->Hash).InlineData[2] = '\0';
          (pTVar8->Hash).InlineData[3] = '\0';
          (pTVar8->Hash)._padding_ = 0;
          *(undefined8 *)&pTVar8->HashSize = 0;
          *(undefined8 *)&pTVar8->Elements = 0;
          *(undefined8 *)&(pTVar8->Elements).field_0x8 = 0;
          *(undefined8 *)&(pTVar8->Elements).field_0x20 = 0;
          *(undefined4 *)&(pTVar8->Elements).field_0x28 = 0;
          *(undefined4 *)&(pTVar8->Elements).field_0x2c = 0x80;
          *(undefined4 *)&(pTVar8->Elements).field_0x30 = 0xffffffff;
          *(undefined4 *)&(pTVar8->Elements).field_0x34 = 0;
          (pTVar8->Hash).SecondaryData = (ForElementType<FSetElementId>)0x0;
          pTVar12 = pTVar8;
        }
        local_98 = pFVar7->Elements[0];
        TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::
        Emplace<UObjectBase_*>(pTVar12,(UObjectBase **)local_c0,(bool *)&local_98);
        local_90 = pFVar7->Elements[1];
        TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::
        Emplace<UObjectBase_*>(pTVar12,(UObjectBase **)(local_c0 + 4),(bool *)&local_90);
        TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::
        Emplace<UObjectBase_*_const_&>(pTVar12,(UObjectBase **)local_b8,(bool *)&local_c8);
        pFVar7->Elements[0] = (void *)0x0;
        pFVar7->Elements[1] = pTVar12;
      }
    }
  }
  UObjectBase::AtomicallySetFlags(param_1,RF_HasExternalPackage);
  if (lpCriticalSection_00 != (FUObjectHashTables *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
  }
LAB_14229fd44:
  if (bVar13) {
    lVar4 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar4 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar9 = *(FWriteBuffer **)(lVar4 + 0x20);
    if ((int)pFVar9 - *(int *)&pFVar9->Cursor < 1) {
      pFVar9 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar9->Cursor = '\n';
    pFVar9->Cursor = pFVar9->Cursor + 1;
    pFVar9->Committed = pFVar9->Cursor;
  }
  FMemScope::~FMemScope(&local_88);
  FLLMScope::~FLLMScope(local_e0);
  return;
}

// LockUObjectHashTables @ 1422a1080

void __cdecl LockUObjectHashTables(void)

{
  FUObjectHashTables *lpCriticalSection;
  
  lpCriticalSection = FUObjectHashTables::Get();
                    /* WARNING: Could not recover jumptable at 0x0001422a1090. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// LogHashMemoryOverheadStatistics @ 1422a10a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl
LogHashMemoryOverheadStatistics(FOutputDevice *param_1,EObjectMemoryOverheadOptions param_2)

{
  TBucketMap<int,FSetHashBucket> *pTVar1;
  undefined1 *puVar2;
  TBucketMap<UObjectBase_*,FSetHashBucket> *pTVar3;
  TBucketMap<UPackage_*,FSetHashBucket> *pTVar4;
  FScriptContainerElement *pFVar5;
  int iVar6;
  uint uVar7;
  longlong *plVar8;
  undefined1 *puVar9;
  TBucketMap<UClass_*,FSetHashBucket> *pTVar10;
  atomic<unsigned___int64> aVar11;
  code *pcVar12;
  TBitArray<FDefaultBitArrayAllocator> *pTVar13;
  undefined8 uVar14;
  TBucketMap<UClass_*,FSetHashBucket> *pTVar15;
  ulonglong uVar16;
  TBucketMap<UObjectBase_*,FSetHashBucket> *pTVar17;
  TMap<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,0>_>
  *pTVar18;
  bool bVar19;
  int iVar20;
  EInternalObjectFlags EVar21;
  FUObjectHashTables *pFVar22;
  TConstSetBitIterator<FDefaultBitArrayAllocator> *pTVar23;
  longlong lVar24;
  longlong lVar25;
  longlong lVar26;
  UClass *pUVar27;
  longlong lVar28;
  longlong lVar29;
  ulonglong uVar30;
  longlong lVar31;
  longlong lVar32;
  FUObjectHashTables *lpCriticalSection;
  uint uVar33;
  uint uVar34;
  int iVar35;
  ForAnyElementType FVar36;
  undefined1 *puVar37;
  longlong *plVar38;
  uint *puVar39;
  longlong *plVar40;
  uint uVar41;
  undefined1 local_res20 [8];
  undefined1 local_2f8;
  undefined1 local_2f7;
  undefined1 local_2f6;
  undefined1 local_2f5;
  undefined1 local_2f4 [4];
  longlong local_2f0;
  ulonglong local_2e8;
  TBucketMap<int,FSetHashBucket> *local_2e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_2d8;
  undefined8 local_2b8;
  FUObjectHashTables *local_2b0;
  ForAnyElementType local_2a8;
  undefined8 local_2a0;
  TBucketMap<UClass_*,FSetHashBucket> *local_298;
  TObjectIterator<UField> local_290;
  TBucketMap<UPackage_*,FSetHashBucket> *local_278;
  int iStack_270;
  uint uStack_26c;
  longlong *local_268;
  undefined4 uStack_260;
  int iStack_25c;
  int local_258;
  undefined4 uStack_254;
  int iStack_250;
  undefined4 uStack_24c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_248;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_228;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_208;
  int local_1e8;
  int local_1e4;
  int local_1e0;
  int local_1dc;
  int local_1d8;
  undefined1 local_1d0 [12];
  uint uStack_1c4;
  TBitArray<FDefaultBitArrayAllocator> *local_1c0;
  undefined8 uStack_1b8;
  longlong local_1b0;
  int iStack_1a8;
  undefined4 uStack_1a4;
  TBucketMap<UObjectBase_*,FSetHashBucket> *local_1a0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_198;
  undefined8 uStack_178;
  TBucketMap<UClass_*,FSetHashBucket> *local_170;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_168;
  undefined8 uStack_148;
  TMap<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,0>_>
  *local_140;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_138;
  undefined8 uStack_118;
  TRangedForIterator local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_e0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> local_c0;
  undefined4 local_84;
  undefined4 local_64;
  
  FOutputDevice::Log(param_1,L"UObject Hash Tables and Maps memory overhead");
  FOutputDevice::Log(param_1,L"-------------------------------------------------");
  pFVar22 = FUObjectHashTables::Get();
  local_2b0 = pFVar22;
  bVar19 = IsGarbageCollectingAndLockingUObjectHashTables();
  if ((bVar19) && (bVar19 = IsInGameThread(), bVar19)) {
    lpCriticalSection = (FUObjectHashTables *)0x0;
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar22);
    lpCriticalSection = pFVar22;
  }
  lVar28 = 0;
  pTVar1 = &pFVar22->Hash;
  uVar33 = (uint)(pFVar22->Hash)._padding_;
  if (1 < uVar33) {
    lVar28 = (longlong)(int)uVar33 << 2;
  }
  plVar40 = &(pFVar22->Hash)._padding_;
  lVar28 = (longlong)*(int *)((longlong)&(pFVar22->Hash)._padding_ + 4) * 0x20 +
           (ulonglong)((*(int *)((longlong)&(pFVar22->Hash)._padding_ + 4) + 0x1fU >> 5) << 2) +
           lVar28;
  local_248._padding_._0_4_ = 0;
  local_2e8 = 1;
  local_248._padding_._4_4_ = 1;
  local_248.UnvisitedBitMask = 0xffffffff;
  local_248.CurrentBitIndex = 0;
  local_248.BaseBitIndex = 0;
  local_248.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar40;
  if ((int)(pFVar22->Hash)._padding_ != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_248);
  }
  TStack_2d8._padding_ = CONCAT44(local_248._padding_._4_4_,(undefined4)local_248._padding_);
  TStack_2d8._16_8_ = CONCAT44(local_248.CurrentBitIndex,local_248.UnvisitedBitMask);
  TStack_2d8._24_8_ = CONCAT44(local_248._28_4_,local_248.BaseBitIndex);
  local_2b8._0_4_ =
       (int)(pFVar22->Hash)._padding_ - *(int *)((longlong)&(pFVar22->Hash)._padding_ + 4);
  TStack_2d8.Array = local_248.Array;
  local_1c0 = local_248.Array;
  uStack_1a4 = local_2b8._4_4_;
  local_2e0 = pTVar1;
  local_1d0._0_8_ = pTVar1;
  unique0x100022dd = TStack_2d8._padding_;
  uStack_1b8 = TStack_2d8._16_8_;
  local_1b0 = TStack_2d8._24_8_;
  iStack_1a8 = (int)local_2b8;
  pTVar23 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_e0,(TBitArray<FDefaultBitArrayAllocator> *)plVar40,
                       (int)(pFVar22->Hash)._padding_);
  TStack_2d8._padding_ = pTVar23->_padding_;
  TStack_2d8.Array = pTVar23->Array;
  TStack_2d8.UnvisitedBitMask = pTVar23->UnvisitedBitMask;
  TStack_2d8.CurrentBitIndex = pTVar23->CurrentBitIndex;
  TStack_2d8._24_8_ = *(undefined8 *)&pTVar23->BaseBitIndex;
  local_2b8._0_4_ =
       (int)(pFVar22->Hash)._padding_ - *(int *)((longlong)&(pFVar22->Hash)._padding_ + 4);
  local_110.InitialNum = (int)local_2b8;
  local_110._44_4_ = local_2b8._4_4_;
  local_2e0 = pTVar1;
  local_110._padding_ = (longlong)pTVar1;
  local_110._padding_ = TStack_2d8._padding_;
  local_110._padding_ = (longlong)TStack_2d8.Array;
  local_110._padding_ = TStack_2d8._16_8_;
  local_110._padding_ = TStack_2d8._24_8_;
  bVar19 = TSparseArray<TSparseSetElement<TTuple<int,FSetHashBucket>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
           ::TRangedForIterator::operator!=((TRangedForIterator *)local_1d0,&local_110);
  if (bVar19) {
    do {
      lVar29 = *(longlong *)
                ((longlong)uStack_1b8._4_4_ * 0x20 + 0x10 + *(longlong *)local_1d0._0_8_);
      if ((lVar29 == 0) ||
         (*(longlong *)((longlong)uStack_1b8._4_4_ * 0x20 + 8 + *(longlong *)local_1d0._0_8_) != 0))
      {
        lVar29 = 0;
      }
      else {
        if (*(uint *)(lVar29 + 0x48) < 2) {
          lVar31 = 0;
        }
        else {
          lVar31 = (longlong)(int)*(uint *)(lVar29 + 0x48) << 2;
        }
        lVar29 = ((longlong)*(int *)(lVar29 + 0xc) + 5) * 0x10 +
                 (ulonglong)((*(int *)(lVar29 + 0x2c) + 0x1fU >> 5) << 2) + lVar31;
      }
      lVar28 = lVar28 + lVar29;
      uStack_1b8 = CONCAT44(uStack_1b8._4_4_,(uint)uStack_1b8 & ~uStack_1c4);
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_1d0 + 8));
      bVar19 = TSparseArray<TSparseSetElement<TTuple<int,FSetHashBucket>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
               ::TRangedForIterator::operator!=((TRangedForIterator *)local_1d0,&local_110);
    } while (bVar19);
  }
  if ((param_2 & ShowIndividualStats) != None) {
    FOutputDevice::LogfImpl(param_1,L"Memory used by UObject Hash: %I64u bytes.");
  }
  uVar33 = *(uint *)&(pFVar22->HashOuter).field_0x48;
  if (uVar33 < 2) {
    lVar29 = 0;
  }
  else {
    lVar29 = (longlong)(int)uVar33 << 2;
  }
  iVar35 = *(int *)&(pFVar22->HashOuter).field_0x2c;
  iVar6 = *(int *)&(pFVar22->HashOuter).field_0xc;
  if ((param_2 & ShowIndividualStats) != None) {
    FOutputDevice::LogfImpl(param_1,L"Memory used by UObject Outer Hash: %I64u bytes.");
  }
  local_2f0 = (longlong)iVar6 * 0x10 + (ulonglong)((iVar35 + 0x1fU >> 5) << 2) + lVar29 + lVar28;
  pTVar3 = &pFVar22->ObjectOuterMap;
  uVar33 = (uint)(pFVar22->ObjectOuterMap)._padding_;
  if (uVar33 < 2) {
    lVar28 = 0;
  }
  else {
    lVar28 = (longlong)(int)uVar33 << 2;
  }
  plVar40 = &(pFVar22->ObjectOuterMap)._padding_;
  lVar28 = (longlong)*(int *)((longlong)&(pFVar22->ObjectOuterMap)._padding_ + 4) * 0x20 +
           (ulonglong)
           ((*(int *)((longlong)&(pFVar22->ObjectOuterMap)._padding_ + 4) + 0x1fU >> 5) << 2) +
           lVar28;
  local_228._padding_._4_4_ = 1;
  local_228._padding_._0_4_ = 0;
  local_228.UnvisitedBitMask = 0xffffffff;
  local_228.CurrentBitIndex = 0;
  local_228.BaseBitIndex = 0;
  local_228.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar40;
  if ((int)(pFVar22->ObjectOuterMap)._padding_ != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_228);
  }
  TStack_2d8._padding_ = CONCAT44(local_228._padding_._4_4_,(undefined4)local_228._padding_);
  TStack_2d8.CurrentBitIndex = local_228.CurrentBitIndex;
  TStack_2d8.UnvisitedBitMask = local_228.UnvisitedBitMask;
  TStack_2d8._28_4_ = local_228._28_4_;
  TStack_2d8.BaseBitIndex = local_228.BaseBitIndex;
  TStack_2d8.Array = local_228.Array;
  local_2b8 = CONCAT44(local_2b8._4_4_,
                       (int)(pFVar22->ObjectOuterMap)._padding_ -
                       *(int *)((longlong)&(pFVar22->ObjectOuterMap)._padding_ + 4));
  TStack_198.Array = local_228.Array;
  uStack_178 = local_2b8;
  local_2e0 = (TBucketMap<int,FSetHashBucket> *)pTVar3;
  local_1a0 = pTVar3;
  TStack_198._padding_ = TStack_2d8._padding_;
  TStack_198._16_8_ = TStack_2d8._16_8_;
  TStack_198._24_8_ = TStack_2d8._24_8_;
  pTVar23 = TConstSetBitIterator<FDefaultBitArrayAllocator>::
            TConstSetBitIterator<FDefaultBitArrayAllocator>
                      (&local_c0,(TBitArray<FDefaultBitArrayAllocator> *)plVar40,
                       (int)(pFVar22->ObjectOuterMap)._padding_);
  TStack_2d8._padding_ = pTVar23->_padding_;
  pTVar13 = pTVar23->Array;
  uVar14._0_4_ = pTVar23->UnvisitedBitMask;
  uVar14._4_4_ = pTVar23->CurrentBitIndex;
  TStack_2d8.BaseBitIndex = pTVar23->BaseBitIndex;
  TStack_2d8._28_4_ = *(undefined4 *)&pTVar23->field_0x1c;
  TStack_2d8.Array = pTVar13;
  TStack_2d8._16_8_ = uVar14;
  while( true ) {
    pTVar17 = local_1a0;
    if ((int)local_1a0->_padding_ - *(int *)((longlong)&local_1a0->_padding_ + 4) != (int)uStack_178
       ) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<UObjectBase_*,FSetHashBucket>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_198.CurrentBitIndex == uVar14._4_4_) && (TStack_198.Array == pTVar13)) &&
       (pTVar17 == pTVar3)) break;
    lVar29 = pTVar17->_padding_;
    lVar31 = *(longlong *)((longlong)TStack_198.CurrentBitIndex * 0x20 + 0x10 + lVar29);
    if ((lVar31 == 0) ||
       (*(longlong *)((longlong)TStack_198.CurrentBitIndex * 0x20 + 8 + lVar29) != 0)) {
      lVar29 = 0;
    }
    else {
      if (*(uint *)(lVar31 + 0x48) < 2) {
        lVar29 = 0;
      }
      else {
        lVar29 = (longlong)(int)*(uint *)(lVar31 + 0x48) << 2;
      }
      lVar29 = ((longlong)*(int *)(lVar31 + 0xc) + 5) * 0x10 +
               (ulonglong)((*(int *)(lVar31 + 0x2c) + 0x1fU >> 5) << 2) + lVar29;
    }
    lVar28 = lVar28 + lVar29;
    TStack_198.UnvisitedBitMask = TStack_198.UnvisitedBitMask & ~TStack_198._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_198);
  }
  if ((param_2 & ShowIndividualStats) != None) {
    FOutputDevice::LogfImpl(param_1,L"Memory used by UObject Outer Map: %lld bytes.");
  }
  local_2f0 = local_2f0 + lVar28;
  pTVar10 = &pFVar22->ClassToObjectListMap;
  uVar33 = (uint)(pFVar22->ClassToObjectListMap)._padding_;
  if (uVar33 < 2) {
    lVar28 = 0;
  }
  else {
    lVar28 = (longlong)(int)uVar33 << 2;
  }
  plVar40 = &(pFVar22->ClassToObjectListMap)._padding_;
  lVar28 = (longlong)*(int *)((longlong)&(pFVar22->ClassToObjectListMap)._padding_ + 4) * 0x20 +
           (ulonglong)
           ((*(int *)((longlong)&(pFVar22->ClassToObjectListMap)._padding_ + 4) + 0x1fU >> 5) << 2)
           + lVar28;
  local_208._padding_._0_4_ = 0;
  local_208._padding_._4_4_ = (undefined4)local_2e8;
  local_208.UnvisitedBitMask = 0xffffffff;
  local_208.CurrentBitIndex = 0;
  local_208.BaseBitIndex = 0;
  local_298 = pTVar10;
  local_208.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar40;
  if ((int)(pFVar22->ClassToObjectListMap)._padding_ != 0) {
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&local_208);
  }
  uVar33 = (uint)(pFVar22->ClassToObjectListMap)._padding_;
  uVar41 = uVar33 & 0xffffffe0;
  TStack_2d8._padding_ = CONCAT44(local_208._padding_._4_4_,(undefined4)local_208._padding_);
  TStack_2d8.CurrentBitIndex = local_208.CurrentBitIndex;
  TStack_2d8.UnvisitedBitMask = local_208.UnvisitedBitMask;
  TStack_2d8._28_4_ = local_208._28_4_;
  TStack_2d8.BaseBitIndex = local_208.BaseBitIndex;
  local_2b8 = CONCAT44(local_2b8._4_4_,
                       (int)(pFVar22->ClassToObjectListMap)._padding_ -
                       *(int *)((longlong)&(pFVar22->ClassToObjectListMap)._padding_ + 4));
  TStack_2d8.Array = local_208.Array;
  iVar35 = (int)uVar33 >> 5;
  TStack_168.Array = local_208.Array;
  uStack_148 = local_2b8;
  local_2e0 = (TBucketMap<int,FSetHashBucket> *)pTVar10;
  local_170 = pTVar10;
  TStack_168._padding_ = TStack_2d8._padding_;
  TStack_168._16_8_ = TStack_2d8._16_8_;
  TStack_168._24_8_ = TStack_2d8._24_8_;
  if ((((int)uVar33 < 0) || ((int)(pFVar22->ClassToObjectListMap)._padding_ < (int)uVar33)) &&
     (bVar19 = FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pTVar10 = local_298;
  uVar34 = (uint)(pFVar22->ClassToObjectListMap)._padding_;
  if (uVar33 != uVar34) {
    plVar8 = (longlong *)(pFVar22->ClassToObjectListMap)._padding_;
    plVar38 = plVar40;
    if (plVar8 != (longlong *)0x0) {
      plVar38 = plVar8;
    }
    uVar33 = -1 << ((byte)uVar33 & 0x1f) & *(uint *)((longlong)plVar38 + (longlong)iVar35 * 4);
    while (uVar33 == 0) {
      iVar35 = iVar35 + 1;
      uVar41 = uVar41 + 0x20;
      uVar33 = uVar34;
      if ((int)(((int)(uVar34 - 1) >> 0x1f & 0x1fU) + (uVar34 - 1)) >> 5 < iVar35)
      goto LAB_1422a1680;
      uVar33 = *(uint *)((longlong)plVar38 + (longlong)iVar35 * 4);
    }
    uVar30 = (ulonglong)(~(uVar33 - 1) & uVar33) * 2 + 1;
    lVar29 = 0x3f;
    if (uVar30 != 0) {
      for (; uVar30 >> lVar29 == 0; lVar29 = lVar29 + -1) {
      }
    }
    local_1e8 = (int)lVar29;
    uVar33 = local_1e8 + -1 + uVar41;
    if ((int)uVar34 < (int)uVar33) {
      uVar33 = uVar34;
    }
  }
LAB_1422a1680:
  while( true ) {
    pTVar15 = local_170;
    if ((int)local_170->_padding_ - *(int *)((longlong)&local_170->_padding_ + 4) != (int)uStack_148
       ) {
      local_2f8 = 0;
      `TSparseArray<TSparseSetElement<TTuple<UClass_*,FSetHashBucket>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2f8);
    }
    if (((TStack_168.CurrentBitIndex == uVar33) &&
        (TStack_168.Array == (TBitArray<FDefaultBitArrayAllocator> *)plVar40)) &&
       (pTVar15 == pTVar10)) break;
    lVar29 = pTVar15->_padding_;
    lVar31 = *(longlong *)((longlong)TStack_168.CurrentBitIndex * 0x20 + 0x10 + lVar29);
    if ((lVar31 == 0) ||
       (*(longlong *)((longlong)TStack_168.CurrentBitIndex * 0x20 + 8 + lVar29) != 0)) {
      lVar29 = 0;
    }
    else {
      if (*(uint *)(lVar31 + 0x48) < 2) {
        lVar29 = 0;
      }
      else {
        lVar29 = (longlong)(int)*(uint *)(lVar31 + 0x48) << 2;
      }
      lVar29 = ((longlong)*(int *)(lVar31 + 0xc) + 5) * 0x10 +
               (ulonglong)((*(int *)(lVar31 + 0x2c) + 0x1fU >> 5) << 2) + lVar29;
    }
    lVar28 = lVar28 + lVar29;
    TStack_168.UnvisitedBitMask = TStack_168.UnvisitedBitMask & ~TStack_168._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_168);
  }
  if ((param_2 & ShowIndividualStats) != None) {
    FOutputDevice::LogfImpl(param_1,L"Memory used by UClass To UObject List Map: %I64u bytes.");
  }
  pFVar22 = local_2b0;
  local_2f0 = local_2f0 + lVar28;
  local_298 = (TBucketMap<UClass_*,FSetHashBucket> *)&local_2b0->ClassToChildListMap;
  uVar33 = *(uint *)&(local_2b0->ClassToChildListMap).field_0x48;
  if (uVar33 < 2) {
    lVar28 = 0;
  }
  else {
    lVar28 = (longlong)(int)uVar33 << 2;
  }
  local_268 = (longlong *)&(local_2b0->ClassToChildListMap).field_0x10;
  iStack_270 = 0;
  local_258 = 0;
  lVar28 = (longlong)*(int *)&(local_2b0->ClassToChildListMap).field_0xc * 0x60 +
           lVar28 + (ulonglong)
                    ((*(int *)&(local_2b0->ClassToChildListMap).field_0x2c + 0x1fU >> 5) << 2);
  iVar35 = *(int *)&(local_2b0->ClassToChildListMap).field_0x28;
  uStack_26c = (uint)local_2e8;
  iStack_25c = 0;
  if (iVar35 != 0) {
    puVar39 = *(uint **)&(local_2b0->ClassToChildListMap).field_0x20;
    if (puVar39 == (uint *)0x0) {
      puVar39 = (uint *)local_268;
    }
    uVar33 = *puVar39;
    while (uVar33 == 0) {
      iStack_270 = iStack_270 + 1;
      local_258 = local_258 + 0x20;
      iStack_25c = iVar35;
      if ((int)(iVar35 + -1 + (iVar35 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_270) goto LAB_1422a181f;
      uVar33 = puVar39[iStack_270];
    }
    uStack_26c = ~(uVar33 - 1) & uVar33;
    uVar30 = (ulonglong)uStack_26c * 2 + 1;
    lVar29 = 0x3f;
    if (uVar30 != 0) {
      for (; uVar30 >> lVar29 == 0; lVar29 = lVar29 + -1) {
      }
    }
    local_1e4 = (int)lVar29;
    iStack_25c = local_1e4 + -1 + local_258;
    if (iVar35 < iStack_25c) {
      iStack_25c = iVar35;
    }
  }
LAB_1422a181f:
  uVar33 = *(uint *)&(local_2b0->ClassToChildListMap).field_0x28;
  puVar2 = &(local_2b0->ClassToChildListMap).field_0x10;
  uStack_254 = local_84;
  iStack_250 = *(int *)&(local_2b0->ClassToChildListMap).field_0x8 -
               *(int *)&(local_2b0->ClassToChildListMap).field_0x34;
  uVar41 = uVar33 & 0xffffffe0;
  TStack_138._padding_ = CONCAT44(uStack_26c,iStack_270);
  uStack_260 = 0xffffffff;
  TStack_138.CurrentBitIndex = iStack_25c;
  TStack_138.UnvisitedBitMask = 0xffffffff;
  iVar35 = (int)uVar33 >> 5;
  TStack_138._28_4_ = local_84;
  TStack_138.BaseBitIndex = local_258;
  uStack_118 = CONCAT44(uStack_24c,iStack_250);
  local_278 = (TBucketMap<UPackage_*,FSetHashBucket> *)local_298;
  local_140 = (TMap<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,0>_>
               *)local_298;
  TStack_138.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_268;
  if ((((int)uVar33 < 0) || (*(int *)&(local_2b0->ClassToChildListMap).field_0x28 < (int)uVar33)) &&
     (bVar19 = FDebug::CheckVerifyFailedImpl2
                         ("StartIndex >= 0 && StartIndex <= Array.Num()",
                          "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                          ,0x7af,L""), bVar19)) {
    pcVar12 = (code *)swi(3);
    (*pcVar12)();
    return;
  }
  pTVar10 = local_298;
  uVar34 = *(uint *)&(pFVar22->ClassToChildListMap).field_0x28;
  if (uVar33 != uVar34) {
    puVar9 = *(undefined1 **)&(pFVar22->ClassToChildListMap).field_0x20;
    puVar37 = puVar2;
    if (puVar9 != (undefined1 *)0x0) {
      puVar37 = puVar9;
    }
    uVar33 = -1 << ((byte)uVar33 & 0x1f) & *(uint *)(puVar37 + (longlong)iVar35 * 4);
    while (uVar33 == 0) {
      iVar35 = iVar35 + 1;
      uVar41 = uVar41 + 0x20;
      uVar33 = uVar34;
      if ((int)(((int)(uVar34 - 1) >> 0x1f & 0x1fU) + (uVar34 - 1)) >> 5 < iVar35)
      goto LAB_1422a1932;
      uVar33 = *(uint *)(puVar37 + (longlong)iVar35 * 4);
    }
    uVar30 = (ulonglong)(~(uVar33 - 1) & uVar33) * 2 + 1;
    lVar29 = 0x3f;
    if (uVar30 != 0) {
      for (; uVar30 >> lVar29 == 0; lVar29 = lVar29 + -1) {
      }
    }
    local_1e0 = (int)lVar29;
    uVar33 = local_1e0 + -1 + uVar41;
    if ((int)uVar34 < (int)uVar33) {
      uVar33 = uVar34;
    }
  }
LAB_1422a1932:
  while( true ) {
    pTVar18 = local_140;
    if (*(int *)&local_140->field_0x8 - *(int *)&local_140->field_0x34 != (int)uStack_118) {
      local_2f7 = 0;
      `TSparseArray<TSparseSetElement<TTuple<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2f7);
    }
    if (((TStack_138.CurrentBitIndex == uVar33) &&
        (TStack_138.Array == (TBitArray<FDefaultBitArrayAllocator> *)puVar2)) &&
       ((TBucketMap<UClass_*,FSetHashBucket> *)pTVar18 == pTVar10)) break;
    lVar29 = *(longlong *)pTVar18;
    lVar31 = (longlong)TStack_138.CurrentBitIndex * 0x60;
    uVar41 = *(uint *)(lVar31 + 0x50 + lVar29);
    if (uVar41 < 2) {
      lVar32 = 0;
    }
    else {
      lVar32 = (longlong)(int)uVar41 << 2;
    }
    lVar28 = lVar28 + (longlong)*(int *)(lVar31 + 0x14 + lVar29) * 0x10 +
                      (ulonglong)((*(int *)(lVar31 + 0x34 + lVar29) + 0x1fU >> 5) << 2) + lVar32;
    TStack_138.UnvisitedBitMask = TStack_138.UnvisitedBitMask & ~TStack_138._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_138);
  }
  if ((param_2 & ShowIndividualStats) != None) {
    FOutputDevice::LogfImpl(param_1,L"Memory used by UClass To Child UClass List Map: %I64u bytes.")
    ;
  }
  pFVar22 = local_2b0;
  local_2f0 = local_2f0 + lVar28;
  pTVar4 = &local_2b0->PackageToObjectListMap;
  uVar33 = (uint)(local_2b0->PackageToObjectListMap)._padding_;
  if (uVar33 < 2) {
    lVar28 = 0;
  }
  else {
    lVar28 = (longlong)(int)uVar33 << 2;
  }
  TStack_2d8.Array =
       (TBitArray<FDefaultBitArrayAllocator> *)&(local_2b0->PackageToObjectListMap)._padding_;
  iStack_270 = 0;
  lVar28 = (longlong)*(int *)((longlong)&(local_2b0->PackageToObjectListMap)._padding_ + 4) * 0x20 +
           (ulonglong)
           ((*(int *)((longlong)&(local_2b0->PackageToObjectListMap)._padding_ + 4) + 0x1fU >> 5) <<
           2) + lVar28;
  local_258 = 0;
  iVar35 = (int)(local_2b0->PackageToObjectListMap)._padding_;
  iStack_25c = 0;
  if (iVar35 != 0) {
    plVar40 = (longlong *)(local_2b0->PackageToObjectListMap)._padding_;
    if (plVar40 == (longlong *)0x0) {
      plVar40 = (longlong *)TStack_2d8.Array;
    }
    uVar33 = (uint)*plVar40;
    while (uVar33 == 0) {
      iStack_270 = iStack_270 + 1;
      local_258 = local_258 + 0x20;
      iStack_25c = iVar35;
      if ((int)(iVar35 + -1 + (iVar35 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_270) goto LAB_1422a1ab2;
      uVar33 = *(uint *)((longlong)plVar40 + (longlong)iStack_270 * 4);
    }
    local_2e8 = (ulonglong)(~(uVar33 - 1) & uVar33);
    uVar30 = local_2e8 * 2 + 1;
    lVar29 = 0x3f;
    if (uVar30 != 0) {
      for (; uVar30 >> lVar29 == 0; lVar29 = lVar29 + -1) {
      }
    }
    local_1dc = (int)lVar29;
    iStack_25c = local_258 + -1 + local_1dc;
    if (iVar35 < iStack_25c) {
      iStack_25c = iVar35;
    }
  }
LAB_1422a1ab2:
  uVar33 = (uint)(local_2b0->PackageToObjectListMap)._padding_;
  plVar40 = &(local_2b0->PackageToObjectListMap)._padding_;
  uStack_26c = (uint)local_2e8;
  uStack_254 = local_64;
  uVar34 = uVar33 & 0xffffffe0;
  iStack_250 = (int)(local_2b0->PackageToObjectListMap)._padding_ -
               *(int *)((longlong)&(local_2b0->PackageToObjectListMap)._padding_ + 4);
  uStack_260 = 0xffffffff;
  uVar41 = -1 << ((byte)uVar33 & 0x1f);
  TStack_2d8._padding_ = CONCAT44(uStack_26c,iStack_270);
  TStack_2d8.CurrentBitIndex = iStack_25c;
  TStack_2d8.UnvisitedBitMask = 0xffffffff;
  iVar35 = (int)uVar33 >> 5;
  local_2e8 = CONCAT44(local_2e8._4_4_,uVar41);
  TStack_2d8._28_4_ = local_64;
  TStack_2d8.BaseBitIndex = local_258;
  local_2b8 = CONCAT44(uStack_24c,iStack_250);
  local_2e0 = (TBucketMap<int,FSetHashBucket> *)pTVar4;
  local_278 = pTVar4;
  local_268 = (longlong *)TStack_2d8.Array;
  if (((int)uVar33 < 0) || ((int)(local_2b0->PackageToObjectListMap)._padding_ < (int)uVar33)) {
    bVar19 = FDebug::CheckVerifyFailedImpl2
                       ("StartIndex >= 0 && StartIndex <= Array.Num()",
                        "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                        ,0x7af,L"");
    if (bVar19) {
      pcVar12 = (code *)swi(3);
      (*pcVar12)();
      return;
    }
    uVar41 = (uint)local_2e8;
  }
  uVar7 = (uint)(pFVar22->PackageToObjectListMap)._padding_;
  if (uVar33 != uVar7) {
    plVar8 = (longlong *)(pFVar22->PackageToObjectListMap)._padding_;
    plVar38 = plVar40;
    if (plVar8 != (longlong *)0x0) {
      plVar38 = plVar8;
    }
    uVar41 = uVar41 & *(uint *)((longlong)plVar38 + (longlong)iVar35 * 4);
    while (uVar41 == 0) {
      iVar35 = iVar35 + 1;
      uVar34 = uVar34 + 0x20;
      uVar33 = uVar7;
      if ((int)(((int)(uVar7 - 1) >> 0x1f & 0x1fU) + (uVar7 - 1)) >> 5 < iVar35) goto LAB_1422a1bd0;
      uVar41 = *(uint *)((longlong)plVar38 + (longlong)iVar35 * 4);
    }
    uVar30 = (ulonglong)(~(uVar41 - 1) & uVar41) * 2 + 1;
    lVar29 = 0x3f;
    if (uVar30 != 0) {
      for (; uVar30 >> lVar29 == 0; lVar29 = lVar29 + -1) {
      }
    }
    local_1d8 = (int)lVar29;
    uVar33 = (uVar34 - 1) + local_1d8;
    if ((int)uVar7 < (int)uVar33) {
      uVar33 = uVar7;
    }
  }
LAB_1422a1bd0:
  while( true ) {
    pTVar1 = local_2e0;
    if ((int)local_2e0->_padding_ - *(int *)((longlong)&local_2e0->_padding_ + 4) != (int)local_2b8)
    {
      local_2f6 = 0;
      `TSparseArray<TSparseSetElement<TTuple<UPackage_*,FSetHashBucket>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(&local_2f6);
    }
    if (((TStack_2d8.CurrentBitIndex == uVar33) &&
        (TStack_2d8.Array == (TBitArray<FDefaultBitArrayAllocator> *)plVar40)) &&
       (pTVar1 == (TBucketMap<int,FSetHashBucket> *)pTVar4)) break;
    lVar29 = pTVar1->_padding_;
    lVar31 = *(longlong *)((longlong)TStack_2d8.CurrentBitIndex * 0x20 + 0x10 + lVar29);
    if ((lVar31 == 0) ||
       (*(longlong *)((longlong)TStack_2d8.CurrentBitIndex * 0x20 + 8 + lVar29) != 0)) {
      lVar29 = 0;
    }
    else {
      if (*(uint *)(lVar31 + 0x48) < 2) {
        lVar29 = 0;
      }
      else {
        lVar29 = (longlong)(int)*(uint *)(lVar31 + 0x48) << 2;
      }
      lVar29 = ((longlong)*(int *)(lVar31 + 0xc) + 5) * 0x10 +
               (ulonglong)((*(int *)(lVar31 + 0x2c) + 0x1fU >> 5) << 2) + lVar29;
    }
    lVar28 = lVar28 + lVar29;
    TStack_2d8.UnvisitedBitMask = TStack_2d8.UnvisitedBitMask & ~TStack_2d8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_2d8);
  }
  if ((param_2 & ShowIndividualStats) != None) {
    FOutputDevice::LogfImpl(param_1,L"Memory used by UPackage To UObject List Map: %I64u bytes.");
  }
  lVar28 = local_2f0 + lVar28;
  uVar33 = *(uint *)&(local_2b0->ObjectToPackageMap).field_0x48;
  if (uVar33 < 2) {
    lVar29 = 0;
  }
  else {
    lVar29 = (longlong)(int)uVar33 << 2;
  }
  iVar35 = *(int *)&(local_2b0->ObjectToPackageMap).field_0x2c;
  iVar6 = *(int *)&(local_2b0->ObjectToPackageMap).field_0xc;
  if ((param_2 & ShowIndividualStats) != None) {
    FOutputDevice::LogfImpl(param_1,L"Memory used by UObject To External Package Map: %I64u bytes.")
    ;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&GUObjectArray.UObjectDeleteListenersCritical);
  iVar20 = GUObjectArray.UObjectDeleteListeners.ArrayNum;
  lVar31 = 0;
  pFVar5 = GUObjectArray.UObjectDeleteListeners.AllocatorInstance.Data +
           (longlong)GUObjectArray.UObjectDeleteListeners.ArrayNum * 8;
  FVar36 = GUObjectArray.UObjectDeleteListeners.AllocatorInstance;
  while( true ) {
    if (GUObjectArray.UObjectDeleteListeners.ArrayNum != iVar20) {
      local_2f5 = 0;
      `TCheckedPointerIterator<FUObjectArray::FUObjectDeleteListener_*_const,int,0>::operator!='::
      __l2::<lambda_1>::operator()(&local_2f5);
    }
    if (FVar36.Data == pFVar5) break;
    lVar32 = (**(code **)(**(longlong **)FVar36.Data + 0x18))();
    lVar31 = lVar31 + lVar32;
    FVar36.Data = FVar36.Data + 8;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&GUObjectArray.UObjectDeleteListenersCritical);
  if ((param_2 & ShowIndividualStats) != None) {
    FOutputDevice::LogfImpl
              (param_1,
               L"Memory used by UObject Delete Listeners (including annotations): %I64u bytes. (%d listeners) "
              );
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&GUObjectArray.ObjObjectsCritical);
  EnterCriticalSection((LPCRITICAL_SECTION)&GUObjectArray.UObjectDeleteListenersCritical);
  iVar20 = GUObjectArray.ObjObjects.NumChunks << 0x10;
  lVar32 = (longlong)GUObjectArray.UObjectCreateListeners.ArrayMax;
  lVar24 = (longlong)GUObjectArray.UObjectDeleteListeners.ArrayMax;
  lVar25 = (longlong)GUObjectArray.ObjObjects.MaxChunks;
  lVar26 = (longlong)GUObjectArray.ObjAvailableList.ArrayMax;
  LeaveCriticalSection((LPCRITICAL_SECTION)&GUObjectArray.UObjectDeleteListenersCritical);
  LeaveCriticalSection((LPCRITICAL_SECTION)&GUObjectArray.ObjObjectsCritical);
  if ((param_2 & ShowIndividualStats) != None) {
    FOutputDevice::LogfImpl
              (param_1,L"Memory used by UObjectArray: %I64u bytes. (%d UObjects, %d slots) ");
  }
  local_2f0 = lVar28 + lVar29 + (ulonglong)((iVar35 + 0x1fU >> 5) << 2) + (longlong)iVar6 * 0x18 +
              lVar31 + (lVar26 + (lVar32 + (longlong)iVar20 * 4 + lVar24 + lVar25) * 2) * 4;
  FOutputDevice::LogfImpl
            (param_1,
             L"Total memory allocated by Object hash tables and maps: %I64u bytes(% .2f MB).");
  if ((param_2 & IncludeReflectionData) != None) {
    pFVar22 = (FUObjectHashTables *)0x0;
    local_290.Index = 0xffffffff;
    local_2b0 = (FUObjectHashTables *)0x0;
    local_2a8.Data = (FScriptContainerElement *)0x0;
    local_2a0 = 0;
    local_290.ObjectArray.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_290.ObjectArray.ArrayNum = 0;
    local_290.ObjectArray.ArrayMax = 0;
    EVar21 = UE::GetAsyncLoadingInternalFlagsExclusion();
    pUVar27 = Z_Construct_UClass_UField_NoRegister();
    GetObjectsOfClass(pUVar27,&local_290.ObjectArray,true,RF_ClassDefaultObject,
                      EVar21 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted));
    while( true ) {
      TObjectIterator<UField>::Advance(&local_290);
      lVar28 = (longlong)local_290.Index;
      if ((local_290.Index < 0) || (local_290.ObjectArray.ArrayNum <= local_290.Index)) break;
      uVar33 = 0;
      if (local_290.Index < local_290.ObjectArray.ArrayNum) {
        uVar33 = (uint)~local_290.Index >> 0x1f;
      }
      if (uVar33 == 0) {
        bVar19 = FDebug::CheckVerifyFailedImpl2
                           ("(Index >= 0) & (Index < ArrayNum)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x447,L"Array index out of bounds: %lld into an array of size %lld");
        if (bVar19) {
          pcVar12 = (code *)swi(3);
          (*pcVar12)();
          return;
        }
      }
      pTVar10 = *(TBucketMap<UClass_*,FSetHashBucket> **)
                 (local_290.ObjectArray.AllocatorInstance.Data + lVar28 * 8);
      iVar35 = local_290.ObjectArray.ArrayNum;
      if (pTVar10 != (TBucketMap<UClass_*,FSetHashBucket> *)0x0) {
        pUVar27 = Z_Construct_UClass_UStruct_NoRegister();
        iVar35 = (int)pUVar27->_padding_;
        if ((iVar35 <= *(int *)(*(longlong *)
                                 &((TMap<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,0>_>
                                    *)pTVar10)->field_0x10 + 0x38)) &&
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)
               (*(longlong *)
                 &((TMap<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,0>_>
                    *)pTVar10)->field_0x10 + 0x30) + (longlong)iVar35 * 8) == &pUVar27->_padding_))
        {
          aVar11 = *(atomic<unsigned___int64> *)((longlong)pTVar10 + 0x50);
          pTVar15 = local_298;
          for (; local_298 = pTVar10, aVar11 != (atomic<unsigned___int64>)0x0;
              aVar11 = *(atomic<unsigned___int64> *)((longlong)aVar11 + 0x18)) {
            (*(code *)**(undefined8 **)aVar11)(aVar11);
            uVar16 = local_2a0;
            uVar30 = local_2a0 >> 0x20;
            local_2a0 = local_2a0 & 0xffffffff00000000;
            if (((longlong)uVar16 < 0) && ((int)uVar30 != 0)) {
              UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (8,8,0,&local_2a8,0,(int *)((longlong)&local_2a0 + 4));
            }
            (**(code **)(*(longlong *)aVar11 + 0x58))(aVar11,&local_2a8);
            iVar35 = (int)local_2a0;
            uVar30 = (ulonglong)(int)local_2a0;
            pFVar5 = local_2a8.Data + uVar30 * 8;
            FVar36.Data = local_2a8.Data;
            while( true ) {
              if ((int)uVar30 != iVar35) {
                local_2f4[0] = 0;
                `TCheckedPointerIterator<FField_*,int,0>::operator!='::__l2::<lambda_1>::operator()
                          (local_2f4);
              }
              if (FVar36.Data == pFVar5) break;
              (**(code **)**(undefined8 **)FVar36.Data)();
              uVar30 = local_2a0 & 0xffffffff;
              FVar36.Data = FVar36.Data + 8;
            }
            pTVar10 = local_298;
            pTVar15 = local_298;
          }
          pFVar22 = (FUObjectHashTables *)
                    ((longlong)(local_2b0->CriticalSection).CriticalSection.Opaque1 +
                    (longlong)
                    *(int *)((longlong)
                             ((atomic<unsigned___int64> *)((longlong)local_298 + 0x50) + 9) + 4) * 8
                    + (longlong)
                      *(int *)((longlong)
                               ((atomic<unsigned___int64> *)((longlong)local_298 + 0x50) + 3) + 4));
          local_298 = pTVar15;
        }
        iVar35 = local_290.ObjectArray.ArrayNum;
      }
      lVar28 = (longlong)local_290.Index;
      uVar33 = 0;
      if (local_290.Index < iVar35) {
        uVar33 = (uint)~local_290.Index >> 0x1f;
      }
      if ((uVar33 == 0) &&
         (bVar19 = FDebug::CheckVerifyFailedImpl2
                             ("(Index >= 0) & (Index < ArrayNum)",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                              ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar19)) {
        pcVar12 = (code *)swi(3);
        (*pcVar12)();
        return;
      }
      pFVar22 = (FUObjectHashTables *)
                ((longlong)(pFVar22->CriticalSection).CriticalSection.Opaque1 +
                (longlong)
                *(int *)(*(longlong *)
                          (*(longlong *)(local_290.ObjectArray.AllocatorInstance.Data + lVar28 * 8)
                          + 0x10) + 0x58));
      local_2b0 = pFVar22;
    }
    if (local_290.ObjectArray.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_290.ObjectArray.AllocatorInstance.Data);
    }
    if ((param_2 & ShowIndividualStats) != None) {
      FOutputDevice::LogfImpl(param_1,L"Memory used by FProperties: %I64u bytes. (%d FProperties) ")
      ;
      FOutputDevice::LogfImpl(param_1,L"Memory used by UFields: %I64u bytes. (%d UFields) ");
    }
    FOutputDevice::LogfImpl
              (param_1,L"Total memory allocated by Object reflection data: %I64u bytes(% .2f MB).");
    FOutputDevice::LogfImpl(param_1,L"Total memory overhead: %I64u bytes(% .2f MB).");
    if (local_2a8.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_2a8.Data);
    }
  }
  FOutputDevice::Log(param_1,L"");
  if (lpCriticalSection != (FUObjectHashTables *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// LogHashOuterStatistics @ 1422a2200

void __cdecl LogHashOuterStatistics(FOutputDevice *param_1,bool param_2)

{
  longlong *plVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  bool bVar6;
  uint uVar7;
  int iVar8;
  FUObjectHashTables *lpCriticalSection;
  FUObjectHashTables *pFVar9;
  longlong lVar10;
  uint uVar11;
  int iVar12;
  longlong *plVar13;
  int iVar14;
  undefined1 local_res18 [8];
  int local_res20;
  undefined4 uStack_74;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_68;
  undefined8 uStack_48;
  
  FOutputDevice::Log(param_1,L"Hash efficiency statistics for the Outer Object Hash");
  FOutputDevice::Log(param_1,L"-------------------------------------------------");
  FOutputDevice::Log(param_1,L"");
  lpCriticalSection = FUObjectHashTables::Get();
  bVar6 = IsGarbageCollectingAndLockingUObjectHashTables();
  if ((bVar6) && (bVar6 = IsInGameThread(), bVar6)) {
    lpCriticalSection = (FUObjectHashTables *)0x0;
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  pFVar9 = FUObjectHashTables::Get();
  LogHashStatisticsInternal(&pFVar9->HashOuter,param_1,param_2);
  FOutputDevice::Log(param_1,L"");
  pFVar9 = FUObjectHashTables::Get();
  iVar12 = 0;
  iVar14 = 0;
  uVar7 = 1;
  plVar1 = &(pFVar9->ObjectOuterMap)._padding_;
  iVar3 = (int)(pFVar9->ObjectOuterMap)._padding_;
  iVar8 = 0;
  if (iVar3 != 0) {
    plVar13 = (longlong *)(pFVar9->ObjectOuterMap)._padding_;
    if (plVar13 == (longlong *)0x0) {
      plVar13 = plVar1;
    }
    uVar11 = (uint)*plVar13;
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      iVar14 = iVar14 + 0x20;
      iVar12 = iVar12 + 1;
      iVar8 = iVar3;
      if ((int)(iVar3 + -1 + (iVar3 + -1 >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1422a233e;
      uVar11 = *(uint *)((longlong)plVar13 + lVar10 * 4 + 4);
    }
    uVar7 = -uVar11 & uVar11;
    uVar2 = (ulonglong)uVar7 * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    local_res20 = (int)lVar10;
    iVar8 = iVar14 + -1 + local_res20;
    if (iVar3 < iVar8) {
      iVar8 = iVar3;
    }
  }
LAB_1422a233e:
  uVar11 = (uint)(pFVar9->ObjectOuterMap)._padding_;
  TStack_68._padding_ = CONCAT44(uVar7,iVar12);
  uVar7 = uVar11 & 0xffffffe0;
  TStack_68.CurrentBitIndex = iVar8;
  TStack_68.UnvisitedBitMask = 0xffffffff;
  iVar12 = (int)uVar11 >> 5;
  TStack_68._28_4_ = iVar8;
  TStack_68.BaseBitIndex = iVar14;
  uStack_48 = CONCAT44(uStack_74,
                       (int)(pFVar9->ObjectOuterMap)._padding_ -
                       *(int *)((longlong)&(pFVar9->ObjectOuterMap)._padding_ + 4));
  TStack_68.Array = (TBitArray<FDefaultBitArrayAllocator> *)plVar1;
  if ((((int)uVar11 < 0) || (iVar3 < (int)uVar11)) &&
     (bVar6 = FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar6)) {
    pcVar5 = (code *)swi(3);
    (*pcVar5)();
    return;
  }
  uVar4 = (uint)(pFVar9->ObjectOuterMap)._padding_;
  if (uVar11 != uVar4) {
    plVar13 = (longlong *)(pFVar9->ObjectOuterMap)._padding_;
    if (plVar13 == (longlong *)0x0) {
      plVar13 = plVar1;
    }
    uVar11 = -1 << ((byte)uVar11 & 0x1f) & *(uint *)((longlong)plVar13 + (longlong)iVar12 * 4);
    while (uVar11 == 0) {
      lVar10 = (longlong)iVar12;
      uVar7 = uVar7 + 0x20;
      iVar12 = iVar12 + 1;
      uVar11 = uVar4;
      if ((int)((uVar4 - 1) + ((int)(uVar4 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar12) goto LAB_1422a2440;
      uVar11 = *(uint *)((longlong)plVar13 + lVar10 * 4 + 4);
    }
    uVar2 = (ulonglong)(-uVar11 & uVar11) * 2 + 1;
    lVar10 = 0x3f;
    if (uVar2 != 0) {
      for (; uVar2 >> lVar10 == 0; lVar10 = lVar10 + -1) {
      }
    }
    uVar11 = (int)lVar10 + -1 + uVar7;
    if ((int)uVar4 < (int)uVar11) {
      uVar11 = uVar4;
    }
  }
LAB_1422a2440:
  while( true ) {
    if ((int)(pFVar9->ObjectOuterMap)._padding_ -
        *(int *)((longlong)&(pFVar9->ObjectOuterMap)._padding_ + 4) != (int)uStack_48) {
      `TSparseArray<TSparseSetElement<TTuple<UObjectBase_*,FSetHashBucket>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res18);
    }
    if ((TStack_68.CurrentBitIndex == uVar11) &&
       (TStack_68.Array == (TBitArray<FDefaultBitArrayAllocator> *)plVar1)) break;
    TStack_68.UnvisitedBitMask = TStack_68.UnvisitedBitMask & ~TStack_68._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_68);
  }
  FOutputDevice::LogfImpl(param_1,L"Total memory allocated for Object Outer Map: %I64u bytes.");
  FOutputDevice::Log(param_1,L"");
  if (lpCriticalSection != (FUObjectHashTables *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// LogHashStatistics @ 1422a2530

void __cdecl LogHashStatistics(FOutputDevice *param_1,bool param_2)

{
  bool bVar1;
  FUObjectHashTables *lpCriticalSection;
  FUObjectHashTables *pFVar2;
  
  FOutputDevice::Log(param_1,L"Hash efficiency statistics for the Object Hash");
  FOutputDevice::Log(param_1,L"-------------------------------------------------");
  FOutputDevice::Log(param_1,L"");
  lpCriticalSection = FUObjectHashTables::Get();
  bVar1 = IsGarbageCollectingAndLockingUObjectHashTables();
  if (bVar1) {
    bVar1 = IsInGameThread();
    if (bVar1) {
      lpCriticalSection = (FUObjectHashTables *)0x0;
      goto LAB_1422a2596;
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
LAB_1422a2596:
  pFVar2 = FUObjectHashTables::Get();
  LogHashStatisticsInternal(&pFVar2->Hash,param_1,param_2);
  FOutputDevice::Log(param_1,L"");
  if (lpCriticalSection != (FUObjectHashTables *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return;
}

// LogHashStatisticsInternal @ 1422a25e0

void __cdecl
LogHashStatisticsInternal
          (TBucketMap<int,FSetHashBucket> *param_1,FOutputDevice *param_2,bool param_3)

{
  ulonglong uVar1;
  uint uVar2;
  UObjectBaseUtility *this;
  code *pcVar3;
  char cVar4;
  char cVar5;
  TBucketMap<int,FSetHashBucket> *pTVar6;
  bool bVar7;
  TIterator *pTVar8;
  longlong lVar9;
  longlong lVar10;
  undefined8 *puVar11;
  longlong *plVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  uint *puVar17;
  uint uVar18;
  longlong lVar19;
  uint uVar20;
  int iVar21;
  uint uVar22;
  undefined1 local_res20 [8];
  undefined1 local_228 [4];
  int local_224;
  int local_220;
  int local_21c;
  int local_218;
  ulonglong local_210;
  uint *local_208;
  longlong *local_200;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1f8;
  TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *pTStack_1d8;
  char local_1d0;
  char local_1cf;
  char local_1ce;
  TBucketMap<int,FSetHashBucket> *local_1c8;
  int iStack_1c0;
  uint uStack_1bc;
  longlong *local_1b8;
  undefined4 uStack_1b0;
  int iStack_1ac;
  int local_1a8;
  undefined4 uStack_1a4;
  int iStack_1a0;
  undefined4 uStack_19c;
  int local_198;
  int local_194;
  int local_190;
  FName local_18c;
  FString local_180;
  TBucketMap<int,FSetHashBucket> *local_170;
  int iStack_168;
  undefined4 uStack_164;
  longlong *local_160;
  undefined4 uStack_158;
  int iStack_154;
  int local_150;
  int iStack_14c;
  int iStack_148;
  undefined4 uStack_144;
  TBucketMap<int,FSetHashBucket> *local_140;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_138;
  undefined8 uStack_118;
  TBucketMap<int,FSetHashBucket> *local_110;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_108;
  undefined8 uStack_e8;
  FString local_e0;
  TIterator local_d0;
  TIterator local_a0;
  undefined4 local_54;
  
  local_21c = 0x7fffffff;
  local_224 = 0;
  local_218 = (int)param_1->_padding_ - *(int *)((longlong)&param_1->_padding_ + 4);
  iVar21 = 0;
  local_220 = 0;
  uVar20 = 0;
  FOutputDevice::LogfImpl(param_2,L"Slots in use %d");
  iVar14 = (int)param_1->_padding_;
  iStack_1c0 = 0;
  local_210 = 1;
  local_1a8 = 0;
  uStack_1bc = 1;
  iStack_1ac = 0;
  if (iVar14 != 0) {
    plVar12 = (longlong *)param_1->_padding_;
    if ((longlong *)param_1->_padding_ == (longlong *)0x0) {
      plVar12 = &param_1->_padding_;
    }
    uVar18 = (uint)*plVar12;
    while (uVar18 == 0) {
      lVar9 = (longlong)iStack_1c0;
      local_1a8 = local_1a8 + 0x20;
      iStack_1c0 = iStack_1c0 + 1;
      iStack_1ac = iVar14;
      if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_1c0) goto LAB_1422a26e2;
      uVar18 = *(uint *)((longlong)plVar12 + lVar9 * 4 + 4);
    }
    uStack_1bc = -uVar18 & uVar18;
    uVar1 = (ulonglong)uStack_1bc * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_198 = (int)lVar9;
    iStack_1ac = local_1a8 + -1 + local_198;
    if (iVar14 < iStack_1ac) {
      iStack_1ac = iVar14;
    }
  }
LAB_1422a26e2:
  local_1b8 = &param_1->_padding_;
  uVar18 = (uint)param_1->_padding_;
  uStack_1a4 = local_54;
  uVar16 = uVar18 & 0xffffffe0;
  iStack_1a0 = (int)param_1->_padding_ - *(int *)((longlong)&param_1->_padding_ + 4);
  uStack_1b0 = 0xffffffff;
  TStack_138._padding_ = CONCAT44(uStack_1bc,iStack_1c0);
  TStack_138.CurrentBitIndex = iStack_1ac;
  TStack_138.UnvisitedBitMask = 0xffffffff;
  iVar13 = (int)uVar18 >> 5;
  TStack_138._28_4_ = local_54;
  TStack_138.BaseBitIndex = local_1a8;
  uStack_118 = CONCAT44(uStack_19c,iStack_1a0);
  local_1c8 = param_1;
  local_140 = param_1;
  TStack_138.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_1b8;
  if ((((int)uVar18 < 0) || (iVar14 < (int)uVar18)) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar2 = (uint)param_1->_padding_;
  uVar22 = 0;
  if (uVar18 != uVar2) {
    plVar12 = (longlong *)param_1->_padding_;
    if ((longlong *)param_1->_padding_ == (longlong *)0x0) {
      plVar12 = &param_1->_padding_;
    }
    uVar18 = -1 << ((byte)uVar18 & 0x1f) & *(uint *)((longlong)plVar12 + (longlong)iVar13 * 4);
    while (uVar22 = uVar20, uVar18 == 0) {
      lVar9 = (longlong)iVar13;
      uVar16 = uVar16 + 0x20;
      iVar13 = iVar13 + 1;
      uVar18 = uVar2;
      if ((int)((uVar2 - 1) + ((int)(uVar2 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar13) goto LAB_1422a27f0;
      uVar18 = *(uint *)((longlong)plVar12 + lVar9 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar18 & uVar18) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    local_194 = (int)lVar9;
    uVar18 = local_194 + -1 + uVar16;
    if ((int)uVar2 < (int)uVar18) {
      uVar18 = uVar2;
    }
  }
LAB_1422a27f0:
  while( true ) {
    pTVar6 = local_140;
    if ((int)local_140->_padding_ - *(int *)((longlong)&local_140->_padding_ + 4) != (int)uStack_118
       ) {
      local_res20[0] = 0;
      `TSparseArray<TSparseSetElement<TTuple<int,FSetHashBucket>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (((TStack_138.CurrentBitIndex == uVar18) &&
        (TStack_138.Array == (TBitArray<FDefaultBitArrayAllocator> *)&param_1->_padding_)) &&
       (pTVar6 == param_1)) break;
    lVar9 = pTVar6->_padding_;
    lVar19 = (longlong)TStack_138.CurrentBitIndex * 0x20;
    lVar10 = *(longlong *)(lVar19 + 0x10 + lVar9);
    if ((lVar10 == 0) || (*(longlong *)(lVar19 + 8 + lVar9) != 0)) {
      iVar14 = (uint)(lVar10 != 0) + (uint)(*(longlong *)(lVar19 + 8 + lVar9) != 0);
    }
    else {
      iVar14 = *(int *)(lVar10 + 8) - *(int *)(lVar10 + 0x34);
    }
    if (iVar14 < 0) {
      bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("Collisions >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectHash.cpp"
                         ,0x8af,L"");
      if (bVar7) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    else if (1 < iVar14) {
      local_220 = local_220 + 1;
    }
    local_224 = local_224 + iVar14;
    if (iVar21 < iVar14) {
      uVar22 = *(uint *)(lVar19 + lVar9);
      iVar21 = iVar14;
    }
    if (iVar14 < local_21c) {
      local_21c = iVar14;
    }
    if (param_3) {
      FOutputDevice::LogfImpl(param_2,L"\tSlot %d has %d collisions");
    }
    TStack_138.UnvisitedBitMask = TStack_138.UnvisitedBitMask & ~TStack_138._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_138);
  }
  FOutputDevice::Log(param_2,L"");
  FOutputDevice::Log(param_2,L"Worst hash bucket contains:");
  if ((int)param_1->_padding_ != *(int *)((longlong)&param_1->_padding_ + 4)) {
    plVar12 = (longlong *)param_1->_padding_;
    if ((longlong *)param_1->_padding_ == (longlong *)0x0) {
      plVar12 = &param_1->_padding_;
    }
    uVar20 = *(uint *)((longlong)plVar12 + (ulonglong)((int)param_1->_padding_ - 1U & uVar22) * 4);
    if (uVar20 != 0xffffffff) {
      do {
        puVar15 = (uint *)((longlong)(int)uVar20 * 0x20 + param_1->_padding_);
        if (*puVar15 == uVar22) {
          if (puVar15 != (uint *)0x0) goto LAB_1422a299f;
          goto LAB_1422a2979;
        }
        uVar20 = puVar15[6];
      } while (uVar20 != 0xffffffff);
    }
  }
  puVar15 = (uint *)0x0;
LAB_1422a2979:
  bVar7 = FDebug::CheckVerifyFailedImpl2
                    ("Pair != nullptr",
                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Map.h.inl"
                     ,0x288,L"");
  if (bVar7) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
LAB_1422a299f:
  puVar17 = puVar15 + 2;
  local_208 = puVar17;
  if ((*(TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> **)(puVar15 + 4)
       == (TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)0x0) ||
     (*(longlong *)puVar17 != 0)) {
    TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::TIterator::TIterator
              (&local_a0,&FSetHashBucket::EmptyBucket);
    pTVar8 = &local_a0;
  }
  else {
    TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::TIterator::TIterator
              (&local_d0,
               *(TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> **)
                (puVar15 + 4));
    pTVar8 = &local_d0;
  }
  local_200 = (longlong *)pTVar8->_padding_;
  TStack_1f8._padding_ = pTVar8->_padding_;
  TStack_1f8.Array = (TBitArray<FDefaultBitArrayAllocator> *)pTVar8->_padding_;
  TStack_1f8._16_8_ = pTVar8->_padding_;
  TStack_1f8._24_8_ = pTVar8->_padding_;
  pTStack_1d8 = pTVar8->Set;
  lVar9 = *(longlong *)(puVar15 + 4);
  if ((lVar9 == 0) || (lVar10 = lVar9, *(longlong *)puVar17 != 0)) {
    lVar10 = 0;
  }
  local_1d0 = lVar10 != 0;
  if ((*(longlong *)puVar17 == 0) && (lVar9 == 0)) {
    local_1cf = '\x01';
  }
  else {
    local_1cf = '\0';
  }
  local_1ce = '\0';
  do {
    cVar4 = local_1d0;
    iVar14 = TStack_1f8.CurrentBitIndex;
    while( true ) {
      cVar5 = local_1ce;
      if (cVar4 == '\0') {
        bVar7 = local_1cf == '\0';
      }
      else {
        bVar7 = iVar14 < (TStack_1f8.Array)->NumBits;
      }
      if (!bVar7) {
        FOutputDevice::Log(param_2,L"");
        FOutputDevice::LogfImpl
                  (param_2,
                   L"Collision Stats: Best Case (%d), Average Case (%d), Worst Case (%d), Number of buckets with more than one item (%d/%d)"
                  );
        local_160 = &param_1->_padding_;
        iVar14 = (int)param_1->_padding_;
        iStack_168 = 0;
        local_150 = 0;
        iStack_154 = 0;
        if (iVar14 == 0) goto LAB_1422a2c80;
        plVar12 = (longlong *)param_1->_padding_;
        if ((longlong *)param_1->_padding_ == (longlong *)0x0) {
          plVar12 = local_160;
        }
        uVar20 = (uint)*plVar12;
        goto joined_r0x0001422a2c36;
      }
      if (cVar4 == '\0') {
        puVar11 = (undefined8 *)((ulonglong)(-(uint)(local_1ce != '\0') & 8) + (longlong)puVar17);
      }
      else {
        puVar11 = (undefined8 *)((longlong)iVar14 * 0x10 + *local_200);
      }
      this = (UObjectBaseUtility *)*puVar11;
      UObjectBaseUtility::GetFullName(this,&local_e0,(UObject *)0x0,None);
      local_18c.ComparisonIndex.Value = *(uint *)&this->field_0x18;
      local_18c.Number = *(uint *)&this->field_0x1c;
      FName::ToString(&local_18c,&local_180);
      FOutputDevice::LogfImpl(param_2,L"\tObject is %s (%s)");
      if (local_180.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_180.Data.AllocatorInstance.Data);
      }
      if (local_e0.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_e0.Data.AllocatorInstance.Data);
      }
      if (cVar4 != '\0') break;
      if ((cVar5 == '\0') && (*(longlong *)(puVar17 + 2) != 0)) {
        local_1cf = '\0';
        local_1ce = '\x01';
      }
      else {
        local_1cf = '\x01';
        local_1ce = '\x01';
      }
    }
    TStack_1f8.UnvisitedBitMask = TStack_1f8.UnvisitedBitMask & ~TStack_1f8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1f8);
    puVar17 = local_208;
  } while( true );
joined_r0x0001422a2c36:
  if (uVar20 != 0) goto LAB_1422a2c58;
  lVar9 = (longlong)iStack_168;
  local_150 = local_150 + 0x20;
  iStack_168 = iStack_168 + 1;
  iStack_154 = iVar14;
  if ((int)(iVar14 + -1 + (iVar14 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_168) goto LAB_1422a2c80;
  uVar20 = *(uint *)((longlong)plVar12 + lVar9 * 4 + 4);
  goto joined_r0x0001422a2c36;
LAB_1422a2c58:
  local_210 = (ulonglong)(-uVar20 & uVar20);
  uVar1 = local_210 * 2 + 1;
  lVar9 = 0x3f;
  if (uVar1 != 0) {
    for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
    }
  }
  local_190 = (int)lVar9;
  iStack_154 = local_150 + -1 + local_190;
  if (iVar14 < iStack_154) {
    iStack_154 = iVar14;
  }
LAB_1422a2c80:
  uVar20 = (uint)param_1->_padding_;
  uStack_164 = (undefined4)local_210;
  iStack_14c = iStack_1ac;
  iStack_148 = (int)param_1->_padding_ - *(int *)((longlong)&param_1->_padding_ + 4);
  uVar18 = uVar20 & 0xffffffe0;
  uStack_158 = 0xffffffff;
  TStack_108.CurrentBitIndex = iStack_154;
  TStack_108.UnvisitedBitMask = 0xffffffff;
  TStack_108._padding_ = CONCAT44(uStack_164,iStack_168);
  iVar14 = (int)uVar20 >> 5;
  TStack_108._28_4_ = iStack_1ac;
  TStack_108.BaseBitIndex = local_150;
  uStack_e8 = CONCAT44(uStack_144,iStack_148);
  local_170 = param_1;
  local_110 = param_1;
  TStack_108.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_160;
  if (((int)uVar20 < 0) &&
     (bVar7 = FDebug::CheckVerifyFailedImpl2
                        ("StartIndex >= 0 && StartIndex <= Array.Num()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\BitArray.h"
                         ,0x7af,L""), bVar7)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  uVar16 = (uint)param_1->_padding_;
  if (uVar20 != uVar16) {
    plVar12 = (longlong *)param_1->_padding_;
    if ((longlong *)param_1->_padding_ == (longlong *)0x0) {
      plVar12 = &param_1->_padding_;
    }
    uVar20 = -1 << ((byte)uVar20 & 0x1f) & *(uint *)((longlong)plVar12 + (longlong)iVar14 * 4);
    while (uVar20 == 0) {
      lVar9 = (longlong)iVar14;
      uVar18 = uVar18 + 0x20;
      iVar14 = iVar14 + 1;
      uVar20 = uVar16;
      if ((int)((uVar16 - 1) + ((int)(uVar16 - 1) >> 0x1f & 0x1fU)) >> 5 < iVar14)
      goto LAB_1422a2d90;
      uVar20 = *(uint *)((longlong)plVar12 + lVar9 * 4 + 4);
    }
    uVar1 = (ulonglong)(-uVar20 & uVar20) * 2 + 1;
    lVar9 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar9 == 0; lVar9 = lVar9 + -1) {
      }
    }
    uVar20 = (int)lVar9 + -1 + uVar18;
    if ((int)uVar16 < (int)uVar20) {
      uVar20 = uVar16;
    }
  }
LAB_1422a2d90:
  while( true ) {
    pTVar6 = local_110;
    if ((int)local_110->_padding_ - *(int *)((longlong)&local_110->_padding_ + 4) != (int)uStack_e8)
    {
      `TSparseArray<TSparseSetElement<TTuple<int,FSetHashBucket>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::TRangedForIterator::operator!='::__l2::<lambda_1>::operator()(local_228);
    }
    if (((TStack_108.CurrentBitIndex == uVar20) &&
        (TStack_108.Array == (TBitArray<FDefaultBitArrayAllocator> *)&param_1->_padding_)) &&
       (pTVar6 == param_1)) break;
    TStack_108.UnvisitedBitMask = TStack_108.UnvisitedBitMask & ~TStack_108._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_108);
  }
  FOutputDevice::LogfImpl(param_2,L"Total memory allocated for and by Object Hash: %I64u bytes.");
  return;
}

// LogHashStatisticsInternal @ 1422a2e60

void __cdecl
LogHashStatisticsInternal
          (TMultiMap<int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,unsigned_int,1>_>
           *param_1,FOutputDevice *param_2,bool param_3)

{
  FScriptContainerElement *pFVar1;
  uint uVar2;
  UObjectBase *this;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  undefined1 *puVar6;
  FUObjectItem *pFVar7;
  ForAnyElementType FVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 local_res20 [8];
  int local_e4;
  int local_e0;
  TArray<int,TSizedDefaultAllocator<32>_> local_d8;
  TMultiMap<int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,unsigned_int,1>_>
  *local_c8;
  int iStack_c0;
  int iStack_bc;
  int local_b8;
  undefined4 uStack_b4;
  TMultiMap<int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,unsigned_int,1>_>
  *local_b0;
  int iStack_a8;
  int iStack_a4;
  int local_a0;
  TMultiMap<int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,unsigned_int,1>_>
  *local_98;
  int iStack_90;
  int iStack_8c;
  int local_88;
  FName local_80;
  FString local_78;
  undefined8 local_68;
  int iStack_60;
  int iStack_5c;
  undefined8 local_58;
  FString local_50;
  
  iVar12 = 0;
  local_d8.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  local_d8.ArrayNum = 0;
  local_d8.ArrayMax = 0;
  TMapBase<int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,unsigned_int,1>_>::
  GetKeys<TSizedDefaultAllocator<32>_>
            ((TMapBase<int,unsigned_int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<int,unsigned_int,1>_>
              *)param_1,&local_d8);
  local_e0 = 0x7fffffff;
  local_e4 = 0;
  FOutputDevice::LogfImpl(param_2,L"Slots in use %d");
  iVar11 = local_d8.ArrayNum;
  pFVar1 = local_d8.AllocatorInstance.Data + (longlong)local_d8.ArrayNum * 4;
  FVar8.Data = local_d8.AllocatorInstance.Data;
  while( true ) {
    if (local_d8.ArrayNum != iVar11) {
      local_res20[0] = 0;
      `TCheckedPointerIterator<int,int,0>::operator!='::__l2::<lambda_1>::operator()(local_res20);
    }
    if (FVar8.Data == pFVar1) break;
    iVar10 = 0;
    iStack_c0 = *(int *)FVar8.Data;
    iStack_bc = -1;
    if (*(int *)&param_1->field_0x48 == 0) {
      local_b8 = -1;
    }
    else {
      puVar6 = &param_1->field_0x38;
      if (*(undefined1 **)&param_1->field_0x40 != (undefined1 *)0x0) {
        puVar6 = *(undefined1 **)&param_1->field_0x40;
      }
      local_b8 = *(int *)(puVar6 + ((longlong)*(int *)&param_1->field_0x48 - 1U &
                                   (longlong)iStack_c0) * 4);
      iStack_bc = local_b8;
      if (local_b8 != -1) {
        do {
          local_b8 = *(int *)(*(longlong *)param_1 + 8 + (longlong)iStack_bc * 0x10);
          if (*(int *)(*(longlong *)param_1 + (longlong)iStack_bc * 0x10) == iStack_c0) break;
          iStack_bc = local_b8;
        } while (local_b8 != -1);
      }
    }
    local_58 = CONCAT44(uStack_b4,local_b8);
    iStack_5c = iStack_bc;
    iVar9 = local_b8;
    if (iStack_bc != -1) {
      do {
        iVar10 = iVar10 + 1;
        iVar5 = iVar9;
        if (iVar9 != -1) {
          do {
            iVar9 = *(int *)(*(longlong *)param_1 + 8 + (longlong)iVar5 * 0x10);
            if (*(int *)(*(longlong *)param_1 + (longlong)iVar5 * 0x10) == iStack_c0) break;
            iVar5 = iVar9;
          } while (iVar9 != -1);
        }
      } while (iVar5 != -1);
      iStack_5c = -1;
    }
    if (local_e4 < iVar10) {
      local_e4 = iVar10;
      iVar12 = iStack_c0;
    }
    if (iVar10 < local_e0) {
      local_e0 = iVar10;
    }
    local_c8 = param_1;
    iStack_60 = iStack_c0;
    local_68 = param_1;
    if (param_3) {
      FOutputDevice::LogfImpl(param_2,L"\tSlot %d has %d collisions");
    }
    FVar8.Data = FVar8.Data + 4;
  }
  FOutputDevice::Log(param_2,L"");
  FOutputDevice::Log(param_2,L"Worst hash bucket contains:");
  iVar11 = 0;
  iStack_a4 = -1;
  local_b0 = param_1;
  local_98 = param_1;
  iStack_a8 = iVar12;
  iStack_90 = iVar12;
  if (*(int *)&param_1->field_0x48 == 0) {
    local_a0 = -1;
    iStack_8c = iStack_a4;
    local_88 = local_a0;
  }
  else {
    puVar6 = *(undefined1 **)&param_1->field_0x40;
    if (*(undefined1 **)&param_1->field_0x40 == (undefined1 *)0x0) {
      puVar6 = &param_1->field_0x38;
    }
    local_a0 = *(int *)(puVar6 + ((longlong)*(int *)&param_1->field_0x48 - 1U & (longlong)iVar12) *
                                 4);
    iStack_8c = local_a0;
    iStack_a4 = local_a0;
    local_88 = local_a0;
    if (local_a0 != -1) {
      do {
        local_a0 = *(int *)(*(longlong *)param_1 + 8 + (longlong)iStack_8c * 0x10);
        iStack_a4 = iStack_8c;
        local_88 = local_a0;
        if (*(int *)(*(longlong *)param_1 + (longlong)iStack_8c * 0x10) == iVar12) break;
        iStack_8c = local_a0;
        iStack_a4 = local_a0;
      } while (local_a0 != -1);
    }
  }
  do {
    if ((iStack_8c == -1) || (0x1d < iVar11)) {
LAB_1422a3333:
      FOutputDevice::Log(param_2,L"");
      FOutputDevice::LogfImpl
                (param_2,L"Collision Stats: Best Case (%d), Average Case (%d), Worst Case (%d)");
      FOutputDevice::LogfImpl(param_2,L"Total memory allocated for Object Outer Hash: %I64u bytes.")
      ;
      if (local_d8.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
        FMemory::Free(local_d8.AllocatorInstance.Data);
      }
      return;
    }
    uVar2 = *(uint *)(*(longlong *)local_98 + 4 + (longlong)iStack_8c * 0x10);
    if ((int)uVar2 < 0) {
      bVar4 = FDebug::CheckVerifyFailedImpl2
                        ("Index >= 0",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                         ,0x443,L"");
      if (bVar4) {
        pcVar3 = (code *)swi(3);
        (*pcVar3)();
        return;
      }
    }
    if ((int)uVar2 < GUObjectArray.ObjObjects.NumElements) {
      if ((int)uVar2 < 0) {
        bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("IsValidIndex(Index)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x362,L"IsValidIndex(%d)");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if ((uint)GUObjectArray.ObjObjects.NumChunks <= uVar2 >> 0x10) {
        bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("ChunkIndex < (uint32)NumChunks",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x363,L"ChunkIndex (%d) < NumChunks (%d)");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      if (GUObjectArray.ObjObjects.MaxElements <= (int)uVar2) {
        bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("Index < MaxElements",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x364,L"Index (%d) < MaxElements (%d)");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar7 = GUObjectArray.ObjObjects.Objects[uVar2 >> 0x10];
      if (pFVar7 == (FUObjectItem *)0x0) {
        bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("Chunk",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x366,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
      pFVar7 = pFVar7 + (uVar2 & 0xffff);
      if (pFVar7 == (FUObjectItem *)0x0) {
        bVar4 = FDebug::CheckVerifyFailedImpl2
                          ("ItemPtr",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                           ,0x381,L"");
        if (bVar4) {
          pcVar3 = (code *)swi(3);
          (*pcVar3)();
          return;
        }
      }
    }
    else {
      pFVar7 = (FUObjectItem *)0x0;
    }
    this = (pFVar7->field1_0x8).Object;
    UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_50,(UObject *)0x0,None);
    local_80 = (this->NamePrivate).Name;
    FName::ToString(&local_80,&local_78);
    FOutputDevice::LogfImpl(param_2,L"\tObject is %s (%s)");
    if (local_78.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_78.Data.AllocatorInstance.Data);
    }
    if (local_50.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_50.Data.AllocatorInstance.Data);
    }
    iVar11 = iVar11 + 1;
    iStack_8c = local_88;
    if (local_88 == -1) goto LAB_1422a3333;
    do {
      local_88 = *(int *)(*(longlong *)local_98 + 8 + (longlong)iStack_8c * 0x10);
      if (*(int *)(*(longlong *)local_98 + (longlong)iStack_8c * 0x10) == iStack_90) break;
      iStack_8c = local_88;
    } while (local_88 != -1);
  } while( true );
}

// MarkAllObjects @ 1422a33f0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

void __cdecl MarkAllObjects(EObjectMark param_1)

{
  FUObjectAnnotationSparseNoSync<FObjectMark> *this;
  int iVar1;
  FTlsAutoCleanup FVar2;
  code *pcVar3;
  FUObjectItem *pFVar4;
  bool bVar5;
  FObjectMark FVar6;
  UClass *pUVar7;
  FUObjectItem *pFVar8;
  UClass *pUVar9;
  FTlsAutoCleanup *pFVar10;
  undefined4 extraout_var;
  EObjectMark EVar11;
  UObjectBase *pUVar12;
  undefined1 local_res10 [24];
  code *local_88;
  undefined1 *local_80;
  FTlsAutoCleanup *local_78;
  FTlsAutoCleanup *local_70;
  TIterator local_68;
  UClass *local_50;
  EObjectFlags local_48;
  EInternalObjectFlags local_44;
  
  pUVar7 = Z_Construct_UClass_UObject_NoRegister();
  local_68.Index = -1;
  local_68.Array = &GUObjectArray;
  local_68.CurrentObject = (FUObjectItem *)0x0;
  FUObjectArray::TIterator::Advance(&local_68);
  local_48 = RF_NoFlags;
  local_50 = pUVar7;
  local_44 = UE::GetAsyncLoadingInternalFlagsExclusion();
  local_44 = local_44 | (PendingConstruction|Unreachable|AutoRTFMConstructionAborted);
  if ((pUVar7 == (UClass *)0x0) &&
     (bVar5 = FDebug::CheckVerifyFailedImpl2
                        ("Class",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectIterator.h"
                         ,0x70,L""), bVar5)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&(local_68.Array)->ObjObjectsCritical);
  do {
    pFVar4 = local_68.CurrentObject;
    if (local_68.CurrentObject == (FUObjectItem *)0x0) {
      pUVar12 = (UObjectBase *)0x0;
    }
    else {
      pUVar12 = ((local_68.CurrentObject)->field1_0x8).Object;
    }
    if (((local_48 & pUVar12->ObjectFlags) == RF_NoFlags) &&
       (pFVar8 = FUObjectArray::IndexToObject(&GUObjectArray,pUVar12->InternalIndex),
       (local_44 & (EInternalObjectFlags)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20))
       == Borrowed)) {
      pUVar9 = Z_Construct_UClass_UObject_NoRegister();
      if (pUVar7 == pUVar9) break;
      pUVar9 = (pUVar12->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
      iVar1 = (int)pUVar7->_padding_;
      if ((iVar1 <= (int)pUVar9->_padding_) &&
         ((longlong *)*(undefined1 **)(pUVar9->_padding_ + (longlong)iVar1 * 8) ==
          &pUVar7->_padding_)) break;
    }
    bVar5 = FUObjectArray::TIterator::Advance(&local_68);
    pUVar7 = local_50;
    pFVar4 = local_68.CurrentObject;
  } while (bVar5);
joined_r0x0001422a34f2:
  do {
    if (pFVar4 == (FUObjectItem *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001422a3650. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      LeaveCriticalSection((LPCRITICAL_SECTION)&(local_68.Array)->ObjObjectsCritical);
      return;
    }
    FVar2 = (FTlsAutoCleanup)(pFVar4->field1_0x8).Object;
    local_80 = local_res10;
    local_88 = UE::Core::Private::Function::
               TFunctionRefCaller<`TThreadSingleton<FThreadMarkAnnotation>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
               ::Call;
    pFVar10 = FThreadSingletonInitializer::Get
                        ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_88,
                         &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FThreadMarkAnnotation>::GetTlsSlot(void)'
                          ::__l2::TlsSlot);
    this = (FUObjectAnnotationSparseNoSync<FObjectMark> *)(pFVar10 + 2);
    FVar6 = FUObjectAnnotationSparseNoSync<FObjectMark>::GetAnnotation
                      (this,(UObjectBase *)(local_res10 + 8));
    EVar11 = param_1 | *(EObjectMark *)CONCAT44(extraout_var,FVar6.Marks);
    if ((FVar2 == (FTlsAutoCleanup)0x0) &&
       (bVar5 = FDebug::CheckVerifyFailedImpl2
                          ("Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectMarks.cpp"
                           ,0x3e,L""), bVar5)) {
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
    pFVar10[0xd] = FVar2;
    *(EObjectMark *)(pFVar10 + 0xe) = EVar11;
    if (EVar11 == OBJECTMARK_NOMARKS) {
      FUObjectAnnotationSparseNoSync<FObjectMark>::RemoveAnnotation(this,(UObjectBase *)FVar2);
    }
    else {
      if (*(int *)(pFVar10 + 4) == *(int *)&pFVar10[9].field_0x4) {
        FUObjectArray::AddUObjectDeleteListener(&GUObjectArray,(FUObjectDeleteListener *)this);
      }
      local_78 = pFVar10 + 0xd;
      local_70 = pFVar10 + 0xe;
      TSet<TTuple<UObjectBase_const_*,FObjectMark>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FObjectMark,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UObjectBase_const_*_const_&,FObjectMark_const_&>_>
                ((TSet<TTuple<UObjectBase_const_*,FObjectMark>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FObjectMark,0>,FDefaultSetAllocator>
                  *)(pFVar10 + 3),
                 (TPairInitializer<UObjectBase_const_*_const_&,FObjectMark_const_&> *)
                 (local_res10 + 0x10),(bool *)&local_78);
    }
LAB_1422a35c1:
    do {
      do {
        bVar5 = FUObjectArray::TIterator::Advance(&local_68);
        pFVar4 = local_68.CurrentObject;
        if (!bVar5) goto joined_r0x0001422a34f2;
        if (local_68.CurrentObject == (FUObjectItem *)0x0) {
          pUVar12 = (UObjectBase *)0x0;
        }
        else {
          pUVar12 = ((local_68.CurrentObject)->field1_0x8).Object;
        }
      } while ((local_48 & pUVar12->ObjectFlags) != RF_NoFlags);
      pUVar7 = Z_Construct_UClass_UObject_NoRegister();
      if (local_50 != pUVar7) {
        pUVar7 = (pUVar12->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
        iVar1 = (int)local_50->_padding_;
        if (((int)pUVar7->_padding_ < iVar1) ||
           ((longlong *)*(undefined1 **)(pUVar7->_padding_ + (longlong)iVar1 * 8) !=
            &local_50->_padding_)) goto LAB_1422a35c1;
      }
      pFVar8 = FUObjectArray::IndexToObject(&GUObjectArray,pUVar12->InternalIndex);
    } while ((local_44 &
             (EInternalObjectFlags)((ulonglong)(pFVar8->field0_0x0).FlagsAndRefCount >> 0x20)) !=
             Borrowed);
  } while( true );
}

// MarkObject @ 1422a3660

void __cdecl MarkObject(UObjectBase *param_1,EObjectMark param_2)

{
  FUObjectAnnotationSparseNoSync<FObjectMark> *this;
  code *pcVar1;
  bool bVar2;
  FObjectMark FVar3;
  FTlsAutoCleanup *pFVar4;
  undefined4 extraout_var;
  EObjectMark EVar5;
  undefined1 local_res10 [8];
  TPairInitializer<UObjectBase_const_*_const_&,FObjectMark_const_&> local_res18;
  code *local_48;
  undefined1 *local_40;
  FTlsAutoCleanup *local_38;
  FTlsAutoCleanup *local_30;
  
  local_40 = local_res10;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FThreadMarkAnnotation>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar4 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_48,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FThreadMarkAnnotation>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  this = (FUObjectAnnotationSparseNoSync<FObjectMark> *)(pFVar4 + 2);
  FVar3 = FUObjectAnnotationSparseNoSync<FObjectMark>::GetAnnotation
                    (this,(UObjectBase *)&stack0x00000008);
  EVar5 = param_2 | *(EObjectMark *)CONCAT44(extraout_var,FVar3.Marks);
  if (param_1 == (UObjectBase *)0x0) {
    bVar2 = FDebug::CheckVerifyFailedImpl2
                      ("Object",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectMarks.cpp"
                       ,0x3e,L"");
    if (bVar2) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  pFVar4[0xd] = (FTlsAutoCleanup)param_1;
  *(EObjectMark *)(pFVar4 + 0xe) = EVar5;
  if (EVar5 == OBJECTMARK_NOMARKS) {
    FUObjectAnnotationSparseNoSync<FObjectMark>::RemoveAnnotation(this,param_1);
    return;
  }
  if (*(int *)(pFVar4 + 4) == *(int *)&pFVar4[9].field_0x4) {
    FUObjectArray::AddUObjectDeleteListener(&GUObjectArray,(FUObjectDeleteListener *)this);
  }
  local_38 = pFVar4 + 0xd;
  local_30 = pFVar4 + 0xe;
  TSet<TTuple<UObjectBase_const_*,FObjectMark>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FObjectMark,0>,FDefaultSetAllocator>
  ::Emplace<TPairInitializer<UObjectBase_const_*_const_&,FObjectMark_const_&>_>
            ((TSet<TTuple<UObjectBase_const_*,FObjectMark>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FObjectMark,0>,FDefaultSetAllocator>
              *)(pFVar4 + 3),&local_res18,(bool *)&local_38);
  return;
}

// ObjectGetAllMarks @ 1422a3a50

EObjectMark __cdecl ObjectGetAllMarks(UObjectBase *param_1)

{
  FObjectMark FVar1;
  FTlsAutoCleanup *pFVar2;
  undefined4 extraout_var;
  undefined1 local_res10 [24];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FThreadMarkAnnotation>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar2 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FThreadMarkAnnotation>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  FVar1 = FUObjectAnnotationSparseNoSync<FObjectMark>::GetAnnotation
                    ((FUObjectAnnotationSparseNoSync<FObjectMark> *)(pFVar2 + 2),
                     (UObjectBase *)(local_res10 + 8));
  return *(EObjectMark *)CONCAT44(extraout_var,FVar1.Marks);
}

// ObjectHasAllMarks @ 1422a3aa0

bool __cdecl ObjectHasAllMarks(UObjectBase *param_1,EObjectMark param_2)

{
  FObjectMark FVar1;
  FTlsAutoCleanup *pFVar2;
  undefined4 extraout_var;
  undefined1 local_res10 [24];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FThreadMarkAnnotation>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar2 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FThreadMarkAnnotation>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  FVar1 = FUObjectAnnotationSparseNoSync<FObjectMark>::GetAnnotation
                    ((FUObjectAnnotationSparseNoSync<FObjectMark> *)(pFVar2 + 2),
                     (UObjectBase *)(local_res10 + 8));
  return (*(EObjectMark *)CONCAT44(extraout_var,FVar1.Marks) & param_2) == param_2;
}

// ObjectHasAnyMarks @ 1422a3b10

bool __cdecl ObjectHasAnyMarks(UObjectBase *param_1,EObjectMark param_2)

{
  FObjectMark FVar1;
  FTlsAutoCleanup *pFVar2;
  undefined4 extraout_var;
  undefined1 local_res10 [24];
  code *local_18;
  undefined1 *local_10;
  
  local_10 = local_res10;
  local_18 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FThreadMarkAnnotation>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar2 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_18,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FThreadMarkAnnotation>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  FVar1 = FUObjectAnnotationSparseNoSync<FObjectMark>::GetAnnotation
                    ((FUObjectAnnotationSparseNoSync<FObjectMark> *)(pFVar2 + 2),
                     (UObjectBase *)(local_res10 + 8));
  return (*(EObjectMark *)CONCAT44(extraout_var,FVar1.Marks) & param_2) != OBJECTMARK_NOMARKS;
}

// OnHashFailure @ 1422a3b70

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl OnHashFailure(UObjectBaseUtility *param_1,wchar_t *param_2,wchar_t *param_3)

{
  bool bVar1;
  FString local_18;
  
  if (1 < (byte)LogUObjectHash._0_1_) {
    UE::Logging::Private::BasicLog<2>(&LOG_Static,(FLogCategoryBase *)&LogUObjectHash);
  }
  bVar1 = UObjectBase::IsValidLowLevelFast((UObjectBase *)param_1,false);
  if (!bVar1) {
    UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogUObjectHash);
  }
  bVar1 = UObjectBase::IsValidLowLevel((UObjectBase *)param_1);
  if (!bVar1) {
    UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogUObjectHash);
  }
  if ((*(UObjectBase **)&param_1->field_0x20 != (UObjectBase *)0x0) &&
     (bVar1 = UObjectBase::IsValidLowLevelFast(*(UObjectBase **)&param_1->field_0x20,false), !bVar1)
     ) {
    UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogUObjectHash);
  }
  if ((*(UObjectBase **)&param_1->field_0x10 != (UObjectBase *)0x0) &&
     (bVar1 = UObjectBase::IsValidLowLevelFast(*(UObjectBase **)&param_1->field_0x10,false), !bVar1)
     ) {
    UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogUObjectHash);
  }
  UObjectBaseUtility::GetFullName(param_1,&local_18,(UObject *)0x0,None);
  UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogUObjectHash);
  if (local_18.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(local_18.Data.AllocatorInstance.Data);
  }
  return;
}

// ShrinkUObjectHashTables @ 1422a73a0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl ShrinkUObjectHashTables(void)

{
  longlong lVar1;
  bool bVar2;
  LARGE_INTEGER lpCriticalSection;
  FWriteBuffer *pFVar3;
  LARGE_INTEGER lpCriticalSection_00;
  bool bVar4;
  bool bVar5;
  undefined1 auStackY_a8 [32];
  <lambda_1> local_68;
  LARGE_INTEGER local_60;
  FLLMScope local_58 [2];
  FMemScope local_50;
  TArrayView<std::nullptr_t,int> local_48;
  code *local_38;
  LARGE_INTEGER *local_30;
  ulonglong local_28;
  
  local_28 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  FLLMScope::FLLMScope(local_58,LLMTagDeclaration_UObjectHash.UniqueName,false,None,Default,true);
  local_60.s.LowPart = LLMTagDeclaration_UObjectHash.UniqueName.ComparisonIndex.Value;
  local_60.s.HighPart = LLMTagDeclaration_UObjectHash.UniqueName.Number;
  FMemScope::FMemScope(&local_50,(FName *)&local_60.s,true);
  bVar4 = -1 < MetadataChannel->Enabled;
  if (bVar4) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataStackClearScopeFields>
              ((TLogScope<0> *)&local_38);
    *(undefined8 *)((longlong)local_30 + 0x28) = *(undefined8 *)((longlong)local_30 + 0x20);
  }
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1522,"ShrinkUObjectHashTables",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectHash.cpp"
               ,0x5f2);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1522);
  }
  lpCriticalSection = (LARGE_INTEGER)FUObjectHashTables::Get();
  bVar2 = IsGarbageCollectingAndLockingUObjectHashTables();
  if ((bVar2) && (bVar2 = IsInGameThread(), bVar2)) {
    lpCriticalSection_00.QuadPart = 0;
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    lpCriticalSection_00 = lpCriticalSection;
  }
  bVar2 = FTaskGraphInterface::IsRunning();
  QueryPerformanceCounter(&local_60);
  local_48.DataPtr = (void **)0x0;
  local_38 = UE::Core::Private::Function::
             TFunctionRefCaller<`FUObjectHashTables::ShrinkMaps'::__l2::<lambda_1>,void,int>::Call;
  local_30 = &local_60;
  local_48.ArrayNum = 0;
  local_60 = lpCriticalSection;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",7,1,(TFunctionRef<void___cdecl(int)> *)&local_38,local_68,
             bVar2 ^ ForceSingleThread | Unbalanced,&local_48);
  if (4 < (byte)LogUObjectHash._0_1_) {
    QueryPerformanceCounter(&local_60);
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FUObjectHashTables::ShrinkMaps(void)___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogUObjectHash);
  }
  if ((FUObjectHashTables *)lpCriticalSection_00.QuadPart != (FUObjectHashTables *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar4) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar1 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar3 = *(FWriteBuffer **)(lVar1 + 0x20);
    if ((int)pFVar3 - *(int *)&pFVar3->Cursor < 1) {
      pFVar3 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar3->Cursor = '\n';
    pFVar3->Cursor = pFVar3->Cursor + 1;
    pFVar3->Committed = pFVar3->Cursor;
  }
  FMemScope::~FMemScope(&local_50);
  FLLMScope::~FLLMScope(local_58);
  return;
}

// ShrinkUObjectHashTablesDel @ 1422a7650

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl ShrinkUObjectHashTablesDel(TArray<FString,TSizedDefaultAllocator<32>_> *param_1)

{
  longlong lVar1;
  bool bVar2;
  LARGE_INTEGER lpCriticalSection;
  FWriteBuffer *pFVar3;
  LARGE_INTEGER lpCriticalSection_00;
  bool bVar4;
  bool bVar5;
  undefined1 auStackY_a8 [32];
  <lambda_1> <Stack_68;
  LARGE_INTEGER LStack_60;
  FLLMScope aFStack_58 [2];
  FMemScope FStack_50;
  TArrayView<std::nullptr_t,int> TStack_48;
  code *pcStack_38;
  LARGE_INTEGER *pLStack_30;
  ulonglong uStack_28;
  
  uStack_28 = __security_cookie.value ^ (ulonglong)auStackY_a8;
  FLLMScope::FLLMScope(aFStack_58,LLMTagDeclaration_UObjectHash.UniqueName,false,None,Default,true);
  LStack_60.s.LowPart = LLMTagDeclaration_UObjectHash.UniqueName.ComparisonIndex.Value;
  LStack_60.s.HighPart = LLMTagDeclaration_UObjectHash.UniqueName.Number;
  FMemScope::FMemScope(&FStack_50,(FName *)&LStack_60.s,true);
  bVar4 = -1 < MetadataChannel->Enabled;
  if (bVar4) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataStackClearScopeFields>
              ((TLogScope<0> *)&pcStack_38);
    *(undefined8 *)((longlong)pLStack_30 + 0x28) = *(undefined8 *)((longlong)pLStack_30 + 0x20);
  }
  bVar5 = -1 < CpuChannel->Enabled;
  if (bVar5) {
    FCpuProfilerTrace::GetOrCreateSpecId
              (&__CpuProfilerEventSpecId1522,"ShrinkUObjectHashTables",
               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectHash.cpp"
               ,0x5f2);
    FCpuProfilerTrace::OutputBeginEvent(__CpuProfilerEventSpecId1522);
  }
  lpCriticalSection = (LARGE_INTEGER)FUObjectHashTables::Get();
  bVar2 = IsGarbageCollectingAndLockingUObjectHashTables();
  if ((bVar2) && (bVar2 = IsInGameThread(), bVar2)) {
    lpCriticalSection_00.QuadPart = 0;
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    lpCriticalSection_00 = lpCriticalSection;
  }
  bVar2 = FTaskGraphInterface::IsRunning();
  QueryPerformanceCounter(&LStack_60);
  TStack_48.DataPtr = (void **)0x0;
  pcStack_38 = UE::Core::Private::Function::
               TFunctionRefCaller<`FUObjectHashTables::ShrinkMaps'::__l2::<lambda_1>,void,int>::Call
  ;
  pLStack_30 = &LStack_60;
  TStack_48.ArrayNum = 0;
  LStack_60 = lpCriticalSection;
  ParallelForImpl::
  ParallelForInternal<TFunctionRef<void___cdecl(int)>,_ParallelFor_::__l2::<lambda_1>,std::nullptr_t>
            (L"ParallelFor Task",7,1,(TFunctionRef<void___cdecl(int)> *)&pcStack_38,<Stack_68,
             bVar2 ^ ForceSingleThread | Unbalanced,&TStack_48);
  if (4 < (byte)LogUObjectHash._0_1_) {
    QueryPerformanceCounter(&LStack_60);
    UE::Logging::Private::BasicLog<5>
              ((FStaticBasicLogRecord *)
               &`public:_void___cdecl_FUObjectHashTables::ShrinkMaps(void)___ptr64'::__l3::
                LOG_Static,(FLogCategoryBase *)&LogUObjectHash);
  }
  if ((FUObjectHashTables *)lpCriticalSection_00.QuadPart != (FUObjectHashTables *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
  }
  if (bVar5) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if (bVar4) {
    lVar1 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar1 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar3 = *(FWriteBuffer **)(lVar1 + 0x20);
    if ((int)pFVar3 - *(int *)&pFVar3->Cursor < 1) {
      pFVar3 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar3->Cursor = '\n';
    pFVar3->Cursor = pFVar3->Cursor + 1;
    pFVar3->Committed = pFVar3->Cursor;
  }
  FMemScope::~FMemScope(&FStack_50);
  FLLMScope::~FLLMScope(aFStack_58);
  return;
}

// StaticFindAllObjectsFastInternal @ 1422a7940

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

bool __cdecl
StaticFindAllObjectsFastInternal
          (TArray<UObject_*,TSizedDefaultAllocator<32>_> *param_1,UClass *param_2,FName param_3,
          EFindObjectFlags param_4,EObjectFlags param_5,EInternalObjectFlags param_6)

{
  FScriptContainerElement *pFVar1;
  code *pcVar2;
  bool bVar3;
  undefined1 uVar4;
  uint uVar5;
  int iVar6;
  FName *pFVar7;
  FThreadSafeStaticStat<FStat_STAT_FindObjectFast> FVar8;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  FUObjectHashTables *lpCriticalSection;
  longlong lVar9;
  TIterator *pTVar10;
  FUObjectItem *pFVar11;
  longlong lVar12;
  longlong *plVar13;
  TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *pTVar14;
  FName FVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  char cVar19;
  undefined1 auStackY_1e8 [32];
  UObjectBaseUtility *local_180;
  FName local_178;
  longlong *local_168;
  longlong *local_160;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_158;
  TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *pTStack_138;
  char local_130;
  char local_12f;
  char local_12e;
  FName local_128;
  FStatMessage local_120;
  FName local_110;
  FString local_108;
  TIterator local_f8;
  TIterator local_c8;
  FObjectSearchPath local_98;
  ulonglong local_38;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1e8;
  if (FThreadStats::bPrimaryEnable) {
    FVar8 = StatPtr_STAT_FindObjectFast;
    if (StatPtr_STAT_FindObjectFast == (FThreadSafeStaticStat<FStat_STAT_FindObjectFast>)0x0) {
      pFVar7 = FName::FName(&local_110,"STAT_FindObjectFast");
      FVar8 = (FThreadSafeStaticStat<FStat_STAT_FindObjectFast>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FindObjectFast,*pFVar7,
                         L"FindObjectFast","STATGROUP_ObjectVerbose","STATCAT_Advanced",
                         L"ObjectVerbose",false,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar15 = *(FName *)FVar8;
    local_178 = FVar15;
    if (((FVar15 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this = TlsGetValue(FThreadStats::TlsSlot);
      if (this == (FThreadStats *)0x0) {
        this_00 = FThreadStatsPool::Get();
        this = FThreadStatsPool::GetFromPool(this_00);
      }
      local_120.NameAndInfo.Number = FVar15.Number & 0xffffafff | 0xa000;
      local_120.StatData.Pad[0] = '\x01';
      local_120.StatData.Pad[1] = '\0';
      local_120.StatData.Pad[2] = '\0';
      local_120.StatData.Pad[3] = '\0';
      local_120.StatData.Pad[4] = '\0';
      local_120.StatData.Pad[5] = '\0';
      local_120.StatData.Pad[6] = '\0';
      local_120.StatData.Pad[7] = '\0';
      local_128 = FVar15;
      local_120.NameAndInfo.Index.Value = FVar15.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this,&local_120);
      FStatsTrace::Add(&local_128,1);
      if (this->ScopeCount == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  FObjectSearchPath::FObjectSearchPath(&local_98,param_3);
  FVar15 = local_98.Inner;
  uVar5 = GetTypeHash(local_98.Inner.ComparisonIndex.Value);
  uVar5 = FVar15.Number + uVar5;
  iVar17 = 0;
  iVar6 = 0;
  lpCriticalSection = FUObjectHashTables::Get();
  bVar3 = IsGarbageCollectingAndLockingUObjectHashTables();
  if ((bVar3) && (bVar3 = IsInGameThread(), bVar3)) {
    local_178 = (FName)0x0;
    FVar15 = (FName)(FUObjectHashTables *)0x0;
  }
  else {
    local_178 = (FName)lpCriticalSection;
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    FVar15 = (FName)lpCriticalSection;
  }
  iVar18 = iVar17;
  if ((int)(lpCriticalSection->Hash)._padding_ !=
      *(int *)((longlong)&(lpCriticalSection->Hash)._padding_ + 4)) {
    plVar13 = (longlong *)(lpCriticalSection->Hash)._padding_;
    if (plVar13 == (longlong *)0x0) {
      plVar13 = &(lpCriticalSection->Hash)._padding_;
    }
    iVar16 = *(int *)((longlong)plVar13 +
                     (ulonglong)((int)(lpCriticalSection->Hash)._padding_ - 1U & uVar5) * 4);
    if (iVar16 != -1) {
      lVar9 = (lpCriticalSection->Hash)._padding_;
      do {
        if (*(uint *)((longlong)iVar16 * 0x20 + lVar9) == uVar5) {
          iVar18 = iVar6;
          if (((iVar16 != -1) && (lVar9 = (longlong)iVar16 * 0x20 + lVar9, lVar9 != 0)) &&
             (plVar13 = (longlong *)(lVar9 + 8), plVar13 != (longlong *)0x0)) {
            pTVar14 = *(TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> **
                       )(lVar9 + 0x10);
            if ((pTVar14 ==
                 (TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)0x0)
               || (*plVar13 != 0)) {
              pTVar14 = (TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *
                        )0x0;
            }
            local_168 = plVar13;
            if (pTVar14 ==
                (TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)0x0) {
              TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::TIterator::
              TIterator(&local_c8,&FSetHashBucket::EmptyBucket);
              pTVar10 = &local_c8;
            }
            else {
              TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::TIterator::
              TIterator(&local_f8,pTVar14);
              pTVar10 = &local_f8;
            }
            local_160 = (longlong *)pTVar10->_padding_;
            TStack_158._padding_ = pTVar10->_padding_;
            TStack_158.Array = (TBitArray<FDefaultBitArrayAllocator> *)pTVar10->_padding_;
            TStack_158._16_8_ = pTVar10->_padding_;
            TStack_158._24_8_ = pTVar10->_padding_;
            pTStack_138 = pTVar10->Set;
            lVar9 = *(longlong *)(lVar9 + 0x10);
            if ((lVar9 == 0) || (lVar12 = lVar9, *plVar13 != 0)) {
              lVar12 = 0;
            }
            cVar19 = lVar12 != 0;
            if ((*plVar13 == 0) && (lVar9 == 0)) {
              local_12f = '\x01';
            }
            else {
              local_12f = '\0';
            }
            local_12e = '\0';
            local_130 = cVar19;
            goto LAB_1422a7c51;
          }
          break;
        }
        iVar16 = *(int *)((longlong)iVar16 * 0x20 + 0x18 + lVar9);
      } while (iVar16 != -1);
    }
  }
LAB_1422a7eb6:
  if (FVar15 != (FName)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)FVar15);
  }
  if (local_98.Outers.AllocatorInstance.SecondaryData != (ForElementType<FName>)0x0) {
    FMemory::Free((void *)local_98.Outers.AllocatorInstance.SecondaryData);
  }
  return iVar18 != 0;
LAB_1422a7c51:
  if (cVar19 == '\0') {
    bVar3 = local_12f == '\0';
  }
  else {
    bVar3 = TStack_158.CurrentBitIndex < (TStack_158.Array)->NumBits;
  }
  FVar15 = local_178;
  iVar18 = iVar17;
  if (!bVar3) goto LAB_1422a7eb6;
  if (cVar19 == '\0') {
    plVar13 = (longlong *)((ulonglong)(-(uint)(local_12e != '\0') & 8) + (longlong)local_168);
  }
  else {
    plVar13 = (longlong *)((longlong)TStack_158.CurrentBitIndex * 0x10 + *local_160);
  }
  local_180 = (UObjectBaseUtility *)*plVar13;
  FVar15.ComparisonIndex.Value = *(uint *)&local_180->field_0x18;
  FVar15.Number = *(uint *)&local_180->field_0x1c;
  if ((FVar15 == local_98.Inner) &&
     ((param_5 & *(EObjectFlags *)&local_180->field_0x8) == RF_NoFlags)) {
    if (param_2 != (UClass *)0x0) {
      if ((param_4 & ExactClass) == None) {
        iVar6 = (int)param_2->_padding_;
        if ((*(int *)(*(longlong *)&local_180->field_0x10 + 0x38) < iVar6) ||
           ((longlong *)
            *(undefined1 **)
             (*(longlong *)(*(longlong *)&local_180->field_0x10 + 0x30) + (longlong)iVar6 * 8) !=
            &param_2->_padding_)) {
          bVar3 = false;
        }
        else {
          bVar3 = true;
        }
      }
      else {
        bVar3 = *(UClass **)&local_180->field_0x10 == param_2;
      }
      if (!bVar3) goto LAB_1422a7e68;
    }
    pFVar11 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&local_180->field_0xc);
    if ((((param_6 | (Unreachable|AutoRTFMConstructionAborted)) &
         (EInternalObjectFlags)((ulonglong)(pFVar11->field0_0x0).FlagsAndRefCount >> 0x20)) ==
         Borrowed) &&
       (bVar3 = FObjectSearchPath::MatchOuterNames(&local_98,*(UObject **)&local_180->field_0x20),
       bVar3)) {
      pFVar11 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&local_180->field_0xc);
      if (((ulonglong)((pFVar11->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x1c & 1) != 0) {
        UObjectBaseUtility::GetFullName(local_180,&local_108,(UObject *)0x0,None);
        bVar3 = FDebug::CheckVerifyFailedImpl2
                          ("!Object->IsUnreachable()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectHash.cpp"
                           ,0x4c1,L"%s");
        if (local_108.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_108.Data.AllocatorInstance.Data);
        }
        if (bVar3) {
          pcVar2 = (code *)swi(3);
          uVar4 = (*pcVar2)();
          return (bool)uVar4;
        }
      }
      pFVar1 = (param_1->AllocatorInstance).Data;
      if (((pFVar1 <= (FScriptContainerElement *)&local_180) &&
          ((FScriptContainerElement *)&local_180 < pFVar1 + (longlong)param_1->ArrayMax * 8)) &&
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
      iVar6 = param_1->ArrayNum;
      if (iVar6 == param_1->ArrayMax) {
        iVar6 = UE::Core::Private::
                ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                          (0x808,&param_1->AllocatorInstance,&param_1->ArrayMax);
      }
      iVar17 = iVar17 + 1;
      param_1->ArrayNum = iVar6 + 1;
      *(UObjectBaseUtility **)((param_1->AllocatorInstance).Data + (longlong)iVar6 * 8) = local_180;
    }
  }
LAB_1422a7e68:
  if (cVar19 == '\0') {
    if ((local_12e == '\0') && (local_168[1] != 0)) {
      local_12f = '\0';
      local_12e = '\x01';
    }
    else {
      local_12f = '\x01';
      local_12e = '\x01';
    }
  }
  else {
    TStack_158.UnvisitedBitMask = TStack_158.UnvisitedBitMask & ~TStack_158._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_158);
    cVar19 = local_130;
  }
  goto LAB_1422a7c51;
}

// StaticFindFirstObjectFastInternal @ 1422a7f20

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl
StaticFindFirstObjectFastInternal
          (UClass *param_1,FName param_2,EFindObjectFlags param_3,EObjectFlags param_4,
          EInternalObjectFlags param_5)

{
  int iVar1;
  FName FVar2;
  void *pvVar3;
  code *pcVar4;
  longlong *plVar5;
  char cVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  FName *pFVar10;
  FThreadSafeStaticStat<FStat_STAT_FindObjectFast> FVar11;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  FUObjectHashTables *pFVar12;
  longlong lVar13;
  TIterator *pTVar14;
  FUObjectItem *pFVar15;
  UObject *pUVar16;
  undefined8 *puVar17;
  longlong *plVar18;
  FUObjectHashTables *lpCriticalSection;
  FUObjectHashTables *pFVar19;
  FUObjectHashTables *this_01;
  undefined1 auStackY_1d8 [32];
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_158;
  TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *pTStack_138;
  char local_130;
  char local_12f;
  char local_12e;
  FName local_128;
  FString local_120;
  FStatMessage local_110;
  FName local_100;
  TIterator local_f8;
  TIterator local_c8;
  FObjectSearchPath local_98;
  ulonglong local_38;
  FUObjectHashTables *pFVar20;
  
  local_38 = __security_cookie.value ^ (ulonglong)auStackY_1d8;
  pFVar20 = (FUObjectHashTables *)0x0;
  pFVar19 = (FUObjectHashTables *)0x0;
  local_120.Data.AllocatorInstance.Data = (FScriptContainerElement *)param_1;
  if (FThreadStats::bPrimaryEnable) {
    FVar11 = StatPtr_STAT_FindObjectFast;
    if (StatPtr_STAT_FindObjectFast == (FThreadSafeStaticStat<FStat_STAT_FindObjectFast>)0x0) {
      pFVar10 = FName::FName(&local_100,"STAT_FindObjectFast");
      FVar11 = (FThreadSafeStaticStat<FStat_STAT_FindObjectFast>)
               FThreadSafeStaticStatBase::DoSetup
                         ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FindObjectFast,*pFVar10,
                          L"FindObjectFast","STATGROUP_ObjectVerbose","STATCAT_Advanced",
                          L"ObjectVerbose",false,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar2 = *(FName *)FVar11;
    if (((FVar2 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this = TlsGetValue(FThreadStats::TlsSlot);
      if (this == (FThreadStats *)0x0) {
        this_00 = FThreadStatsPool::Get();
        this = FThreadStatsPool::GetFromPool(this_00);
      }
      local_110.NameAndInfo.Number = FVar2.Number & 0xffffafff | 0xa000;
      local_110.StatData.Pad[0] = '\x01';
      local_110.StatData.Pad[1] = '\0';
      local_110.StatData.Pad[2] = '\0';
      local_110.StatData.Pad[3] = '\0';
      local_110.StatData.Pad[4] = '\0';
      local_110.StatData.Pad[5] = '\0';
      local_110.StatData.Pad[6] = '\0';
      local_110.StatData.Pad[7] = '\0';
      local_128 = FVar2;
      local_110.NameAndInfo.Index.Value = FVar2.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this,&local_110);
      FStatsTrace::Add(&local_128,1);
      if (this->ScopeCount == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  FObjectSearchPath::FObjectSearchPath(&local_98,param_2);
  FVar2 = local_98.Inner;
  uVar9 = GetTypeHash(local_98.Inner.ComparisonIndex.Value);
  uVar9 = FVar2.Number + uVar9;
  pFVar12 = FUObjectHashTables::Get();
  bVar8 = IsGarbageCollectingAndLockingUObjectHashTables();
  if ((!bVar8) || (bVar8 = IsInGameThread(), lpCriticalSection = pFVar20, !bVar8)) {
    EnterCriticalSection((LPCRITICAL_SECTION)pFVar12);
    lpCriticalSection = pFVar12;
  }
  this_01 = pFVar20;
  if ((int)(pFVar12->Hash)._padding_ != *(int *)((longlong)&(pFVar12->Hash)._padding_ + 4)) {
    plVar18 = (longlong *)(pFVar12->Hash)._padding_;
    if (plVar18 == (longlong *)0x0) {
      plVar18 = &(pFVar12->Hash)._padding_;
    }
    iVar1 = *(int *)((longlong)plVar18 +
                    (ulonglong)((int)(pFVar12->Hash)._padding_ - 1U & uVar9) * 4);
    if (iVar1 != -1) {
      lVar13 = (pFVar12->Hash)._padding_;
      do {
        if (*(uint *)((longlong)iVar1 * 0x20 + lVar13) == uVar9) {
          this_01 = pFVar19;
          if (((iVar1 != -1) && (lVar13 = (longlong)iVar1 * 0x20 + lVar13, lVar13 != 0)) &&
             (plVar18 = (longlong *)(lVar13 + 8), plVar18 != (longlong *)0x0)) {
            if ((*(FUObjectHashTables **)(lVar13 + 0x10) == (FUObjectHashTables *)0x0) ||
               (pFVar19 = *(FUObjectHashTables **)(lVar13 + 0x10), *plVar18 != 0)) {
              pFVar19 = pFVar20;
            }
            if (pFVar19 == (FUObjectHashTables *)0x0) {
              TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::TIterator::
              TIterator(&local_c8,&FSetHashBucket::EmptyBucket);
              pTVar14 = &local_c8;
            }
            else {
              TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::TIterator::
              TIterator(&local_f8,
                        (TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *
                        )pFVar19);
              pTVar14 = &local_f8;
            }
            plVar5 = (longlong *)pTVar14->_padding_;
            TStack_158._padding_ = pTVar14->_padding_;
            pFVar19 = *(FUObjectHashTables **)(lVar13 + 0x10);
            TStack_158.Array = (TBitArray<FDefaultBitArrayAllocator> *)pTVar14->_padding_;
            TStack_158._16_8_ = pTVar14->_padding_;
            TStack_158._24_8_ = pTVar14->_padding_;
            pTStack_138 = pTVar14->Set;
            if ((pFVar19 == (FUObjectHashTables *)0x0) || (pFVar12 = pFVar19, *plVar18 != 0)) {
              pFVar12 = pFVar20;
            }
            local_130 = pFVar12 != (FUObjectHashTables *)0x0;
            if ((*plVar18 == 0) && (pFVar19 == (FUObjectHashTables *)0x0)) {
              local_12f = '\x01';
            }
            else {
              local_12f = '\0';
            }
            local_12e = '\0';
            do {
              cVar6 = local_130;
              iVar1 = TStack_158.CurrentBitIndex;
LAB_1422a8227:
              cVar7 = local_12e;
              if (cVar6 == '\0') {
                bVar8 = local_12f == '\0';
              }
              else {
                bVar8 = iVar1 < (TStack_158.Array)->NumBits;
              }
              this_01 = pFVar20;
              if (!bVar8) break;
              if (cVar6 == '\0') {
                puVar17 = (undefined8 *)
                          ((ulonglong)(-(uint)(local_12e != '\0') & 8) + (longlong)plVar18);
              }
              else {
                puVar17 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar5);
              }
              this_01 = (FUObjectHashTables *)*puVar17;
              if ((*(FName *)((this_01->CriticalSection).CriticalSection.Opaque3 + 1) ==
                   local_98.Inner) &&
                 ((param_4 & (this_01->CriticalSection).CriticalSection.Opaque2[0]) == RF_NoFlags))
              {
                if ((UClass *)local_120.Data.AllocatorInstance.Data != (UClass *)0x0) {
                  if ((param_3 & ExactClass) == None) {
                    pvVar3 = (this_01->CriticalSection).CriticalSection.Opaque3[0];
                    if ((*(int *)((longlong)pvVar3 + 0x38) <
                         *(int *)(local_120.Data.AllocatorInstance.Data + 0x38)) ||
                       (bVar8 = true,
                       *(FScriptContainerElement **)
                        (*(longlong *)((longlong)pvVar3 + 0x30) +
                        (longlong)*(int *)(local_120.Data.AllocatorInstance.Data + 0x38) * 8) !=
                       local_120.Data.AllocatorInstance.Data + 0x30)) {
                      bVar8 = false;
                    }
                  }
                  else {
                    bVar8 = (this_01->CriticalSection).CriticalSection.Opaque3[0] ==
                            (UClass *)local_120.Data.AllocatorInstance.Data;
                  }
                  if (!bVar8) goto LAB_1422a82f3;
                }
                pFVar15 = FUObjectArray::IndexToObject
                                    (&GUObjectArray,
                                     (this_01->CriticalSection).CriticalSection.Opaque2[1]);
                if ((((param_5 | (Unreachable|AutoRTFMConstructionAborted)) &
                     (EInternalObjectFlags)
                     ((ulonglong)(pFVar15->field0_0x0).FlagsAndRefCount >> 0x20)) == Borrowed) &&
                   (bVar8 = FObjectSearchPath::MatchOuterNames
                                      (&local_98,
                                       (this_01->CriticalSection).CriticalSection.Opaque3[2]), bVar8
                   )) {
                  pFVar15 = FUObjectArray::IndexToObject
                                      (&GUObjectArray,
                                       (this_01->CriticalSection).CriticalSection.Opaque2[1]);
                  if (((ulonglong)((pFVar15->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x1c & 1) != 0
                     ) {
                    UObjectBaseUtility::GetFullName
                              ((UObjectBaseUtility *)this_01,&local_120,(UObject *)0x0,None);
                    bVar8 = FDebug::CheckVerifyFailedImpl2
                                      ("!Object->IsUnreachable()",
                                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectHash.cpp"
                                       ,0x4ef,L"%s");
                    if ((UClass *)local_120.Data.AllocatorInstance.Data != (UClass *)0x0) {
                      FMemory::Free(local_120.Data.AllocatorInstance.Data);
                    }
                    if (bVar8) {
                      pcVar4 = (code *)swi(3);
                      pUVar16 = (UObject *)(*pcVar4)();
                      return pUVar16;
                    }
                  }
                  break;
                }
              }
LAB_1422a82f3:
              if (cVar6 == '\0') {
                if ((cVar7 == '\0') && (*(longlong *)(lVar13 + 0x10) != 0)) {
                  local_12f = '\0';
                  local_12e = '\x01';
                }
                else {
                  local_12f = '\x01';
                  local_12e = '\x01';
                }
                goto LAB_1422a8227;
              }
              TStack_158.UnvisitedBitMask =
                   TStack_158.UnvisitedBitMask & ~TStack_158._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_158);
            } while( true );
          }
          break;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + 0x18 + lVar13);
      } while (iVar1 != -1);
    }
  }
  if (lpCriticalSection != (FUObjectHashTables *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  if (local_98.Outers.AllocatorInstance.SecondaryData != (ForElementType<FName>)0x0) {
    FMemory::Free((void *)local_98.Outers.AllocatorInstance.SecondaryData);
  }
  return (UObject *)this_01;
}

// StaticFindObjectFastExplicit @ 1422a8440

UObject * __cdecl
StaticFindObjectFastExplicit
          (UClass *param_1,FName param_2,FString *param_3,EFindObjectFlags param_4,
          EObjectFlags param_5)

{
  FUObjectHashTables *pFVar1;
  UObject *pUVar2;
  
  GetTypeHash(param_2.ComparisonIndex.Value);
  pFVar1 = FUObjectHashTables::Get();
  pUVar2 = StaticFindObjectFastExplicitThreadSafe(pFVar1,param_1,param_2,param_3,param_4,param_5);
  return pUVar2;
}

// StaticFindObjectFastExplicitThreadSafe @ 1422a84b0

UObject * __cdecl
StaticFindObjectFastExplicitThreadSafe
          (FUObjectHashTables *param_1,UClass *param_2,FName param_3,FString *param_4,
          EFindObjectFlags param_5,EObjectFlags param_6)

{
  int iVar1;
  longlong lVar2;
  FName FVar3;
  code *pcVar4;
  longlong *plVar5;
  char cVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  longlong lVar11;
  TIterator *pTVar12;
  FUObjectItem *pFVar13;
  UObject *pUVar14;
  longlong lVar15;
  undefined8 *puVar16;
  longlong *plVar17;
  TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *pTVar18;
  FUObjectHashTables *lpCriticalSection;
  UObjectBaseUtility *this;
  uint uStackX_1c;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_e8;
  TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *pTStack_c8;
  char local_c0;
  char local_bf;
  char local_be;
  FString local_b8;
  FString local_a8;
  TIterator local_98;
  TIterator local_68;
  
  uVar9 = GetTypeHash(param_3.ComparisonIndex.Value);
  uStackX_1c = param_3.Number;
  bVar8 = IsGarbageCollectingAndLockingUObjectHashTables();
  if ((bVar8) && (bVar8 = IsInGameThread(), bVar8)) {
    lpCriticalSection = (FUObjectHashTables *)0x0;
  }
  else {
    EnterCriticalSection((LPCRITICAL_SECTION)param_1);
    lpCriticalSection = param_1;
  }
  if ((int)(param_1->Hash)._padding_ != *(int *)((longlong)&(param_1->Hash)._padding_ + 4)) {
    plVar17 = (longlong *)(param_1->Hash)._padding_;
    if (plVar17 == (longlong *)0x0) {
      plVar17 = &(param_1->Hash)._padding_;
    }
    iVar1 = *(int *)((longlong)plVar17 +
                    (ulonglong)((int)(param_1->Hash)._padding_ - 1U & uStackX_1c + uVar9) * 4);
    if (iVar1 != -1) {
      lVar11 = (param_1->Hash)._padding_;
      do {
        if (*(uint *)((longlong)iVar1 * 0x20 + lVar11) == uStackX_1c + uVar9) {
          if (((iVar1 != -1) && (lVar11 = (longlong)iVar1 * 0x20 + lVar11, lVar11 != 0)) &&
             (plVar17 = (longlong *)(lVar11 + 8), plVar17 != (longlong *)0x0)) {
            pTVar18 = *(TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> **
                       )(lVar11 + 0x10);
            if ((pTVar18 ==
                 (TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)0x0)
               || (*plVar17 != 0)) {
              pTVar18 = (TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *
                        )0x0;
            }
            if (pTVar18 ==
                (TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)0x0) {
              TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::TIterator::
              TIterator(&local_68,&FSetHashBucket::EmptyBucket);
              pTVar12 = &local_68;
            }
            else {
              TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::TIterator::
              TIterator(&local_98,pTVar18);
              pTVar12 = &local_98;
            }
            plVar5 = (longlong *)pTVar12->_padding_;
            TStack_e8._padding_ = pTVar12->_padding_;
            TStack_e8.Array = (TBitArray<FDefaultBitArrayAllocator> *)pTVar12->_padding_;
            TStack_e8._16_8_ = pTVar12->_padding_;
            TStack_e8._24_8_ = pTVar12->_padding_;
            pTStack_c8 = pTVar12->Set;
            lVar2 = *(longlong *)(lVar11 + 0x10);
            if ((lVar2 == 0) || (lVar15 = lVar2, *plVar17 != 0)) {
              lVar15 = 0;
            }
            local_c0 = lVar15 != 0;
            if ((*plVar17 == 0) && (lVar2 == 0)) {
              local_bf = '\x01';
            }
            else {
              local_bf = '\0';
            }
            local_be = '\0';
            do {
              cVar6 = local_c0;
              iVar1 = TStack_e8.CurrentBitIndex;
LAB_1422a8680:
              cVar7 = local_be;
              if (cVar6 == '\0') {
                bVar8 = local_bf == '\0';
              }
              else {
                bVar8 = iVar1 < (TStack_e8.Array)->NumBits;
              }
              if (!bVar8) break;
              if (cVar6 == '\0') {
                puVar16 = (undefined8 *)
                          ((ulonglong)(-(uint)(local_be != '\0') & 8) + (longlong)plVar17);
              }
              else {
                puVar16 = (undefined8 *)((longlong)iVar1 * 0x10 + *plVar5);
              }
              this = (UObjectBaseUtility *)*puVar16;
              FVar3.ComparisonIndex.Value = *(uint *)&this->field_0x18;
              FVar3.Number = *(uint *)&this->field_0x1c;
              if (((FVar3 == param_3) &&
                  ((param_6 & *(EObjectFlags *)&this->field_0x8) == RF_NoFlags)) &&
                 (pFVar13 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this->field_0xc),
                 ((pFVar13->field0_0x0).FlagsAndRefCount >> 0x20 & 0x10020000U) == 0)) {
                if (param_2 != (UClass *)0x0) {
                  if ((param_5 & ExactClass) == None) {
                    iVar10 = (int)param_2->_padding_;
                    if ((*(int *)(*(longlong *)&this->field_0x10 + 0x38) < iVar10) ||
                       ((longlong *)
                        *(undefined1 **)
                         (*(longlong *)(*(longlong *)&this->field_0x10 + 0x30) +
                         (longlong)iVar10 * 8) != &param_2->_padding_)) {
                      bVar8 = false;
                    }
                    else {
                      bVar8 = true;
                    }
                  }
                  else {
                    bVar8 = *(UClass **)&this->field_0x10 == param_2;
                  }
                  if (!bVar8) goto LAB_1422a8796;
                }
                UObjectBaseUtility::GetPathName(this,&local_b8,(UObject *)0x0);
                iVar10 = (param_4->Data).ArrayNum;
                if (local_b8.Data.ArrayNum == iVar10) {
                  if (1 < local_b8.Data.ArrayNum) {
                    iVar10 = FGenericPlatformStricmp::Stricmp
                                       ((wchar_t *)local_b8.Data.AllocatorInstance.Data,
                                        (wchar_t *)(param_4->Data).AllocatorInstance.Data);
                    bVar8 = iVar10 == 0;
                    goto LAB_1422a8780;
                  }
                }
                else {
                  bVar8 = local_b8.Data.ArrayNum + iVar10 == 1;
LAB_1422a8780:
                  if (!bVar8) {
                    if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                      FMemory::Free(local_b8.Data.AllocatorInstance.Data);
                    }
                    goto LAB_1422a8796;
                  }
                }
                pFVar13 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)&this->field_0xc);
                if (((ulonglong)((pFVar13->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x1c & 1) != 0)
                {
                  UObjectBaseUtility::GetFullName(this,&local_a8,(UObject *)0x0,None);
                  bVar8 = FDebug::CheckVerifyFailedImpl2
                                    ("!Object->IsUnreachable()",
                                     "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectHash.cpp"
                                     ,0x389,L"%s");
                  if (local_a8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                    FMemory::Free(local_a8.Data.AllocatorInstance.Data);
                  }
                  if (bVar8) {
                    pcVar4 = (code *)swi(3);
                    pUVar14 = (UObject *)(*pcVar4)();
                    return pUVar14;
                  }
                }
                if (local_b8.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_b8.Data.AllocatorInstance.Data);
                }
                goto LAB_1422a857a;
              }
LAB_1422a8796:
              if (cVar6 == '\0') {
                if ((cVar7 == '\0') && (*(longlong *)(lVar11 + 0x10) != 0)) {
                  local_bf = '\0';
                  local_be = '\x01';
                }
                else {
                  local_bf = '\x01';
                  local_be = '\x01';
                }
                goto LAB_1422a8680;
              }
              TStack_e8.UnvisitedBitMask = TStack_e8.UnvisitedBitMask & ~TStack_e8._padding_._4_4_;
              TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_e8);
            } while( true );
          }
          break;
        }
        iVar1 = *(int *)((longlong)iVar1 * 0x20 + 0x18 + lVar11);
      } while (iVar1 != -1);
    }
  }
  this = (UObjectBaseUtility *)0x0;
LAB_1422a857a:
  if (lpCriticalSection != (FUObjectHashTables *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  return (UObject *)this;
}

// StaticFindObjectFastInternal @ 1422a88a0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl
StaticFindObjectFastInternal
          (UClass *param_1,UObject *param_2,FName param_3,EFindObjectFlags param_4,
          EObjectFlags param_5,EInternalObjectFlags param_6)

{
  FName FVar1;
  FName *pFVar2;
  FThreadSafeStaticStat<FStat_STAT_FindObjectFast> FVar3;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  FUObjectHashTables *pFVar4;
  UObject *pUVar5;
  FName local_38;
  FStatMessage local_30;
  
  if (FThreadStats::bPrimaryEnable) {
    FVar3 = StatPtr_STAT_FindObjectFast;
    if (StatPtr_STAT_FindObjectFast == (FThreadSafeStaticStat<FStat_STAT_FindObjectFast>)0x0) {
      pFVar2 = FName::FName(&local_38,"STAT_FindObjectFast");
      FVar3 = (FThreadSafeStaticStat<FStat_STAT_FindObjectFast>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FindObjectFast,*pFVar2,
                         L"FindObjectFast","STATGROUP_ObjectVerbose","STATCAT_Advanced",
                         L"ObjectVerbose",false,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar3;
    local_38 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this = TlsGetValue(FThreadStats::TlsSlot);
      if (this == (FThreadStats *)0x0) {
        this_00 = FThreadStatsPool::Get();
        this = FThreadStatsPool::GetFromPool(this_00);
      }
      local_30.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_30.StatData.Pad[0] = '\x01';
      local_30.StatData.Pad[1] = '\0';
      local_30.StatData.Pad[2] = '\0';
      local_30.StatData.Pad[3] = '\0';
      local_30.StatData.Pad[4] = '\0';
      local_30.StatData.Pad[5] = '\0';
      local_30.StatData.Pad[6] = '\0';
      local_30.StatData.Pad[7] = '\0';
      local_38 = FVar1;
      local_30.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this,&local_30);
      FStatsTrace::Add(&local_38,1);
      if (this->ScopeCount == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  pFVar4 = FUObjectHashTables::Get();
  pUVar5 = StaticFindObjectFastInternalThreadSafe
                     (pFVar4,param_1,param_2,param_3,param_4,param_5,param_6);
  return pUVar5;
}

// StaticFindObjectFastInternal @ 1422a8a80

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl
StaticFindObjectFastInternal
          (FRemoteObjectId param_1,EObjectFlags param_2,EInternalObjectFlags param_3)

{
  FName FVar1;
  FName *pFVar2;
  FThreadSafeStaticStat<FStat_STAT_FindObjectFast> FVar3;
  FThreadStats *this;
  FThreadStatsPool *this_00;
  FName local_res20;
  FStatMessage local_18;
  
  if (FThreadStats::bPrimaryEnable) {
    FVar3 = StatPtr_STAT_FindObjectFast;
    if (StatPtr_STAT_FindObjectFast == (FThreadSafeStaticStat<FStat_STAT_FindObjectFast>)0x0) {
      pFVar2 = FName::FName(&local_res20,"STAT_FindObjectFast");
      FVar3 = (FThreadSafeStaticStat<FStat_STAT_FindObjectFast>)
              FThreadSafeStaticStatBase::DoSetup
                        ((FThreadSafeStaticStatBase *)&StatPtr_STAT_FindObjectFast,*pFVar2,
                         L"FindObjectFast","STATGROUP_ObjectVerbose","STATCAT_Advanced",
                         L"ObjectVerbose",false,true,ST_int64,false,false,MCR_Invalid);
    }
    FVar1 = *(FName *)FVar3;
    local_res20 = FVar1;
    if (((FVar1 != (FName)0x0) && (FThreadStats::bPrimaryDisableForever == false)) &&
       (FThreadStats::TlsSlot != 0xffffffff)) {
      this = TlsGetValue(FThreadStats::TlsSlot);
      if (this == (FThreadStats *)0x0) {
        this_00 = FThreadStatsPool::Get();
        this = FThreadStatsPool::GetFromPool(this_00);
      }
      local_18.NameAndInfo.Number = FVar1.Number & 0xffffafff | 0xa000;
      local_18.StatData.Pad[0] = '\x01';
      local_18.StatData.Pad[1] = '\0';
      local_18.StatData.Pad[2] = '\0';
      local_18.StatData.Pad[3] = '\0';
      local_18.StatData.Pad[4] = '\0';
      local_18.StatData.Pad[5] = '\0';
      local_18.StatData.Pad[6] = '\0';
      local_18.StatData.Pad[7] = '\0';
      local_res20 = FVar1;
      local_18.NameAndInfo.Index.Value = FVar1.ComparisonIndex.Value.Value;
      FThreadStats::AddStatMessage(this,&local_18);
      FStatsTrace::Add(&local_res20,1);
      if (this->ScopeCount == 0) {
        FThreadStats::Flush(this,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this,false,false);
      }
    }
  }
  FUObjectHashTables::Get();
  UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogUObjectHash);
  return (UObject *)0x0;
}

// StaticFindObjectFastInternalThreadSafe @ 1422a8c30

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl
StaticFindObjectFastInternalThreadSafe
          (FUObjectHashTables *param_1,UClass *param_2,UObject *param_3,FName param_4,
          EFindObjectFlags param_5,EObjectFlags param_6,EInternalObjectFlags param_7)

{
  UObjectBase *pUVar1;
  UClass *pUVar2;
  code *pcVar3;
  char cVar4;
  FName FVar5;
  UObjectBase *pUVar6;
  bool bVar7;
  uint uVar8;
  UObject *pUVar9;
  FUObjectItem *pFVar10;
  FString *pFVar11;
  TIterator *this;
  longlong lVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *pTVar15;
  FUObjectHashTables *pFVar16;
  ulonglong uVar17;
  uint uVar18;
  UObjectBase *pUVar19;
  UObjectBase *this_00;
  longlong lVar20;
  longlong *plVar21;
  int iVar22;
  int iVar23;
  char cVar24;
  uint uStackX_24;
  undefined1 auStack_208 [32];
  FScriptContainerElement *local_1e8;
  int local_1e0;
  undefined1 local_1d8;
  UObjectBase *local_1d0;
  UClass *local_1c8;
  FUObjectHashTables *local_1c0;
  longlong *local_1b8;
  longlong *local_1b0;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_1a8;
  TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *pTStack_188;
  char local_180;
  char local_17f;
  char local_17e;
  FString local_178;
  FString local_168;
  FString local_158;
  FString local_148;
  ulonglong local_138;
  UObject *local_130;
  FString local_128;
  FString local_118;
  TIterator local_108;
  TIterator local_d8;
  FObjectSearchPath local_a8;
  ulonglong local_48;
  
  this = &local_108;
  local_48 = __security_cookie.value ^ (ulonglong)auStack_208;
  pUVar19 = (UObjectBase *)0x0;
  local_1d0 = (UObjectBase *)0x0;
  local_1c8 = param_2;
  local_1c0 = param_1;
  local_130 = param_3;
  if (param_3 == (UObject *)0x0) {
    FObjectSearchPath::FObjectSearchPath(&local_a8,param_4);
    FVar5 = local_a8.Inner;
    uVar8 = GetTypeHash(local_a8.Inner.ComparisonIndex.Value);
    uVar8 = FVar5.Number + uVar8;
    bVar7 = IsGarbageCollectingAndLockingUObjectHashTables();
    if ((bVar7) && (bVar7 = IsInGameThread(), bVar7)) {
      local_1c0 = (FUObjectHashTables *)0x0;
      pFVar16 = (FUObjectHashTables *)0x0;
    }
    else {
      EnterCriticalSection((LPCRITICAL_SECTION)param_1);
      pFVar16 = param_1;
    }
    if ((int)(param_1->Hash)._padding_ != *(int *)((longlong)&(param_1->Hash)._padding_ + 4)) {
      plVar21 = (longlong *)(param_1->Hash)._padding_;
      if (plVar21 == (longlong *)0x0) {
        plVar21 = &(param_1->Hash)._padding_;
      }
      iVar23 = *(int *)((longlong)plVar21 +
                       (ulonglong)((int)(param_1->Hash)._padding_ - 1U & uVar8) * 4);
      if (iVar23 != -1) {
        lVar20 = (param_1->Hash)._padding_;
        do {
          if (*(uint *)((longlong)iVar23 * 0x20 + lVar20) == uVar8) {
            pUVar19 = (UObjectBase *)0x0;
            if (((iVar23 != -1) &&
                (lVar20 = (longlong)iVar23 * 0x20 + lVar20, pUVar19 = local_1d0, lVar20 != 0)) &&
               (plVar21 = (longlong *)(lVar20 + 8), plVar21 != (longlong *)0x0)) {
              pTVar15 = *(TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>
                          **)(lVar20 + 0x10);
              if ((pTVar15 ==
                   (TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)0x0)
                 || (*plVar21 != 0)) {
                pTVar15 = (TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>
                           *)0x0;
              }
              local_1b8 = plVar21;
              if (pTVar15 ==
                  (TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)0x0)
              {
                TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::TIterator
                ::TIterator(&local_d8,&FSetHashBucket::EmptyBucket);
                this = &local_d8;
              }
              else {
                TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::TIterator
                ::TIterator(this,pTVar15);
              }
              local_1b0 = (longlong *)this->_padding_;
              TStack_1a8._padding_ = this->_padding_;
              TStack_1a8.Array = (TBitArray<FDefaultBitArrayAllocator> *)this->_padding_;
              TStack_1a8._16_8_ = this->_padding_;
              TStack_1a8._24_8_ = this->_padding_;
              pTStack_188 = this->Set;
              lVar20 = *(longlong *)(lVar20 + 0x10);
              if ((lVar20 == 0) || (lVar12 = lVar20, *plVar21 != 0)) {
                lVar12 = 0;
              }
              cVar24 = lVar12 != 0;
              if ((*plVar21 == 0) && (lVar20 == 0)) {
                local_17f = '\x01';
              }
              else {
                local_17f = '\0';
              }
              local_17e = '\0';
              local_180 = cVar24;
              goto LAB_1422a9280;
            }
            break;
          }
          iVar23 = *(int *)((longlong)iVar23 * 0x20 + 0x18 + lVar20);
        } while (iVar23 != -1);
      }
    }
LAB_1422a9520:
    if (pFVar16 != (FUObjectHashTables *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar16);
    }
    if (local_a8.Outers.AllocatorInstance.SecondaryData != (ForElementType<FName>)0x0) {
      FMemory::Free((void *)local_a8.Outers.AllocatorInstance.SecondaryData);
    }
  }
  else {
    uVar8 = GetTypeHash(param_4.ComparisonIndex.Value);
    uStackX_24 = param_4.Number;
    uVar8 = (int)((longlong)param_3 >> 6) + uStackX_24 + uVar8;
    uVar17 = (ulonglong)uVar8;
    local_138 = uVar17;
    bVar7 = IsGarbageCollectingAndLockingUObjectHashTables();
    if ((bVar7) && (bVar7 = IsInGameThread(), bVar7)) {
      local_1c0 = (FUObjectHashTables *)0x0;
      pFVar16 = (FUObjectHashTables *)0x0;
    }
    else {
      EnterCriticalSection((LPCRITICAL_SECTION)param_1);
      pFVar16 = param_1;
    }
    local_1d8 = (undefined1)param_5 & ExactClass;
    iVar23 = *(int *)&(param_1->HashOuter).field_0x48;
    if (iVar23 != 0) {
      puVar14 = *(undefined1 **)&(param_1->HashOuter).field_0x40;
      if (puVar14 == (undefined1 *)0x0) {
        puVar14 = &(param_1->HashOuter).field_0x38;
      }
      iVar23 = *(int *)(puVar14 + ((longlong)iVar23 - 1U & (longlong)(int)uVar8) * 4);
      iVar22 = iVar23;
      if (iVar23 != -1) {
        do {
          iVar23 = *(int *)(*(longlong *)&param_1->HashOuter + 8 + (longlong)iVar22 * 0x10);
          if (*(uint *)(*(longlong *)&param_1->HashOuter + (longlong)iVar22 * 0x10) == uVar8) break;
          iVar22 = iVar23;
        } while (iVar23 != -1);
      }
      if (iVar22 != -1) {
        do {
          uVar8 = *(uint *)(*(longlong *)&param_1->HashOuter + 4 + (longlong)iVar22 * 0x10);
          if (((int)uVar8 < 0) &&
             (bVar7 = FDebug::CheckVerifyFailedImpl2
                                ("Index >= 0",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                 ,0x443,L""), bVar7)) {
            pcVar3 = (code *)swi(3);
            pUVar9 = (UObject *)(*pcVar3)();
            return pUVar9;
          }
          if ((int)uVar8 < GUObjectArray.ObjObjects.NumElements) {
            uVar18 = uVar8 >> 0x10;
            if ((int)uVar8 < 0) {
              local_1e8 = (FScriptContainerElement *)CONCAT44(local_1e8._4_4_,uVar8);
              bVar7 = FDebug::CheckVerifyFailedImpl2
                                ("IsValidIndex(Index)",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                 ,0x362,L"IsValidIndex(%d)");
              if (bVar7) {
                pcVar3 = (code *)swi(3);
                pUVar9 = (UObject *)(*pcVar3)();
                return pUVar9;
              }
            }
            if ((uint)GUObjectArray.ObjObjects.NumChunks <= uVar18) {
              local_1e0 = GUObjectArray.ObjObjects.NumChunks;
              local_1e8 = (FScriptContainerElement *)CONCAT44(local_1e8._4_4_,uVar18);
              bVar7 = FDebug::CheckVerifyFailedImpl2
                                ("ChunkIndex < (uint32)NumChunks",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                 ,0x363,L"ChunkIndex (%d) < NumChunks (%d)");
              if (bVar7) {
                pcVar3 = (code *)swi(3);
                pUVar9 = (UObject *)(*pcVar3)();
                return pUVar9;
              }
            }
            if (GUObjectArray.ObjObjects.MaxElements <= (int)uVar8) {
              local_1e0 = GUObjectArray.ObjObjects.MaxElements;
              local_1e8 = (FScriptContainerElement *)CONCAT44(local_1e8._4_4_,uVar8);
              bVar7 = FDebug::CheckVerifyFailedImpl2
                                ("Index < MaxElements",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                 ,0x364,L"Index (%d) < MaxElements (%d)");
              if (bVar7) {
                pcVar3 = (code *)swi(3);
                pUVar9 = (UObject *)(*pcVar3)();
                return pUVar9;
              }
            }
            pFVar10 = GUObjectArray.ObjObjects.Objects[uVar18];
            if ((pFVar10 == (FUObjectItem *)0x0) &&
               (bVar7 = FDebug::CheckVerifyFailedImpl2
                                  ("Chunk",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                   ,0x366,L""), bVar7)) {
              pcVar3 = (code *)swi(3);
              pUVar9 = (UObject *)(*pcVar3)();
              return pUVar9;
            }
            pFVar10 = pFVar10 + (uVar8 & 0xffff);
            uVar17 = local_138;
            pUVar19 = local_1d0;
            if ((pFVar10 == (FUObjectItem *)0x0) &&
               (bVar7 = FDebug::CheckVerifyFailedImpl2
                                  ("ItemPtr",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\UObjectArray.h"
                                   ,0x381,L""), uVar17 = local_138, pUVar19 = local_1d0, bVar7)) {
              pcVar3 = (code *)swi(3);
              pUVar9 = (UObject *)(*pcVar3)();
              return pUVar9;
            }
          }
          else {
            pFVar10 = (FUObjectItem *)0x0;
          }
          pUVar1 = (pFVar10->field1_0x8).Object;
          pUVar6 = local_1d0;
          if ((((pUVar1->NamePrivate).Name == param_4) &&
              ((param_6 & pUVar1->ObjectFlags) == RF_NoFlags)) &&
             ((pUVar1->OuterPrivate).ObjectPtr.field0_0x0.DebugPtr == local_130)) {
            if (local_1c8 != (UClass *)0x0) {
              if ((param_5 & ExactClass) == None) {
                pUVar2 = (pUVar1->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
                iVar22 = (int)local_1c8->_padding_;
                if (((int)pUVar2->_padding_ < iVar22) ||
                   ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar22 * 8) !=
                    &local_1c8->_padding_)) {
                  bVar7 = false;
                }
                else {
                  bVar7 = true;
                }
              }
              else {
                bVar7 = (pUVar1->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr == local_1c8;
              }
              if (!bVar7) goto LAB_1422a90b7;
            }
            pFVar10 = FUObjectArray::IndexToObject(&GUObjectArray,pUVar1->InternalIndex);
            pUVar6 = local_1d0;
            if (((param_7 | (Unreachable|AutoRTFMConstructionAborted)) &
                (EInternalObjectFlags)((ulonglong)(pFVar10->field0_0x0).FlagsAndRefCount >> 0x20))
                == Borrowed) {
              pFVar10 = FUObjectArray::IndexToObject(&GUObjectArray,pUVar1->InternalIndex);
              this_00 = pUVar19;
              if (((ulonglong)((pFVar10->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x1c & 1) != 0) {
                pFVar11 = UObjectBaseUtility::GetFullName
                                    ((UObjectBaseUtility *)pUVar1,&local_128,(UObject *)0x0,None);
                if ((pFVar11->Data).ArrayNum == 0) {
                  local_1e8 = (FScriptContainerElement *)0x15060d16c;
                }
                else {
                  local_1e8 = (pFVar11->Data).AllocatorInstance.Data;
                }
                bVar7 = FDebug::CheckVerifyFailedImpl2
                                  ("!Object->IsUnreachable()",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectHash.cpp"
                                   ,0x42f,L"%s");
                if (local_128.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_128.Data.AllocatorInstance.Data);
                }
                this_00 = local_1d0;
                if (bVar7) {
                  pcVar3 = (code *)swi(3);
                  pUVar9 = (UObject *)(*pcVar3)();
                  return pUVar9;
                }
              }
              pUVar19 = pUVar1;
              pUVar6 = pUVar1;
              if ((this_00 != (UObjectBase *)0x0) &&
                 (pUVar19 = this_00, pUVar6 = local_1d0, 2 < (byte)LogUObjectHash._0_1_)) {
                if ((pUVar1->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr == (UClass *)0x0) {
                  FString::FString(&local_168,L"None");
                }
                else {
                  UObjectBaseUtility::GetFullName
                            ((UObjectBaseUtility *)pUVar1,&local_168,(UObject *)0x0,None);
                }
                if ((this_00->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr == (UClass *)0x0) {
                  FString::FString(&local_178,L"None");
                }
                else {
                  UObjectBaseUtility::GetFullName
                            ((UObjectBaseUtility *)this_00,&local_178,(UObject *)0x0,None);
                }
                UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogUObjectHash);
                if (local_178.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_178.Data.AllocatorInstance.Data);
                }
                pUVar6 = local_1d0;
                if (local_168.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
                  FMemory::Free(local_168.Data.AllocatorInstance.Data);
                  pUVar6 = local_1d0;
                }
              }
            }
          }
LAB_1422a90b7:
          local_1d0 = pUVar6;
          pFVar16 = local_1c0;
          if (iVar23 == -1) break;
          iVar22 = iVar23;
          while (iVar23 = *(int *)(*(longlong *)&param_1->HashOuter + 8 + (longlong)iVar22 * 0x10),
                *(int *)(*(longlong *)&param_1->HashOuter + (longlong)iVar22 * 0x10) != (int)uVar17)
          {
            iVar22 = iVar23;
            if (iVar23 == -1) goto LAB_1422a90f9;
          }
        } while( true );
      }
    }
LAB_1422a90f9:
    if (pFVar16 != (FUObjectHashTables *)0x0) {
      LeaveCriticalSection((LPCRITICAL_SECTION)pFVar16);
    }
  }
  if ((pUVar19 != (UObjectBase *)0x0) && (UE::GC::GIsIncrementalReachabilityPending != false)) {
    UE::GC::MarkAsReachable((UObject *)pUVar19);
  }
  return (UObject *)pUVar19;
LAB_1422a9280:
  cVar4 = local_17e;
  if (cVar24 == '\0') {
    bVar7 = local_17f == '\0';
  }
  else {
    bVar7 = TStack_1a8.CurrentBitIndex < (TStack_1a8.Array)->NumBits;
  }
  pFVar16 = local_1c0;
  pUVar19 = local_1d0;
  if (!bVar7) goto LAB_1422a9520;
  if (cVar24 == '\0') {
    puVar13 = (undefined8 *)((ulonglong)(-(uint)(local_17e != '\0') & 8) + (longlong)plVar21);
  }
  else {
    puVar13 = (undefined8 *)((longlong)TStack_1a8.CurrentBitIndex * 0x10 + *local_1b0);
  }
  pUVar19 = (UObjectBase *)*puVar13;
  pUVar1 = local_1d0;
  if ((((pUVar19->NamePrivate).Name == local_a8.Inner) &&
      ((param_6 & pUVar19->ObjectFlags) == RF_NoFlags)) &&
     ((pUVar19->OuterPrivate).ObjectPtr.field0_0x0.DebugPtr == (UObject *)0x0)) {
    if (param_2 != (UClass *)0x0) {
      if ((param_5 & ExactClass) == None) {
        pUVar2 = (pUVar19->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr;
        iVar23 = (int)param_2->_padding_;
        if (((int)pUVar2->_padding_ < iVar23) ||
           ((longlong *)*(undefined1 **)(pUVar2->_padding_ + (longlong)iVar23 * 8) !=
            &param_2->_padding_)) {
          bVar7 = false;
        }
        else {
          bVar7 = true;
        }
      }
      else {
        bVar7 = (pUVar19->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr == param_2;
      }
      if (!bVar7) goto LAB_1422a94c6;
    }
    pFVar10 = FUObjectArray::IndexToObject(&GUObjectArray,pUVar19->InternalIndex);
    pUVar1 = local_1d0;
    if ((((param_7 | (Unreachable|AutoRTFMConstructionAborted)) &
         (EInternalObjectFlags)((ulonglong)(pFVar10->field0_0x0).FlagsAndRefCount >> 0x20)) ==
         Borrowed) &&
       (bVar7 = FObjectSearchPath::MatchOuterNames
                          (&local_a8,(pUVar19->OuterPrivate).ObjectPtr.field0_0x0.DebugPtr),
       pUVar1 = local_1d0, bVar7)) {
      pFVar10 = FUObjectArray::IndexToObject(&GUObjectArray,pUVar19->InternalIndex);
      if (((ulonglong)((pFVar10->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x1c & 1) != 0) {
        pFVar11 = UObjectBaseUtility::GetFullName
                            ((UObjectBaseUtility *)pUVar19,&local_118,(UObject *)0x0,None);
        if ((pFVar11->Data).ArrayNum == 0) {
          local_1e8 = (FScriptContainerElement *)0x15060d16c;
        }
        else {
          local_1e8 = (pFVar11->Data).AllocatorInstance.Data;
        }
        bVar7 = FDebug::CheckVerifyFailedImpl2
                          ("!Object->IsUnreachable()",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectHash.cpp"
                           ,0x469,L"%s");
        if (local_118.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_118.Data.AllocatorInstance.Data);
        }
        if (bVar7) {
          pcVar3 = (code *)swi(3);
          pUVar9 = (UObject *)(*pcVar3)();
          return pUVar9;
        }
      }
      pUVar6 = local_1d0;
      param_2 = local_1c8;
      pUVar1 = pUVar19;
      if ((local_1d0 != (UObjectBase *)0x0) && (pUVar1 = local_1d0, 2 < (byte)LogUObjectHash._0_1_))
      {
        if ((pUVar19->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr == (UClass *)0x0) {
          FString::FString(&local_148,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)pUVar19,&local_148,(UObject *)0x0,None);
        }
        if ((pUVar6->ClassPrivate).ObjectPtr.field0_0x0.DebugPtr == (UClass *)0x0) {
          FString::FString(&local_158,L"None");
        }
        else {
          UObjectBaseUtility::GetFullName
                    ((UObjectBaseUtility *)pUVar6,&local_158,(UObject *)0x0,None);
        }
        UE::Logging::Private::BasicLog<3>(&LOG_Static,(FLogCategoryBase *)&LogUObjectHash);
        if (local_158.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_158.Data.AllocatorInstance.Data);
        }
        param_2 = local_1c8;
        pUVar1 = local_1d0;
        if (local_148.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_148.Data.AllocatorInstance.Data);
          param_2 = local_1c8;
          pUVar1 = local_1d0;
        }
      }
    }
  }
LAB_1422a94c6:
  local_1d0 = pUVar1;
  if (cVar24 == '\0') {
    if ((cVar4 == '\0') && (plVar21[1] != 0)) {
      local_17f = '\0';
      local_17e = '\x01';
    }
    else {
      local_17f = '\x01';
      local_17e = '\x01';
    }
  }
  else {
    TStack_1a8.UnvisitedBitMask = TStack_1a8.UnvisitedBitMask & ~TStack_1a8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_1a8);
    plVar21 = local_1b8;
    cVar24 = local_180;
  }
  goto LAB_1422a9280;
}

// StaticFindObjectFastInternalThreadSafe @ 1422a95b0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */

UObject * __cdecl
StaticFindObjectFastInternalThreadSafe
          (FUObjectHashTables *param_1,FRemoteObjectId param_2,EObjectFlags param_3,
          EInternalObjectFlags param_4)

{
  UE::Logging::Private::BasicFatalLog(&LOG_Static,(FLogCategoryBase *)&LogUObjectHash);
  return (UObject *)0x0;
}

// StaticFindObjectInPackageInternal @ 1422a95e0

/* WARNING: Enum "EInternalObjectFlags": Some values do not have unique names */

UObject * __cdecl
StaticFindObjectInPackageInternal
          (FUObjectHashTables *param_1,UClass *param_2,UPackage *param_3,FName param_4,
          EFindObjectFlags param_5,EObjectFlags param_6,EInternalObjectFlags param_7)

{
  int iVar1;
  void *pvVar2;
  UPackage *this;
  code *pcVar3;
  longlong *plVar4;
  int iVar5;
  char cVar6;
  char cVar7;
  FSetHashBucket *pFVar8;
  TIterator *pTVar9;
  FUObjectItem *pFVar10;
  UObject *pUVar11;
  void *pvVar12;
  undefined8 *puVar13;
  TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *pTVar14;
  bool bVar15;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_c8;
  TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *pTStack_a8;
  char local_a0;
  char local_9f;
  char local_9e;
  FString local_98;
  TIterator local_88;
  TIterator local_58;
  
  pFVar8 = TMapBase<UPackage_*,FSetHashBucket,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPackage_*,FSetHashBucket,0>_>
           ::Find((TMapBase<UPackage_*,FSetHashBucket,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPackage_*,FSetHashBucket,0>_>
                   *)&param_1->PackageToObjectListMap,param_3);
  if (pFVar8 == (FSetHashBucket *)0x0) {
    return (UObject *)0x0;
  }
  pTVar14 = pFVar8->Elements[1];
  if ((pTVar14 == (TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)0x0)
     || (pFVar8->Elements[0] != (void *)0x0)) {
    pTVar14 = (TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)0x0;
  }
  if (pTVar14 == (TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)0x0) {
    TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::TIterator::TIterator
              (&local_58,&FSetHashBucket::EmptyBucket);
    pTVar9 = &local_58;
  }
  else {
    TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::TIterator::TIterator
              (&local_88,pTVar14);
    pTVar9 = &local_88;
  }
  plVar4 = (longlong *)pTVar9->_padding_;
  TStack_c8._padding_ = pTVar9->_padding_;
  TStack_c8.Array = (TBitArray<FDefaultBitArrayAllocator> *)pTVar9->_padding_;
  TStack_c8._16_8_ = pTVar9->_padding_;
  TStack_c8._24_8_ = pTVar9->_padding_;
  pTStack_a8 = pTVar9->Set;
  pvVar2 = pFVar8->Elements[1];
  if ((pvVar2 == (void *)0x0) || (pvVar12 = pvVar2, pFVar8->Elements[0] != (void *)0x0)) {
    pvVar12 = (void *)0x0;
  }
  local_a0 = pvVar12 != (void *)0x0;
  if ((pFVar8->Elements[0] == (void *)0x0) && (pvVar2 == (void *)0x0)) {
    local_9f = '\x01';
  }
  else {
    local_9f = '\0';
  }
  local_9e = '\0';
  do {
    cVar6 = local_a0;
    iVar5 = TStack_c8.CurrentBitIndex;
LAB_1422a96e0:
    cVar7 = local_9e;
    if (cVar6 == '\0') {
      bVar15 = local_9f == '\0';
    }
    else {
      bVar15 = iVar5 < (TStack_c8.Array)->NumBits;
    }
    if (!bVar15) {
      return (UObject *)0x0;
    }
    if (cVar6 == '\0') {
      puVar13 = (undefined8 *)
                ((longlong)pFVar8->Elements + (ulonglong)(-(uint)(local_9e != '\0') & 8));
    }
    else {
      puVar13 = (undefined8 *)((longlong)iVar5 * 0x10 + *plVar4);
    }
    this = (UPackage *)*puVar13;
    if ((((FName)this->_padding_ == param_4) &&
        ((param_6 & (EObjectFlags)this->_padding_) == RF_NoFlags)) && (this != param_3)) {
      if (param_2 != (UClass *)0x0) {
        if ((param_5 & ExactClass) == None) {
          iVar1 = (int)param_2->_padding_;
          if ((*(int *)(this->_padding_ + 0x38) < iVar1) ||
             ((longlong *)
              *(undefined1 **)(*(longlong *)(this->_padding_ + 0x30) + (longlong)iVar1 * 8) !=
              &param_2->_padding_)) {
            bVar15 = false;
          }
          else {
            bVar15 = true;
          }
        }
        else {
          bVar15 = (UClass *)this->_padding_ == param_2;
        }
        if (!bVar15) goto LAB_1422a9794;
      }
      pFVar10 = FUObjectArray::IndexToObject
                          (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
      if (((param_7 | (Unreachable|AutoRTFMConstructionAborted)) &
          (EInternalObjectFlags)((ulonglong)(pFVar10->field0_0x0).FlagsAndRefCount >> 0x20)) ==
          Borrowed) {
        pFVar10 = FUObjectArray::IndexToObject
                            (&GUObjectArray,*(int *)((longlong)&this->_padding_ + 4));
        if (((ulonglong)((pFVar10->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x1c & 1) != 0) {
          UObjectBaseUtility::GetFullName((UObjectBaseUtility *)this,&local_98,(UObject *)0x0,None);
          bVar15 = FDebug::CheckVerifyFailedImpl2
                             ("!Object->IsUnreachable()",
                              "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectHash.cpp"
                              ,0x407,L"%s");
          if (local_98.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
            FMemory::Free(local_98.Data.AllocatorInstance.Data);
          }
          if (bVar15) {
            pcVar3 = (code *)swi(3);
            pUVar11 = (UObject *)(*pcVar3)();
            return pUVar11;
          }
        }
        return (UObject *)this;
      }
    }
LAB_1422a9794:
    if (cVar6 == '\0') {
      if ((cVar7 == '\0') && (pFVar8->Elements[1] != (void *)0x0)) {
        local_9f = '\0';
        local_9e = '\x01';
      }
      else {
        local_9f = '\x01';
        local_9e = '\x01';
      }
      goto LAB_1422a96e0;
    }
    TStack_c8.UnvisitedBitMask = TStack_c8.UnvisitedBitMask & ~TStack_c8._padding_._4_4_;
    TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_c8);
  } while( true );
}

// ToString @ 1422a98c0

wchar_t * __cdecl ToString(EObjectMigrationRecvType param_1)

{
  if (param_1 == Borrowed) {
    return L"Borrowed";
  }
  if (param_1 != ReturnedLoan) {
    if (param_1 != AssignedOwnership) {
      return L"Invalid";
    }
    return L"AssignedOwnership";
  }
  return L"ReturnedLoan";
}

// ToString @ 1422a9900

wchar_t * __cdecl ToString(EObjectMigrationSendType param_1)

{
  if (param_1 == Loan) {
    return L"Loan";
  }
  if (param_1 == ReturnBorrowed) {
    return L"ReturnBorrowed";
  }
  if (param_1 == ReassignBorrowed) {
    return L"ReassignBorrowed";
  }
  if (param_1 != ReassignOwnership) {
    return L"Invalid";
  }
  return L"ReassignOwnership";
}

// UnMarkAllObjects @ 1422a9c80

void __cdecl UnMarkAllObjects(EObjectMark param_1)

{
  FUObjectAnnotationSparseNoSync<FObjectMark> *this;
  TSet<TTuple<UObjectBase_const_*,FObjectMark>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FObjectMark,0>,FDefaultSetAllocator>
  *this_00;
  ulonglong uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  bool bVar5;
  FTlsAutoCleanup *pFVar6;
  longlong lVar7;
  EObjectMark EVar8;
  FTlsAutoCleanup FVar9;
  undefined1 local_res8 [8];
  int local_res10;
  code *local_b8;
  undefined1 *local_b0;
  FTlsAutoCleanup *local_a8;
  FTlsAutoCleanup *local_a0;
  TSet<TTuple<UObjectBase_const_*,FObjectMark>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FObjectMark,0>,FDefaultSetAllocator>
  *local_98;
  int iStack_90;
  uint uStack_8c;
  FTlsAutoCleanup local_88;
  undefined4 uStack_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  TSet<TTuple<UObjectBase_const_*,FObjectMark>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FObjectMark,0>,FDefaultSetAllocator>
  *local_68;
  TConstSetBitIterator<FDefaultBitArrayAllocator> TStack_60;
  
  local_b0 = local_res8;
  local_b8 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FThreadMarkAnnotation>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar6 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_b8,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FThreadMarkAnnotation>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  this = (FUObjectAnnotationSparseNoSync<FObjectMark> *)(pFVar6 + 2);
  if (param_1 == OBJECTMARK_ALLMARKS) {
    FUObjectAnnotationSparseNoSync<FObjectMark>::RemoveAllAnnotations(this);
    return;
  }
  iStack_90 = 0;
  local_78 = 0;
  this_00 = (TSet<TTuple<UObjectBase_const_*,FObjectMark>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FObjectMark,0>,FDefaultSetAllocator>
             *)(pFVar6 + 3);
  iVar2 = *(int *)(pFVar6 + 8);
  local_88 = (FTlsAutoCleanup)(pFVar6 + 5);
  uStack_8c = 1;
  iStack_7c = 0;
  if (iVar2 != 0) {
    FVar9 = pFVar6[7];
    if (pFVar6[7] == (FTlsAutoCleanup)0x0) {
      FVar9 = local_88;
    }
    uVar3 = *(uint *)FVar9;
    while (uVar3 == 0) {
      lVar7 = (longlong)iStack_90;
      local_78 = local_78 + 0x20;
      iStack_90 = iStack_90 + 1;
      iStack_7c = iVar2;
      if ((int)(iVar2 + -1 + (iVar2 + -1 >> 0x1f & 0x1fU)) >> 5 < iStack_90) goto LAB_1422a9d7e;
      uVar3 = ((uint *)((longlong)FVar9 + 4))[lVar7];
    }
    uStack_8c = -uVar3 & uVar3;
    uVar1 = (ulonglong)uStack_8c * 2 + 1;
    lVar7 = 0x3f;
    if (uVar1 != 0) {
      for (; uVar1 >> lVar7 == 0; lVar7 = lVar7 + -1) {
      }
    }
    local_res10 = (int)lVar7;
    iStack_7c = local_res10 + -1 + local_78;
    if (iVar2 < iStack_7c) {
      iStack_7c = iVar2;
    }
  }
LAB_1422a9d7e:
  uStack_80 = 0xffffffff;
  TStack_60._padding_ = CONCAT44(uStack_8c,iStack_90);
  TStack_60.UnvisitedBitMask = 0xffffffff;
  TStack_60._28_4_ = iStack_7c;
  TStack_60.BaseBitIndex = local_78;
  local_98 = this_00;
  iStack_74 = iStack_7c;
  local_68 = this_00;
  TStack_60.Array = (TBitArray<FDefaultBitArrayAllocator> *)local_88;
  TStack_60.CurrentBitIndex = iStack_7c;
  if (iStack_7c < iVar2) {
    do {
      EVar8 = *(EObjectMark *)
               (*(longlong *)&local_68->Elements + 8 + (longlong)TStack_60.CurrentBitIndex * 0x18);
      if ((param_1 & EVar8) != OBJECTMARK_NOMARKS) {
        EVar8 = ~param_1 & EVar8;
        FVar9 = *(FTlsAutoCleanup *)
                 (*(longlong *)&local_68->Elements + (longlong)TStack_60.CurrentBitIndex * 0x18);
        if ((FVar9 == (FTlsAutoCleanup)0x0) &&
           (bVar5 = FDebug::CheckVerifyFailedImpl2
                              ("Object",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectMarks.cpp"
                               ,0x3e,L""), bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        pFVar6[0xd] = FVar9;
        *(EObjectMark *)(pFVar6 + 0xe) = EVar8;
        if (EVar8 == OBJECTMARK_NOMARKS) {
          FUObjectAnnotationSparseNoSync<FObjectMark>::RemoveAnnotation(this,(UObjectBase *)FVar9);
        }
        else {
          if (*(int *)(pFVar6 + 4) == *(int *)&pFVar6[9].field_0x4) {
            FUObjectArray::AddUObjectDeleteListener(&GUObjectArray,(FUObjectDeleteListener *)this);
          }
          local_a8 = pFVar6 + 0xd;
          local_a0 = pFVar6 + 0xe;
          TSet<TTuple<UObjectBase_const_*,FObjectMark>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FObjectMark,0>,FDefaultSetAllocator>
          ::Emplace<TPairInitializer<UObjectBase_const_*_const_&,FObjectMark_const_&>_>
                    (this_00,(TPairInitializer<UObjectBase_const_*_const_&,FObjectMark_const_&> *)
                             &stack0x00000018,(bool *)&local_a8);
        }
      }
      TStack_60.UnvisitedBitMask = TStack_60.UnvisitedBitMask & ~TStack_60._padding_._4_4_;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit(&TStack_60);
    } while (TStack_60.CurrentBitIndex < (int)*(uint *)((longlong)TStack_60.Array + 0x18));
  }
  return;
}

// UnMarkObject @ 1422a9ee0

void __cdecl UnMarkObject(UObjectBase *param_1,EObjectMark param_2)

{
  FUObjectAnnotationSparseNoSync<FObjectMark> *this;
  code *pcVar1;
  bool bVar2;
  FTlsAutoCleanup *pFVar3;
  undefined1 local_res10 [8];
  EObjectMark local_res18;
  code *local_48;
  undefined1 *local_40;
  FTlsAutoCleanup *local_38;
  FTlsAutoCleanup *local_30;
  
  local_40 = local_res10;
  local_48 = UE::Core::Private::Function::
             TFunctionRefCaller<`TThreadSingleton<FThreadMarkAnnotation>::Get'::__l2::<lambda_1>,FTlsAutoCleanup_*>
             ::Call;
  pFVar3 = FThreadSingletonInitializer::Get
                     ((TFunctionRef<FTlsAutoCleanup_*___cdecl(void)> *)&local_48,
                      &`private:_static_unsigned_int&___ptr64___cdecl_TThreadSingleton<FThreadMarkAnnotation>::GetTlsSlot(void)'
                       ::__l2::TlsSlot);
  this = (FUObjectAnnotationSparseNoSync<FObjectMark> *)(pFVar3 + 2);
  FUObjectAnnotationSparseNoSync<FObjectMark>::GetAnnotation(this,(UObjectBase *)&local_res18);
  if ((param_2 & local_res18) != OBJECTMARK_NOMARKS) {
    if ((param_1 == (UObjectBase *)0x0) &&
       (bVar2 = FDebug::CheckVerifyFailedImpl2
                          ("Object",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectMarks.cpp"
                           ,0x3e,L""), bVar2)) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
    pFVar3[0xd] = (FTlsAutoCleanup)param_1;
    *(EObjectMark *)(pFVar3 + 0xe) = ~param_2 & local_res18;
    if ((~param_2 & local_res18) == OBJECTMARK_NOMARKS) {
      FUObjectAnnotationSparseNoSync<FObjectMark>::RemoveAnnotation(this,param_1);
    }
    else {
      if (*(int *)(pFVar3 + 4) == *(int *)&pFVar3[9].field_0x4) {
        FUObjectArray::AddUObjectDeleteListener(&GUObjectArray,(FUObjectDeleteListener *)this);
      }
      local_38 = pFVar3 + 0xd;
      local_30 = pFVar3 + 0xe;
      TSet<TTuple<UObjectBase_const_*,FObjectMark>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FObjectMark,0>,FDefaultSetAllocator>
      ::Emplace<TPairInitializer<UObjectBase_const_*_const_&,FObjectMark_const_&>_>
                ((TSet<TTuple<UObjectBase_const_*,FObjectMark>,TDefaultMapHashableKeyFuncs<UObjectBase_const_*,FObjectMark,0>,FDefaultSetAllocator>
                  *)(pFVar3 + 3),
                 (TPairInitializer<UObjectBase_const_*_const_&,FObjectMark_const_&> *)
                 &stack0x00000020,(bool *)&local_38);
    }
  }
  return;
}

// UnhashObject @ 1422aa280

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UnhashObject(UObjectBase *param_1)

{
  TSet<TTuple<int,FSetHashBucket>,TDefaultMapHashableKeyFuncs<int,FSetHashBucket,0>,FDefaultSetAllocator>
  *this;
  int *piVar1;
  TSet<TTuple<UObjectBase_*,FSetHashBucket>,TDefaultMapHashableKeyFuncs<UObjectBase_*,FSetHashBucket,0>,FDefaultSetAllocator>
  *this_00;
  FName FVar2;
  uchar auVar3 [8];
  longlong lVar4;
  LARGE_INTEGER LVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  FName *pFVar11;
  FThreadSafeStaticStat<FStat_STAT_Hash_UnhashObject> FVar12;
  FName FVar13;
  UClass *pUVar14;
  TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator> *this_01;
  FUObjectItem *pFVar15;
  FThreadStats *this_02;
  FThreadStatsPool *this_03;
  FWriteBuffer *pFVar16;
  int iVar17;
  int iVar18;
  undefined1 *puVar19;
  longlong *plVar20;
  longlong lVar21;
  FName lpCriticalSection;
  FName FVar22;
  FColor_u_0 FVar23;
  int iVar24;
  uchar (*pauVar25) [8];
  TSet<TTuple<UClass_*,FSetHashBucket>,TDefaultMapHashableKeyFuncs<UClass_*,FSetHashBucket,0>,FDefaultSetAllocator>
  *this_04;
  bool bVar26;
  undefined1 auStackY_128 [32];
  uint local_c0 [2];
  FName local_b8;
  FColor_u_0 local_b0 [2];
  FStatMessage local_a8;
  uchar local_98 [8];
  FLLMScope local_90 [2];
  undefined1 local_88 [12];
  uint local_7c;
  uint local_70;
  int local_6c;
  FName local_58;
  FMemScope local_48;
  LARGE_INTEGER local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_128;
  FVar2 = (param_1->NamePrivate).Name;
  lpCriticalSection.ComparisonIndex.Value = 0;
  lpCriticalSection.Number = 0;
  local_b8.ComparisonIndex.Value = 0;
  local_b8.Number = 0;
  if (FVar2 == (FName)0x0) {
    return;
  }
  local_a8.StatData.Pad = (uchar  [8])FVar2;
  local_98 = (uchar  [8])param_1;
  FLLMScope::FLLMScope(local_90,LLMTagDeclaration_UObjectHash.UniqueName,false,None,Default,true);
  local_b8 = LLMTagDeclaration_UObjectHash.UniqueName;
  FMemScope::FMemScope(&local_48,&local_b8,true);
  bVar26 = -1 < MetadataChannel->Enabled;
  if (bVar26) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataStackClearScopeFields>
              ((TLogScope<0> *)&local_40.s);
    *(undefined8 *)(local_38 + 0x28) = *(undefined8 *)(local_38 + 0x20);
  }
  FVar12 = StatPtr_STAT_Hash_UnhashObject;
  if (StatPtr_STAT_Hash_UnhashObject == (FThreadSafeStaticStat<FStat_STAT_Hash_UnhashObject>)0x0) {
    pFVar11 = FName::FName((FName *)&local_40.s,"STAT_Hash_UnhashObject");
    FVar12 = (FThreadSafeStaticStat<FStat_STAT_Hash_UnhashObject>)
             FThreadSafeStaticStatBase::DoSetup
                       ((FThreadSafeStaticStatBase *)&StatPtr_STAT_Hash_UnhashObject,*pFVar11,
                        L"UnhashObject","STATGROUP_UObjectHash","STATCAT_Advanced",L"UObject Hash",
                        false,true,ST_int64,true,false,MCR_Invalid);
  }
  FVar22 = *(FName *)FVar12;
  local_58.ComparisonIndex.Value = 0;
  local_58.Number = 0;
  bVar8 = false;
  bVar9 = false;
  if ((FVar22.ComparisonIndex.Value.Value == 0) && (FVar22.Number == 0)) {
LAB_1422aa466:
    bVar7 = bVar9;
    bVar6 = bVar8;
    bVar8 = false;
    FVar22 = local_58;
  }
  else {
    if (GCycleStatsShouldEmitNamedEvents == 0) {
      bVar6 = false;
      bVar7 = false;
    }
    else {
      local_b0[0].Bits = 0;
      FGenericPlatformMisc::BeginNamedEvent
                ((FColor *)&local_b0[0]._s_0,(char *)*(FName *)((longlong)FVar12 + 0x10));
      bVar8 = false;
      bVar9 = true;
      if (CpuChannel->Enabled < 0) {
        bVar6 = false;
        bVar7 = true;
      }
      else {
        local_b8 = FVar22;
        FCpuProfilerTrace::OutputBeginDynamicEventWithId
                  (&local_b8,(wchar_t *)*(FName *)((longlong)FVar12 + 8),
                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Private\\UObject\\UObjectHash.cpp"
                   ,0x7e2);
        bVar6 = true;
        bVar7 = true;
        bVar8 = true;
        bVar9 = true;
      }
    }
    if (FThreadStats::bPrimaryEnable == false) goto LAB_1422aa466;
    local_b8 = FVar22;
    local_58 = FVar22;
    FThreadStats::AddMessage(FVar22,CycleScopeStart);
    bVar8 = true;
  }
  FVar13 = (FName)FUObjectHashTables::Get();
  local_b8 = FVar13;
  bVar9 = IsGarbageCollectingAndLockingUObjectHashTables();
  if ((!bVar9) || (bVar9 = IsInGameThread(), !bVar9)) {
    EnterCriticalSection((LPCRITICAL_SECTION)FVar13);
    lpCriticalSection = FVar13;
  }
  local_c0[0] = GetTypeHash(FVar2.ComparisonIndex.Value);
  local_c0[0] = local_a8.StatData.Pad._4_4_ + local_c0[0];
  if (*(int *)((longlong)FVar13 + 0x30) != *(int *)((longlong)FVar13 + 0x5c)) {
    plVar20 = *(longlong **)((longlong)FVar13 + 0x68);
    if (*(longlong **)((longlong)FVar13 + 0x68) == (longlong *)0x0) {
      plVar20 = (longlong *)((longlong)FVar13 + 0x60);
    }
    iVar24 = *(int *)((longlong)plVar20 +
                     (ulonglong)(*(int *)((longlong)FVar13 + 0x70) - 1U & local_c0[0]) * 4);
    if (iVar24 != -1) {
      lVar21 = ((TBucketMap<int,FSetHashBucket> *)((longlong)FVar13 + 0x28))->_padding_;
      do {
        if (*(uint *)((longlong)iVar24 * 0x20 + lVar21) == local_c0[0]) {
          if (((iVar24 != -1) &&
              (lVar21 = (longlong)iVar24 * 0x20 +
                        ((TBucketMap<int,FSetHashBucket> *)((longlong)local_b8 + 0x28))->_padding_,
              lVar21 != 0)) &&
             (pauVar25 = (uchar (*) [8])(lVar21 + 8), pauVar25 != (uchar (*) [8])0x0)) {
            auVar3 = *(uchar (*) [8])(lVar21 + 0x10);
            local_40.QuadPart = lVar21 + 0x10;
            if ((auVar3 == (uchar  [8])0x0) || (*pauVar25 != (uchar  [8])0x0)) {
              if (local_98 == auVar3) {
                *(undefined8 *)local_40 = 0;
                FVar23.Bits = 1;
              }
              else {
                FVar23.Bits = 0;
                if (local_98 == *pauVar25) {
                  local_b0[0].Bits = 1;
                  *pauVar25 = auVar3;
                  *(undefined8 *)local_40 = 0;
                  FVar23.Bits = 1;
                }
              }
            }
            else {
              local_b0[0].Bits =
                   TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::Remove
                             ((TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>
                               *)auVar3,(UObjectBase *)local_98);
              FVar23.Bits = local_b0[0].Bits;
              if (*(int *)((longlong)auVar3 + 8) - *(int *)((longlong)auVar3 + 0x34) < 3) {
                TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::TIterator
                ::TIterator((TIterator *)local_88,
                            (TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>
                             *)auVar3);
                *pauVar25 = *(uchar (*) [8])
                             (*(longlong *)local_88._0_8_ + (longlong)local_6c * 0x10);
                local_70 = local_70 & ~local_7c;
                TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                          ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_88 + 8));
                *(undefined8 *)local_40 =
                     *(undefined8 *)(*(longlong *)local_88._0_8_ + (longlong)local_6c * 0x10);
                *(int *)((longlong)auVar3 + 0x48) = 0;
                if (*(ForElementType<FSetElementId> *)((longlong)auVar3 + 0x40) !=
                    (ForElementType<FSetElementId>)0x0) {
                  FMemory::Free((void *)*(ForElementType<FSetElementId> *)((longlong)auVar3 + 0x40))
                  ;
                }
                TSparseArray<TSparseSetElement<UObjectBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ::
                ~TSparseArray<TSparseSetElement<UObjectBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                          ((TSparseArray<TSparseSetElement<UObjectBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                            *)auVar3);
                operator_delete((void *)auVar3,0x50);
                FVar23 = local_b0[0];
              }
            }
            FVar13 = local_b8;
            lVar21 = *(longlong *)(lVar21 + 0x10);
            if ((lVar21 == 0) || (*pauVar25 != (uchar  [8])0x0)) {
              iVar24 = (uint)(*pauVar25 != (uchar  [8])0x0) + (uint)(lVar21 != 0);
            }
            else {
              iVar24 = *(int *)(lVar21 + 8) - *(int *)(lVar21 + 0x34);
            }
            if (iVar24 == 0) {
              this = (TSet<TTuple<int,FSetHashBucket>,TDefaultMapHashableKeyFuncs<int,FSetHashBucket,0>,FDefaultSetAllocator>
                      *)((longlong)local_b8 + 0x28);
              if (*(int *)((longlong)local_b8 + 0x78) != 0) {
                UE::Logging::Private::BasicFatalLog
                          ((FStaticBasicLogRecord *)
                           &`public:_void___cdecl_TBucketMap<int,FSetHashBucket>::Remove(int_const&___ptr64)___ptr64'
                            ::__l3::LOG_Static,(FLogCategoryBase *)&LogObj);
              }
              if (*(int *)((longlong)FVar13 + 0x30) != *(int *)((longlong)FVar13 + 0x5c)) {
                TSet<TTuple<int,FSetHashBucket>,TDefaultMapHashableKeyFuncs<int,FSetHashBucket,0>,FDefaultSetAllocator>
                ::RemoveImpl<int>(this,local_c0[0],(int *)local_c0);
              }
            }
            param_1 = (UObjectBase *)local_98;
            if (FVar23.Bits == 1) goto LAB_1422aa6ab;
          }
          break;
        }
        iVar24 = *(int *)((longlong)iVar24 * 0x20 + 0x18 + lVar21);
      } while (iVar24 != -1);
    }
  }
  OnHashFailure((UObjectBaseUtility *)param_1,L"Hash",L"remove miscount");
LAB_1422aa6ab:
  lVar21 = *(longlong *)((longlong)param_1 + 0x20);
  FVar13 = local_b8;
  if (lVar21 != 0) {
    uVar10 = GetTypeHash(FVar2.ComparisonIndex.Value);
    FVar2 = local_b8;
    iVar24 = (int)(lVar21 >> 6) + uVar10 + local_a8.StatData.Pad._4_4_;
    if (*(int *)((longlong)local_b8 + 200) != 0) {
      puVar19 = *(undefined1 **)((longlong)local_b8 + 0xc0);
      if (*(undefined1 **)((longlong)local_b8 + 0xc0) == (undefined1 *)0x0) {
        puVar19 = (undefined1 *)((longlong)local_b8 + 0xb8);
      }
      if (*(int *)(puVar19 +
                  ((longlong)*(int *)((longlong)local_b8 + 200) - 1U & (longlong)iVar24) * 4) != -1)
      {
        lVar21 = *(longlong *)((longlong)local_b8 + 0x80);
        iVar18 = *(int *)(puVar19 +
                         ((longlong)*(int *)((longlong)local_b8 + 200) - 1U & (longlong)iVar24) * 4)
        ;
        do {
          iVar17 = *(int *)(lVar21 + 8 + (longlong)iVar18 * 0x10);
          if (*(int *)(lVar21 + (longlong)iVar18 * 0x10) == iVar24) goto LAB_1422aa800;
          iVar18 = iVar17;
        } while (iVar17 != -1);
      }
    }
LAB_1422aa72c:
    OnHashFailure((UObjectBaseUtility *)param_1,L"HashOuter",L"remove miscount");
    goto LAB_1422aa742;
  }
  goto LAB_1422aaa15;
LAB_1422aa800:
  while (*(int *)(lVar21 + 4 + (longlong)iVar18 * 0x10) != *(int *)((longlong)param_1 + 0xc)) {
    do {
      iVar18 = iVar17;
      if (iVar18 == -1) goto LAB_1422aa72c;
      iVar17 = *(int *)(lVar21 + 8 + (longlong)iVar18 * 0x10);
    } while (*(int *)(lVar21 + (longlong)iVar18 * 0x10) != iVar24);
  }
  TSet<TTuple<int,unsigned_int>,TDefaultMapHashableKeyFuncs<int,unsigned_int,1>,FDefaultSetAllocator>
  ::RemoveByIndex((TSet<TTuple<int,unsigned_int>,TDefaultMapHashableKeyFuncs<int,unsigned_int,1>,FDefaultSetAllocator>
                   *)((longlong)local_b8 + 0x80),iVar18);
LAB_1422aa742:
  local_a8.StatData.Pad = *(uchar (*) [8])((longlong)param_1 + 0x20);
  this_00 = (TSet<TTuple<UObjectBase_*,FSetHashBucket>,TDefaultMapHashableKeyFuncs<UObjectBase_*,FSetHashBucket,0>,FDefaultSetAllocator>
             *)((longlong)FVar2 + 0xd0);
  local_98 = local_a8.StatData.Pad;
  if (*(int *)((longlong)FVar2 + 0x120) != 0) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`public:_struct_FSetHashBucket&___ptr64___cdecl_TBucketMap<UObjectBase*___ptr64,FSetHashBucket>::FindOrAdd(UObjectBase*___ptr64&&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogObj);
  }
  uVar10 = ((uint)((ulonglong)local_a8.StatData.Pad >> 0x14) & 0xffff ^
           (uint)((ulonglong)local_a8.StatData.Pad >> 4)) * -0x7a143595;
  uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
  uVar10 = uVar10 >> 0x10 ^ uVar10;
  if (*(int *)((longlong)FVar2 + 0xd8) != *(int *)((longlong)FVar2 + 0x104)) {
    plVar20 = *(longlong **)((longlong)FVar2 + 0x110);
    if (*(longlong **)((longlong)FVar2 + 0x110) == (longlong *)0x0) {
      plVar20 = (longlong *)((longlong)FVar2 + 0x108);
    }
    iVar24 = *(int *)((longlong)plVar20 +
                     (ulonglong)(*(int *)((longlong)FVar2 + 0x118) - 1U & uVar10) * 4);
    if (iVar24 != -1) {
      lVar21 = *(longlong *)&this_00->Elements;
      do {
        if (*(uchar (*) [8])((longlong)iVar24 * 0x20 + lVar21) == local_a8.StatData.Pad) {
          if ((iVar24 != -1) && (lVar21 = (longlong)iVar24 * 0x20 + lVar21, lVar21 != 0))
          goto LAB_1422aa893;
          break;
        }
        iVar24 = *(int *)((longlong)iVar24 * 0x20 + 0x18 + lVar21);
      } while (iVar24 != -1);
    }
  }
  local_40.QuadPart = (LONGLONG)&local_a8;
  TSet<TTuple<UObjectBase_*,FSetHashBucket>,TDefaultMapHashableKeyFuncs<UObjectBase_*,FSetHashBucket,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UObjectBase_*_const_&>_>
            (this_00,(uint)local_c0,(TKeyInitializer<UObjectBase_*_const_&> *)(ulonglong)uVar10,
             (bool *)&local_40);
  lVar21 = (longlong)(int)local_c0[0] * 0x20 + *(longlong *)&this_00->Elements;
LAB_1422aa893:
  auVar3 = *(uchar (*) [8])(lVar21 + 0x10);
  if ((auVar3 == (uchar  [8])0x0) || (*(longlong *)(lVar21 + 8) != 0)) {
    if ((uchar  [8])param_1 == auVar3) {
      *(undefined8 *)(lVar21 + 0x10) = 0;
    }
    else {
      if ((uchar  [8])param_1 != *(uchar (*) [8])(lVar21 + 8)) goto LAB_1422aa93f;
      *(uchar (*) [8])(lVar21 + 8) = auVar3;
      *(undefined8 *)(lVar21 + 0x10) = 0;
    }
  }
  else {
    local_c0[0] = TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::Remove
                            ((TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>
                              *)auVar3,param_1);
    if (*(int *)((longlong)auVar3 + 8) - *(int *)((longlong)auVar3 + 0x34) < 3) {
      TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::TIterator::
      TIterator((TIterator *)local_88,
                (TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)auVar3)
      ;
      *(undefined8 *)(lVar21 + 8) =
           *(undefined8 *)(*(longlong *)local_88._0_8_ + (longlong)local_6c * 0x10);
      local_70 = local_70 & ~local_7c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_88 + 8));
      *(undefined8 *)(lVar21 + 0x10) =
           *(undefined8 *)(*(longlong *)local_88._0_8_ + (longlong)local_6c * 0x10);
      *(int *)((longlong)auVar3 + 0x48) = 0;
      if (*(ForElementType<FSetElementId> *)((longlong)auVar3 + 0x40) !=
          (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)*(ForElementType<FSetElementId> *)((longlong)auVar3 + 0x40));
      }
      TSparseArray<TSparseSetElement<UObjectBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<UObjectBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<UObjectBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)auVar3);
      operator_delete((void *)auVar3,0x50);
    }
    if (local_c0[0] != 1) {
LAB_1422aa93f:
      OnHashFailure((UObjectBaseUtility *)param_1,L"OuterMap",L"remove miscount");
    }
  }
  FVar13 = local_b8;
  lVar4 = *(longlong *)(lVar21 + 0x10);
  if ((lVar4 == 0) || (*(longlong *)(lVar21 + 8) != 0)) {
    iVar24 = (uint)(*(longlong *)(lVar21 + 8) != 0) + (uint)(lVar4 != 0);
  }
  else {
    iVar24 = *(int *)(lVar4 + 8) - *(int *)(lVar4 + 0x34);
  }
  if (iVar24 == 0) {
    if (*(int *)((longlong)local_b8 + 0x120) != 0) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`public:_void___cdecl_TBucketMap<UObjectBase*___ptr64,FSetHashBucket>::Remove(UObjectBase*___ptr64_const&___ptr64)___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogObj);
    }
    local_40.s.LowPart._0_1_ = local_98[0];
    local_40.s.LowPart._1_1_ = local_98[1];
    local_40.s.LowPart._2_1_ = local_98[2];
    local_40.s.LowPart._3_1_ = local_98[3];
    local_40.s.HighPart._0_1_ = local_98[4];
    local_40.s.HighPart._1_1_ = local_98[5];
    local_40.s.HighPart._2_1_ = local_98[6];
    local_40.s.HighPart._3_1_ = local_98[7];
    if (*(int *)((longlong)FVar13 + 0xd8) != *(int *)((longlong)FVar13 + 0x104)) {
      uVar10 = ((uint)((ulonglong)local_98 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_98 >> 4)) *
               -0x7a143595;
      uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
      TSet<TTuple<UObjectBase_*,FSetHashBucket>,TDefaultMapHashableKeyFuncs<UObjectBase_*,FSetHashBucket,0>,FDefaultSetAllocator>
      ::RemoveImpl<UObjectBase_const_*>
                ((TSet<TTuple<UObjectBase_*,FSetHashBucket>,TDefaultMapHashableKeyFuncs<UObjectBase_*,FSetHashBucket,0>,FDefaultSetAllocator>
                  *)((longlong)FVar13 + 0xd0),uVar10 ^ uVar10 >> 0x10,(UObjectBase **)&local_40);
    }
  }
LAB_1422aaa15:
  local_a8.StatData.Pad = *(uchar (*) [8])((longlong)param_1 + 0x10);
  this_04 = (TSet<TTuple<UClass_*,FSetHashBucket>,TDefaultMapHashableKeyFuncs<UClass_*,FSetHashBucket,0>,FDefaultSetAllocator>
             *)((longlong)FVar13 + 0x128);
  if (*(int *)((longlong)FVar13 + 0x178) != 0) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`public:_struct_FSetHashBucket&___ptr64___cdecl_TBucketMap<UClass*___ptr64,FSetHashBucket>::FindOrAdd(UClass*___ptr64&&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogObj);
  }
  uVar10 = ((uint)((ulonglong)local_a8.StatData.Pad >> 0x14) & 0xffff ^
           (uint)((ulonglong)local_a8.StatData.Pad >> 4)) * -0x7a143595;
  uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
  uVar10 = uVar10 >> 0x10 ^ uVar10;
  if (*(int *)((longlong)FVar13 + 0x130) != *(int *)((longlong)FVar13 + 0x15c)) {
    plVar20 = *(longlong **)((longlong)FVar13 + 0x168);
    if (*(longlong **)((longlong)FVar13 + 0x168) == (longlong *)0x0) {
      plVar20 = (longlong *)((longlong)FVar13 + 0x160);
    }
    iVar24 = *(int *)((longlong)plVar20 +
                     (ulonglong)(*(int *)((longlong)FVar13 + 0x170) - 1U & uVar10) * 4);
    if (iVar24 != -1) {
      lVar21 = *(longlong *)&this_04->Elements;
      do {
        if (*(uchar (*) [8])((longlong)iVar24 * 0x20 + lVar21) == local_a8.StatData.Pad) {
          if ((iVar24 != -1) && (lVar21 = (longlong)iVar24 * 0x20 + lVar21, lVar21 != 0))
          goto LAB_1422aaaf9;
          break;
        }
        iVar24 = *(int *)((longlong)iVar24 * 0x20 + 0x18 + lVar21);
      } while (iVar24 != -1);
    }
  }
  local_40.QuadPart = (LONGLONG)&local_a8;
  TSet<TTuple<UClass_*,FSetHashBucket>,TDefaultMapHashableKeyFuncs<UClass_*,FSetHashBucket,0>,FDefaultSetAllocator>
  ::EmplaceByHash<TKeyInitializer<UClass_*_const_&>_>
            (this_04,(uint)local_c0,(TKeyInitializer<UClass_*_const_&> *)(ulonglong)uVar10,
             (bool *)&local_40);
  lVar21 = (longlong)(int)local_c0[0] * 0x20 + *(longlong *)&this_04->Elements;
LAB_1422aaaf9:
  auVar3 = *(uchar (*) [8])(lVar21 + 0x10);
  if ((auVar3 == (uchar  [8])0x0) || (*(longlong *)(lVar21 + 8) != 0)) {
    if ((uchar  [8])param_1 == auVar3) {
      *(undefined8 *)(lVar21 + 0x10) = 0;
      goto LAB_1422aabbb;
    }
    if ((uchar  [8])param_1 == *(uchar (*) [8])(lVar21 + 8)) {
      *(uchar (*) [8])(lVar21 + 8) = auVar3;
      *(undefined8 *)(lVar21 + 0x10) = 0;
      goto LAB_1422aabbb;
    }
  }
  else {
    local_c0[0] = TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::Remove
                            ((TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>
                              *)auVar3,param_1);
    if (*(int *)((longlong)auVar3 + 8) - *(int *)((longlong)auVar3 + 0x34) < 3) {
      TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::TIterator::
      TIterator((TIterator *)local_88,
                (TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)auVar3)
      ;
      *(undefined8 *)(lVar21 + 8) =
           *(undefined8 *)(*(longlong *)local_88._0_8_ + (longlong)local_6c * 0x10);
      local_70 = local_70 & ~local_7c;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_88 + 8));
      *(undefined8 *)(lVar21 + 0x10) =
           *(undefined8 *)(*(longlong *)local_88._0_8_ + (longlong)local_6c * 0x10);
      *(int *)((longlong)auVar3 + 0x48) = 0;
      if (*(ForElementType<FSetElementId> *)((longlong)auVar3 + 0x40) !=
          (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)*(ForElementType<FSetElementId> *)((longlong)auVar3 + 0x40));
      }
      TSparseArray<TSparseSetElement<UObjectBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<UObjectBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                ((TSparseArray<TSparseSetElement<UObjectBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                  *)auVar3);
      operator_delete((void *)auVar3,0x50);
    }
    if (local_c0[0] == 1) goto LAB_1422aabbb;
  }
  OnHashFailure((UObjectBaseUtility *)param_1,L"ClassMap",L"remove miscount");
LAB_1422aabbb:
  FVar2 = local_b8;
  lVar4 = *(longlong *)(lVar21 + 0x10);
  if ((lVar4 == 0) || (*(longlong *)(lVar21 + 8) != 0)) {
    iVar24 = (uint)(lVar4 != 0) + (uint)(*(longlong *)(lVar21 + 8) != 0);
  }
  else {
    iVar24 = *(int *)(lVar4 + 8) - *(int *)(lVar4 + 0x34);
  }
  if (iVar24 == 0) {
    LVar5 = (LARGE_INTEGER)((LARGE_INTEGER *)((longlong)param_1 + 0x10))->QuadPart;
    if (*(int *)((longlong)local_b8 + 0x178) != 0) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`public:_void___cdecl_TBucketMap<UClass*___ptr64,FSetHashBucket>::Remove(UClass*___ptr64_const&___ptr64)___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogObj);
    }
    local_40 = LVar5;
    if (*(int *)((longlong)FVar2 + 0x130) != *(int *)((longlong)FVar2 + 0x15c)) {
      uVar10 = ((uint)((ulonglong)LVar5.QuadPart >> 0x14) & 0xffff ^
               (uint)((ulonglong)LVar5.QuadPart >> 4)) * -0x7a143595;
      uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
      TSet<TTuple<UClass_*,FSetHashBucket>,TDefaultMapHashableKeyFuncs<UClass_*,FSetHashBucket,0>,FDefaultSetAllocator>
      ::RemoveImpl<UClass_const_*>
                ((TSet<TTuple<UClass_*,FSetHashBucket>,TDefaultMapHashableKeyFuncs<UClass_*,FSetHashBucket,0>,FDefaultSetAllocator>
                  *)((longlong)FVar2 + 0x128),uVar10 >> 0x10 ^ uVar10,(UClass **)&local_40);
    }
  }
  pUVar14 = Z_Construct_UClass_UClass_NoRegister();
  iVar24 = (int)pUVar14->_padding_;
  if ((iVar24 <= *(int *)(*(longlong *)((longlong)param_1 + 0x10) + 0x38)) &&
     ((longlong *)
      *(undefined1 **)
       (*(longlong *)(*(longlong *)((longlong)param_1 + 0x10) + 0x30) + (longlong)iVar24 * 8) ==
      &pUVar14->_padding_)) {
    local_a8.StatData.Pad = *(uchar (*) [8])((longlong)param_1 + 0x40);
    if (local_a8.StatData.Pad != (uchar  [8])0x0) {
      uVar10 = ((uint)((ulonglong)local_a8.StatData.Pad >> 0x14) & 0xffff ^
               (uint)((ulonglong)local_a8.StatData.Pad >> 4)) * -0x7a143595;
      uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
      this_01 = TMapBase<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,0>_>
                ::FindOrAddImpl<UClass_*_const_&>
                          ((TMapBase<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,0>_>
                            *)((longlong)FVar2 + 0x180),uVar10 >> 0x10 ^ uVar10,(UClass **)&local_a8
                          );
      iVar24 = TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>::Remove
                         (this_01,(UClass *)param_1);
      if (iVar24 != 1) {
        OnHashFailure((UObjectBaseUtility *)param_1,L"ClassToChildListMap",L"remove miscount");
      }
      if (*(int *)&(this_01->Elements).field_0x8 == *(int *)&(this_01->Elements).field_0x34) {
        TMapBase<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,0>_>
        ::Remove((TMapBase<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>,0>_>
                  *)((longlong)FVar2 + 0x180),(UClass *)local_a8.StatData.Pad);
      }
    }
    LOCK();
    *(atomic<unsigned___int64> *)((longlong)FVar2 + 0x1d0) =
         (atomic<unsigned___int64>)
         ((longlong)*(atomic<unsigned___int64> *)((longlong)FVar2 + 0x1d0) + 1);
    UNLOCK();
    pFVar15 = FUObjectArray::IndexToObject(&GUObjectArray,*(int *)((longlong)param_1 + 0xc));
    if (((ulonglong)((pFVar15->field0_0x0).FlagsAndRefCount >> 0x20) >> 0x19 & 1) != 0) {
      LOCK();
      *(atomic<unsigned___int64> *)((longlong)FVar2 + 0x1d8) =
           (atomic<unsigned___int64>)
           ((longlong)*(atomic<unsigned___int64> *)((longlong)FVar2 + 0x1d8) + 1);
      UNLOCK();
    }
  }
  if (lpCriticalSection != (FName)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  }
  if (bVar7) {
    FGenericPlatformMisc::EndNamedEvent();
  }
  if (bVar6) {
    FCpuProfilerTrace::OutputEndEvent();
  }
  if ((((bVar8) && (FVar22 != (FName)0x0)) && (FThreadStats::bPrimaryDisableForever == false)) &&
     (FThreadStats::TlsSlot != 0xffffffff)) {
    this_02 = TlsGetValue(FThreadStats::TlsSlot);
    if (this_02 == (FThreadStats *)0x0) {
      this_03 = FThreadStatsPool::Get();
      this_02 = FThreadStatsPool::GetFromPool(this_03);
    }
    if (this_02->bWaitForExplicitFlush < this_02->ScopeCount) {
      local_a8.NameAndInfo.Index.Value = local_58.ComparisonIndex.Value;
      local_a8.NameAndInfo.Number = FVar22.Number & 0xffff6fff | 0x6000;
      QueryPerformanceCounter(&local_40);
      local_a8.StatData.Pad = (uchar  [8])(local_40.QuadPart & 0xffffffff);
      FThreadStats::AddStatMessage(this_02,&local_a8);
      piVar1 = &this_02->ScopeCount;
      *piVar1 = *piVar1 + -1;
      if (*piVar1 == 0) {
        FThreadStats::Flush(this_02,false,false);
      }
      else if (FThreadStats::bIsRawStatsActive != false) {
        FThreadStats::FlushRawStats(this_02,false,false);
      }
    }
  }
  if (bVar26) {
    lVar21 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar21 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar16 = *(FWriteBuffer **)(lVar21 + 0x20);
    if ((int)pFVar16 - *(int *)&pFVar16->Cursor < 1) {
      pFVar16 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar16->Cursor = '\n';
    pFVar16->Cursor = pFVar16->Cursor + 1;
    pFVar16->Committed = pFVar16->Cursor;
  }
  FMemScope::~FMemScope(&local_48);
  FLLMScope::~FLLMScope(local_90);
  return;
}

// UnhashObjectExternalPackage @ 1422aaef0

/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl UnhashObjectExternalPackage(UObjectBase *param_1)

{
  TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *this;
  ForElementType<FSetElementId> FVar1;
  void *pvVar2;
  longlong lVar3;
  bool bVar4;
  FNameEntryId FVar5;
  int iVar6;
  FUObjectHashTables *lpCriticalSection;
  FSetHashBucket *pFVar7;
  FWriteBuffer *pFVar8;
  uint uVar9;
  FUObjectHashTables *lpCriticalSection_00;
  bool bVar10;
  undefined1 auStackY_b8 [32];
  FLLMScope local_84;
  FName local_80;
  FMemScope local_78;
  undefined1 local_70 [12];
  uint local_64;
  uint local_58;
  int local_54;
  FName local_40;
  longlong local_38;
  ulonglong local_30;
  
  local_30 = __security_cookie.value ^ (ulonglong)auStackY_b8;
  FLLMScope::FLLMScope(&local_84,LLMTagDeclaration_UObjectHash.UniqueName,false,None,Default,true);
  local_40 = LLMTagDeclaration_UObjectHash.UniqueName;
  FMemScope::FMemScope(&local_78,&local_40,true);
  bVar10 = -1 < MetadataChannel->Enabled;
  if (bVar10) {
    UE::Trace::Private::FLogScope::ScopedEnter<FMetadataStackClearScopeFields>
              ((TLogScope<0> *)&local_40);
    *(undefined8 *)(local_38 + 0x28) = *(undefined8 *)(local_38 + 0x20);
  }
  lpCriticalSection = FUObjectHashTables::Get();
  bVar4 = IsGarbageCollectingAndLockingUObjectHashTables();
  lpCriticalSection_00 = (FUObjectHashTables *)0x0;
  if ((!bVar4) || (bVar4 = IsInGameThread(), !bVar4)) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    lpCriticalSection_00 = lpCriticalSection;
  }
  UObjectBase::AtomicallyClearFlags(param_1,RF_HasExternalPackage);
  local_40.ComparisonIndex.Value = 0;
  local_40.Number = 0;
  TMap<UObjectBase_*,UPackage_*,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UObjectBase_*,UPackage_*,0>_>
  ::RemoveAndCopyValue(&lpCriticalSection->ObjectToPackageMap,param_1,(UPackage **)&local_40);
  if (local_40 == (FName)0x0) goto LAB_1422ab1d4;
  if ((lpCriticalSection->PackageToObjectListMap).ReadOnlyLock != 0) {
    UE::Logging::Private::BasicFatalLog
              ((FStaticBasicLogRecord *)
               &`public:_struct_FSetHashBucket&___ptr64___cdecl_TBucketMap<UPackage*___ptr64,FSetHashBucket>::FindOrAdd(UPackage*___ptr64_const&___ptr64)___ptr64'
                ::__l3::LOG_Static,(FLogCategoryBase *)&LogObj);
  }
  uVar9 = ((uint)((ulonglong)local_40 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_40 >> 4)) *
          -0x7a143595;
  uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
  pFVar7 = TMapBase<UPackage_*,FSetHashBucket,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPackage_*,FSetHashBucket,0>_>
           ::FindOrAddImpl<UPackage_*_const_&>
                     ((TMapBase<UPackage_*,FSetHashBucket,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<UPackage_*,FSetHashBucket,0>_>
                       *)&lpCriticalSection->PackageToObjectListMap,uVar9 >> 0x10 ^ uVar9,
                      (UPackage **)&local_40);
  this = pFVar7->Elements[1];
  if ((this == (TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)0x0) ||
     (pFVar7->Elements[0] != (void *)0x0)) {
    if ((TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator> *)param_1 == this
       ) {
      pFVar7->Elements[1] = (void *)0x0;
    }
    else {
      if (param_1 != pFVar7->Elements[0]) goto LAB_1422ab0fc;
      pFVar7->Elements[0] = this;
      pFVar7->Elements[1] = (void *)0x0;
    }
  }
  else {
    FVar5.Value = TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::Remove
                            (this,param_1);
    local_80.ComparisonIndex.Value = FVar5.Value;
    if (*(int *)&(this->Elements).field_0x8 - *(int *)&(this->Elements).field_0x34 < 3) {
      TSet<UObjectBase_*,DefaultKeyFuncs<UObjectBase_*,0>,FDefaultSetAllocator>::TIterator::
      TIterator((TIterator *)local_70,this);
      pFVar7->Elements[0] = *(void **)(*(longlong *)local_70._0_8_ + (longlong)local_54 * 0x10);
      local_58 = local_58 & ~local_64;
      TConstSetBitIterator<FDefaultBitArrayAllocator>::FindFirstSetBit
                ((TConstSetBitIterator<FDefaultBitArrayAllocator> *)(local_70 + 8));
      pFVar7->Elements[1] = *(void **)(*(longlong *)local_70._0_8_ + (longlong)local_54 * 0x10);
      this->HashSize = 0;
      FVar1 = (this->Hash).SecondaryData;
      if (FVar1 != (ForElementType<FSetElementId>)0x0) {
        FMemory::Free((void *)FVar1);
      }
      TSparseArray<TSparseSetElement<UObjectBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
      ::
      ~TSparseArray<TSparseSetElement<UObjectBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                (&this->Elements);
      operator_delete(this,0x50);
      FVar5.Value = local_80.ComparisonIndex.Value;
    }
    if (FVar5.Value != 1) {
LAB_1422ab0fc:
      OnHashFailure((UObjectBaseUtility *)param_1,L"PackageMap",L"remove miscount");
    }
  }
  pvVar2 = pFVar7->Elements[1];
  if ((pvVar2 == (void *)0x0) || (pFVar7->Elements[0] != (void *)0x0)) {
    iVar6 = (uint)(pvVar2 != (void *)0x0) + (uint)(pFVar7->Elements[0] != (void *)0x0);
  }
  else {
    iVar6 = *(int *)((longlong)pvVar2 + 8) - *(int *)((longlong)pvVar2 + 0x34);
  }
  if (iVar6 == 0) {
    if ((lpCriticalSection->PackageToObjectListMap).ReadOnlyLock != 0) {
      UE::Logging::Private::BasicFatalLog
                ((FStaticBasicLogRecord *)
                 &`public:_void___cdecl_TBucketMap<UPackage*___ptr64,FSetHashBucket>::Remove(UPackage*___ptr64_const&___ptr64)___ptr64'
                  ::__l3::LOG_Static,(FLogCategoryBase *)&LogObj);
    }
    local_80 = local_40;
    if ((int)(lpCriticalSection->PackageToObjectListMap)._padding_ !=
        *(int *)((longlong)&(lpCriticalSection->PackageToObjectListMap)._padding_ + 4)) {
      uVar9 = ((uint)((ulonglong)local_40 >> 0x14) & 0xffff ^ (uint)((ulonglong)local_40 >> 4)) *
              -0x7a143595;
      uVar9 = (uVar9 >> 0xd ^ uVar9) * -0x3d4d51cb;
      TSet<TTuple<UPackage_*,FSetHashBucket>,TDefaultMapHashableKeyFuncs<UPackage_*,FSetHashBucket,0>,FDefaultSetAllocator>
      ::RemoveImpl<UPackage_const_*>
                ((TSet<TTuple<UPackage_*,FSetHashBucket>,TDefaultMapHashableKeyFuncs<UPackage_*,FSetHashBucket,0>,FDefaultSetAllocator>
                  *)&lpCriticalSection->PackageToObjectListMap,uVar9 >> 0x10 ^ uVar9,
                 (UPackage **)&local_80);
    }
  }
LAB_1422ab1d4:
  if (lpCriticalSection_00 != (FUObjectHashTables *)0x0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection_00);
  }
  if (bVar10) {
    lVar3 = *(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8);
    if (*(char *)(lVar3 + 0x9d48) == '\0') {
      __dyn_tls_on_demand_init();
    }
    pFVar8 = *(FWriteBuffer **)(lVar3 + 0x20);
    if ((int)pFVar8 - *(int *)&pFVar8->Cursor < 1) {
      pFVar8 = UE::Trace::Private::Writer_NextBuffer();
    }
    *pFVar8->Cursor = '\n';
    pFVar8->Cursor = pFVar8->Cursor + 1;
    pFVar8->Committed = pFVar8->Cursor;
  }
  FMemScope::~FMemScope(&local_78);
  FLLMScope::~FLLMScope(&local_84);
  return;
}

// UnlockUObjectHashTables @ 1422ab290

void __cdecl UnlockUObjectHashTables(void)

{
  FUObjectHashTables *lpCriticalSection;
  
  lpCriticalSection = FUObjectHashTables::Get();
                    /* WARNING: Could not recover jumptable at 0x0001422ab2a0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// __d2d @ 1422ab2b0

__floating_decimal_64 * __cdecl
std::__d2d(__floating_decimal_64 *__return_storage_ptr__,ulong64 param_1,uint param_2)

{
  ulonglong uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  bool bVar29;
  bool bVar30;
  ulong64 uVar31;
  ulonglong uVar32;
  longlong lVar33;
  ulonglong uVar34;
  ulonglong uVar35;
  longlong lVar36;
  ulonglong uVar37;
  bool bVar38;
  ulonglong uVar39;
  ulonglong uVar40;
  int iVar41;
  ulonglong uVar42;
  ulonglong uVar43;
  byte bVar44;
  uint uVar45;
  byte bVar46;
  ulonglong uVar47;
  byte local_res18;
  uint local_res20;
  
  iVar41 = -0x434;
  if (param_2 != 0) {
    iVar41 = param_2 - 0x435;
  }
  uVar31 = param_1;
  if (param_2 != 0) {
    uVar31 = param_1 | 0x10000000000000;
  }
  uVar47 = 0;
  bVar46 = ~(byte)uVar31 & 1;
  uVar32 = uVar31 * 4;
  if ((param_1 == 0) && (1 < param_2)) {
    local_res18 = 0;
    uVar35 = uVar47;
  }
  else {
    local_res18 = 1;
    uVar35 = 1;
  }
  uVar40 = 0;
  bVar29 = false;
  if (iVar41 < 0) {
    uVar45 = ((uint)(iVar41 * -0xb2efb) >> 0x14) - (uint)(1 < -iVar41);
    local_res20 = uVar45 + iVar41;
    uVar39 = __DOUBLE_POW5_SPLIT[(int)-local_res20][1];
    auVar8._8_8_ = 0;
    auVar8._0_8_ = uVar39;
    auVar23._8_8_ = 0;
    auVar23._0_8_ = uVar32 + 2;
    lVar33 = SUB168(auVar8 * auVar23,8);
    uVar43 = __DOUBLE_POW5_SPLIT[(int)-local_res20][0];
    auVar9._8_8_ = 0;
    auVar9._0_8_ = uVar43;
    auVar24._8_8_ = 0;
    auVar24._0_8_ = uVar32 + 2;
    uVar34 = SUB168(auVar9 * auVar24,8);
    uVar37 = SUB168(auVar8 * auVar23,0) + uVar34;
    if (uVar37 < uVar34) {
      lVar33 = lVar33 + 1;
    }
    bVar44 = ((char)uVar45 - (char)(local_res20 * -0x12934f >> 0x13)) + 0x38;
    uVar35 = (uVar32 - uVar35) - 1;
    uVar34 = uVar37 >> (bVar44 & 0x3f) | lVar33 << 0x40 - (bVar44 & 0x3f);
    auVar10._8_8_ = 0;
    auVar10._0_8_ = uVar39;
    auVar25._8_8_ = 0;
    auVar25._0_8_ = uVar35;
    lVar33 = SUB168(auVar10 * auVar25,8);
    auVar11._8_8_ = 0;
    auVar11._0_8_ = uVar43;
    auVar26._8_8_ = 0;
    auVar26._0_8_ = uVar35;
    uVar35 = SUB168(auVar11 * auVar26,8);
    uVar37 = SUB168(auVar10 * auVar25,0) + uVar35;
    if (uVar37 < uVar35) {
      lVar33 = lVar33 + 1;
    }
    auVar12._8_8_ = 0;
    auVar12._0_8_ = uVar39;
    auVar27._8_8_ = 0;
    auVar27._0_8_ = uVar32;
    lVar36 = SUB168(auVar12 * auVar27,8);
    uVar35 = uVar37 >> (bVar44 & 0x3f) | lVar33 << 0x40 - (bVar44 & 0x3f);
    auVar13._8_8_ = 0;
    auVar13._0_8_ = uVar43;
    auVar28._8_8_ = 0;
    auVar28._0_8_ = uVar32;
    uVar39 = SUB168(auVar13 * auVar28,8);
    uVar43 = SUB168(auVar12 * auVar27,0) + uVar39;
    if (uVar43 < uVar39) {
      lVar36 = lVar36 + 1;
    }
    uVar39 = uVar43 >> (bVar44 & 0x3f) | lVar36 << 0x40 - (bVar44 & 0x3f);
    if (uVar45 < 2) {
      bVar29 = true;
      if (bVar46 == 0) {
        uVar34 = uVar34 - 1;
      }
      uVar40 = (ulonglong)local_res18;
      if (bVar46 == 0) {
        uVar40 = uVar47;
      }
    }
    else if (uVar45 < 0x3f) {
      bVar29 = (uVar32 & (1L << ((char)uVar45 - 1U & 0x3f)) - 1U) == 0;
      goto LAB_1422ab48a;
    }
LAB_1422ab47b:
    uVar32 = uVar39;
    if ((char)uVar40 == '\0') goto LAB_1422ab48a;
LAB_1422ab6d2:
    iVar41 = 0;
    bVar44 = 0;
    bVar30 = SUB81(uVar40,0);
    uVar34 = uVar34 / 10;
    uVar39 = uVar32;
    uVar43 = uVar35;
    uVar37 = uVar35 / 10;
    bVar38 = bVar29;
    if (uVar35 / 10 < uVar34) {
      do {
        uVar35 = uVar37;
        uVar32 = uVar39 / 10;
        bVar30 = false;
        if ((int)uVar43 == (int)uVar35 * 10) {
          bVar30 = SUB81(uVar40,0);
        }
        uVar40 = (ulonglong)bVar30;
        bVar29 = false;
        if (bVar44 == 0) {
          bVar29 = bVar38;
        }
        iVar41 = iVar41 + 1;
        bVar44 = (char)uVar39 + (char)uVar32 * -10;
        uVar34 = uVar34 / 10;
        uVar39 = uVar32;
        uVar43 = uVar35;
        uVar37 = uVar35 / 10;
        bVar38 = bVar29;
      } while (uVar35 / 10 < uVar34);
    }
    if ((bVar30 != false) &&
       (uVar40 = uVar32, uVar39 = uVar35 / 10, (int)uVar35 == (int)(uVar35 / 10) * 10)) {
      do {
        uVar35 = uVar39;
        uVar32 = uVar40 / 10;
        iVar41 = iVar41 + 1;
        bVar29 = (bool)(bVar29 & bVar44 == 0);
        bVar44 = (char)uVar40 + (char)uVar32 * -10;
        uVar40 = uVar32;
        uVar39 = uVar35 / 10;
      } while ((int)uVar35 == (int)(uVar35 / 10) * 10);
    }
    if (((bVar29 != false) && (bVar44 == 5)) && ((uVar32 & 1) == 0)) {
      bVar44 = 4;
    }
    if (((uVar32 != uVar35) || ((bVar46 != 0 && (bVar30 != false)))) && (bVar44 < 5))
    goto LAB_1422ab80b;
  }
  else {
    uVar43 = uVar32 + 2;
    local_res20 = ((uint)(iVar41 * 0x13441) >> 0x12) - (uint)(3 < iVar41);
    bVar44 = ((char)(local_res20 * 0x12934f >> 0x13) - (char)iVar41) + ':' + (char)local_res20;
    uVar37 = __DOUBLE_POW5_INV_SPLIT[local_res20][1];
    auVar2._8_8_ = 0;
    auVar2._0_8_ = uVar37;
    auVar14._8_8_ = 0;
    auVar14._0_8_ = uVar43;
    lVar33 = SUB168(auVar2 * auVar14,8);
    uVar1 = __DOUBLE_POW5_INV_SPLIT[local_res20][0];
    auVar3._8_8_ = 0;
    auVar3._0_8_ = uVar1;
    auVar15._8_8_ = 0;
    auVar15._0_8_ = uVar43;
    uVar34 = SUB168(auVar3 * auVar15,8);
    uVar39 = uVar34 + SUB168(auVar2 * auVar14,0);
    if (uVar39 < uVar34) {
      lVar33 = lVar33 + 1;
    }
    uVar34 = uVar39 >> (bVar44 & 0x3f) | lVar33 << 0x40 - (bVar44 & 0x3f);
    uVar42 = (uVar32 - uVar35) - 1;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = uVar37;
    auVar16._8_8_ = 0;
    auVar16._0_8_ = uVar42;
    lVar33 = SUB168(auVar4 * auVar16,8);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = uVar1;
    auVar17._8_8_ = 0;
    auVar17._0_8_ = uVar42;
    uVar35 = SUB168(auVar5 * auVar17,8);
    uVar39 = SUB168(auVar4 * auVar16,0) + uVar35;
    if (uVar39 < uVar35) {
      lVar33 = lVar33 + 1;
    }
    auVar6._8_8_ = 0;
    auVar6._0_8_ = uVar37;
    auVar18._8_8_ = 0;
    auVar18._0_8_ = uVar32;
    lVar36 = SUB168(auVar6 * auVar18,8);
    uVar35 = uVar39 >> (bVar44 & 0x3f) | lVar33 << 0x40 - (bVar44 & 0x3f);
    auVar7._8_8_ = 0;
    auVar7._0_8_ = uVar1;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = uVar32;
    uVar37 = SUB168(auVar7 * auVar19,8);
    uVar39 = uVar37 + SUB168(auVar6 * auVar18,0);
    if (uVar39 < uVar37) {
      lVar36 = lVar36 + 1;
    }
    uVar39 = uVar39 >> (bVar44 & 0x3f) | lVar36 << 0x40 - (bVar44 & 0x3f);
    if (0x15 < local_res20) goto LAB_1422ab47b;
    if ((int)uVar32 != (int)(uVar32 / 5) * 5) {
      if (bVar46 == 0) {
        bVar30 = __multipleOfPowerOf5(uVar43,local_res20);
        uVar34 = uVar34 - bVar30;
      }
      else {
        bVar30 = __multipleOfPowerOf5(uVar42,local_res20);
        uVar40 = (ulonglong)bVar30;
      }
      goto LAB_1422ab47b;
    }
    bVar29 = __multipleOfPowerOf5(uVar32,local_res20);
LAB_1422ab48a:
    iVar41 = 0;
    uVar32 = uVar39;
    if (bVar29 != false) goto LAB_1422ab6d2;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = uVar34;
    lVar33 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar20,8);
    bVar29 = false;
    auVar21._8_8_ = 0;
    auVar21._0_8_ = uVar35;
    lVar36 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar21,8);
    uVar40 = (uVar34 - lVar33 >> 1) + lVar33 >> 6;
    uVar43 = (uVar35 - lVar36 >> 1) + lVar36 >> 6;
    if (uVar43 < uVar40) {
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar39;
      lVar33 = SUB168(ZEXT816(0x47ae147ae147ae15) * auVar22,8);
      iVar41 = 2;
      uVar32 = (uVar39 - lVar33 >> 1) + lVar33 >> 6;
      bVar29 = 0x31 < (uint)((int)uVar39 + (int)uVar32 * -100);
      uVar34 = uVar40;
      uVar35 = uVar43;
    }
    uVar34 = uVar34 / 10;
    uVar40 = uVar35 / 10;
    uVar39 = uVar32;
    if (uVar35 / 10 < uVar34) {
      do {
        uVar35 = uVar40;
        uVar32 = uVar39 / 10;
        bVar29 = 4 < (uint)((int)uVar39 + (int)uVar32 * -10);
        iVar41 = iVar41 + 1;
        uVar34 = uVar34 / 10;
        uVar40 = uVar35 / 10;
        uVar39 = uVar32;
      } while (uVar35 / 10 < uVar34);
    }
    if ((uVar32 != uVar35) && (!bVar29)) goto LAB_1422ab80b;
  }
  uVar47 = 1;
LAB_1422ab80b:
  __return_storage_ptr__->__exponent = local_res20 + iVar41;
  __return_storage_ptr__->__mantissa = uVar47 + uVar32;
  return __return_storage_ptr__;
}

// __decimalLength9 @ 1422ab860

uint __cdecl std::__decimalLength9(uint param_1)

{
  if (99999999 < param_1) {
    return 9;
  }
  if (9999999 < param_1) {
    return 8;
  }
  if (999999 < param_1) {
    return 7;
  }
  if (99999 < param_1) {
    return 6;
  }
  if (9999 < param_1) {
    return 5;
  }
  if (999 < param_1) {
    return 4;
  }
  if (99 < param_1) {
    return 3;
  }
  return 2 - (param_1 < 10);
}

// __mulShift_mod1e9 @ 1422ab8d0

uint __cdecl std::__mulShift_mod1e9(ulong64 param_1,ulong64 *param_2,int param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  byte bVar10;
  undefined1 auVar11 [16];
  ulonglong uVar12;
  ulonglong uVar13;
  byte bVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  ulonglong uVar17;
  
  auVar1._8_8_ = 0;
  auVar1._0_8_ = *param_2;
  auVar4._8_8_ = 0;
  auVar4._0_8_ = param_1;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = param_2[1];
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_1;
  auVar3._8_8_ = 0;
  auVar3._0_8_ = param_2[2];
  auVar6._8_8_ = 0;
  auVar6._0_8_ = param_1;
  uVar12 = SUB168(auVar3 * auVar6,0);
  auVar11._8_8_ = uVar12;
  auVar11._0_8_ = SUB168(auVar1 * auVar4,8);
  bVar14 = (char)param_3 + 0x80;
  uVar16 = SUB168(auVar2 * auVar5 + auVar11,8);
  uVar15 = SUB168(auVar3 * auVar6,8) + (ulonglong)(uVar16 < uVar12);
  bVar10 = bVar14 & 0x3f;
  uVar17 = uVar16 >> bVar10 | uVar15 << 0x40 - bVar10;
  auVar7._8_8_ = 0;
  auVar7._0_8_ = uVar17;
  uVar15 = uVar15 >> (bVar14 & 0x3f);
  auVar8._8_8_ = 0;
  auVar8._0_8_ = uVar17;
  uVar16 = SUB168(ZEXT816(0x89705f4136b4a597) * auVar8,0);
  auVar9._8_8_ = 0;
  auVar9._0_8_ = uVar15;
  uVar13 = SUB168(ZEXT816(0x31680a88f8953031) * auVar9,0);
  uVar12 = uVar13 + SUB168(ZEXT816(0x31680a88f8953031) * auVar7,8);
  return (int)uVar17 +
         (int)(uVar15 * -0x768fa0bec94b5a69 + (ulonglong)(uVar12 + uVar16 < uVar16) +
               SUB168(ZEXT816(0x31680a88f8953031) * auVar9,8) + (ulonglong)(uVar12 < uVar13) +
               SUB168(ZEXT816(0x89705f4136b4a597) * auVar8,8) >> 0x1d) * -1000000000;
}

// __multipleOfPowerOf5 @ 1422ab9a0

bool __cdecl std::__multipleOfPowerOf5(ulong64 param_1,uint param_2)

{
  int iVar1;
  ulonglong uVar2;
  ulonglong uVar3;
  uint uVar4;
  
  uVar4 = 0;
  uVar2 = param_1 / 5;
  if ((int)param_1 == (int)uVar2 * 5) {
    do {
      uVar4 = uVar4 + 1;
      uVar3 = uVar2 / 5;
      iVar1 = (int)uVar2;
      uVar2 = uVar3;
    } while (iVar1 == (int)uVar3 * 5);
  }
  return param_2 <= uVar4;
}

// AttributeHandlers'' @ 150354120

void __cdecl
`dynamic_atexit_destructor_for_'Verse::ICustomAttributeHandler::AttributeHandlers__(void)

{
  Verse::ICustomAttributeHandler::AttributeHandlers._72_4_ = 0;
  if (Verse::ICustomAttributeHandler::AttributeHandlers._64_8_ != 0) {
    FMemory::Free((void *)Verse::ICustomAttributeHandler::AttributeHandlers._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<FName,Verse::ICustomAttributeHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<FName,Verse::ICustomAttributeHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<FName,Verse::ICustomAttributeHandler_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&Verse::ICustomAttributeHandler::AttributeHandlers);
  return;
}

// EmptyBucket'' @ 150354160

void __cdecl `dynamic_atexit_destructor_for_'FArrayHashBucket::EmptyBucket__(void)

{
  undefined8 uVar1;
  FLowLevelMemTracker *this;
  
  uVar1 = FArrayHashBucket::EmptyBucket._0_8_;
  if (FArrayHashBucket::EmptyBucket._0_8_ == 0) {
    return;
  }
  if (FArrayHashBucket::EmptyBucket._0_8_ != 0) {
    if (FLowLevelMemTracker::EnabledState != Disabled) {
      this = FLowLevelMemTracker::TrackerInstance;
      if (FLowLevelMemTracker::TrackerInstance == (FLowLevelMemTracker *)0x0) {
        this = FLowLevelMemTracker::Construct();
      }
      FLowLevelMemTracker::OnLowLevelFree(this,Default,(void *)uVar1,FMalloc,true);
    }
    if (UE::Private::GMalloc == (FMalloc *)0x0) {
      FMemory::GCreateMalloc();
    }
    else {
      DoGamethreadHook(2);
    }
    (**(code **)((longlong)*UE::Private::GMalloc + 0x48))(UE::Private::GMalloc,uVar1);
  }
  return;
}

// EmptyBucket'' @ 150354180

void __cdecl `dynamic_atexit_destructor_for_'FSetHashBucket::EmptyBucket__(void)

{
  FSetHashBucket::EmptyBucket.HashSize = 0;
  if (FSetHashBucket::EmptyBucket.Hash.SecondaryData != (ForElementType<FSetElementId>)0x0) {
    FMemory::Free((void *)FSetHashBucket::EmptyBucket.Hash.SecondaryData);
  }
  TSparseArray<TSparseSetElement<UObjectBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<UObjectBase_*>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            (&FSetHashBucket::EmptyBucket.Elements);
  return;
}

// `dynamic_atexit_destructor_for_'CVarBreakOnVerseRuntimeError'' @ 1503541c0

void __cdecl Verse::_dynamic_atexit_destructor_for__CVarBreakOnVerseRuntimeError__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarBreakOnVerseRuntimeError);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEditInlineSubobjectProperties'' @ 1503541e0

void __cdecl Verse::_dynamic_atexit_destructor_for__CVarEditInlineSubobjectProperties__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEditInlineSubobjectProperties);
  return;
}

// `dynamic_atexit_destructor_for_'CVarEnableAssetClassRedirectors'' @ 150354200

void __cdecl Verse::_dynamic_atexit_destructor_for__CVarEnableAssetClassRedirectors__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarEnableAssetClassRedirectors);
  return;
}

// `dynamic_atexit_destructor_for_'CVarForceCompileFramework'' @ 150354220

void __cdecl Verse::_dynamic_atexit_destructor_for__CVarForceCompileFramework__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarForceCompileFramework);
  return;
}

// `dynamic_atexit_destructor_for_'CVarUseDynamicSubobjectInstancing'' @ 150354240

void __cdecl Verse::_dynamic_atexit_destructor_for__CVarUseDynamicSubobjectInstancing__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&CVarUseDynamicSubobjectInstancing);
  return;
}

// `dynamic_atexit_destructor_for_'GUObjectArray'' @ 150354260

void __cdecl _dynamic_atexit_destructor_for__GUObjectArray__(void)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  longlong lVar4;
  
  DeleteCriticalSection((LPCRITICAL_SECTION)&GUObjectArray.UObjectDeleteListenersCritical);
  if (GUObjectArray.UObjectDeleteListeners.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(GUObjectArray.UObjectDeleteListeners.AllocatorInstance.Data);
  }
  if (GUObjectArray.UObjectCreateListeners.AllocatorInstance.Data != (FScriptContainerElement *)0x0)
  {
    FMemory::Free(GUObjectArray.UObjectCreateListeners.AllocatorInstance.Data);
  }
  if (GUObjectArray.ObjAvailableList.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(GUObjectArray.ObjAvailableList.AllocatorInstance.Data);
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&GUObjectArray.ObjObjectsCritical);
  if (GUObjectArray.ObjObjects.PreAllocatedObjects == (FUObjectItem *)0x0) {
    iVar3 = 0;
    if (0 < GUObjectArray.ObjObjects.MaxChunks) {
      lVar4 = 0;
      iVar2 = GUObjectArray.ObjObjects.MaxChunks;
      do {
        lVar1 = *(longlong *)(lVar4 + (longlong)GUObjectArray.ObjObjects.Objects);
        if (lVar1 != 0) {
          operator_delete__((void *)(lVar1 + -8),*(longlong *)(lVar1 + -8) * 0x20 + 8);
          iVar2 = GUObjectArray.ObjObjects.MaxChunks;
        }
        iVar3 = iVar3 + 1;
        lVar4 = lVar4 + 8;
      } while (iVar3 < iVar2);
    }
  }
  else {
    operator_delete__(&GUObjectArray.ObjObjects.PreAllocatedObjects[-1].StatID,
                      (longlong)GUObjectArray.ObjObjects.PreAllocatedObjects[-1].StatID.StatIdPtr *
                      0x20 + 8);
  }
  operator_delete__(GUObjectArray.ObjObjects.Objects);
  return;
}

// `dynamic_atexit_destructor_for_'LinkerAnnotation'' @ 150354350

void __cdecl _dynamic_atexit_destructor_for__LinkerAnnotation__(void)

{
  code *pcVar1;
  BOOLEAN BVar2;
  bool bVar3;
  
  LinkerAnnotation._padding_ =
       (longlong)&___7__FUObjectAnnotationChunked_UFLinkerIndexPair___0A__0BAAAA___6B_;
  FUObjectAnnotationChunked<FLinkerIndexPair,0,65536>::RemoveAllAnnotations(&LinkerAnnotation);
  BVar2 = TryAcquireSRWLockExclusive((PSRWLOCK)&LinkerAnnotation.AnnotationArrayCritical);
  if (BVar2 == '\0') {
    bVar3 = FDebug::CheckVerifyFailedImpl2
                      ("!IsLocked()",
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Windows\\WindowsPlatformMutex.h"
                       ,0x48,L"Destroying a lock that is still held!");
    if (bVar3) {
      pcVar1 = (code *)swi(3);
      (*pcVar1)();
      return;
    }
  }
  else {
    ReleaseSRWLockExclusive((PSRWLOCK)&LinkerAnnotation.AnnotationArrayCritical);
  }
  if (LinkerAnnotation.Chunks.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
    FMemory::Free(LinkerAnnotation.Chunks.AllocatorInstance.Data);
  }
  LinkerAnnotation._padding_ = (longlong)&___7FUObjectDeleteListener_FUObjectArray__6B_;
  return;
}

// `dynamic_atexit_destructor_for_'LogContentScope'' @ 1503543e0

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogContentScope__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogContentScope);
  return;
}

// `dynamic_atexit_destructor_for_'LogUObjectHash'' @ 150354400

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogUObjectHash__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogUObjectHash);
  return;
}

// `dynamic_atexit_destructor_for_'LogUObjectLinker'' @ 150354420

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogUObjectLinker__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogUObjectLinker);
  return;
}

// `dynamic_atexit_destructor_for_'LogUObjectThreadContext'' @ 150354440

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogUObjectThreadContext__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogUObjectThreadContext);
  return;
}

// `dynamic_atexit_destructor_for_'LogWeakObjectPtr'' @ 150354460

/* WARNING: Enum "Type": Some values do not have unique names */

void __cdecl _dynamic_atexit_destructor_for__LogWeakObjectPtr__(void)

{
  FLogCategoryBase::~FLogCategoryBase((FLogCategoryBase *)&LogWeakObjectPtr);
  return;
}

// `dynamic_atexit_destructor_for_'ShrinkUObjectHashTablesCmd'' @ 150354480

void __cdecl _dynamic_atexit_destructor_for__ShrinkUObjectHashTablesCmd__(void)

{
  FAutoConsoleObject::~FAutoConsoleObject((FAutoConsoleObject *)&ShrinkUObjectHashTablesCmd);
  return;
}

// `dynamic_atexit_destructor_for_'Singleton'' @ 1503544a0

void __cdecl `FUObjectHashTables::Get'::__l2::_dynamic_atexit_destructor_for__Singleton__(void)

{
  `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2::
  Singleton.ObjectToPackageMap._72_4_ = 0;
  if (`public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.ObjectToPackageMap._64_8_ != 0) {
    FMemory::Free((void *)`public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'
                          ::__l2::Singleton.ObjectToPackageMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UObjectBase_*,UPackage_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObjectBase_*,UPackage_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObjectBase_*,UPackage_*>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&`public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'
                 ::__l2::Singleton.ObjectToPackageMap);
  `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2::
  Singleton.PackageToObjectListMap._padding_._0_4_ = 0;
  if (`public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.PackageToObjectListMap._padding_ != 0) {
    FMemory::Free((void *)`public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'
                          ::__l2::Singleton.PackageToObjectListMap._padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<UPackage_*,FSetHashBucket>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UPackage_*,FSetHashBucket>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UPackage_*,FSetHashBucket>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&`public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'
                 ::__l2::Singleton.PackageToObjectListMap);
  `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2::
  Singleton.ClassToChildListMap._72_4_ = 0;
  if (`public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.ClassToChildListMap._64_8_ != 0) {
    FMemory::Free((void *)`public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'
                          ::__l2::Singleton.ClassToChildListMap._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UClass_*,TSet<UClass_*,DefaultKeyFuncs<UClass_*,0>,FDefaultSetAllocator>_>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&`public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'
                 ::__l2::Singleton.ClassToChildListMap);
  `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2::
  Singleton.ClassToObjectListMap._padding_._0_4_ = 0;
  if (`public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.ClassToObjectListMap._padding_ != 0) {
    FMemory::Free((void *)`public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'
                          ::__l2::Singleton.ClassToObjectListMap._padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<UClass_*,FSetHashBucket>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UClass_*,FSetHashBucket>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UClass_*,FSetHashBucket>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&`public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'
                 ::__l2::Singleton.ClassToObjectListMap);
  `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2::
  Singleton.ObjectOuterMap._padding_._0_4_ = 0;
  if (`public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.ObjectOuterMap._padding_ != 0) {
    FMemory::Free((void *)`public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'
                          ::__l2::Singleton.ObjectOuterMap._padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<UObjectBase_*,FSetHashBucket>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<UObjectBase_*,FSetHashBucket>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<UObjectBase_*,FSetHashBucket>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&`public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'
                 ::__l2::Singleton.ObjectOuterMap);
  `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2::
  Singleton.HashOuter._72_4_ = 0;
  if (`public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.HashOuter._64_8_ != 0) {
    FMemory::Free((void *)`public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'
                          ::__l2::Singleton.HashOuter._64_8_);
  }
  TSparseArray<TSparseSetElement<TTuple<int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,unsigned_int>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&`public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'
                 ::__l2::Singleton.HashOuter);
  `public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2::
  Singleton.Hash._padding_._0_4_ = 0;
  if (`public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'::__l2
      ::Singleton.Hash._padding_ != 0) {
    FMemory::Free((void *)`public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'
                          ::__l2::Singleton.Hash._padding_);
  }
  TSparseArray<TSparseSetElement<TTuple<int,FSetHashBucket>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
  ::
  ~TSparseArray<TSparseSetElement<TTuple<int,FSetHashBucket>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
            ((TSparseArray<TSparseSetElement<TTuple<int,FSetHashBucket>_>,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
              *)&`public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'
                 ::__l2::Singleton.Hash);
                    /* WARNING: Could not recover jumptable at 0x0001503545a9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  DeleteCriticalSection
            ((LPCRITICAL_SECTION)
             &`public:_static_class_FUObjectHashTables&___ptr64___cdecl_FUObjectHashTables::Get(void)'
              ::__l2::Singleton);
  return;
}

// `dynamic_atexit_destructor_for_'StaticFieldClass'' @ 1503545c0

void __cdecl
`FUtf8StrProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__(void)

{
  FFieldClass::~FFieldClass(&::StaticFieldClass);
  return;
}

// `dynamic_atexit_destructor_for_'StaticFieldClass'' @ 1503545e0

void __cdecl
`FVerseClassProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__(void)

{
  FFieldClass::~FFieldClass(&::StaticFieldClass);
  return;
}

// `dynamic_atexit_destructor_for_'StaticFieldClass'' @ 150354600

void __cdecl
`FVerseDynamicProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__(void)

{
  FFieldClass::~FFieldClass(&::StaticFieldClass);
  return;
}

// `dynamic_atexit_destructor_for_'StaticFieldClass'' @ 150354620

void __cdecl
`FVerseStringProperty::StaticClass'::__l2::_dynamic_atexit_destructor_for__StaticFieldClass__(void)

{
  FFieldClass::~FFieldClass(&::StaticFieldClass);
  return;
}

// `dynamic_atexit_destructor_for_'StaticType'' @ 150354640

void __cdecl
`UE::Verse::FRuntimeTypeDynamic::Get'::__l2::_dynamic_atexit_destructor_for__StaticType__(void)

{
  ::StaticType._0_8_ = &___7FRuntimeType_Verse_UE__6B_;
  return;
}

