// Reconstructed from decompiler output (Ghidra 12.1.4, ProjectDS.exe + PDB symbols).
// Functions are grouped by the class/object file recovered from the PDB. This is NOT compilable source.
// Module: Niagara
// Functions: 6

// StaticStruct @ 148fe72b0

UScriptStruct * __cdecl FNCPool::StaticStruct(void)

{
  UPackage *pUVar1;
  
  if (Z_Registration_Info_UScriptStruct_FNCPool.OuterSingleton == (UScriptStruct *)0x0) {
    pUVar1 = Z_Construct_UPackage__Script_Niagara();
    Z_Registration_Info_UScriptStruct_FNCPool.OuterSingleton =
         GetStaticStruct(Z_Construct_UScriptStruct_FNCPool,(UObject *)pUVar1,L"NCPool");
  }
  return Z_Registration_Info_UScriptStruct_FNCPool.OuterSingleton;
}

// Acquire @ 149029eb0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

UNiagaraComponent * __thiscall
FNCPool::Acquire(FNCPool *this,UWorld *param_1,UNiagaraSystem *param_2,ENCPoolMethod param_3,
                bool param_4)

{
  int *piVar1;
  byte *pbVar2;
  code *pcVar3;
  bool bVar4;
  uint uVar5;
  UNiagaraComponent *pUVar6;
  UWorld *pUVar7;
  FScriptContainerElement *_Dst;
  int iVar8;
  FString local_28;
  
  if ((GbEnableNiagaraSystemPooling == 0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("GbEnableNiagaraSystemPooling",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComponentPool.cpp"
                         ,0x56,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pUVar6 = (UNiagaraComponent *)(*pcVar3)();
    return pUVar6;
  }
  if ((param_3 == None) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("PoolingMethod != ENCPoolMethod::None",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComponentPool.cpp"
                         ,0x57,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    pUVar6 = (UNiagaraComponent *)(*pcVar3)();
    return pUVar6;
  }
  iVar8 = (this->FreeElements).ArrayNum;
  if ((iVar8 != 0) && (!param_4)) {
    bVar4 = iVar8 == 0;
    do {
      if ((bVar4 || iVar8 < 0) &&
         (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar4)) {
        pcVar3 = (code *)swi(3);
        pUVar6 = (UNiagaraComponent *)(*pcVar3)();
        return pUVar6;
      }
      pUVar6 = *(UNiagaraComponent **)
                ((this->FreeElements).AllocatorInstance.Data +
                (longlong)(this->FreeElements).ArrayNum * 0x10 + -0x10);
      if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
         (pUVar6 != (UNiagaraComponent *)0x0)) {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
      }
      iVar8 = (this->FreeElements).ArrayNum;
      uVar5 = iVar8 - 1;
      _Dst = (this->FreeElements).AllocatorInstance.Data + (longlong)(int)uVar5 * 0x10;
      iVar8 = ~uVar5 + iVar8;
      if (iVar8 != 0) {
        memmove(_Dst,_Dst + 0x10,(longlong)iVar8 << 4);
      }
      piVar1 = &(this->FreeElements).ArrayNum;
      *piVar1 = *piVar1 + -1;
      if ((UE::GC::GIsIncrementalReachabilityPending == false) ||
         (pUVar6 == (UNiagaraComponent *)0x0)) {
        if (pUVar6 != (UNiagaraComponent *)0x0) goto LAB_149029ffc;
      }
      else {
        UE::GC::MarkAsReachable((UObject *)pUVar6);
LAB_149029ffc:
        if (((uint)pUVar6->_padding_ >> 0x1e & 1) == 0) {
          if (((pUVar6->Asset).field0_0x0.DebugPtr != param_2) &&
             (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                                ("RetElem.Component->GetAsset() == Template",
                                 "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComponentPool.cpp"
                                 ,0x65,L""), bVar4)) {
            pcVar3 = (code *)swi(3);
            pUVar6 = (UNiagaraComponent *)(*pcVar3)();
            return pUVar6;
          }
          UNiagaraComponent::OnPooledReuse(pUVar6,param_1);
          pUVar6->PoolingMethod = param_3;
          return pUVar6;
        }
      }
      if (2 < (byte)LogNiagara._0_1_) {
        UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_2,&local_28,(UObject *)0x0,None)
        ;
        UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
        if (local_28.Data.AllocatorInstance.Data != (FScriptContainerElement *)0x0) {
          FMemory::Free(local_28.Data.AllocatorInstance.Data);
        }
      }
      iVar8 = (this->FreeElements).ArrayNum;
      bVar4 = iVar8 == 0;
    } while (!bVar4);
  }
  pUVar7 = (UWorld *)UWorld::GetWorldSettings(param_1,false,true);
  if (pUVar7 != (UWorld *)0x0) {
    param_1 = pUVar7;
  }
  pUVar6 = NewObject<UNiagaraComponent>((UObject *)param_1);
  if ((UE::GC::GIsIncrementalReachabilityPending != false) && (pUVar6 != (UNiagaraComponent *)0x0))
  {
    UE::GC::MarkAsReachable((UObject *)pUVar6);
  }
  pUVar6->bAutoDestroy = 0;
  pbVar2 = (byte *)((longlong)&pUVar6->_padding_ + 2);
  *pbVar2 = *pbVar2 & 0xf7;
  UPrimitiveComponent::SetVisibleInRayTracing((UPrimitiveComponent *)pUVar6,false);
  UNiagaraComponent::SetAsset(pUVar6,param_2,true);
  pUVar6->PoolingMethod = param_3;
  return pUVar6;
}

// Cleanup @ 149032410

/* WARNING: Enum "Type": Some values do not have unique names */

void __thiscall FNCPool::Cleanup(FNCPool *this)

{
  int *piVar1;
  int iVar2;
  FScriptContainerElement *pFVar3;
  FScriptContainerElement *pFVar4;
  undefined1 local_res8 [8];
  
  iVar2 = (this->FreeElements).ArrayNum;
  pFVar3 = (this->FreeElements).AllocatorInstance.Data;
  pFVar4 = pFVar3 + (longlong)iVar2 * 0x10;
  while( true ) {
    if ((this->FreeElements).ArrayNum != iVar2) {
      `TCheckedPointerIterator<FNCPoolElement,int,0>::operator!='::__l2::<lambda_1>::operator()
                (local_res8);
    }
    if (pFVar3 == pFVar4) break;
    if (*(longlong *)pFVar3 == 0) {
      if (1 < (byte)LogNiagara._0_1_) {
        UE::Logging::Private::BasicLog<2>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      }
      pFVar3 = pFVar3 + 0x10;
    }
    else {
      *(undefined1 *)(*(longlong *)pFVar3 + 0x680) = 0;
      (**(code **)(**(longlong **)pFVar3 + 0x4a0))(*(longlong **)pFVar3,0);
      pFVar3 = pFVar3 + 0x10;
    }
  }
  piVar1 = &(this->FreeElements).ArrayMax;
  (this->FreeElements).ArrayNum = 0;
  if (*piVar1 != 0) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,0,(ForAnyElementType *)this,0,piVar1);
  }
  return;
}

// KillUnusedComponents @ 14905b200

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */

void __thiscall FNCPool::KillUnusedComponents(FNCPool *this,double param_1,UNiagaraSystem *param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  longlong *plVar3;
  code *pcVar4;
  bool bVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  longlong lVar12;
  
  uVar8 = 0;
  if ((param_2 == (UNiagaraSystem *)0x0) &&
     (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                        ("Template",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComponentPool.cpp"
                         ,0xc0,L""), bVar5)) {
    pcVar4 = (code *)swi(3);
    (*pcVar4)();
    return;
  }
  if (GNigaraAllowPrimedPools == 0) {
    iVar9 = 0;
  }
  else {
    iVar9 = *(int *)((longlong)&param_2->_padding_ + 4);
  }
  iVar11 = (this->FreeElements).ArrayNum;
  if (0 < iVar11) {
    lVar12 = 0;
    do {
      if (iVar11 <= iVar9) break;
      uVar10 = ~uVar8 >> 0x1f;
      uVar6 = 0;
      if ((int)uVar8 < iVar11) {
        uVar6 = uVar10;
      }
      if ((uVar6 == 0) &&
         (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar5)) {
        pcVar4 = (code *)swi(3);
        (*pcVar4)();
        return;
      }
      pFVar2 = (this->FreeElements).AllocatorInstance.Data + lVar12 + 8;
      if (param_1 < *(double *)pFVar2 || param_1 == *(double *)pFVar2) {
        uVar8 = uVar8 + 1;
        lVar12 = lVar12 + 0x10;
      }
      else {
        uVar6 = 0;
        if ((int)uVar8 < (this->FreeElements).ArrayNum) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        plVar3 = *(longlong **)((this->FreeElements).AllocatorInstance.Data + lVar12);
        if (plVar3 != (longlong *)0x0) {
          *(undefined1 *)(plVar3 + 0xd0) = 0;
          (**(code **)(*plVar3 + 0x4a0))(plVar3,0);
        }
        uVar6 = 0;
        if ((int)uVar8 < (this->FreeElements).ArrayNum) {
          uVar6 = uVar10;
        }
        if ((uVar6 == 0) &&
           (bVar5 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar5)) {
          pcVar4 = (code *)swi(3);
          (*pcVar4)();
          return;
        }
        iVar11 = (this->FreeElements).ArrayNum;
        pFVar2 = (this->FreeElements).AllocatorInstance.Data;
        iVar7 = ~uVar8 + iVar11;
        if (1 < iVar7) {
          iVar7 = 1;
        }
        if (iVar7 != 0) {
          memmove(pFVar2 + (longlong)(int)uVar8 * 0x10,pFVar2 + (longlong)(iVar11 - iVar7) * 0x10,
                  (longlong)iVar7 << 4);
        }
        piVar1 = &(this->FreeElements).ArrayNum;
        *piVar1 = *piVar1 + -1;
      }
      iVar11 = (this->FreeElements).ArrayNum;
    } while ((int)uVar8 < iVar11);
  }
  piVar1 = &(this->FreeElements).ArrayMax;
  if (*piVar1 != iVar11) {
    UE::Core::Private::ReallocTo<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
              (0x10,8,iVar11,(ForAnyElementType *)this,iVar11,piVar1);
  }
  return;
}

// Reclaim @ 14905fef0

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

void __thiscall FNCPool::Reclaim(FNCPool *this,UNiagaraComponent *param_1,double param_2)

{
  int *piVar1;
  FScriptContainerElement *pFVar2;
  code *pcVar3;
  bool bVar4;
  int iVar5;
  UWorld *pUVar6;
  FUObjectItem *pFVar7;
  UNiagaraComponent *local_58;
  double local_50;
  FString local_48;
  TVector<double>_u_0 local_38 [2];
  
  if ((param_1 == (UNiagaraComponent *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Component",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComponentPool.cpp"
                         ,0x7f,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if (((param_1->Asset).field0_0x0.DebugPtr == (UNiagaraSystem *)0x0) &&
     (bVar4 = ::FDebug::CheckVerifyFailedImpl2
                        ("Component->GetAsset()",
                         "C:\\Workspace\\UnrealEngine\\Engine\\Plugins\\FX\\Niagara\\Source\\Niagara\\Private\\NiagaraComponentPool.cpp"
                         ,0x80,L""), bVar4)) {
    pcVar3 = (code *)swi(3);
    (*pcVar3)();
    return;
  }
  if ((GbEnableNiagaraSystemPooling != 0) &&
     ((this->FreeElements).ArrayNum < (int)((param_1->Asset).field0_0x0.DebugPtr)->_padding_)) {
    pUVar6 = (UWorld *)param_1->_padding_;
    if (pUVar6 == (UWorld *)0x0) {
      pUVar6 = UActorComponent::GetWorld_Uncached((UActorComponent *)param_1);
    }
    if (pUVar6->bIsTearingDown == '\0') {
      (**(code **)(param_1->_padding_ + 0xaf8))(param_1);
      (**(code **)(param_1->_padding_ + 0x518))
                (param_1,&FDetachmentTransformRules::KeepWorldTransform);
      local_38[0]._s_0.X = ___xmm_3ff00000000000003ff0000000000000;
      local_38[0]._s_0.Y = _UNK_150689688;
      local_38[0]._s_0.Z = __real_3ff0000000000000;
      USceneComponent::SetRelativeScale3D
                ((USceneComponent *)param_1,(TVector<double> *)&local_38[0]._s_0);
      USceneComponent::SetAbsolute((USceneComponent *)param_1,false,false,false);
      UPrimitiveComponent::SetCastShadow((UPrimitiveComponent *)param_1,false);
      if (GNiagaraKeepPooledComponentsRegistered == 0) {
        UActorComponent::UnregisterComponent((UActorComponent *)param_1);
      }
      else {
        USceneComponent::SetVisibility((USceneComponent *)param_1,false,DirtyOnly);
      }
      UPrimitiveComponent::SetCullDistance((UPrimitiveComponent *)param_1,__real_7f7fffff);
      if ((((uint)param_1->_padding_ >> 0x1e & 1) == 0) &&
         (pFVar7 = FUObjectArray::IndexToObject
                             (&GUObjectArray,*(int *)((longlong)&param_1->_padding_ + 4)),
         ((uint)((ulonglong)(pFVar7->field0_0x0).FlagsAndRefCount >> 0x3c) & 1) == 0)) {
        param_1->PoolingMethod = FreeInPool;
        local_58 = param_1;
        if (UE::GC::GIsIncrementalReachabilityPending != false) {
          UE::GC::MarkAsReachable((UObject *)param_1);
        }
        pFVar2 = (this->FreeElements).AllocatorInstance.Data;
        local_50 = param_2;
        if (((pFVar2 <= (FScriptContainerElement *)&local_58) &&
            ((FScriptContainerElement *)&local_58 <
             pFVar2 + (longlong)(this->FreeElements).ArrayMax * 0x10)) &&
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
        iVar5 = (this->FreeElements).ArrayNum;
        piVar1 = &(this->FreeElements).ArrayMax;
        if (iVar5 == *piVar1) {
          iVar5 = UE::Core::Private::
                  ReallocGrow1_DoAlloc_Tiny<3,TSizedHeapAllocator<32,FMemory>::ForAnyElementType>
                            (0x810,(ForAnyElementType *)this,piVar1);
        }
        (this->FreeElements).ArrayNum = iVar5 + 1;
        pFVar2 = (this->FreeElements).AllocatorInstance.Data;
        *(UNiagaraComponent **)(pFVar2 + (longlong)iVar5 * 0x10) = local_58;
        if ((UE::GC::GIsIncrementalReachabilityPending != false) &&
           (local_58 != (UNiagaraComponent *)0x0)) {
          UE::GC::MarkAsReachable((UObject *)local_58);
        }
        *(double *)(pFVar2 + (longlong)iVar5 * 0x10 + 8) = local_50;
        return;
      }
      if ((byte)LogNiagara._0_1_ < 3) {
        return;
      }
      UObjectBaseUtility::GetFullName((UObjectBaseUtility *)param_1,&local_48,(UObject *)0x0,None);
      UE::Logging::Private::BasicLog<3>(&::LOG_Static,(FLogCategoryBase *)&LogNiagara);
      if (local_48.Data.AllocatorInstance.Data == (FScriptContainerElement *)0x0) {
        return;
      }
      FMemory::Free(local_48.Data.AllocatorInstance.Data);
      return;
    }
  }
  param_1->PoolingMethod = None;
  (**(code **)(param_1->_padding_ + 0x4a0))(param_1,0);
  return;
}

// RemoveComponent @ 149062ea0

/* WARNING: Enum "EShaderPlatform": Some values do not have unique names */
/* WARNING: Enum "Type": Some values do not have unique names */
/* WARNING: Enum "ELightComponentType": Some values do not have unique names */
/* WARNING: Enum "ERHIPipeline": Some values do not have unique names */
/* WARNING: Enum "ERHIAccess": Some values do not have unique names */
/* WARNING: Enum "EResourceTransitionFlags": Some values do not have unique names */
/* WARNING: Enum "EHandshakeVersion": Some values do not have unique names */
/* WARNING: Enum "EPingType": Some values do not have unique names */
/* WARNING: Enum "ETranslucencyType": Some values do not have unique names */
/* WARNING: Enum "EStreamingSourcePriority": Some values do not have unique names */
/* WARNING: Enum "ENiagaraWorldManagerTickPass": Some values do not have unique names */

bool __thiscall FNCPool::RemoveComponent(FNCPool *this,UNiagaraComponent *param_1)

{
  int *piVar1;
  int iVar2;
  UNiagaraComponent *pUVar3;
  FScriptContainerElement *pFVar4;
  code *pcVar5;
  bool bVar6;
  undefined1 uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  longlong lVar12;
  
  iVar9 = (this->FreeElements).ArrayNum;
  uVar10 = 0;
  if (0 < iVar9) {
    lVar12 = 0;
    do {
      uVar11 = ~uVar10 >> 0x1f;
      uVar8 = 0;
      if ((int)uVar10 < iVar9) {
        uVar8 = uVar11;
      }
      if ((uVar8 == 0) &&
         (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                            ("(Index >= 0) & (Index < ArrayNum)",
                             "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                             ,0x447,L"Array index out of bounds: %lld into an array of size %lld"),
         bVar6)) {
        pcVar5 = (code *)swi(3);
        uVar7 = (*pcVar5)();
        return (bool)uVar7;
      }
      pUVar3 = *(UNiagaraComponent **)((this->FreeElements).AllocatorInstance.Data + lVar12);
      if (pUVar3 == (UNiagaraComponent *)0x0) {
        bVar6 = param_1 == (UNiagaraComponent *)0x0;
      }
      else {
        bVar6 = pUVar3 == param_1;
      }
      iVar9 = (this->FreeElements).ArrayNum;
      if (bVar6) {
        uVar8 = 0;
        if ((int)uVar10 < iVar9) {
          uVar8 = uVar11;
        }
        if ((uVar8 == 0) &&
           (bVar6 = ::FDebug::CheckVerifyFailedImpl2
                              ("(Index >= 0) & (Index < ArrayNum)",
                               "C:\\Workspace\\UnrealEngine\\Engine\\Source\\Runtime\\Core\\Public\\Containers\\Array.h"
                               ,0x447,L"Array index out of bounds: %lld into an array of size %lld")
           , bVar6)) {
          pcVar5 = (code *)swi(3);
          uVar7 = (*pcVar5)();
          return (bool)uVar7;
        }
        iVar2 = (this->FreeElements).ArrayNum;
        pFVar4 = (this->FreeElements).AllocatorInstance.Data;
        iVar9 = iVar2 + ~uVar10;
        if (1 < iVar9) {
          iVar9 = 1;
        }
        if (iVar9 != 0) {
          memmove(pFVar4 + (longlong)(int)uVar10 * 0x10,pFVar4 + (longlong)(iVar2 - iVar9) * 0x10,
                  (longlong)iVar9 << 4);
        }
        piVar1 = &(this->FreeElements).ArrayNum;
        *piVar1 = *piVar1 + -1;
        return true;
      }
      uVar10 = uVar10 + 1;
      lVar12 = lVar12 + 0x10;
    } while ((int)uVar10 < iVar9);
  }
  return false;
}

