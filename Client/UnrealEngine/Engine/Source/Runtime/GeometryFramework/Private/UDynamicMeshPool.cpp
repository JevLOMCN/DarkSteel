// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: GeometryFramework
// Functions: 15

// StaticClass @ 1496e8490

UClass * __cdecl UDynamicMeshPool::StaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDynamicMeshPool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryFramework",L"DynamicMeshPool",
               &Z_Registration_Info_UClass_UDynamicMeshPool.InnerSingleton,
               StaticRegisterNativesUDynamicMeshPool,0x70,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UDynamicMeshPool>,
               InternalVTableHelperCtorCaller<UDynamicMeshPool>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDynamicMeshPool.InnerSingleton;
}

// <lambda_invoker_cdecl> @ 1496ea520

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

void __cdecl `UDynamicMeshPool::RequestMesh'::__l31::<lambda_1>::<lambda_invoker_cdecl>(void)

{
  UEngine::ForceGarbageCollection(GEngine,true);
  return;
}

// UDynamicMeshPool @ 1496f9da0

UDynamicMeshPool * __thiscall
UDynamicMeshPool::UDynamicMeshPool(UDynamicMeshPool *this,FVTableHelper *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDynamicMeshPool__6B_;
  (this->CachedMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedMeshes).ArrayNum = 0;
  (this->CachedMeshes).ArrayMax = 0;
  (this->AllCreatedMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllCreatedMeshes).ArrayNum = 0;
  (this->AllCreatedMeshes).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->PoolAccessCs,4000);
  return this;
}

// UDynamicMeshPool @ 1496f9df0

UDynamicMeshPool * __thiscall
UDynamicMeshPool::UDynamicMeshPool(UDynamicMeshPool *this,FObjectInitializer *param_1)

{
  UObject::UObject((UObject *)this,param_1);
  this->_padding_ = (longlong)&___7UDynamicMeshPool__6B_;
  (this->CachedMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->CachedMeshes).ArrayNum = 0;
  (this->CachedMeshes).ArrayMax = 0;
  (this->AllCreatedMeshes).AllocatorInstance.Data = (FScriptContainerElement *)0x0;
  (this->AllCreatedMeshes).ArrayNum = 0;
  (this->AllCreatedMeshes).ArrayMax = 0;
  InitializeCriticalSectionAndSpinCount((LPCRITICAL_SECTION)&this->PoolAccessCs,4000);
  return this;
}

// ~UDynamicMeshPool @ 1496fb620

void __thiscall UDynamicMeshPool::~UDynamicMeshPool(UDynamicMeshPool *this)

{
  FScriptContainerElement *pFVar1;
  
  this->_padding_ = (longlong)&___7UDynamicMeshPool__6B_;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->PoolAccessCs);
  pFVar1 = (this->AllCreatedMeshes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  pFVar1 = (this->CachedMeshes).AllocatorInstance.Data;
  if (pFVar1 != (FScriptContainerElement *)0x0) {
    FMemory::Free(pFVar1);
  }
  UObject::~UObject((UObject *)this);
  return;
}

// FreeAllMeshes @ 14970c2d0

void __thiscall UDynamicMeshPool::FreeAllMeshes(UDynamicMeshPool *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  
  lpCriticalSection = &this->PoolAccessCs;
  if (lpCriticalSection != (FWindowsRecursiveMutex *)0x0) {
    EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    (this->CachedMeshes).ArrayNum = 0;
    if ((this->CachedMeshes).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->CachedMeshes).AllocatorInstance,0,&(this->CachedMeshes).ArrayMax);
    }
    (this->AllCreatedMeshes).ArrayNum = 0;
    if ((this->AllCreatedMeshes).ArrayMax < 0) {
      UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,0,&(this->AllCreatedMeshes).AllocatorInstance,0,
                 &(this->AllCreatedMeshes).ArrayMax);
    }
                    /* WARNING: Could not recover jumptable at 0x00014970c364. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UE::Core::Private::ReportNotNullPtr();
}

// GetPrivateStaticClass @ 1497113f0

UClass * __cdecl UDynamicMeshPool::GetPrivateStaticClass(void)

{
  FUObjectCppClassStaticFunctions local_res8 [4];
  
  if (Z_Registration_Info_UClass_UDynamicMeshPool.InnerSingleton == (UClass *)0x0) {
    local_res8[0].AddReferencedObjects = UObject::AddReferencedObjects;
    GetPrivateStaticClassBody
              (L"/Script/GeometryFramework",L"DynamicMeshPool",
               &Z_Registration_Info_UClass_UDynamicMeshPool.InnerSingleton,
               StaticRegisterNativesUDynamicMeshPool,0x70,8,CLASS_Intrinsic|CLASS_Transient,
               CASTCLASS_None,L"Engine",InternalConstructor<UDynamicMeshPool>,
               InternalVTableHelperCtorCaller<UDynamicMeshPool>,local_res8,UObject::StaticClass,
               UObject::StaticClass);
  }
  return Z_Registration_Info_UClass_UDynamicMeshPool.InnerSingleton;
}

// RequestMesh @ 149716530

/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */

UDynamicMesh * __thiscall UDynamicMeshPool::RequestMesh(UDynamicMeshPool *this)

{
  uint uVar1;
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar2;
  FScriptContainerElement *pFVar3;
  code *pcVar4;
  TConsoleVariableData<int> *pTVar5;
  bool bVar6;
  int iVar7;
  UObject *pUVar8;
  UDynamicMesh *pUVar9;
  longlong lVar10;
  UDynamicMesh *local_48 [2];
  code *local_38 [2];
  undefined **local_28;
  code *local_20;
  undefined8 local_10;
  
  lpCriticalSection = &this->PoolAccessCs;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if ((this->CachedMeshes).ArrayNum < 1) {
    pUVar8 = GetTransientPackageAsObject();
    pUVar9 = NewObject<UDynamicMesh>(pUVar8);
    pTVar5 = CVarDynamicMeshPoolMaxPoolSizeThreshold.Ref;
    bVar6 = IsInParallelGameThread();
    if ((bVar6) || (bVar6 = IsInGameThread(), bVar6)) {
      lVar10 = 0;
    }
    else {
      lVar10 = 4;
    }
    if (*(int *)((longlong)pTVar5->ShadowedValue + lVar10) <= (this->AllCreatedMeshes).ArrayNum) {
      bVar6 = UE::Assert::Private::ExecCheckImplInternal
                        (&bGEnsureHasExecuted<227773480190345821>,false,
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\UDynamicMesh.cpp"
                         ,0x25d,
                         "AllCreatedMeshes.Num() < CVarDynamicMeshPoolMaxPoolSizeThreshold.GetValueOnAnyThread()"
                        );
      if (bVar6) {
        pcVar4 = (code *)swi(3);
        pUVar9 = (UDynamicMesh *)(*pcVar4)();
        return pUVar9;
      }
      if (2 < (byte)LogGeometry._0_1_) {
        bVar6 = IsInParallelGameThread();
        if (!bVar6) {
          IsInGameThread();
        }
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogGeometry);
      }
      (this->AllCreatedMeshes).ArrayNum = 0;
      if ((this->AllCreatedMeshes).ArrayMax < 0) {
        UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                  (8,8,0,&(this->AllCreatedMeshes).AllocatorInstance,0,
                   &(this->AllCreatedMeshes).ArrayMax);
      }
      bVar6 = IsInGameThread();
      if (bVar6) {
        UEngine::ForceGarbageCollection(GEngine,true);
      }
      else {
        local_10 = 0;
        local_28 = &___7__TFunction_OwnedObject_P6AXXZ_00_0A__Function_Private_Core_UE__6B_;
        local_20 = `UDynamicMeshPool::RequestMesh'::__l31::<lambda_1>::<lambda_invoker_cdecl>;
        local_38[0] = UE::Core::Private::Function::TFunctionRefCaller<void_(__cdecl*)(void),void>::
                      Call;
        AsyncTask(GameThread,(TUniqueFunction<void___cdecl(void)> *)local_38);
      }
    }
    local_48[0] = pUVar9;
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UDynamicMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    pFVar3 = (this->AllCreatedMeshes).AllocatorInstance.Data;
    if (((pFVar3 <= (FScriptContainerElement *)local_48) &&
        ((FScriptContainerElement *)local_48 <
         pFVar3 + (longlong)(this->AllCreatedMeshes).ArrayMax * 8)) &&
       (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                          ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                           "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                           ,0x7a5,
                           L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                          ), bVar6)) {
      pcVar4 = (code *)swi(3);
      pUVar9 = (UDynamicMesh *)(*pcVar4)();
      return pUVar9;
    }
    iVar7 = (this->AllCreatedMeshes).ArrayNum;
    piVar2 = &(this->AllCreatedMeshes).ArrayMax;
    if (iVar7 == *piVar2) {
      iVar7 = UE::Core::Private::
              ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                        (0x808,&(this->AllCreatedMeshes).AllocatorInstance,piVar2);
    }
    pFVar3 = (this->AllCreatedMeshes).AllocatorInstance.Data;
    (this->AllCreatedMeshes).ArrayNum = iVar7 + 1;
    *(UDynamicMesh **)(pFVar3 + (longlong)iVar7 * 8) = local_48[0];
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_48[0] != (UDynamicMesh *)0x0)
       ) {
      UE::GC::MarkAsReachable((UObject *)local_48[0]);
    }
  }
  else {
    pUVar9 = *(UDynamicMesh **)
              ((this->CachedMeshes).AllocatorInstance.Data +
              (longlong)(this->CachedMeshes).ArrayNum * 8 + -8);
    if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar9 != (UDynamicMesh *)0x0)) {
      UE::GC::MarkAsReachable((UObject *)pUVar9);
    }
    iVar7 = (this->CachedMeshes).ArrayNum;
    uVar1 = iVar7 - 1;
    pFVar3 = (this->CachedMeshes).AllocatorInstance.Data + (longlong)(int)uVar1 * 8;
    iVar7 = ~uVar1 + iVar7;
    if (iVar7 != 0) {
      memmove(pFVar3,pFVar3 + 8,(longlong)iVar7 << 3);
    }
    piVar2 = &(this->CachedMeshes).ArrayNum;
    *piVar2 = *piVar2 + -1;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return pUVar9;
}

// ReturnAllMeshes @ 149716b40

void __thiscall UDynamicMeshPool::ReturnAllMeshes(UDynamicMeshPool *this)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_> *pTVar1;
  int *piVar2;
  int iVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  int iVar6;
  int iVar7;
  FScriptContainerElement *pFVar8;
  longlong lVar9;
  int iVar10;
  bool bVar11;
  undefined1 local_res8 [16];
  TArray<TObjectPtr<UDynamicMesh>,TSizedDefaultAllocator<32>_> *local_res18;
  
  lpCriticalSection = &this->PoolAccessCs;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  pTVar1 = &this->CachedMeshes;
  local_res18 = pTVar1;
  if (pTVar1 != &this->AllCreatedMeshes) {
    iVar3 = (this->AllCreatedMeshes).ArrayNum;
    piVar2 = &(this->CachedMeshes).ArrayMax;
    pFVar4 = (this->AllCreatedMeshes).AllocatorInstance.Data;
    (this->CachedMeshes).ArrayNum = iVar3;
    if ((iVar3 == 0) && (*piVar2 == 0)) {
      *piVar2 = 0;
    }
    else {
      UE::Core::Private::ReallocForCopy<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                (8,8,iVar3,*piVar2,&pTVar1->AllocatorInstance,iVar3,piVar2);
      ConstructItems<TObjectPtr<UDynamicMesh>,TObjectPtr<UDynamicMesh>,int>
                ((pTVar1->AllocatorInstance).Data,(TObjectPtr<UDynamicMesh> *)pFVar4,iVar3);
    }
  }
  pFVar8 = (pTVar1->AllocatorInstance).Data;
  iVar3 = (this->CachedMeshes).ArrayNum;
  pFVar4 = pFVar8 + (longlong)iVar3 * 8;
  while( true ) {
    if ((this->CachedMeshes).ArrayNum != iVar3) {
      local_res8[0] = 0;
      `TCheckedPointerIterator<TObjectPtr<UDynamicMesh>,int,0>::operator!='::__l2::<lambda_1>::
      operator()(local_res8);
    }
    if (pFVar8 == pFVar4) break;
    if (*(UDynamicMesh **)pFVar8 != (UDynamicMesh *)0x0) {
      UDynamicMesh::Reset(*(UDynamicMesh **)pFVar8);
    }
    pFVar8 = pFVar8 + 8;
  }
  iVar3 = (this->CachedMeshes).ArrayNum;
  if (iVar3 != 0) {
    iVar10 = 0;
    pFVar4 = (pTVar1->AllocatorInstance).Data;
    bVar11 = *(longlong *)pFVar4 != 0;
    lVar9 = 0;
    iVar6 = 0;
    do {
      iVar7 = iVar6;
      do {
        lVar9 = lVar9 + 1;
        iVar7 = iVar7 + 1;
        if (iVar3 <= lVar9) break;
      } while (bVar11 == (*(longlong *)(pFVar4 + lVar9 * 8) != 0));
      if (bVar11 != false) {
        if (iVar10 != iVar6) {
          memmove(pFVar4 + (longlong)iVar10 * 8,pFVar4 + (longlong)iVar6 * 8,
                  (longlong)(iVar7 - iVar6) << 3);
        }
        iVar10 = iVar10 + (iVar7 - iVar6);
      }
      bVar11 = (bool)(bVar11 ^ 1);
      iVar6 = iVar7;
    } while (lVar9 < iVar3);
    local_res18->ArrayNum = iVar10;
    if ((iVar3 != iVar10) &&
       (bVar11 = UE::Assert::Private::ExecCheckImplInternal
                           (&bGEnsureHasExecuted<227773480190345873>,false,
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\UDynamicMesh.cpp"
                            ,0x291,"Removed == 0"), bVar11)) {
      pcVar5 = (code *)swi(3);
      (*pcVar5)();
      return;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x000149716d05. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// ReturnMesh @ 149716d20

void __thiscall UDynamicMeshPool::ReturnMesh(UDynamicMeshPool *this,UDynamicMesh *param_1)

{
  FWindowsRecursiveMutex *lpCriticalSection;
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  FScriptContainerElement *pFVar7;
  atomic<unsigned_char> *paVar8;
  UDynamicMesh *local_18 [2];
  
  lpCriticalSection = &this->PoolAccessCs;
  if (lpCriticalSection == (FWindowsRecursiveMutex *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (param_1 == (UDynamicMesh *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<227773480190345848>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\UDynamicMesh.cpp"
                       ,0x278,"Mesh");
    if (bVar4) {
code_r0x000149716dd7:
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    pFVar7 = (this->AllCreatedMeshes).AllocatorInstance.Data;
    pFVar2 = pFVar7 + (longlong)(this->AllCreatedMeshes).ArrayNum * 8;
    for (; pFVar7 != pFVar2; pFVar7 = pFVar7 + 8) {
      if ((*(UDynamicMesh **)pFVar7 != (UDynamicMesh *)0x0) && (*(UDynamicMesh **)pFVar7 == param_1)
         ) {
        UDynamicMesh::Reset(param_1);
        pFVar7 = (this->CachedMeshes).AllocatorInstance.Data;
        pFVar2 = pFVar7 + (longlong)(this->CachedMeshes).ArrayNum * 8;
        goto joined_r0x000149716e08;
      }
    }
    pcVar6 = "AllCreatedMeshes.Contains(Mesh)";
    iVar5 = 0x278;
    paVar8 = &bGEnsureHasExecuted<227773480190345848>;
LAB_149716dbf:
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (paVar8,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\UDynamicMesh.cpp"
                       ,iVar5,pcVar6);
    if (bVar4) goto code_r0x000149716dd7;
  }
  goto LAB_149716dd8;
joined_r0x000149716e08:
  if (pFVar7 == pFVar2) goto LAB_149716e2f;
  if ((*(UDynamicMesh **)pFVar7 != (UDynamicMesh *)0x0) && (*(UDynamicMesh **)pFVar7 == param_1)) {
    pcVar6 = "CachedMeshes.Contains(Mesh) == false";
    iVar5 = 0x27b;
    paVar8 = &bGEnsureHasExecuted<227773480190345851>;
    goto LAB_149716dbf;
  }
  pFVar7 = pFVar7 + 8;
  goto joined_r0x000149716e08;
LAB_149716e2f:
  local_18[0] = param_1;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)param_1);
  }
  pFVar2 = (this->CachedMeshes).AllocatorInstance.Data;
  if (((pFVar2 <= (FScriptContainerElement *)local_18) &&
      ((FScriptContainerElement *)local_18 < pFVar2 + (longlong)(this->CachedMeshes).ArrayMax * 8))
     && (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                           ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                            "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                            ,0x7a5,
                            L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                           ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = (this->CachedMeshes).ArrayNum;
  piVar1 = &(this->CachedMeshes).ArrayMax;
  if (iVar5 == *piVar1) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,&(this->CachedMeshes).AllocatorInstance,piVar1);
  }
  (this->CachedMeshes).ArrayNum = iVar5 + 1;
  *(UDynamicMesh **)((this->CachedMeshes).AllocatorInstance.Data + (longlong)iVar5 * 8) =
       local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18[0] != (UDynamicMesh *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
LAB_149716dd8:
                    /* WARNING: Could not recover jumptable at 0x000149716dea. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

// StaticRegisterNativesUDynamicMeshPool @ 14971ab40

void __cdecl UDynamicMeshPool::StaticRegisterNativesUDynamicMeshPool(void)

{
  UClass *pUVar1;
  TArrayView<UE::CodeGen::FClassNativeFunction_const_,int> local_18;
  
  pUVar1 = GetPrivateStaticClass();
  local_18.ArrayNum = 4;
  local_18.DataPtr = Z_Construct_UClass_UDynamicMeshPool_Statics::Funcs;
  FNativeFunctionRegistrar::RegisterFunctions(pUVar1,&local_18);
  return;
}

// execFreeAllMeshes @ 14971e1d0

void __cdecl UDynamicMeshPool::execFreeAllMeshes(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  FreeAllMeshes((UDynamicMeshPool *)param_1);
  return;
}

// execRequestMesh @ 14971ecb0

void __cdecl UDynamicMeshPool::execRequestMesh(UObject *param_1,FFrame *param_2,void *param_3)

{
  UDynamicMesh *pUVar1;
  
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  pUVar1 = RequestMesh((UDynamicMeshPool *)param_1);
  *(UDynamicMesh **)param_3 = pUVar1;
  return;
}

// execReturnAllMeshes @ 14971ee70

void __cdecl UDynamicMeshPool::execReturnAllMeshes(UObject *param_1,FFrame *param_2,void *param_3)

{
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  ReturnAllMeshes((UDynamicMeshPool *)param_1);
  return;
}

// execReturnMesh @ 14971ee90

void __cdecl UDynamicMeshPool::execReturnMesh(UObject *param_1,FFrame *param_2,void *param_3)

{
  undefined1 *lpCriticalSection;
  longlong *plVar1;
  FProperty *pFVar2;
  code *pcVar3;
  UDynamicMesh *this;
  bool bVar4;
  int iVar5;
  char *pcVar6;
  longlong *plVar7;
  atomic<unsigned_char> *paVar8;
  UDynamicMesh *local_res8;
  UDynamicMesh *local_18 [2];
  
  local_res8 = (UDynamicMesh *)0x0;
  FObjectPropertyBase::StaticClass();
  if (param_2->Code == (uchar *)0x0) {
    pFVar2 = (FProperty *)param_2->PropertyChainForCompiledIn;
    param_2->PropertyChainForCompiledIn = (FField *)pFVar2->_padding_;
    FFrame::StepExplicitProperty(param_2,&local_res8,pFVar2);
  }
  else {
    FFrame::Step(param_2,param_2->Object,&local_res8);
  }
  this = local_res8;
  param_2->Code = param_2->Code + (param_2->Code != (uchar *)0x0);
  lpCriticalSection = &param_1[1].field_0x20;
  if (lpCriticalSection == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    UE::Core::Private::ReportNotNullPtr();
  }
  EnterCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  if (this == (UDynamicMesh *)0x0) {
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (&bGEnsureHasExecuted<227773480190345848>,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\UDynamicMesh.cpp"
                       ,0x278,"Mesh");
    if (bVar4) {
code_r0x00014971ef9d:
      pcVar3 = (code *)swi(3);
      (*pcVar3)();
      return;
    }
  }
  else {
    plVar7 = *(longlong **)&param_1[1].field_0x10;
    plVar1 = plVar7 + *(int *)&param_1[1].field_0x18;
    for (; plVar7 != plVar1; plVar7 = plVar7 + 1) {
      if (((UDynamicMesh *)*plVar7 != (UDynamicMesh *)0x0) && ((UDynamicMesh *)*plVar7 == this)) {
        UDynamicMesh::Reset(this);
        plVar7 = *(longlong **)(param_1 + 1);
        plVar1 = plVar7 + *(int *)&param_1[1].field_0x8;
        goto joined_r0x00014971efd1;
      }
    }
    pcVar6 = "AllCreatedMeshes.Contains(Mesh)";
    iVar5 = 0x278;
    paVar8 = &bGEnsureHasExecuted<227773480190345848>;
LAB_14971ef85:
    bVar4 = UE::Assert::Private::ExecCheckImplInternal
                      (paVar8,false,
                       "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\GeometryFramework\\Private\\UDynamicMesh.cpp"
                       ,iVar5,pcVar6);
    if (bVar4) goto code_r0x00014971ef9d;
  }
  goto LAB_14971ef9e;
joined_r0x00014971efd1:
  if (plVar7 == plVar1) goto LAB_14971eff2;
  if (((UDynamicMesh *)*plVar7 != (UDynamicMesh *)0x0) && ((UDynamicMesh *)*plVar7 == this)) {
    pcVar6 = "CachedMeshes.Contains(Mesh) == false";
    iVar5 = 0x27b;
    paVar8 = &bGEnsureHasExecuted<227773480190345851>;
    goto LAB_14971ef85;
  }
  plVar7 = plVar7 + 1;
  goto joined_r0x00014971efd1;
LAB_14971eff2:
  local_18[0] = this;
  if (UE::GC::GIsIncrementalReachabilityPending != false) {
    UE::GC::MarkAsReachable((UObject *)this);
  }
  if (((*(UDynamicMesh ***)(param_1 + 1) <= local_18) &&
      (local_18 < *(UDynamicMesh ***)(param_1 + 1) + *(int *)&param_1[1].field_0xc)) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Addr < GetData() || Addr >= (GetData() + ArrayMax)",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                         ,0x7a5,
                         L"Attempting to use a container element (%p) which already comes from the container being modified (%p, ArrayMax: %lld, ArrayNum: %lld, SizeofElement: %zu)!"
                        ), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  iVar5 = *(int *)&param_1[1].field_0x8;
  if (iVar5 == *(int *)&param_1[1].field_0xc) {
    iVar5 = UE::Core::Private::
            ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                      (0x808,(ForAnyElementType *)(param_1 + 1),(int *)&param_1[1].field_0xc);
  }
  *(int *)&param_1[1].field_0x8 = iVar5 + 1;
  *(UDynamicMesh **)(*(longlong *)(param_1 + 1) + (longlong)iVar5 * 8) = local_18[0];
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (local_18[0] != (UDynamicMesh *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)local_18[0]);
  }
LAB_14971ef9e:
  LeaveCriticalSection((LPCRITICAL_SECTION)lpCriticalSection);
  return;
}

