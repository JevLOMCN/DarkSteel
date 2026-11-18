// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Engine
// Functions: 1

// RequiresCompleteValueForPostConstruction @ 1476c3a00

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool __cdecl
UE::Runtime::Engine::Private::FBlueprintGeneratedClassUtils::
RequiresCompleteValueForPostConstruction(FProperty *param_1)

{
  ulonglong uVar1;
  FFieldClass *pFVar2;
  longlong lVar3;
  code *pcVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  FFieldClass *pFVar8;
  FField *pFVar9;
  uint uVar10;
  wchar_t *pwVar11;
  undefined *puVar12;
  ForAnyElementType FVar13;
  FScriptContainerElement *pFVar14;
  bool bVar15;
  undefined1 local_res10 [8];
  undefined4 local_res18;
  FProperty *local_res20;
  FField *local_78;
  TArray<FString,TSizedDefaultAllocator<32>_> local_70;
  FFieldPath local_60;
  
  if ((*(int *)(*(longlong *)((longlong)ThreadLocalStoragePointer + (ulonglong)_tls_index * 8) +
               0x9d4c) <
       `public:_static_bool___cdecl_UE::Runtime::Engine::Private::FBlueprintGeneratedClassUtils::RequiresCompleteValueForPostConstruction(FProperty*___ptr64)'
       ::__l2::_thread_safe_static_guard_0__) &&
     (_Init_thread_header(&`public:_static_bool___cdecl_UE::Runtime::Engine::Private::FBlueprintGeneratedClassUtils::RequiresCompleteValueForPostConstruction(FProperty*___ptr64)'
                           ::__l2::_thread_safe_static_guard_0__),
     `public:_static_bool___cdecl_UE::Runtime::Engine::Private::FBlueprintGeneratedClassUtils::RequiresCompleteValueForPostConstruction(FProperty*___ptr64)'
     ::__l2::_thread_safe_static_guard_0__ == -1)) {
    atexit(`UE::Runtime::Engine::Private::FBlueprintGeneratedClassUtils::
           RequiresCompleteValueForPostConstruction'::__l2::
           _dynamic_atexit_destructor_for__PropertiesRequiringCompleteValueInitialization__);
    _Init_thread_footer(&`public:_static_bool___cdecl_UE::Runtime::Engine::Private::FBlueprintGeneratedClassUtils::RequiresCompleteValueForPostConstruction(FProperty*___ptr64)'
                         ::__l2::_thread_safe_static_guard_0__);
  }
  if ((`public:_static_bool___cdecl_UE::Runtime::Engine::Private::FBlueprintGeneratedClassUtils::RequiresCompleteValueForPostConstruction(FProperty*___ptr64)'
       ::__l2::bIsInitialized == false) && (GConfig != (FConfigCacheIni *)0x0)) {
    local_70.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
    local_70.ArrayNum = 0;
    local_70.ArrayMax = 0;
    iVar7 = FConfigCacheIni::GetArray
                      (GConfig,L"/Script/Engine.BlueprintGeneratedClass",
                       L"RequiresCompleteValueForPostConstruction",&local_70,&GEngineIni);
    if (iVar7 != 0) {
      iVar7 = local_70.ArrayNum;
      if ((uint)(DAT_154c28658 - DAT_154c28684) < (uint)local_70.ArrayNum) {
        if (local_70.ArrayNum < 0) {
                    /* WARNING: Subroutine does not return */
          Core::Private::OnInvalidSetNum((longlong)local_70.ArrayNum);
        }
        TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
        ::Reserve((TSparseArrayBase<16,8,TSparseArrayAllocator<TSizedDefaultAllocator<32>,FDefaultBitArrayAllocator>_>
                   *)&`public:_static_bool___cdecl_UE::Runtime::Engine::Private::FBlueprintGeneratedClassUtils::RequiresCompleteValueForPostConstruction(FProperty*___ptr64)'
                      ::__l2::PropertiesRequiringCompleteValueInitialization,local_70.ArrayNum);
        if ((uint)iVar7 < 4) {
          iVar7 = 1;
        }
        else {
          uVar1 = (ulonglong)(((uint)iVar7 >> 1) + 7) * 2 + 1;
          lVar3 = 0x3f;
          if (uVar1 != 0) {
            for (; uVar1 >> lVar3 == 0; lVar3 = lVar3 + -1) {
            }
          }
          local_res18 = (undefined4)lVar3;
          iVar7 = 1 << ((byte)lVar3 & 0x1f);
        }
        if ((DAT_154c28698 == 0) || (DAT_154c28698 < iVar7)) {
          DAT_154c28698 = iVar7;
          TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>::Rehash
                    ((TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator> *)
                     &`public:_static_bool___cdecl_UE::Runtime::Engine::Private::FBlueprintGeneratedClassUtils::RequiresCompleteValueForPostConstruction(FProperty*___ptr64)'
                      ::__l2::PropertiesRequiringCompleteValueInitialization);
        }
      }
      iVar7 = local_70.ArrayNum;
      pFVar14 = local_70.AllocatorInstance.Data + (longlong)local_70.ArrayNum * 0x10;
      FVar13.Data = local_70.AllocatorInstance.Data;
      while( true ) {
        bVar15 = false;
        if (local_70.ArrayNum != iVar7) {
          local_res10[0] = 0;
          `TCheckedPointerIterator<FString,int,0>::operator!='::__l2::<lambda_1>::operator()
                    (local_res10);
        }
        if (FVar13.Data == pFVar14) break;
        local_60.ResolvedField = (FField *)0x0;
        local_60.ResolvedOwner.WeakPtr.ObjectIndex = 0;
        local_60.ResolvedOwner.WeakPtr.ObjectSerialNumber = 0;
        local_60.Path.AllocatorInstance.Data = (FScriptContainerElement *)0x0;
        local_60.Path.ArrayNum = 0;
        local_60.Path.ArrayMax = 0;
        if (*(int *)(FVar13.Data + 8) == 0) {
          pwVar11 = L"";
        }
        else {
          pwVar11 = *(wchar_t **)FVar13.Data;
        }
        FFieldPath::Generate(&local_60,pwVar11);
        pFVar8 = FProperty::StaticClass();
        if (((local_60.ResolvedField == (FField *)0x0) ||
            (bVar5 = FWeakObjectPtr::IsValid(&local_60.ResolvedOwner.WeakPtr),
            pFVar9 = local_60.ResolvedField, !bVar5)) &&
           (pFVar9 = local_60.ResolvedField, local_60.Path.ArrayNum != 0)) {
          pFVar9 = FFieldPath::TryToResolvePath(&local_60,(UStruct *)0x0,UseStructIfOuterNotFound);
          if (pFVar9 != (FField *)0x0) {
            if ((pFVar8 == (FFieldClass *)0x0) &&
               (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                                  ("FieldType",
                                   "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\CoreUObject\\Public\\UObject\\Field.h"
                                   ,0x2dd,L""), bVar5)) {
              pcVar4 = (code *)swi(3);
              uVar6 = (*pcVar4)();
              return (bool)uVar6;
            }
            pFVar2 = pFVar9->ClassPrivate;
            if (pFVar8->Id == CASTCLASS_None) {
              for (; pFVar2 != (FFieldClass *)0x0; pFVar2 = pFVar2->SuperClass) {
                if (pFVar2 == pFVar8) {
                  bVar15 = true;
                  break;
                }
              }
            }
            else {
              bVar15 = (pFVar2->CastFlags & pFVar8->Id) != CASTCLASS_None;
            }
            if (bVar15) goto LAB_1476c3c40;
          }
          pFVar9 = local_60.ResolvedField;
          if (local_60.ResolvedField != (FField *)0x0) {
            local_60.ResolvedOwner.WeakPtr.ObjectIndex = 0;
            local_60.ResolvedOwner.WeakPtr.ObjectSerialNumber = 0;
            pFVar9 = (FField *)0x0;
          }
        }
LAB_1476c3c40:
        local_60.ResolvedField = pFVar9;
        local_78 = local_60.ResolvedField;
        if (local_60.ResolvedField != (FField *)0x0) {
          bVar15 = FField::IsNative(local_60.ResolvedField);
          if ((!bVar15) &&
             (bVar15 = ::FDebug::CheckVerifyFailedImpl2
                                 ("ResolvedProperty->IsNative()",
                                  "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Engine\\Private\\BlueprintGeneratedClass.cpp"
                                  ,0xbd,L""), bVar15)) {
            pcVar4 = (code *)swi(3);
            uVar6 = (*pcVar4)();
            return (bool)uVar6;
          }
          TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator>::
          Emplace<FProperty_*_const_&>
                    ((TSet<FProperty_*,DefaultKeyFuncs<FProperty_*,0>,FDefaultSetAllocator> *)
                     &`public:_static_bool___cdecl_UE::Runtime::Engine::Private::FBlueprintGeneratedClassUtils::RequiresCompleteValueForPostConstruction(FProperty*___ptr64)'
                      ::__l2::PropertiesRequiringCompleteValueInitialization,&local_res20,
                     (bool *)&local_78);
        }
        if (local_60.Path.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_60.Path.AllocatorInstance.Data);
        }
        FVar13.Data = FVar13.Data + 0x10;
      }
    }
    `public:_static_bool___cdecl_UE::Runtime::Engine::Private::FBlueprintGeneratedClassUtils::RequiresCompleteValueForPostConstruction(FProperty*___ptr64)'
    ::__l2::bIsInitialized = true;
    DestructItems<FString,int>((FString *)local_70.AllocatorInstance.Data,local_70.ArrayNum);
    if (local_70.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
      FMemory::Free(local_70.AllocatorInstance.Data);
    }
  }
  uVar10 = ((uint)((ulonglong)param_1 >> 0x14) & 0xffff ^ (uint)((ulonglong)param_1 >> 4)) *
           -0x7a143595;
  uVar10 = (uVar10 >> 0xd ^ uVar10) * -0x3d4d51cb;
  if (DAT_154c28658 != DAT_154c28684) {
    puVar12 = &DAT_154c28688;
    if (DAT_154c28690 != (undefined *)0x0) {
      puVar12 = DAT_154c28690;
    }
    for (iVar7 = *(int *)(puVar12 + (ulonglong)(DAT_154c28698 - 1U & (uVar10 >> 0x10 ^ uVar10)) * 4)
        ; iVar7 != -1;
        iVar7 = *(int *)(_PropertiesRequiringCompleteValueInitialization + 8 +
                        (longlong)iVar7 * 0x10)) {
      if (*(FProperty **)(_PropertiesRequiringCompleteValueInitialization + (longlong)iVar7 * 0x10)
          == param_1) goto LAB_1476c3d7a;
    }
  }
  iVar7 = -1;
LAB_1476c3d7a:
  return iVar7 != -1;
}

